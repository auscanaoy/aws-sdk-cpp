﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/HealthLakeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/model/FHIRVersion.h>
#include <aws/healthlake/model/PreloadDataConfig.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace HealthLake
{
namespace Model
{

  /**
   */
  class AWS_HEALTHLAKE_API CreateFHIRDatastoreRequest : public HealthLakeRequest
  {
  public:
    CreateFHIRDatastoreRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFHIRDatastore"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The user generated name for the datastore.</p>
     */
    inline const Aws::String& GetDatastoreName() const{ return m_datastoreName; }

    /**
     * <p>The user generated name for the datastore.</p>
     */
    inline bool DatastoreNameHasBeenSet() const { return m_datastoreNameHasBeenSet; }

    /**
     * <p>The user generated name for the datastore.</p>
     */
    inline void SetDatastoreName(const Aws::String& value) { m_datastoreNameHasBeenSet = true; m_datastoreName = value; }

    /**
     * <p>The user generated name for the datastore.</p>
     */
    inline void SetDatastoreName(Aws::String&& value) { m_datastoreNameHasBeenSet = true; m_datastoreName = std::move(value); }

    /**
     * <p>The user generated name for the datastore.</p>
     */
    inline void SetDatastoreName(const char* value) { m_datastoreNameHasBeenSet = true; m_datastoreName.assign(value); }

    /**
     * <p>The user generated name for the datastore.</p>
     */
    inline CreateFHIRDatastoreRequest& WithDatastoreName(const Aws::String& value) { SetDatastoreName(value); return *this;}

    /**
     * <p>The user generated name for the datastore.</p>
     */
    inline CreateFHIRDatastoreRequest& WithDatastoreName(Aws::String&& value) { SetDatastoreName(std::move(value)); return *this;}

    /**
     * <p>The user generated name for the datastore.</p>
     */
    inline CreateFHIRDatastoreRequest& WithDatastoreName(const char* value) { SetDatastoreName(value); return *this;}


    /**
     * <p>The FHIR version of the datastore. The only supported version is R4.</p>
     */
    inline const FHIRVersion& GetDatastoreTypeVersion() const{ return m_datastoreTypeVersion; }

    /**
     * <p>The FHIR version of the datastore. The only supported version is R4.</p>
     */
    inline bool DatastoreTypeVersionHasBeenSet() const { return m_datastoreTypeVersionHasBeenSet; }

    /**
     * <p>The FHIR version of the datastore. The only supported version is R4.</p>
     */
    inline void SetDatastoreTypeVersion(const FHIRVersion& value) { m_datastoreTypeVersionHasBeenSet = true; m_datastoreTypeVersion = value; }

    /**
     * <p>The FHIR version of the datastore. The only supported version is R4.</p>
     */
    inline void SetDatastoreTypeVersion(FHIRVersion&& value) { m_datastoreTypeVersionHasBeenSet = true; m_datastoreTypeVersion = std::move(value); }

    /**
     * <p>The FHIR version of the datastore. The only supported version is R4.</p>
     */
    inline CreateFHIRDatastoreRequest& WithDatastoreTypeVersion(const FHIRVersion& value) { SetDatastoreTypeVersion(value); return *this;}

    /**
     * <p>The FHIR version of the datastore. The only supported version is R4.</p>
     */
    inline CreateFHIRDatastoreRequest& WithDatastoreTypeVersion(FHIRVersion&& value) { SetDatastoreTypeVersion(std::move(value)); return *this;}


    /**
     * <p>Optional parameter to preload data upon creation of the datastore. Currently,
     * the only supported preloaded data is synthetic data generated from Synthea.</p>
     */
    inline const PreloadDataConfig& GetPreloadDataConfig() const{ return m_preloadDataConfig; }

    /**
     * <p>Optional parameter to preload data upon creation of the datastore. Currently,
     * the only supported preloaded data is synthetic data generated from Synthea.</p>
     */
    inline bool PreloadDataConfigHasBeenSet() const { return m_preloadDataConfigHasBeenSet; }

    /**
     * <p>Optional parameter to preload data upon creation of the datastore. Currently,
     * the only supported preloaded data is synthetic data generated from Synthea.</p>
     */
    inline void SetPreloadDataConfig(const PreloadDataConfig& value) { m_preloadDataConfigHasBeenSet = true; m_preloadDataConfig = value; }

    /**
     * <p>Optional parameter to preload data upon creation of the datastore. Currently,
     * the only supported preloaded data is synthetic data generated from Synthea.</p>
     */
    inline void SetPreloadDataConfig(PreloadDataConfig&& value) { m_preloadDataConfigHasBeenSet = true; m_preloadDataConfig = std::move(value); }

    /**
     * <p>Optional parameter to preload data upon creation of the datastore. Currently,
     * the only supported preloaded data is synthetic data generated from Synthea.</p>
     */
    inline CreateFHIRDatastoreRequest& WithPreloadDataConfig(const PreloadDataConfig& value) { SetPreloadDataConfig(value); return *this;}

    /**
     * <p>Optional parameter to preload data upon creation of the datastore. Currently,
     * the only supported preloaded data is synthetic data generated from Synthea.</p>
     */
    inline CreateFHIRDatastoreRequest& WithPreloadDataConfig(PreloadDataConfig&& value) { SetPreloadDataConfig(std::move(value)); return *this;}


    /**
     * <p>Optional user provided token used for ensuring idempotency.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Optional user provided token used for ensuring idempotency.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Optional user provided token used for ensuring idempotency.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Optional user provided token used for ensuring idempotency.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Optional user provided token used for ensuring idempotency.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Optional user provided token used for ensuring idempotency.</p>
     */
    inline CreateFHIRDatastoreRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Optional user provided token used for ensuring idempotency.</p>
     */
    inline CreateFHIRDatastoreRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Optional user provided token used for ensuring idempotency.</p>
     */
    inline CreateFHIRDatastoreRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_datastoreName;
    bool m_datastoreNameHasBeenSet;

    FHIRVersion m_datastoreTypeVersion;
    bool m_datastoreTypeVersionHasBeenSet;

    PreloadDataConfig m_preloadDataConfig;
    bool m_preloadDataConfigHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
