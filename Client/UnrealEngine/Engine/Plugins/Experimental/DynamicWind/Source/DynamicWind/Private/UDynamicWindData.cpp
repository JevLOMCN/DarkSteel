// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicWind
// Functions: 15

// StaticClass @ 14da48da0

UClass * __cdecl UDynamicWindData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicWindData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DynamicWind",L"DynamicWindData",
               &Z_Registration_Info_UClass_UDynamicWindData.InnerSingleton,
               StaticRegisterNativesUDynamicWindData,0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDynamicWindData>,
               InternalVTableHelperCtorCaller<UDynamicWindData>,local_res8,
               UTransformProviderData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicWindData.InnerSingleton;
}

// UDynamicWindData @ 14da4d260

UDynamicWindData * __thiscall
UDynamicWindData::UDynamicWindData(UDynamicWindData *this,FVTableHelper *param_1)

{
  UTransformProviderData::UTransformProviderData((UTransformProviderData *)this,param_1);
  *(undefined ***)this = &___7UDynamicWindData__6B_;
  return this;
}

// UDynamicWindData @ 14da4d290

UDynamicWindData * __thiscall
UDynamicWindData::UDynamicWindData(UDynamicWindData *this,FObjectInitializer *param_1)

{
  UTransformProviderData::UTransformProviderData((UTransformProviderData *)this,param_1);
  *(undefined ***)this = &___7UDynamicWindData__6B_;
  return this;
}

// ~UDynamicWindData @ 14da4d890

void __thiscall UDynamicWindData::~UDynamicWindData(UDynamicWindData *this)

{
  *(undefined ***)this = &___7UDynamicWindData__6B_;
  UTransformProviderData::~UTransformProviderData((UTransformProviderData *)this);
  return;
}

// CreateRenderThreadResources @ 14da4f2d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTransformProviderRenderProxy * __thiscall
UDynamicWindData::CreateRenderThreadResources
          (UDynamicWindData *this,FSkinningSceneExtensionProxy *param_1,FSceneInterface *param_2,
          FRHICommandListBase *param_3)

{
  int iVar1;
  USkinnedAsset *pUVar2;
  code *pcVar3;
  bool bVar4;
  FTransformProviderRenderProxy *pFVar5;
  UClass *pUVar6;
  FTransformProviderRenderProxy FVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = ::operator_new(0x28);
  if (pFVar5 == (FTransformProviderRenderProxy *)0x0) {
    pFVar5 = (FTransformProviderRenderProxy *)0x0;
  }
  else {
    *(undefined4 *)(pFVar5 + 4) = 0;
    *pFVar5 = (FTransformProviderRenderProxy)&___7FDynamicWindDataRenderProxy__6B_;
    pFVar5[1] = (FTransformProviderRenderProxy)param_1;
    pFVar5[2] = (FTransformProviderRenderProxy)0x0;
    pFVar5[3] = (FTransformProviderRenderProxy)param_2;
    *(uint *)(pFVar5 + 4) = (uint)param_1->UniqueAnimationCount;
    pUVar2 = param_1->SkinnedAsset;
    if (pUVar2 == (USkinnedAsset *)0x0) {
      pwVar9 = L"";
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SkinnedAsset != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\DynamicWind\\Source\\DynamicWind\\Private\\DynamicWindData.cpp"
                         ,0x4c,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FTransformProviderRenderProxy *)(*pcVar3)();
        return pFVar5;
      }
      pFVar8 = GetTypeName<USkeletalMesh>(&local_38);
      if ((pFVar8->Data).ArrayNum != 0) {
        pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar9);
    }
    pUVar6 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      pFVar8 = GetTypeName<USkeletalMesh>(&local_28);
      pwVar9 = L"";
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      pFVar8 = GetFullNameForCastLogError<USkinnedAsset_const_>(&local_18,pUVar2);
      if ((pFVar8->Data).ArrayNum != 0) {
        pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar9,pwVar10);
    }
    FVar7 = (FTransformProviderRenderProxy)
            IInterface_AssetUserData::GetAssetUserData<UDynamicWindSkeletalData>
                      ((IInterface_AssetUserData *)&pUVar2[1].field_0x8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (FVar7 != (FTransformProviderRenderProxy)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar7);
    }
    pFVar5[2] = FVar7;
  }
  if (*(code **)((longlong)*pFVar5 + 8) != FDynamicWindDataRenderProxy::CreateRenderThreadResources)
  {
    (**(code **)((longlong)*pFVar5 + 8))(pFVar5,param_3);
  }
  return pFVar5;
}

// DestroyRenderThreadResources @ 14da4f490

void __thiscall
UDynamicWindData::DestroyRenderThreadResources
          (UDynamicWindData *this,FTransformProviderRenderProxy *param_1)

{
  (**(code **)((longlong)*param_1 + 0x10))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014da4f4b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,1);
  return;
}

// GetAnimationBounds @ 14da4fd80

bool __thiscall
UDynamicWindData::GetAnimationBounds(UDynamicWindData *this,uint param_1,FRenderBounds *param_2)

{
  return false;
}

// GetPrivateStaticClass @ 14da50240

UClass * __cdecl UDynamicWindData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicWindData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DynamicWind",L"DynamicWindData",
               &Z_Registration_Info_UClass_UDynamicWindData.InnerSingleton,
               StaticRegisterNativesUDynamicWindData,0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDynamicWindData>,
               InternalVTableHelperCtorCaller<UDynamicWindData>,local_res8,
               UTransformProviderData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicWindData.InnerSingleton;
}

// GetSkinningDataOffset @ 14da50630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall
UDynamicWindData::GetSkinningDataOffset
          (UDynamicWindData *this,int param_1,TTransform<double> *param_2,
          FSkinnedMeshInstanceData *param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_138 [32];
  TQuat<double> local_118;
  TVector<double> local_f8;
  TTransform<double> local_d8;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  dVar1 = (double)(param_3->Transform).Rotation.m128_f32[1];
  local_78.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar1,0);
  local_78.Rotation.XY.m128d_f64[0] = (double)(param_3->Transform).Rotation.m128_f32[0];
  local_78.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar1 >> 0x20);
  dVar1 = (double)(param_3->Transform).Rotation.m128_f32[3];
  dVar2 = (double)(param_3->Transform).Translation.m128_f32[1];
  local_78.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar1,0);
  local_78.Rotation.ZW.m128d_f64[0] = (double)(param_3->Transform).Rotation.m128_f32[2];
  local_78.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar1 >> 0x20);
  dVar1 = (double)(param_3->Transform).Translation.m128_f32[3];
  local_78.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar2,0);
  local_78.Translation.XY.m128d_f64[0] = (double)(param_3->Transform).Translation.m128_f32[0];
  local_78.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar2 >> 0x20);
  dVar2 = (double)(param_3->Transform).Scale3D.m128_f32[1];
  local_78.Translation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar1,0);
  local_78.Translation.ZW.m128d_f64[0] = (double)(param_3->Transform).Translation.m128_f32[2];
  local_78.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar1 >> 0x20);
  dVar1 = (double)(param_3->Transform).Scale3D.m128_f32[3];
  local_78.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(dVar2,0);
  local_78.Scale3D.XY.m128d_f64[0] = (double)(param_3->Transform).Scale3D.m128_f32[0];
  local_78.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_78.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84(dVar1,0);
  local_78.Scale3D.ZW.m128d_f64[0] = (double)(param_3->Transform).Scale3D.m128_f32[2];
  local_78.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_d8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_d8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_d8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_d8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_d8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_d8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_d8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_d8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_d8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_d8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_d8,&local_78,param_2);
  local_118.X = local_d8.Rotation.XY.m128d_f64[0];
  local_118.Y = local_d8.Rotation.XY.m128d_f64[1];
  local_118.Z = local_d8.Rotation.ZW.m128d_f64[0];
  local_118.W = local_d8.Rotation.ZW.m128d_f64[1];
  UE::Math::TQuat<double>::Euler(&local_118,&local_f8);
  return (((uint)((((int)ROUND((float)local_f8.field0_0x0._s_0.Z * ___real_3d360b61 +
                               __real_3f000000) >> 1) + 8) * 0x2d) % 0x168) / 0x2d) * 2;
}

// GetTransformProviderID @ 14da50b00

FGuid * __thiscall UDynamicWindData::GetTransformProviderID(UDynamicWindData *this)

{
  return &DynamicWindProviderId;
}

// GetUniqueAnimationCount @ 14da50b50

uint __thiscall UDynamicWindData::GetUniqueAnimationCount(UDynamicWindData *this)

{
  return 8;
}

// HasAnimationBounds @ 14da50b60

bool __thiscall UDynamicWindData::HasAnimationBounds(UDynamicWindData *this)

{
  return false;
}

// IsEnabled @ 14da50c10

bool __thiscall UDynamicWindData::IsEnabled(UDynamicWindData *this)

{
  return (bool)this->field_0x28;
}

// StaticRegisterNativesUDynamicWindData @ 14da53b00

void __cdecl UDynamicWindData::StaticRegisterNativesUDynamicWindData(void)

{
  return;
}

// UsesSkeletonBatching @ 14da54410

bool __thiscall UDynamicWindData::UsesSkeletonBatching(UDynamicWindData *this)

{
  return true;
}

