// Fill out your copyright notice in the Description page of Project Settings.


#include "Asset/DataAsset/IAAssetMapping.h"

FPrimaryAssetId UIAAssetMapping::GetPrimaryAssetId() const
{
	return FPrimaryAssetId(UIAAssetTypes::AssetMappingType, GetFName());
}
