﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AuditManager
{
namespace Model
{
  enum class AccountStatus
  {
    NOT_SET,
    ACTIVE,
    INACTIVE,
    PENDING_ACTIVATION
  };

namespace AccountStatusMapper
{
AWS_AUDITMANAGER_API AccountStatus GetAccountStatusForName(const Aws::String& name);

AWS_AUDITMANAGER_API Aws::String GetNameForAccountStatus(AccountStatus value);
} // namespace AccountStatusMapper
} // namespace Model
} // namespace AuditManager
} // namespace Aws
