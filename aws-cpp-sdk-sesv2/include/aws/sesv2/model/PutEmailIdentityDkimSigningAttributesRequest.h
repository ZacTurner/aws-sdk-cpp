﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/DkimSigningAttributesOrigin.h>
#include <aws/sesv2/model/DkimSigningAttributes.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>A request to change the DKIM attributes for an email identity.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutEmailIdentityDkimSigningAttributesRequest">AWS
   * API Reference</a></p>
   */
  class AWS_SESV2_API PutEmailIdentityDkimSigningAttributesRequest : public SESV2Request
  {
  public:
    PutEmailIdentityDkimSigningAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutEmailIdentityDkimSigningAttributes"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The email identity that you want to configure DKIM for.</p>
     */
    inline const Aws::String& GetEmailIdentity() const{ return m_emailIdentity; }

    /**
     * <p>The email identity that you want to configure DKIM for.</p>
     */
    inline bool EmailIdentityHasBeenSet() const { return m_emailIdentityHasBeenSet; }

    /**
     * <p>The email identity that you want to configure DKIM for.</p>
     */
    inline void SetEmailIdentity(const Aws::String& value) { m_emailIdentityHasBeenSet = true; m_emailIdentity = value; }

    /**
     * <p>The email identity that you want to configure DKIM for.</p>
     */
    inline void SetEmailIdentity(Aws::String&& value) { m_emailIdentityHasBeenSet = true; m_emailIdentity = std::move(value); }

    /**
     * <p>The email identity that you want to configure DKIM for.</p>
     */
    inline void SetEmailIdentity(const char* value) { m_emailIdentityHasBeenSet = true; m_emailIdentity.assign(value); }

    /**
     * <p>The email identity that you want to configure DKIM for.</p>
     */
    inline PutEmailIdentityDkimSigningAttributesRequest& WithEmailIdentity(const Aws::String& value) { SetEmailIdentity(value); return *this;}

    /**
     * <p>The email identity that you want to configure DKIM for.</p>
     */
    inline PutEmailIdentityDkimSigningAttributesRequest& WithEmailIdentity(Aws::String&& value) { SetEmailIdentity(std::move(value)); return *this;}

    /**
     * <p>The email identity that you want to configure DKIM for.</p>
     */
    inline PutEmailIdentityDkimSigningAttributesRequest& WithEmailIdentity(const char* value) { SetEmailIdentity(value); return *this;}


    /**
     * <p>The method that you want to use to configure DKIM for the identity. There are
     * two possible values:</p> <ul> <li> <p> <code>AWS_SES</code> – Configure DKIM for
     * the identity by using <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
     * DKIM</a>.</p> </li> <li> <p> <code>EXTERNAL</code> – Configure DKIM for the
     * identity by using Bring Your Own DKIM (BYODKIM).</p> </li> </ul>
     */
    inline const DkimSigningAttributesOrigin& GetSigningAttributesOrigin() const{ return m_signingAttributesOrigin; }

    /**
     * <p>The method that you want to use to configure DKIM for the identity. There are
     * two possible values:</p> <ul> <li> <p> <code>AWS_SES</code> – Configure DKIM for
     * the identity by using <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
     * DKIM</a>.</p> </li> <li> <p> <code>EXTERNAL</code> – Configure DKIM for the
     * identity by using Bring Your Own DKIM (BYODKIM).</p> </li> </ul>
     */
    inline bool SigningAttributesOriginHasBeenSet() const { return m_signingAttributesOriginHasBeenSet; }

    /**
     * <p>The method that you want to use to configure DKIM for the identity. There are
     * two possible values:</p> <ul> <li> <p> <code>AWS_SES</code> – Configure DKIM for
     * the identity by using <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
     * DKIM</a>.</p> </li> <li> <p> <code>EXTERNAL</code> – Configure DKIM for the
     * identity by using Bring Your Own DKIM (BYODKIM).</p> </li> </ul>
     */
    inline void SetSigningAttributesOrigin(const DkimSigningAttributesOrigin& value) { m_signingAttributesOriginHasBeenSet = true; m_signingAttributesOrigin = value; }

    /**
     * <p>The method that you want to use to configure DKIM for the identity. There are
     * two possible values:</p> <ul> <li> <p> <code>AWS_SES</code> – Configure DKIM for
     * the identity by using <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
     * DKIM</a>.</p> </li> <li> <p> <code>EXTERNAL</code> – Configure DKIM for the
     * identity by using Bring Your Own DKIM (BYODKIM).</p> </li> </ul>
     */
    inline void SetSigningAttributesOrigin(DkimSigningAttributesOrigin&& value) { m_signingAttributesOriginHasBeenSet = true; m_signingAttributesOrigin = std::move(value); }

    /**
     * <p>The method that you want to use to configure DKIM for the identity. There are
     * two possible values:</p> <ul> <li> <p> <code>AWS_SES</code> – Configure DKIM for
     * the identity by using <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
     * DKIM</a>.</p> </li> <li> <p> <code>EXTERNAL</code> – Configure DKIM for the
     * identity by using Bring Your Own DKIM (BYODKIM).</p> </li> </ul>
     */
    inline PutEmailIdentityDkimSigningAttributesRequest& WithSigningAttributesOrigin(const DkimSigningAttributesOrigin& value) { SetSigningAttributesOrigin(value); return *this;}

    /**
     * <p>The method that you want to use to configure DKIM for the identity. There are
     * two possible values:</p> <ul> <li> <p> <code>AWS_SES</code> – Configure DKIM for
     * the identity by using <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
     * DKIM</a>.</p> </li> <li> <p> <code>EXTERNAL</code> – Configure DKIM for the
     * identity by using Bring Your Own DKIM (BYODKIM).</p> </li> </ul>
     */
    inline PutEmailIdentityDkimSigningAttributesRequest& WithSigningAttributesOrigin(DkimSigningAttributesOrigin&& value) { SetSigningAttributesOrigin(std::move(value)); return *this;}


    /**
     * <p>An object that contains information about the private key and selector that
     * you want to use to configure DKIM for the identity. This object is only required
     * if you want to configure Bring Your Own DKIM (BYODKIM) for the identity.</p>
     */
    inline const DkimSigningAttributes& GetSigningAttributes() const{ return m_signingAttributes; }

    /**
     * <p>An object that contains information about the private key and selector that
     * you want to use to configure DKIM for the identity. This object is only required
     * if you want to configure Bring Your Own DKIM (BYODKIM) for the identity.</p>
     */
    inline bool SigningAttributesHasBeenSet() const { return m_signingAttributesHasBeenSet; }

    /**
     * <p>An object that contains information about the private key and selector that
     * you want to use to configure DKIM for the identity. This object is only required
     * if you want to configure Bring Your Own DKIM (BYODKIM) for the identity.</p>
     */
    inline void SetSigningAttributes(const DkimSigningAttributes& value) { m_signingAttributesHasBeenSet = true; m_signingAttributes = value; }

    /**
     * <p>An object that contains information about the private key and selector that
     * you want to use to configure DKIM for the identity. This object is only required
     * if you want to configure Bring Your Own DKIM (BYODKIM) for the identity.</p>
     */
    inline void SetSigningAttributes(DkimSigningAttributes&& value) { m_signingAttributesHasBeenSet = true; m_signingAttributes = std::move(value); }

    /**
     * <p>An object that contains information about the private key and selector that
     * you want to use to configure DKIM for the identity. This object is only required
     * if you want to configure Bring Your Own DKIM (BYODKIM) for the identity.</p>
     */
    inline PutEmailIdentityDkimSigningAttributesRequest& WithSigningAttributes(const DkimSigningAttributes& value) { SetSigningAttributes(value); return *this;}

    /**
     * <p>An object that contains information about the private key and selector that
     * you want to use to configure DKIM for the identity. This object is only required
     * if you want to configure Bring Your Own DKIM (BYODKIM) for the identity.</p>
     */
    inline PutEmailIdentityDkimSigningAttributesRequest& WithSigningAttributes(DkimSigningAttributes&& value) { SetSigningAttributes(std::move(value)); return *this;}

  private:

    Aws::String m_emailIdentity;
    bool m_emailIdentityHasBeenSet;

    DkimSigningAttributesOrigin m_signingAttributesOrigin;
    bool m_signingAttributesOriginHasBeenSet;

    DkimSigningAttributes m_signingAttributes;
    bool m_signingAttributesHasBeenSet;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
