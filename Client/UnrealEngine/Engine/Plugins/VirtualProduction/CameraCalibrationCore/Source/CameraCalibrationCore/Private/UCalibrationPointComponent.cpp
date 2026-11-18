// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 15

// StaticClass @ 14d67cff0

UClass * __cdecl UCalibrationPointComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCalibrationPointComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"CalibrationPointComponent",
               &Z_Registration_Info_UClass_UCalibrationPointComponent.InnerSingleton,
               StaticRegisterNativesUCalibrationPointComponent,0x670,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UCalibrationPointComponent>,
               InternalVTableHelperCtorCaller<UCalibrationPointComponent>,local_res8,
               UProceduralMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCalibrationPointComponent.InnerSingleton;
}

// UCalibrationPointComponent @ 14d6a9cc0

UCalibrationPointComponent * __thiscall
UCalibrationPointComponent::UCalibrationPointComponent
          (UCalibrationPointComponent *this,FVTableHelper *param_1)

{
  UProceduralMeshComponent::UProceduralMeshComponent((UProceduralMeshComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UCalibrationPointComponent__6B_;
  *(undefined8 *)&this->SubPoints = 0;
  *(undefined8 *)&(this->SubPoints).field_0x8 = 0;
  *(undefined8 *)&(this->SubPoints).field_0x20 = 0;
  *(undefined4 *)&(this->SubPoints).field_0x28 = 0;
  *(undefined4 *)&(this->SubPoints).field_0x2c = 0x80;
  *(undefined4 *)&(this->SubPoints).field_0x34 = 0;
  *(undefined4 *)&(this->SubPoints).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SubPoints).field_0x40 = 0;
  *(undefined4 *)&(this->SubPoints).field_0x48 = 0;
  this->bVisualizePointsInEditor = false;
  (this->VisualizationShape).Value = '\0';
  this->PointVisualizationScale = 1.0;
  return this;
}

// UCalibrationPointComponent @ 14d6a9d90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UCalibrationPointComponent * __thiscall
UCalibrationPointComponent::UCalibrationPointComponent
          (UCalibrationPointComponent *this,FObjectInitializer *param_1)

{
  UProceduralMeshComponent::UProceduralMeshComponent((UProceduralMeshComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UCalibrationPointComponent__6B_;
  *(undefined8 *)&this->SubPoints = 0;
  *(undefined8 *)&(this->SubPoints).field_0x8 = 0;
  *(undefined8 *)&(this->SubPoints).field_0x20 = 0;
  *(undefined4 *)&(this->SubPoints).field_0x28 = 0;
  *(undefined4 *)&(this->SubPoints).field_0x2c = 0x80;
  *(undefined4 *)&(this->SubPoints).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SubPoints).field_0x34 = 0;
  *(undefined8 *)&(this->SubPoints).field_0x40 = 0;
  *(undefined4 *)&(this->SubPoints).field_0x48 = 0;
  this->bVisualizePointsInEditor = false;
  this->PointVisualizationScale = 1.0;
  (this->VisualizationShape).Value = '\0';
  UPrimitiveComponent::SetCollisionEnabled((UPrimitiveComponent *)this,NoCollision);
  return this;
}

// ~UCalibrationPointComponent @ 14d6acb30

void __thiscall
UCalibrationPointComponent::~UCalibrationPointComponent(UCalibrationPointComponent *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UCalibrationPointComponent__6B_;
  *(undefined4 *)&(this->SubPoints).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SubPoints).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SubPoints);
  UProceduralMeshComponent::~UProceduralMeshComponent((UProceduralMeshComponent *)this);
  return;
}

// GetNamespacedPointNames @ 14d6d5b30

/* WARNING: Removing unreachable block (ram,0x00014d6d5c33) */

void __thiscall
UCalibrationPointComponent::GetNamespacedPointNames
          (UCalibrationPointComponent *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  TMap<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  *pTVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  FScriptContainerElement *local_128;
  undefined8 local_120;
  FString local_118;
  FString local_108;
  FName local_f8;
  TMap<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  *local_f0;
  FName local_e8;
  FString local_e0;
  TMap<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  TMap<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  local_f8 = (FName)this->_padding_;
  ::FName::ToString(&local_f8,&local_118);
  pFVar10 = (param_1->AllocatorInstance).Data;
  if (((pFVar10 <= (FScriptContainerElement *)&local_118) &&
      ((FScriptContainerElement *)&local_118 < pFVar10 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = param_1->ArrayNum;
  if (iVar8 == param_1->ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar8 + 1;
  pFVar10 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
  *(undefined8 *)pFVar10 = 0;
  *(FScriptContainerElement **)pFVar10 = local_118.Data.AllocatorInstance.Data;
  *(int *)(pFVar10 + 8) = local_118.Data.ArrayNum;
  *(int *)(pFVar10 + 0xc) = local_118.Data.ArrayMax;
  local_118.Data.ArrayNum = 0;
  local_118.Data.ArrayMax = 0;
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  puVar1 = &(this->SubPoints).field_0x10;
  iStack_c8 = 0;
  iVar8 = *(int *)&(this->SubPoints).field_0x28;
  local_f0 = &this->SubPoints;
  uStack_c4 = 1;
  iStack_b4 = 0;
  local_b0 = iStack_c8;
  if (iVar8 != 0) {
    puVar15 = *(uint **)&(this->SubPoints).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    local_b0 = 0;
    iStack_c8 = 0;
    while (uVar11 == 0) {
      lVar9 = (longlong)iStack_c8;
      local_b0 = local_b0 + 0x20;
      iStack_c8 = iStack_c8 + 1;
      iStack_b4 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_14d6d5cd1;
      uVar11 = puVar15[lVar9 + 1];
    }
    uStack_c4 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_c4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iStack_b4 = local_b0 + -1 + local_res18;
    if (iVar8 < iStack_b4) {
      iStack_b4 = iVar8;
    }
  }
LAB_14d6d5cd1:
  uStack_ac = local_54;
  iStack_a8 = *(int *)&(this->SubPoints).field_0x8 - *(int *)&(this->SubPoints).field_0x34;
  uVar11 = *(uint *)&(this->SubPoints).field_0x28;
  uStack_b8 = 0xffffffff;
  TStack_98._padding_ = CONCAT44(uStack_c4,iStack_c8);
  uVar16 = uVar11 & 0xffffffe0;
  TStack_98.CurrentBitIndex = iStack_b4;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_98._28_4_ = local_54;
  TStack_98.BaseBitIndex = local_b0;
  uStack_78 = CONCAT44(uStack_a4,iStack_a8);
  local_d0 = local_f0;
  local_c0 = puVar1;
  local_a0 = local_f0;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar8 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(uint *)&(this->SubPoints).field_0x28;
  if (uVar11 != uVar3) {
    puVar14 = *(undefined1 **)&(this->SubPoints).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14d6d5df0;
      uVar11 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    uVar11 = local_res20 + -1 + uVar16;
    if ((int)uVar3 < (int)uVar11) {
      uVar11 = uVar3;
    }
  }
LAB_14d6d5df0:
  while( true ) {
    pTVar6 = local_a0;
    if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    lVar9 = (longlong)TStack_98.CurrentBitIndex;
    if (((TStack_98.CurrentBitIndex == uVar11) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == local_f0)
       ) break;
    lVar4 = *(longlong *)pTVar6;
    local_128 = (void *)0x0;
    local_120 = 0;
    local_e8 = (FName)this->_padding_;
    ::FName::ToString(&local_e8,&local_e0);
    ::FString::PrintfImpl(&local_108,L"%s::%s");
    if (local_128 != (void *)0x0) {
      FMemory::Free(local_128);
    }
    local_128 = local_108.Data.AllocatorInstance.Data;
    local_120._0_4_ = local_108.Data.ArrayNum;
    local_120._4_4_ = local_108.Data.ArrayMax;
    local_108.Data.ArrayNum = 0;
    local_108.Data.ArrayMax = 0;
    local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    iVar8 = *(int *)(lVar4 + lVar9 * 0x30 + 8);
    iVar12 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar12 = 0;
    }
    if (0 < iVar12) {
      pFVar10 = (param_1->AllocatorInstance).Data;
      if (((pFVar10 <= (FScriptContainerElement *)&local_128) &&
          ((FScriptContainerElement *)&local_128 < pFVar10 + (longlong)param_1->ArrayMax * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = param_1->ArrayNum;
      if (iVar8 == param_1->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      pFVar10 = local_128;
      pFVar13 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
      param_1->ArrayNum = iVar8 + 1;
      *(undefined8 *)&pFVar13->field_0x0 = 0;
      lVar9 = (longlong)(int)local_120;
      *(int *)&pFVar13[8].field_0x0 = (int)local_120;
      if ((int)local_120 == 0) {
        *(int *)(pFVar13 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,(int)local_120,0,(ForAnyElementType *)pFVar13,(int)local_120,
                   (int *)(pFVar13 + 0xc));
        memcpy(*(void **)&pFVar13->field_0x0,pFVar10,lVar9 * 2);
      }
    }
    if (local_128 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128);
    }
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  }
  return;
}

// GetPrivateStaticClass @ 14d6d7f80

UClass * __cdecl UCalibrationPointComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCalibrationPointComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"CalibrationPointComponent",
               &Z_Registration_Info_UClass_UCalibrationPointComponent.InnerSingleton,
               StaticRegisterNativesUCalibrationPointComponent,0x670,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UCalibrationPointComponent>,
               InternalVTableHelperCtorCaller<UCalibrationPointComponent>,local_res8,
               UProceduralMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCalibrationPointComponent.InnerSingleton;
}

// GetWorldLocation @ 14d6dca90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UCalibrationPointComponent::GetWorldLocation
          (UCalibrationPointComponent *this,FString *param_1,TVector<double> *param_2)

{
  TMap<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  *pTVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  double *pdVar4;
  double dVar5;
  uint uVar6;
  FScriptContainerElement *_Src;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  TMap<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  *pTVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  TQuat<double> *pTVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 auStackY_278 [32];
  undefined1 local_238 [8];
  FString local_230;
  FString local_220;
  TQuat<double> local_208;
  int local_1e8;
  undefined4 uStack_1e4;
  int iStack_1e0;
  undefined4 uStack_1dc;
  int local_1d8;
  FName local_1d4;
  FName local_1cc;
  TVector<double> *local_1c0;
  FString local_1b8;
  FString local_1a8;
  TMap<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  *local_198;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_190;
  undefined8 uStack_170;
  FString local_168;
  TRotator<double> local_158 [2];
  undefined4 local_124;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_278;
  iVar17 = 0;
  iVar16 = 0;
  local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_220.Data.ArrayNum = 0;
  local_220.Data.ArrayMax = 0;
  local_230.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_230.Data.ArrayNum = 0;
  local_230.Data.ArrayMax = 0;
  local_1c0 = param_2;
  ::FString::FString(&local_168,L"::");
  bVar11 = ::FString::Split(param_1,&local_168,&local_220,&local_230);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (bVar11) {
    local_1d4 = (FName)this->_padding_;
    ::FName::ToString(&local_1d4,&local_1b8);
    if (local_220.Data.ArrayNum == local_1b8.Data.ArrayNum) {
      if (local_220.Data.ArrayNum < 2) {
        bVar11 = false;
      }
      else {
        iVar13 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)local_220.Data.AllocatorInstance.Data,
                            (wchar_t *)local_1b8.Data.AllocatorInstance.Data);
        bVar11 = iVar13 != 0;
      }
    }
    else {
      bVar11 = local_220.Data.ArrayNum + local_1b8.Data.ArrayNum != 1;
    }
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    if (!bVar11) {
LAB_14d6dcc67:
      local_208.Y._4_4_ = 1;
      pTVar1 = &this->SubPoints;
      puVar2 = &(this->SubPoints).field_0x10;
      local_1e8 = 0;
      iVar13 = *(int *)&(this->SubPoints).field_0x28;
      local_208.W._4_4_ = local_1e8;
      if (iVar13 != 0) {
        puVar20 = *(uint **)&(this->SubPoints).field_0x20;
        if (puVar20 == (uint *)0x0) {
          puVar20 = (uint *)puVar2;
        }
        uVar18 = *puVar20;
        local_1e8 = iVar17;
        iVar16 = iVar17;
        while (uVar18 == 0) {
          lVar15 = (longlong)iVar16;
          local_1e8 = local_1e8 + 0x20;
          iVar16 = iVar16 + 1;
          local_208.W._4_4_ = iVar13;
          if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14d6dccfd;
          uVar18 = puVar20[lVar15 + 1];
        }
        local_208.Y._4_4_ = -uVar18 & uVar18;
        uVar3 = (ulonglong)local_208.Y._4_4_ * 2 + 1;
        lVar15 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        local_1d8 = (int)lVar15;
        local_208.W._4_4_ = local_1e8 + -1 + local_1d8;
        if (iVar13 < local_208.W._4_4_) {
          local_208.W._4_4_ = iVar13;
        }
      }
LAB_14d6dccfd:
      uVar18 = *(uint *)&(this->SubPoints).field_0x28;
      uStack_1e4 = local_124;
      uVar21 = uVar18 & 0xffffffe0;
      iStack_1e0 = *(int *)&(this->SubPoints).field_0x8 - *(int *)&(this->SubPoints).field_0x34;
      local_208.W._0_4_ = 0xffffffff;
      TStack_190._padding_ = CONCAT44(local_208.Y._4_4_,iVar16);
      TStack_190.CurrentBitIndex = local_208.W._4_4_;
      TStack_190.UnvisitedBitMask = 0xffffffff;
      iVar17 = (int)uVar18 >> 5;
      TStack_190._28_4_ = local_124;
      TStack_190.BaseBitIndex = local_1e8;
      uStack_170 = CONCAT44(uStack_1dc,iStack_1e0);
      local_208.X = (double)pTVar1;
      local_208.Y._0_4_ = iVar16;
      local_208.Z = (double)puVar2;
      local_198 = pTVar1;
      TStack_190.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
      if ((((int)uVar18 < 0) || (iVar13 < (int)uVar18)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        uVar12 = (*pcVar8)();
        return (bool)uVar12;
      }
      uVar6 = *(uint *)&(this->SubPoints).field_0x28;
      if (uVar18 != uVar6) {
        puVar19 = *(undefined1 **)&(this->SubPoints).field_0x20;
        if (puVar19 == (undefined1 *)0x0) {
          puVar19 = puVar2;
        }
        uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
        while (uVar18 == 0) {
          lVar15 = (longlong)iVar17;
          uVar21 = uVar21 + 0x20;
          iVar17 = iVar17 + 1;
          uVar18 = uVar6;
          if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
          goto LAB_14d6dce00;
          uVar18 = *(uint *)(puVar19 + lVar15 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
        lVar15 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar18 = (int)lVar15 + -1 + uVar21;
        if ((int)uVar6 < (int)uVar18) {
          uVar18 = uVar6;
        }
      }
LAB_14d6dce00:
      do {
        pTVar10 = local_198;
        if (*(int *)&local_198->field_0x8 - *(int *)&local_198->field_0x34 != (int)uStack_170) {
          `TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_238);
        }
        lVar15 = (longlong)TStack_190.CurrentBitIndex;
        if (((TStack_190.CurrentBitIndex == uVar18) &&
            (TStack_190.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
           (pTVar10 == pTVar1)) {
          iVar17 = 0;
          break;
        }
        lVar7 = *(longlong *)pTVar10;
        iVar16 = *(int *)(lVar7 + 8 + lVar15 * 0x30);
        if (iVar16 == local_230.Data.ArrayNum) {
          if (iVar16 < 2) goto LAB_14d6dce7f;
          iVar16 = FGenericPlatformStricmp::Stricmp
                             (*(wchar_t **)(lVar7 + lVar15 * 0x30),
                              (wchar_t *)local_230.Data.AllocatorInstance.Data);
          bVar11 = iVar16 == 0;
        }
        else {
          bVar11 = iVar16 + local_230.Data.ArrayNum == 1;
        }
        if (bVar11) goto LAB_14d6dce7f;
        TStack_190.UnvisitedBitMask = TStack_190.UnvisitedBitMask & ~TStack_190._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_190);
      } while( true );
    }
  }
  else {
    local_1cc = (FName)this->_padding_;
    ::FName::ToString(&local_1cc,&local_1a8);
    iVar13 = (param_1->Data).ArrayNum;
    if (iVar13 == local_1a8.Data.ArrayNum) {
      if (iVar13 < 2) {
        bVar11 = true;
      }
      else {
        iVar13 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                            (wchar_t *)local_1a8.Data.AllocatorInstance.Data);
        bVar11 = iVar13 == 0;
      }
    }
    else {
      bVar11 = iVar13 + local_1a8.Data.ArrayNum == 1;
    }
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    if (!bVar11) {
      if (&local_230 != param_1) {
        iVar13 = (param_1->Data).ArrayNum;
        _Src = (param_1->Data).AllocatorInstance.Data;
        local_230.Data.ArrayNum = iVar13;
        if ((iVar13 == 0) && (local_230.Data.ArrayMax == 0)) {
          local_230.Data.ArrayNum = 0;
          local_230.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar13,local_230.Data.ArrayMax,(ForAnyElementType *)&local_230,iVar13,
                     &local_230.Data.ArrayMax);
          if (iVar13 != 0) {
            memcpy(local_230.Data.AllocatorInstance.Data,_Src,(longlong)iVar13 * 2);
          }
        }
      }
      goto LAB_14d6dcc67;
    }
    dVar9 = (double)this->_padding_;
    iVar17 = 1;
    dVar5 = (double)this->_padding_;
    (param_2->field0_0x0)._s_0.X = (double)this->_padding_;
    (param_2->field0_0x0)._s_0.Y = dVar9;
    (param_2->field0_0x0)._s_0.Z = dVar5;
  }
LAB_14d6dcf91:
  if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.Data.AllocatorInstance.Data);
  }
  if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.Data.AllocatorInstance.Data);
  }
  return SUB41(iVar17,0);
LAB_14d6dce7f:
  local_158[0].Roll = 0.0;
  local_158[0].Pitch = 0.0;
  local_158[0].Yaw = 0.0;
  pTVar14 = UE::Math::TRotator<double>::Quaternion(local_158,&local_208);
  pdVar4 = (double *)(lVar7 + 0x10 + lVar15 * 0x30);
  local_b8.Translation.XY.m128d_f64[0] = *pdVar4;
  local_b8.Translation.XY.m128d_f64[1] = pdVar4[1];
  local_b8.Rotation.XY.m128d_f64[0] = pTVar14->X;
  local_b8.Rotation.XY.m128d_f64[1] = pTVar14->Y;
  local_b8.Rotation.ZW.m128d_f64[0] = pTVar14->Z;
  local_b8.Rotation.ZW.m128d_f64[1] = pTVar14->W;
  local_b8.Translation.ZW.m128d_f64[0] = *(double *)(lVar7 + 0x20 + lVar15 * 0x30);
  local_b8.Translation.ZW.m128d_f64[1] = 0.0;
  local_b8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_b8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_b8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_b8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_118.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_118.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_118.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_118.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_118.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_118.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_118.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_118.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_118.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_118.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_118.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_118.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply
            (&local_118,&local_b8,(TTransform<double> *)&this->_padding_);
  iVar17 = 1;
  (local_1c0->field0_0x0)._s_0.X = local_118.Translation.XY.m128d_f64[0];
  (local_1c0->field0_0x0)._s_0.Y = local_118.Translation.XY.m128d_f64[1];
  (local_1c0->field0_0x0)._s_0.Z = local_118.Translation.ZW.m128d_f64[0];
  goto LAB_14d6dcf91;
}

// NamespacedSubpointName @ 14d6e48f0

bool __thiscall
UCalibrationPointComponent::NamespacedSubpointName
          (UCalibrationPointComponent *this,FString *param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  local_res8 = (FName)this->_padding_;
  ::FName::ToString(&local_res8,&local_18);
  ::FString::PrintfImpl(&local_28,L"%s::%s");
  if (param_2 != &local_28) {
    pFVar2 = (param_2->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (param_2->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    (param_2->Data).ArrayNum = local_28.Data.ArrayNum;
    (param_2->Data).ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  return 0 < iVar3;
}

// OnRegister @ 14d6e4f30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCalibrationPointComponent::OnRegister(UCalibrationPointComponent *this)

{
  UPrimitiveComponent::OnRegister((UPrimitiveComponent *)this);
  UProceduralMeshComponent::ClearAllMeshSections((UProceduralMeshComponent *)this);
  return;
}

// RebuildVertices @ 14d6e6230

void __thiscall UCalibrationPointComponent::RebuildVertices(UCalibrationPointComponent *this)

{
  UProceduralMeshComponent::ClearAllMeshSections((UProceduralMeshComponent *)this);
  return;
}

// StaticRegisterNativesUCalibrationPointComponent @ 14d6f00d0

void __cdecl UCalibrationPointComponent::StaticRegisterNativesUCalibrationPointComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UCalibrationPointComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetNamespacedPointNames @ 14d6f92c0

void __cdecl
UCalibrationPointComponent::execGetNamespacedPointNames
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetNamespacedPointNames((UCalibrationPointComponent *)param_1,pTVar2);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetWorldLocation @ 14d6f9c40

void __cdecl
UCalibrationPointComponent::execGetWorldLocation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TVector<double> *pTVar3;
  FString local_38;
  TVector<double> local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar3 = &local_28;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar3 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = GetWorldLocation((UCalibrationPointComponent *)param_1,&local_38,pTVar3);
  *(bool *)param_3 = bVar2;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execNamespacedSubpointName @ 14d6fa3e0

void __cdecl
UCalibrationPointComponent::execNamespacedSubpointName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString *pFVar3;
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar3 = &local_28;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar3 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = NamespacedSubpointName((UCalibrationPointComponent *)param_1,&local_18,pFVar3);
  *(bool *)param_3 = bVar2;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execRebuildVertices @ 14d6fa520

void __cdecl
UCalibrationPointComponent::execRebuildVertices(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UProceduralMeshComponent::ClearAllMeshSections((UProceduralMeshComponent *)param_1);
  return;
}

