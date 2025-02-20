﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/ConnectorStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PcaConnectorAd
  {
    namespace Model
    {
      namespace ConnectorStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ConnectorStatus GetConnectorStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ConnectorStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ConnectorStatus::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ConnectorStatus::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ConnectorStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectorStatus>(hashCode);
          }

          return ConnectorStatus::NOT_SET;
        }

        Aws::String GetNameForConnectorStatus(ConnectorStatus enumValue)
        {
          switch(enumValue)
          {
          case ConnectorStatus::CREATING:
            return "CREATING";
          case ConnectorStatus::ACTIVE:
            return "ACTIVE";
          case ConnectorStatus::DELETING:
            return "DELETING";
          case ConnectorStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectorStatusMapper
    } // namespace Model
  } // namespace PcaConnectorAd
} // namespace Aws
