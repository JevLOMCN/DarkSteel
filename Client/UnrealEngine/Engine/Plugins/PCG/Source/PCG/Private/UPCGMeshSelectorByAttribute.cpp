// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149d72f50

UClass * __cdecl UPCGMeshSelectorByAttribute::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMeshSelectorByAttribute.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMeshSelectorByAttribute",
               &Z_Registration_Info_UClass_UPCGMeshSelectorByAttribute.InnerSingleton,
               StaticRegisterNativesUPCGMeshSelectorByAttribute,0x2c8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMeshSelectorByAttribute>,
               InternalVTableHelperCtorCaller<UPCGMeshSelectorByAttribute>,local_res8,
               UPCGMeshSelectorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMeshSelectorByAttribute.InnerSingleton;
}

// UPCGMeshSelectorByAttribute @ 149e360c0

UPCGMeshSelectorByAttribute * __thiscall
UPCGMeshSelectorByAttribute::UPCGMeshSelectorByAttribute
          (UPCGMeshSelectorByAttribute *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGMeshSelectorByAttribute__6B_;
  (this->AttributeName).ComparisonIndex = 0;
  (this->AttributeName).Number = 0;
  FPCGSoftISMComponentDescriptor::FPCGSoftISMComponentDescriptor(&this->TemplateDescriptor);
  this->bUseAttributeMaterialOverrides = false;
  (this->MaterialOverrideAttributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialOverrideAttributes).ArrayNum = 0;
  (this->MaterialOverrideAttributes).ArrayMax = 0;
  return this;
}

// UPCGMeshSelectorByAttribute @ 149e36120

UPCGMeshSelectorByAttribute * __thiscall
UPCGMeshSelectorByAttribute::UPCGMeshSelectorByAttribute
          (UPCGMeshSelectorByAttribute *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGMeshSelectorByAttribute__6B_;
  (this->AttributeName).ComparisonIndex = 0;
  (this->AttributeName).Number = 0;
  FPCGSoftISMComponentDescriptor::FPCGSoftISMComponentDescriptor(&this->TemplateDescriptor);
  this->bUseAttributeMaterialOverrides = false;
  (this->MaterialOverrideAttributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialOverrideAttributes).ArrayNum = 0;
  (this->MaterialOverrideAttributes).ArrayMax = 0;
  return this;
}

// ~UPCGMeshSelectorByAttribute @ 149e375d0

void __thiscall
UPCGMeshSelectorByAttribute::~UPCGMeshSelectorByAttribute(UPCGMeshSelectorByAttribute *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGMeshSelectorByAttribute__6B_;
  pFVar1 = (this->MaterialOverrideAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TemplateDescriptor).AdditionalCommaSeparatedTags.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TemplateDescriptor).ComponentTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSoftISMComponentDescriptor::~FSoftISMComponentDescriptor
            ((FSoftISMComponentDescriptor *)&this->TemplateDescriptor);
  this->_padding_ = (longlong)&___7UPCGMeshSelectorBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 149e40860

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`UPCGMeshSelectorByAttribute::SelectMeshInstances'[::B]::<lambda_2>::operator()
          (void *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  int *piVar1;
  TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
  *pTVar2;
  TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_> *this_00;
  UPCGBasePointData *pUVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  bool bVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  TTransform<double> *pTVar25;
  long64 *plVar26;
  TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar27;
  FPCGMeshInstanceList *pFVar28;
  longlong lVar29;
  int iVar30;
  uint uVar31;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar32;
  longlong lVar33;
  uint uVar34;
  longlong local_res8;
  undefined1 local_88 [40];
  undefined1 local_60 [40];
  
  if (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x32) == '\0') {
    lVar29 = *(longlong *)((longlong)this + 8);
    iVar23 = *(int *)((longlong)this + 0x28);
    pUVar3 = *(UPCGBasePointData **)((longlong)this + 0x30);
    local_60._0_8_ = *(undefined8 *)(lVar29 + 0x1f0);
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(local_60 + 8),(FSoftObjectPath *)(lVar29 + 0x1f8));
    pFVar28 = PCGMeshSelectorAttribute::GetInstanceList
                        (*(TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_> **)this,
                         *(FPCGSoftISMComponentDescriptor **)((longlong)this + 8),
                         (TSoftObjectPtr<UStaticMesh> *)local_60,
                         (TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)
                         (lVar29 + 0x218),param_2,pUVar3,iVar23);
    piVar1 = &(pFVar28->InstancesIndices).ArrayNum;
    if (((pFVar28->Instances).ArrayNum != *piVar1) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("InstanceList.Instances.Num() == InstanceList.InstancesIndices.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MeshSelectors\\PCGMeshSelectorByAttribute.cpp"
                            ,0x130,L""), bVar21)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar23 = (pFVar28->Instances).ArrayNum;
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNum
              (&pFVar28->Instances,param_1->ArrayNum + iVar23,Default);
    pTVar32 = &pFVar28->InstancesIndices;
    if ((pTVar32 == param_1) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar21)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar30 = param_1->ArrayNum;
    if (iVar30 != 0) {
      iVar24 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,iVar30,&pTVar32->AllocatorInstance,piVar1,
                          &(pFVar28->InstancesIndices).ArrayMax);
      memcpy((pTVar32->AllocatorInstance).Data + (longlong)iVar24 * 4,
             (param_1->AllocatorInstance).Data,(longlong)iVar30 << 2);
    }
    iVar30 = param_1->ArrayNum;
    uVar31 = 0;
    if (0 < iVar30) {
      lVar29 = 0;
      lVar33 = (longlong)iVar23 * 0x60;
      do {
        pTVar2 = *(TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                   **)((longlong)this + 0x18);
        uVar22 = 0;
        if ((int)uVar31 < iVar30) {
          uVar22 = ~uVar31 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar25 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                  ::GetElement(pTVar2,*(int *)((param_1->AllocatorInstance).Data + lVar29));
        dVar11 = (pTVar25->Rotation).ZW.m128d_f64[0];
        dVar12 = (pTVar25->Rotation).ZW.m128d_f64[1];
        dVar13 = (pTVar25->Translation).XY.m128d_f64[0];
        dVar14 = (pTVar25->Translation).XY.m128d_f64[1];
        uVar7 = *(undefined4 *)(pTVar25->Rotation).XY.m128d_f64;
        uVar8 = *(undefined4 *)((longlong)(pTVar25->Rotation).XY.m128d_f64 + 4);
        uVar9 = *(undefined4 *)((pTVar25->Rotation).XY.m128d_f64 + 1);
        uVar10 = *(undefined4 *)((longlong)(pTVar25->Rotation).XY.m128d_f64 + 0xc);
        dVar15 = (pTVar25->Translation).ZW.m128d_f64[0];
        dVar16 = (pTVar25->Translation).ZW.m128d_f64[1];
        dVar17 = (pTVar25->Scale3D).ZW.m128d_f64[0];
        dVar18 = (pTVar25->Scale3D).ZW.m128d_f64[1];
        dVar19 = (pTVar25->Scale3D).XY.m128d_f64[0];
        dVar20 = (pTVar25->Scale3D).XY.m128d_f64[1];
        uVar22 = 0;
        if ((int)(uVar31 + iVar23) < (pFVar28->Instances).ArrayNum) {
          uVar22 = ~(uVar31 + iVar23) >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (pFVar28->Instances).AllocatorInstance.Data;
        uVar31 = uVar31 + 1;
        lVar29 = lVar29 + 4;
        pFVar4 = pFVar5 + lVar33;
        *(undefined4 *)pFVar4 = uVar7;
        *(undefined4 *)(pFVar4 + 4) = uVar8;
        *(undefined4 *)(pFVar4 + 8) = uVar9;
        *(undefined4 *)(pFVar4 + 0xc) = uVar10;
        *(double *)(pFVar5 + lVar33 + 0x10) = dVar11;
        *(double *)(pFVar5 + lVar33 + 0x10 + 8) = dVar12;
        *(double *)(pFVar5 + lVar33 + 0x20) = dVar13;
        *(double *)(pFVar5 + lVar33 + 0x20 + 8) = dVar14;
        *(double *)(pFVar5 + lVar33 + 0x30) = dVar15;
        *(double *)(pFVar5 + lVar33 + 0x30 + 8) = dVar16;
        *(double *)(pFVar5 + lVar33 + 0x40) = dVar19;
        *(double *)(pFVar5 + lVar33 + 0x40 + 8) = dVar20;
        *(double *)(pFVar5 + lVar33 + 0x50) = dVar17;
        *(double *)(pFVar5 + lVar33 + 0x50 + 8) = dVar18;
        lVar33 = lVar33 + 0x60;
        iVar30 = param_1->ArrayNum;
      } while ((int)uVar31 < iVar30);
    }
  }
  else {
    iVar23 = param_1->ArrayNum;
    uVar31 = 0;
    if (0 < iVar23) {
      local_res8 = 0;
      do {
        pTVar2 = *(TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                   **)((longlong)this + 0x18);
        uVar34 = ~uVar31 >> 0x1f;
        uVar22 = 0;
        if ((int)uVar31 < iVar23) {
          uVar22 = uVar34;
        }
        if ((uVar22 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar25 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                  ::GetElement(pTVar2,*(int *)((param_1->AllocatorInstance).Data + local_res8));
        this_00 = *(TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_> **)
                   ((longlong)this + 0x20);
        uVar22 = 0;
        if ((int)uVar31 < param_1->ArrayNum) {
          uVar22 = uVar34;
        }
        if ((uVar22 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        plVar26 = TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_>::GetElement
                            (this_00,*(int *)((param_1->AllocatorInstance).Data + local_res8));
        iVar23 = *(int *)((longlong)this + 0x28);
        pUVar3 = *(UPCGBasePointData **)((longlong)this + 0x30);
        pTVar27 = FPCGMeshMaterialOverrideHelper::GetMaterialOverrides
                            (*(FPCGMeshMaterialOverrideHelper **)((longlong)this + 0x10),*plVar26);
        local_88._0_8_ = *(undefined8 *)(*(longlong *)((longlong)this + 8) + 0x1f0);
        FSoftObjectPath::FSoftObjectPath
                  ((FSoftObjectPath *)(local_88 + 8),
                   (FSoftObjectPath *)(*(longlong *)((longlong)this + 8) + 0x1f8));
        pFVar28 = PCGMeshSelectorAttribute::GetInstanceList
                            (*(TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_> **)this,
                             *(FPCGSoftISMComponentDescriptor **)((longlong)this + 8),
                             (TSoftObjectPtr<UStaticMesh> *)local_88,pTVar27,param_2,pUVar3,iVar23);
        piVar1 = &(pFVar28->Instances).ArrayMax;
        iVar23 = (pFVar28->Instances).ArrayNum;
        if (iVar23 == *piVar1) {
          iVar23 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1060,&(pFVar28->Instances).AllocatorInstance,piVar1);
        }
        (pFVar28->Instances).ArrayNum = iVar23 + 1;
        dVar11 = (pTVar25->Rotation).XY.m128d_f64[1];
        pFVar4 = (pFVar28->Instances).AllocatorInstance.Data;
        lVar29 = (longlong)iVar23 * 0x60;
        *(double *)(pFVar4 + lVar29) = (pTVar25->Rotation).XY.m128d_f64[0];
        *(double *)(pFVar4 + lVar29 + 8) = dVar11;
        dVar11 = (pTVar25->Rotation).ZW.m128d_f64[1];
        *(double *)(pFVar4 + lVar29 + 0x10) = (pTVar25->Rotation).ZW.m128d_f64[0];
        *(double *)(pFVar4 + lVar29 + 0x10 + 8) = dVar11;
        dVar11 = (pTVar25->Translation).XY.m128d_f64[1];
        *(double *)(pFVar4 + lVar29 + 0x20) = (pTVar25->Translation).XY.m128d_f64[0];
        *(double *)(pFVar4 + lVar29 + 0x20 + 8) = dVar11;
        dVar11 = (pTVar25->Translation).ZW.m128d_f64[1];
        *(double *)(pFVar4 + lVar29 + 0x30) = (pTVar25->Translation).ZW.m128d_f64[0];
        *(double *)(pFVar4 + lVar29 + 0x30 + 8) = dVar11;
        dVar11 = (pTVar25->Scale3D).XY.m128d_f64[1];
        *(double *)(pFVar4 + lVar29 + 0x40) = (pTVar25->Scale3D).XY.m128d_f64[0];
        *(double *)(pFVar4 + lVar29 + 0x40 + 8) = dVar11;
        dVar11 = (pTVar25->Scale3D).ZW.m128d_f64[1];
        *(double *)(pFVar4 + lVar29 + 0x50) = (pTVar25->Scale3D).ZW.m128d_f64[0];
        *(double *)(pFVar4 + lVar29 + 0x50 + 8) = dVar11;
        uVar22 = 0;
        if ((int)uVar31 < param_1->ArrayNum) {
          uVar22 = uVar34;
        }
        if ((uVar22 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar23 = (pFVar28->InstancesIndices).ArrayNum;
        piVar1 = &(pFVar28->InstancesIndices).ArrayMax;
        pFVar4 = (param_1->AllocatorInstance).Data;
        if (iVar23 == *piVar1) {
          iVar23 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&(pFVar28->InstancesIndices).AllocatorInstance,piVar1);
        }
        (pFVar28->InstancesIndices).ArrayNum = iVar23 + 1;
        uVar31 = uVar31 + 1;
        pFVar4 = pFVar4 + local_res8;
        local_res8 = local_res8 + 4;
        *(undefined4 *)((pFVar28->InstancesIndices).AllocatorInstance.Data + (longlong)iVar23 * 4) =
             *(undefined4 *)pFVar4;
        iVar23 = param_1->ArrayNum;
      } while ((int)uVar31 < iVar23);
    }
  }
  return;
}

// GetPrivateStaticClass @ 149e5d720

UClass * __cdecl UPCGMeshSelectorByAttribute::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMeshSelectorByAttribute.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMeshSelectorByAttribute",
               &Z_Registration_Info_UClass_UPCGMeshSelectorByAttribute.InnerSingleton,
               StaticRegisterNativesUPCGMeshSelectorByAttribute,0x2c8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMeshSelectorByAttribute>,
               InternalVTableHelperCtorCaller<UPCGMeshSelectorByAttribute>,local_res8,
               UPCGMeshSelectorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMeshSelectorByAttribute.InnerSingleton;
}

// PostLoad @ 149e7a300

void __thiscall UPCGMeshSelectorByAttribute::PostLoad(UPCGMeshSelectorByAttribute *this)

{
  UObject::PostLoad((UObject *)this);
  FISMComponentDescriptorBase::PostLoadFixup
            ((FISMComponentDescriptorBase *)&this->TemplateDescriptor,(UObject *)this);
  return;
}

// SelectMeshInstances @ 149e87fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UPCGMeshSelectorByAttribute::SelectMeshInstances
          (UPCGMeshSelectorByAttribute *this,FPCGStaticMeshSpawnerContext *param_1,
          UPCGStaticMeshSpawnerSettings *param_2,UPCGBasePointData *param_3,
          TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_> *param_4,
          UPCGBasePointData *param_5)

{
  longlong *plVar1;
  double *pdVar2;
  UPCGMeshSelectorByAttribute *pUVar3;
  code *pcVar4;
  UPCGBasePointData *pUVar5;
  UPCGMeshSelectorByAttribute *pUVar6;
  UPCGStaticMeshSpawnerSettings *pUVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  FText *pFVar16;
  FText *pFVar17;
  FTextFormat *pFVar18;
  FPCGMetadataAttributeBase *pFVar19;
  FName *pFVar20;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar21;
  FPCGSoftISMComponentDescriptor *pFVar22;
  FPCGObjectSingleOverride *pFVar23;
  ulonglong uVar24;
  TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *this_01;
  longlong lVar25;
  ulonglong uVar26;
  uint uVar27;
  FScriptContainerElement *pFVar28;
  FName FVar29;
  FPCGStaticMeshSpawnerContext *pFVar30;
  ForAnyElementType FVar31;
  FPCGObjectPropertyOverrideDescription *pFVar32;
  FPCGObjectSingleOverride *pFVar33;
  ulonglong uVar34;
  uint uVar35;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar36;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  undefined1 auStackY_538 [32];
  uint local_4e4;
  undefined1 local_4e0;
  undefined1 local_4df [7];
  FPCGStaticMeshSpawnerContext *local_4d8;
  uint local_4d0;
  TArray<FPCGObjectPropertyOverrideDescription,TSizedDefaultAllocator<32>_> local_4c8;
  UPCGBasePointData *local_4b8;
  UPCGBasePointData *local_4b0;
  UPCGMeshSelectorByAttribute *local_4a8;
  TArray<int,TSizedDefaultAllocator<32>_> local_4a0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_490;
  uint local_488;
  UPCGStaticMeshSpawnerSettings *local_480;
  TArray<FPCGAttributePropertySelector,TSizedDefaultAllocator<32>_> local_478;
  longlong local_468;
  FString local_460;
  FPCGObjectOverrides<FPCGSoftISMComponentDescriptor> local_448;
  FPCGObjectSingleOverride *local_408;
  FName local_400;
  FPCGMeshMaterialOverrideHelper *local_3f8;
  ulonglong local_3f0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_3e8;
  FName local_3d8;
  FPCGMetadataDomainID FStack_3d0;
  TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_> *local_3c0;
  UPCGMeshSelectorByAttribute *local_3b8;
  FPCGMeshMaterialOverrideHelper *local_3b0;
  longlong *local_3a8;
  undefined1 *local_3a0;
  uint local_398;
  UPCGBasePointData *local_390;
  TArrayView<FPCGAttributePropertySelector_const_,int> local_388;
  FName local_378;
  FPCGMetadataDomainID FStack_370;
  FString local_358;
  FString local_348;
  FText local_338;
  FString local_328;
  FString local_318;
  FText local_308;
  FText local_2f8;
  FString local_2e8;
  FString local_2d8;
  FText local_2c8;
  FText local_2b8;
  FName local_2a8;
  undefined1 auStack_2a0 [16];
  FName local_290;
  FString local_288;
  FName local_278;
  undefined1 auStack_270 [16];
  FPCGAttributeIdentifier local_258;
  FName local_238;
  undefined1 auStack_230 [16];
  FPCGAttributeIdentifier local_218;
  FPCGAttributeIdentifier local_1f8;
  FString local_1d8;
  FText local_1c8;
  longlong local_1b8;
  FSoftObjectPath local_1b0;
  undefined8 local_17c;
  undefined8 local_16c;
  FTextFormat local_148;
  FTextFormat local_138;
  undefined1 local_128 [32];
  FText local_108;
  FText local_f8;
  longlong local_e8;
  int local_e0;
  int local_dc;
  int local_d8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_538;
  local_4b0 = param_5;
  uVar34 = 0;
  local_488 = 0;
  bVar37 = -1 < CpuChannel->Enabled;
  local_4d8 = param_1;
  local_4b8 = param_3;
  local_4a8 = this;
  local_480 = param_2;
  if (bVar37) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId118,"UPCGMeshSelectorByAttribute::SelectInstances",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MeshSelectors\\PCGMeshSelectorByAttribute.cpp"
               ,0x76);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId118);
  }
  if (param_3 == (UPCGBasePointData *)0x0) {
    if (1 < (byte)LogPCG._0_1_) {
      pFVar16 = FText::AsLocalizable_Advanced_LocText
                          (&local_1c8,L"PCGMeshSelectorByAttribute",L"InputMissingData",
                           L"Missing input data");
      FText::ToString(pFVar16);
      if (param_1 != (FPCGStaticMeshSpawnerContext *)0x0) {
        FPCGContext::GetTaskName((FPCGContext *)param_1,&local_1d8);
        uVar34 = 3;
        FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_288);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (((uVar34 & 2) != 0) &&
         (uVar34 = (ulonglong)((uint)uVar34 & 0xfffffffd),
         local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_288.Data.AllocatorInstance.Data);
      }
      local_2b8.TextData.Reference = local_1c8.TextData.Reference;
      if (((uVar34 & 1) != 0) &&
         (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
        local_2b8.TextData.Reference = local_1c8.TextData.Reference;
      }
LAB_149e896d1:
      if (local_2b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2b8.TextData.Reference + 0x10))();
      }
    }
  }
  else if ((UPCGMetadata *)param_3->_padding_ == (UPCGMetadata *)0x0) {
    if (1 < (byte)LogPCG._0_1_) {
      pFVar16 = FText::AsLocalizable_Advanced_LocText
                          (&local_338,L"PCGMeshSelectorByAttribute",L"InputMissingMetadata",
                           L"Unable to get metadata from input");
      FText::ToString(pFVar16);
      if (param_1 != (FPCGStaticMeshSpawnerContext *)0x0) {
        FPCGContext::GetTaskName((FPCGContext *)param_1,&local_348);
        uVar34 = 0xc;
        FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_358);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (((uVar34 & 8) != 0) &&
         (uVar34 = (ulonglong)((uint)uVar34 & 0xfffffff7),
         local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_358.Data.AllocatorInstance.Data);
      }
      local_2b8.TextData.Reference = local_338.TextData.Reference;
      if (((uVar34 & 4) != 0) &&
         (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_348.Data.AllocatorInstance.Data);
        local_2b8.TextData.Reference = local_338.TextData.Reference;
      }
      goto LAB_149e896d1;
    }
  }
  else {
    auStack_270._8_4_ = PCGMetadataDomainID::Default.DebugName.ComparisonIndex.Value;
    auStack_270._12_4_ = PCGMetadataDomainID::Default.DebugName.Number;
    auStack_270[0] = PCGMetadataDomainID::Default.Flag;
    auStack_270._1_3_ = PCGMetadataDomainID::Default._1_3_;
    auStack_270._4_4_ = PCGMetadataDomainID::Default.CustomFlag;
    local_278 = this->AttributeName;
    pFVar20 = &this->AttributeName;
    local_258.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
    local_258.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
    local_258.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
    local_258.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
    local_258.Name = local_278;
    bVar8 = UPCGMetadata::HasAttribute((UPCGMetadata *)param_3->_padding_,&local_258);
    if (bVar8) {
      auStack_230._8_4_ = PCGMetadataDomainID::Default.DebugName.ComparisonIndex.Value;
      auStack_230._12_4_ = PCGMetadataDomainID::Default.DebugName.Number;
      auStack_230[0] = PCGMetadataDomainID::Default.Flag;
      auStack_230._1_3_ = PCGMetadataDomainID::Default._1_3_;
      auStack_230._4_4_ = PCGMetadataDomainID::Default.CustomFlag;
      local_238 = *pFVar20;
      local_218.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
      local_218.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
      local_218.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      local_218.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_218.Name = local_238;
      pFVar19 = UPCGMetadata::GetConstAttribute((UPCGMetadata *)param_3->_padding_,&local_218);
      if ((pFVar19 == (FPCGMetadataAttributeBase *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("AttributeBase",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MeshSelectors\\PCGMeshSelectorByAttribute.cpp"
                             ,0x8b,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      if (((ushort)pFVar19->TypeId < 0xff) && ((pFVar19->TypeId - 9U & 0xfffb) == 0)) {
        local_3f8 = &param_1->MaterialOverrideHelper;
        if ((param_1->MaterialOverrideHelper).bIsInitialized == false) {
          FPCGMeshMaterialOverrideHelper::Initialize
                    (local_3f8,(FPCGContext *)param_1,this->bUseAttributeMaterialOverrides,
                     (TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)
                     &(this->TemplateDescriptor)._padding_,&this->MaterialOverrideAttributes,
                     (UPCGMetadata *)local_4b8->_padding_);
        }
        if ((param_1->MaterialOverrideHelper).bIsValid != false) {
          if ((param_1->CurrentPointIndex == 0) && (local_4b0 != (UPCGBasePointData *)0x0)) {
            bVar8 = -1 < CpuChannel->Enabled;
            if (bVar8) {
              FCpuProfilerTrace::GetOrCreateSpecId
                        (&__CpuProfilerEventSpecId162,
                         "UPCGMeshSelectorByAttribute::SetupOutPointData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MeshSelectors\\PCGMeshSelectorByAttribute.cpp"
                         ,0xa2);
              FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId162);
            }
            pUVar5 = local_4b8;
            uVar11 = (**(code **)(local_4b8->_padding_ + 0x488))(local_4b8);
            (**(code **)(local_4b0->_padding_ + 0x490))(local_4b0,uVar11,1);
            lVar25 = pUVar5->_padding_;
            (**(code **)(lVar25 + 0x488))(local_4b8);
            (**(code **)(lVar25 + 0x638))(local_4b8,local_4b0,0,0);
            pUVar7 = local_480;
            auStack_2a0._8_4_ = PCGMetadataDomainID::Default.DebugName.ComparisonIndex.Value;
            auStack_2a0._12_4_ = PCGMetadataDomainID::Default.DebugName.Number;
            auStack_2a0[0] = PCGMetadataDomainID::Default.Flag;
            auStack_2a0._1_3_ = PCGMetadataDomainID::Default._1_3_;
            auStack_2a0._4_4_ = PCGMetadataDomainID::Default.CustomFlag;
            local_378 = local_480->OutAttributeName;
            FStack_370.Flag = PCGMetadataDomainID::Default.Flag;
            FStack_370._1_3_ = PCGMetadataDomainID::Default._1_3_;
            FStack_370.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
            FStack_370.DebugName = PCGMetadataDomainID::Default.DebugName;
            local_2a8 = local_378;
            UPCGMetadata::WithMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(FName),FName_&>
                      ((UPCGMetadata *)local_4b0->_padding_,&FStack_370,(pmf_a3074a3d)0x149e54330,
                       &local_378);
            local_3d8 = *pFVar20;
            FStack_3d0.Flag = PCGMetadataDomainID::Default.Flag;
            FStack_3d0._1_3_ = PCGMetadataDomainID::Default._1_3_;
            FStack_3d0.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
            FStack_3d0.DebugName = PCGMetadataDomainID::Default.DebugName;
            local_1f8.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
            local_1f8.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
            local_1f8.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
            local_1f8.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
            local_1f8.Name = local_3d8;
            UPCGMetadata::CopyAttribute
                      ((UPCGMetadata *)local_4b0->_padding_,(UPCGMetadata *)local_4b8->_padding_,
                       &local_1f8,pUVar7->OutAttributeName);
            if (bVar8) {
              FCpuProfilerTrace::OutputEndEvent();
            }
          }
          bVar8 = -1 < CpuChannel->Enabled;
          if (bVar8) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId172,"UPCGMeshSelectorByAttribute::SelectEntries",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MeshSelectors\\PCGMeshSelectorByAttribute.cpp"
                       ,0xac);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId172);
          }
          if (param_1->bPartitionDone == false) {
            bVar38 = -1 < CpuChannel->Enabled;
            if (bVar38) {
              FCpuProfilerTrace::GetOrCreateSpecId
                        (&__CpuProfilerEventSpecId176,
                         "UPCGMeshSelectorByAttribute::SelectEntries::BuildingPartition",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MeshSelectors\\PCGMeshSelectorByAttribute.cpp"
                         ,0xb0);
              FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId176);
            }
            local_4c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            uVar15 = (local_480->StaticMeshComponentPropertyOverrides).ArrayNum;
            pFVar32 = (FPCGObjectPropertyOverrideDescription *)
                      (local_480->StaticMeshComponentPropertyOverrides).AllocatorInstance.Data;
            local_4c8.ArrayNum = uVar15;
            if (uVar15 == 0) {
              local_4c8.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x50,8,uVar15,0,&local_4c8.AllocatorInstance,uVar15,&local_4c8.ArrayMax);
              ConstructItems<FPCGObjectPropertyOverrideDescription,FPCGObjectPropertyOverrideDescription,int>
                        (local_4c8.AllocatorInstance.Data,pFVar32,uVar15);
            }
            pFVar20 = ::FName::FName(&local_290,10,L"StaticMesh",FNAME_Add);
            local_400 = *pFVar20;
            ::FName::ToString(&local_400,&local_460);
            iVar13 = local_4c8.ArrayNum;
            uVar26 = (ulonglong)local_4c8.ArrayNum;
            pFVar28 = local_4c8.AllocatorInstance.Data + 0x40;
            pFVar32 = (FPCGObjectPropertyOverrideDescription *)
                      (local_4c8.AllocatorInstance.Data + uVar26 * 0x50);
            uVar24 = uVar26;
            while( true ) {
              if ((int)uVar24 != (int)uVar26) {
                local_4e0 = 0;
                `TCheckedPointerIterator<FPCGObjectPropertyOverrideDescription_const_,int,0>::
                operator!='::__l2::<lambda_1>::operator()(&local_4e0);
                uVar24 = (ulonglong)(uint)local_4c8.ArrayNum;
              }
              iVar12 = (int)uVar24;
              if ((FPCGObjectPropertyOverrideDescription *)(pFVar28 + -0x40) == pFVar32) break;
              iVar12 = *(int *)(pFVar28 + 8);
              if (iVar12 == local_460.Data.ArrayNum) {
                if (iVar12 < 2) goto LAB_149e88917;
                iVar12 = FGenericPlatformStricmp::Stricmp
                                   (*(wchar_t **)pFVar28,
                                    (wchar_t *)local_460.Data.AllocatorInstance.Data);
                uVar24 = (ulonglong)(uint)local_4c8.ArrayNum;
                bVar39 = iVar12 == 0;
              }
              else {
                bVar39 = iVar12 + local_460.Data.ArrayNum == 1;
              }
              if (bVar39) goto LAB_149e88917;
              uVar26 = (ulonglong)(uint)iVar13;
              pFVar28 = pFVar28 + 0x50;
            }
            local_17c = 0;
            local_16c = 0;
            FVar29 = PCGMetadataAttributeConstants::LastAttributeName;
            if (PCGMetadataAttributeConstants::LastAttributeName != local_4a8->AttributeName) {
              FVar29 = local_4a8->AttributeName;
            }
            if (iVar12 == local_4c8.ArrayMax) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x850,&local_4c8.AllocatorInstance,&local_4c8.ArrayMax);
            }
            local_4c8.ArrayNum = iVar12 + 1;
            lVar25 = (longlong)iVar12 * 0x50;
            *(undefined8 *)(local_4c8.AllocatorInstance.Data + lVar25 + 0xc) = local_17c;
            *(undefined4 *)(local_4c8.AllocatorInstance.Data + lVar25 + 8) = 0;
            *(undefined8 *)(local_4c8.AllocatorInstance.Data + lVar25 + 0x1c) = local_16c;
            pFVar28 = local_4c8.AllocatorInstance.Data + lVar25 + 0x40;
            *(FName *)(local_4c8.AllocatorInstance.Data + lVar25 + 0x14) = FVar29;
            *(undefined8 *)(local_4c8.AllocatorInstance.Data + lVar25 + 0x28) = 0;
            *(undefined8 *)(local_4c8.AllocatorInstance.Data + lVar25 + 0x30) = 0;
            *(undefined ***)&local_4c8.AllocatorInstance.Data[lVar25].field_0x0 =
                 &___7FPCGAttributePropertyInputSelector__6B_;
            local_4c8.AllocatorInstance.Data[lVar25 + 0x38] = (FScriptContainerElement)0x0;
            *(FScriptContainerElement **)pFVar28 = (FScriptContainerElement *)0x0;
            local_490 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                        local_460.Data.AllocatorInstance.Data;
            *(int *)(pFVar28 + 8) = local_460.Data.ArrayNum;
            if (local_460.Data.ArrayNum == 0) {
              *(int *)(pFVar28 + 0xc) = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_460.Data.ArrayNum,0,(ForAnyElementType *)pFVar28,
                         local_460.Data.ArrayNum,(int *)(pFVar28 + 0xc));
                    /* WARNING: Load size is inaccurate */
              memcpy(*pFVar28,local_490,(longlong)local_460.Data.ArrayNum * 2);
            }
            DestructItems<FString,int>((FString *)0x0,0);
LAB_149e88917:
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              FPCGSoftISMComponentDescriptor::FPCGSoftISMComponentDescriptor(&DummyDescriptor);
              atexit(`UPCGMeshSelectorByAttribute::SelectMeshInstances'::__l105::
                     _dynamic_atexit_destructor_for__DummyDescriptor__);
              _Init_thread_footer(&::_TSS0);
            }
            local_448.OutputKey._padding_ =
                 (longlong)
                 &
                 ___7__FPCGAttributeAccessorKeysSingleObjectPtr_UFPCGSoftISMComponentDescriptor__X__6B_
            ;
            local_448.bPropagateEditChangeEvent = false;
            local_448.CachedOutputObject = (UObject *)0x0;
            local_448.OutputKey._padding_._0_1_ = 0;
            local_448.OutputKey.Ptr = &DummyDescriptor;
            local_448.ObjectSingleOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_448.ObjectSingleOverrides.ArrayNum = 0;
            local_448.ObjectSingleOverrides.ArrayMax = 0;
            local_448.bInitialized = false;
            FPCGObjectOverrides<FPCGSoftISMComponentDescriptor>::Initialize
                      (&local_448,&local_4c8,&DummyDescriptor,(UPCGData *)local_4b8,
                       (FPCGContext *)local_4d8,false);
            FPCGObjectOverrides<FPCGSoftISMComponentDescriptor>::GetAllInputSelectors
                      (&local_448,&local_478);
            iVar13 = local_478.ArrayNum;
            pFVar30 = local_4d8;
            if (local_478.ArrayNum != 0) {
              local_388.DataPtr = (FPCGAttributePropertySelector *)local_478.AllocatorInstance.Data;
              bVar39 = local_480->bSilenceOverrideAttributeNotFoundErrors;
              if ((local_478.ArrayNum < 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar10)) {
                pcVar4 = (code *)swi(3);
                uVar9 = (*pcVar4)();
                return (bool)uVar9;
              }
              pFVar30 = local_4d8;
              local_388.ArrayNum = iVar13;
              pTVar21 = PCGMetadataPartitionCommon::AttributeGenericPartition
                                  (&local_3e8,(UPCGData *)local_4b8,&local_388,
                                   (FPCGContext *)local_4d8,bVar39);
              TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
                        (&pFVar30->AttributeOverridePartition,pTVar21);
              DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                        ((TArray<int,TSizedDefaultAllocator<32>_> *)local_3e8.AllocatorInstance.Data
                         ,local_3e8.ArrayNum);
              if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_3e8.AllocatorInstance.Data !=
                  (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
                FMemory::Free(local_3e8.AllocatorInstance.Data);
              }
            }
            uVar15 = (pFVar30->AttributeOverridePartition).ArrayNum;
            local_490 = (TArray<int,TSizedDefaultAllocator<32>_> *)&pFVar30->OverriddenDescriptors;
            if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
            }
            if ((pFVar30->OverriddenDescriptors).ArrayMax < (int)uVar15) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x280,8,uVar15,(ForAnyElementType *)local_490,
                         (pFVar30->OverriddenDescriptors).ArrayNum,
                         &(pFVar30->OverriddenDescriptors).ArrayMax);
            }
            pTVar36 = local_490;
            local_4e4 = 0;
            if (0 < (pFVar30->AttributeOverridePartition).ArrayNum) {
              local_4a8 = (UPCGMeshSelectorByAttribute *)&local_4a8->TemplateDescriptor;
              uVar24 = uVar34;
              do {
                pUVar6 = local_4a8;
                uVar15 = (uint)uVar24;
                pUVar3 = (UPCGMeshSelectorByAttribute *)(pTVar36->AllocatorInstance).Data;
                if (((pUVar3 <= local_4a8) &&
                    (local_4a8 <
                     (UPCGMeshSelectorByAttribute *)
                     (&pUVar3->_padding_ + (longlong)pTVar36->ArrayMax * 0x50))) &&
                   (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar39)) {
                  pcVar4 = (code *)swi(3);
                  uVar9 = (*pcVar4)();
                  return (bool)uVar9;
                }
                iVar13 = pTVar36->ArrayNum;
                if (iVar13 == pTVar36->ArrayMax) {
                  iVar13 = UE::Core::Private::
                           ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x280,8,&pTVar36->AllocatorInstance,&pTVar36->ArrayMax);
                }
                pTVar36->ArrayNum = iVar13 + 1;
                pFVar22 = FPCGSoftISMComponentDescriptor::FPCGSoftISMComponentDescriptor
                                    ((FPCGSoftISMComponentDescriptor *)
                                     ((pTVar36->AllocatorInstance).Data + (longlong)iVar13 * 0x280),
                                     (FPCGSoftISMComponentDescriptor *)pUVar6);
                uVar27 = ~uVar15 >> 0x1f;
                uVar35 = 0;
                uVar14 = uVar35;
                if ((int)uVar15 < (local_4d8->AttributeOverridePartition).ArrayNum) {
                  uVar14 = uVar27;
                }
                if ((uVar14 == 0) &&
                   (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar39)) {
                  pcVar4 = (code *)swi(3);
                  uVar9 = (*pcVar4)();
                  return (bool)uVar9;
                }
                pFVar30 = local_4d8;
                if (*(int *)((local_4d8->AttributeOverridePartition).AllocatorInstance.Data +
                            uVar34 + 8) != 0) {
                  if ((local_448.bInitialized != false) &&
                     (local_448.ObjectSingleOverrides.ArrayNum != 0)) {
                    local_448.OutputKey._padding_._0_1_ = 0;
                    local_448.OutputKey.Ptr = pFVar22;
                  }
                  uVar14 = uVar35;
                  if ((int)uVar15 < (local_4d8->AttributeOverridePartition).ArrayNum) {
                    uVar14 = uVar27;
                  }
                  if ((uVar14 == 0) &&
                     (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar39)) {
                    pcVar4 = (code *)swi(3);
                    uVar9 = (*pcVar4)();
                    return (bool)uVar9;
                  }
                  if ((*(int *)((pFVar30->AttributeOverridePartition).AllocatorInstance.Data +
                               uVar34 + 8) == 0) &&
                     (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                         ("!Context.AttributeOverridePartition[I].IsEmpty()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MeshSelectors\\PCGMeshSelectorByAttribute.cpp"
                                          ,0xdc,L""), bVar39)) {
                    pcVar4 = (code *)swi(3);
                    uVar9 = (*pcVar4)();
                    return (bool)uVar9;
                  }
                  if ((int)uVar15 < (pFVar30->AttributeOverridePartition).ArrayNum) {
                    uVar35 = uVar27;
                  }
                  if ((uVar35 == 0) &&
                     (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar39)) {
                    pcVar4 = (code *)swi(3);
                    uVar9 = (*pcVar4)();
                    return (bool)uVar9;
                  }
                  pFVar28 = (pFVar30->AttributeOverridePartition).AllocatorInstance.Data;
                  if ((*(int *)(pFVar28 + uVar34 + 8) < 1) &&
                     (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar39)) {
                    pcVar4 = (code *)swi(3);
                    uVar9 = (*pcVar4)();
                    return (bool)uVar9;
                  }
                  iVar13 = local_448.ObjectSingleOverrides.ArrayNum;
                  uVar11 = **(undefined4 **)(pFVar28 + uVar34);
                  pFVar33 = (FPCGObjectSingleOverride *)
                            (local_448.ObjectSingleOverrides.AllocatorInstance.Data +
                            (longlong)local_448.ObjectSingleOverrides.ArrayNum * 0x68);
                  FVar31.Data = local_448.ObjectSingleOverrides.AllocatorInstance.Data;
                  while( true ) {
                    if (local_448.ObjectSingleOverrides.ArrayNum != iVar13) {
                      local_4df[0] = 0;
                      `TCheckedPointerIterator<FPCGObjectSingleOverride,int,0>::operator!='::__l2::
                      <lambda_1>::operator()(local_4df);
                    }
                    uVar15 = local_4e4;
                    if ((FPCGObjectSingleOverride *)FVar31.Data == pFVar33) break;
                    local_408 = (FPCGObjectSingleOverride *)FVar31.Data;
                    pFVar23 = UE::Core::Private::
                              DereferenceIfNecessary<FPCGObjectSingleOverride,FPCGObjectSingleOverride_*>
                                        (&local_408);
                    (*(code *)((FPCGObjectSingleOverride *)FVar31.Data)->ObjectOverrideFunction)
                              (pFVar23,uVar11,&local_448.OutputKey);
                    FVar31.Data = FVar31.Data + 0x68;
                  }
                }
                local_4e4 = uVar15 + 1;
                uVar24 = (ulonglong)local_4e4;
                uVar34 = uVar34 + 0x10;
              } while ((int)local_4e4 < (local_4d8->AttributeOverridePartition).ArrayNum);
            }
            param_1 = local_4d8;
            local_4d8->bPartitionDone = true;
            bVar39 = FPCGAsyncState::ShouldStop((FPCGAsyncState *)&local_4d8->_padding_);
            if (!bVar39) {
              DestructItems<FPCGAttributePropertySelector,int>
                        ((FPCGAttributePropertySelector *)local_478.AllocatorInstance.Data,
                         local_478.ArrayNum);
              if ((FPCGAttributePropertySelector *)local_478.AllocatorInstance.Data !=
                  (FPCGAttributePropertySelector *)0x0) {
                FMemory::Free(local_478.AllocatorInstance.Data);
              }
              DestructItems<FPCGObjectSingleOverride,int>
                        ((FPCGObjectSingleOverride *)
                         local_448.ObjectSingleOverrides.AllocatorInstance.Data,
                         local_448.ObjectSingleOverrides.ArrayNum);
              if ((FPCGObjectSingleOverride *)local_448.ObjectSingleOverrides.AllocatorInstance.Data
                  != (FPCGObjectSingleOverride *)0x0) {
                FMemory::Free(local_448.ObjectSingleOverrides.AllocatorInstance.Data);
              }
              if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_460.Data.AllocatorInstance.Data
                  != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
                FMemory::Free(local_460.Data.AllocatorInstance.Data);
              }
              DestructItems<FPCGObjectPropertyOverrideDescription,int>
                        ((FPCGObjectPropertyOverrideDescription *)local_4c8.AllocatorInstance.Data,
                         local_4c8.ArrayNum);
              if ((FPCGObjectPropertyOverrideDescription *)local_4c8.AllocatorInstance.Data !=
                  (FPCGObjectPropertyOverrideDescription *)0x0) {
                FMemory::Free(local_4c8.AllocatorInstance.Data);
              }
              if (bVar38) {
                FCpuProfilerTrace::OutputEndEvent();
              }
              goto LAB_149e88e51;
            }
            DestructItems<FPCGAttributePropertySelector,int>
                      ((FPCGAttributePropertySelector *)local_478.AllocatorInstance.Data,
                       local_478.ArrayNum);
            if ((FPCGAttributePropertySelector *)local_478.AllocatorInstance.Data !=
                (FPCGAttributePropertySelector *)0x0) {
              FMemory::Free(local_478.AllocatorInstance.Data);
            }
            DestructItems<FPCGObjectSingleOverride,int>
                      ((FPCGObjectSingleOverride *)
                       local_448.ObjectSingleOverrides.AllocatorInstance.Data,
                       local_448.ObjectSingleOverrides.ArrayNum);
            if ((FPCGObjectSingleOverride *)local_448.ObjectSingleOverrides.AllocatorInstance.Data
                != (FPCGObjectSingleOverride *)0x0) {
              FMemory::Free(local_448.ObjectSingleOverrides.AllocatorInstance.Data);
            }
            if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_460.Data.AllocatorInstance.Data !=
                (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
              FMemory::Free(local_460.Data.AllocatorInstance.Data);
            }
            DestructItems<FPCGObjectPropertyOverrideDescription,int>
                      ((FPCGObjectPropertyOverrideDescription *)local_4c8.AllocatorInstance.Data,
                       local_4c8.ArrayNum);
            if ((FPCGObjectPropertyOverrideDescription *)local_4c8.AllocatorInstance.Data !=
                (FPCGObjectPropertyOverrideDescription *)0x0) {
              FMemory::Free(local_4c8.AllocatorInstance.Data);
            }
            if (bVar38) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            bVar38 = false;
          }
          else {
LAB_149e88e51:
            local_4d0 = param_1->CurrentPointIndex;
            bVar38 = -1 < CpuChannel->Enabled;
            if (bVar38) {
              FCpuProfilerTrace::GetOrCreateSpecId
                        (&__CpuProfilerEventSpecId236,
                         "UPCGMeshSelectorByAttribute::SelectEntries::PushingPointsToInstanceLists",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MeshSelectors\\PCGMeshSelectorByAttribute.cpp"
                         ,0xec);
              FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId236);
            }
            pUVar5 = local_4b8;
            (**(code **)(local_4b8->_padding_ + 0x500))(local_4b8,&local_e8);
            (**(code **)(pUVar5->_padding_ + 0x538))(pUVar5,local_128);
            uVar24 = (ulonglong)(int)local_4d0;
            uVar34 = uVar24;
            if ((int)local_4d0 < (param_1->AttributeOverridePartition).ArrayNum) {
              do {
                uVar26 = 0;
                uVar14 = (uint)uVar24;
                local_4d0 = uVar14 + 1;
                local_3f0 = uVar34 + 1;
                uVar15 = 0;
                if ((int)uVar14 < (local_4d8->AttributeOverridePartition).ArrayNum) {
                  uVar15 = ~uVar14 >> 0x1f;
                }
                local_488 = uVar14;
                if ((uVar15 == 0) &&
                   (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar39)) {
                  pcVar4 = (code *)swi(3);
                  uVar9 = (*pcVar4)();
                  return (bool)uVar9;
                }
                pTVar36 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                          ((local_4d8->AttributeOverridePartition).AllocatorInstance.Data +
                          uVar34 * 0x10);
                uVar15 = 0;
                if ((int)uVar14 < (local_4d8->OverriddenDescriptors).ArrayNum) {
                  uVar15 = ~uVar14 >> 0x1f;
                }
                local_490 = pTVar36;
                if ((uVar15 == 0) &&
                   (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar39)) {
                  pcVar4 = (code *)swi(3);
                  uVar9 = (*pcVar4)();
                  return (bool)uVar9;
                }
                local_4a8 = (UPCGMeshSelectorByAttribute *)
                            ((local_4d8->OverriddenDescriptors).AllocatorInstance.Data +
                            uVar34 * 0x280);
                param_1 = local_4d8;
                if ((pTVar36->ArrayNum != 0) &&
                   (plVar1 = &(local_4a8->TemplateDescriptor)._padding_, *plVar1 != 0)) {
                  if ((local_4b0 != (UPCGBasePointData *)0x0) &&
                     (local_480->bApplyMeshBoundsToPoints != false)) {
                    bVar39 = -1 < CpuChannel->Enabled;
                    if (bVar39) {
                      FCpuProfilerTrace::GetOrCreateSpecId
                                (&DAT_155290848,
                                 "UPCGMeshSelectorByAttribute::SelectEntries::PushPointsToApplyMeshBounds"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MeshSelectors\\PCGMeshSelectorByAttribute.cpp"
                                 ,0x101);
                      FCpuProfilerTrace::OutputBeginEvent(DAT_155290848);
                    }
                    local_1b8 = (local_4a8->TemplateDescriptor)._padding_;
                    FSoftObjectPath::FSoftObjectPath(&local_1b0,(FSoftObjectPath *)plVar1);
                    uVar15 = ::GetTypeHash(&local_1b0);
                    if (local_1b0.SubPathString.Data.AllocatorInstance.Data !=
                        (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1b0.SubPathString.Data.AllocatorInstance.Data);
                    }
                    this_00 = TMapBase<TSoftObjectPtr<UStaticMesh>,TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UStaticMesh>,TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,0>_>
                              ::FindOrAddImpl<TSoftObjectPtr<UStaticMesh>_const_&>
                                        ((TMapBase<TSoftObjectPtr<UStaticMesh>,TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UStaticMesh>,TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,0>_>
                                          *)&local_4d8->MeshToOutPoints,uVar15,
                                         (TSoftObjectPtr<UStaticMesh> *)
                                         &(local_4a8->TemplateDescriptor)._padding_);
                    uVar15 = ((uint)((ulonglong)local_4b0 >> 0x14) & 0xffff ^
                             (uint)((ulonglong)local_4b0 >> 4)) * -0x7a143595;
                    uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
                    this_01 = TMapBase<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                              ::FindOrAddImpl<UPCGBasePointData_*_const_&>
                                        ((TMapBase<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                                          *)this_00,uVar15 >> 0x10 ^ uVar15,&local_4b0);
                    TArray<int,TSizedDefaultAllocator<32>_>::Append<int,TSizedDefaultAllocator<32>_>
                              (this_01,pTVar36);
                    if (bVar39) {
                      FCpuProfilerTrace::OutputEndEvent();
                    }
                  }
                  local_4a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_4a0.ArrayNum = 0;
                  local_4a0.ArrayMax = 0;
                  bVar39 = -1 < CpuChannel->Enabled;
                  if (bVar39) {
                    FCpuProfilerTrace::GetOrCreateSpecId
                              (&DAT_15529084c,
                               "UPCGMeshSelectorByAttribute::SelectEntries::BuildReverseInstances",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MeshSelectors\\PCGMeshSelectorByAttribute.cpp"
                               ,0x109);
                    FCpuProfilerTrace::OutputBeginEvent(DAT_15529084c);
                  }
                  iVar13 = pTVar36->ArrayNum;
                  iVar12 = 0;
                  if (0 < iVar13) {
                    local_468 = 0;
                    uVar34 = uVar26;
                    uVar24 = uVar26;
                    do {
                      uVar14 = (uint)uVar24;
                      uVar35 = ~uVar14 >> 0x1f;
                      uVar15 = 0;
                      if ((int)uVar14 < iVar13) {
                        uVar15 = uVar35;
                      }
                      if ((uVar15 == 0) &&
                         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar10)) {
                        pcVar4 = (code *)swi(3);
                        uVar9 = (*pcVar4)();
                        return (bool)uVar9;
                      }
                      uVar15 = *(uint *)((pTVar36->AllocatorInstance).Data + uVar34);
                      uVar27 = 0;
                      if ((int)uVar15 < local_d8) {
                        uVar27 = ~uVar15 >> 0x1f;
                      }
                      if ((uVar27 == 0) &&
                         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < NumElements)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                              ,0x8b,
                                              L"Array index out of bounds: %lld from an array of size %lld"
                                             ), bVar10)) {
                        pcVar4 = (code *)swi(3);
                        uVar9 = (*pcVar4)();
                        return (bool)uVar9;
                      }
                      lVar25 = (longlong)((int)uVar15 % local_dc) * (longlong)local_e0;
                      pdVar2 = (double *)(lVar25 + 0x40 + local_e8);
                      if (0.0 <= pdVar2[1] * *pdVar2 * *(double *)(lVar25 + 0x50 + local_e8)) {
                        uVar15 = (uint)uVar26;
                        if (uVar15 != uVar14) {
                          uVar27 = 0;
                          if ((int)uVar14 < pTVar36->ArrayNum) {
                            uVar27 = uVar35;
                          }
                          if ((uVar27 == 0) &&
                             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar10)) {
                            pcVar4 = (code *)swi(3);
                            uVar9 = (*pcVar4)();
                            return (bool)uVar9;
                          }
                          uVar11 = *(undefined4 *)((pTVar36->AllocatorInstance).Data + uVar34);
                          uVar35 = 0;
                          if ((int)uVar15 < pTVar36->ArrayNum) {
                            uVar35 = ~uVar15 >> 0x1f;
                          }
                          if ((uVar35 == 0) &&
                             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar10)) {
                            pcVar4 = (code *)swi(3);
                            uVar9 = (*pcVar4)();
                            return (bool)uVar9;
                          }
                          *(undefined4 *)((pTVar36->AllocatorInstance).Data + local_468) = uVar11;
                        }
                        uVar26 = (ulonglong)(uVar15 + 1);
                        local_468 = local_468 + 4;
                      }
                      else {
                        uVar15 = 0;
                        if ((int)uVar14 < pTVar36->ArrayNum) {
                          uVar15 = uVar35;
                        }
                        if ((uVar15 == 0) &&
                           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar10)) {
                          pcVar4 = (code *)swi(3);
                          uVar9 = (*pcVar4)();
                          return (bool)uVar9;
                        }
                        pFVar28 = (pTVar36->AllocatorInstance).Data + uVar34;
                        if (((local_4a0.AllocatorInstance.Data <= pFVar28) &&
                            (pFVar28 < local_4a0.AllocatorInstance.Data +
                                       (longlong)local_4a0.ArrayMax * 4)) &&
                           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar10)) {
                          pcVar4 = (code *)swi(3);
                          uVar9 = (*pcVar4)();
                          return (bool)uVar9;
                        }
                        iVar13 = local_4a0.ArrayNum;
                        if (local_4a0.ArrayNum == local_4a0.ArrayMax) {
                          iVar13 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x404,&local_4a0.AllocatorInstance,&local_4a0.ArrayMax
                                             );
                        }
                        local_4a0.ArrayNum = iVar13 + 1;
                        *(undefined4 *)(local_4a0.AllocatorInstance.Data + (longlong)iVar13 * 4) =
                             *(undefined4 *)pFVar28;
                      }
                      iVar13 = pTVar36->ArrayNum;
                      uVar24 = (ulonglong)(uVar14 + 1);
                      uVar34 = uVar34 + 4;
                    } while ((int)(uVar14 + 1) < iVar13);
                    iVar12 = (int)uVar26;
                    pTVar36 = local_490;
                  }
                  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(pTVar36,iVar12,Default);
                  if (bVar39) {
                    FCpuProfilerTrace::OutputEndEvent();
                  }
                  local_3c0 = param_4;
                  local_3b8 = local_4a8;
                  local_3b0 = local_3f8;
                  local_3a8 = &local_e8;
                  local_3a0 = local_128;
                  local_398 = local_488;
                  local_390 = local_4b8;
                  if (CpuChannel->Enabled < 0) {
                    `UPCGMeshSelectorByAttribute::SelectMeshInstances'[::B]::<lambda_2>::operator()
                              (&local_3c0,pTVar36,false);
                    `UPCGMeshSelectorByAttribute::SelectMeshInstances'[::B]::<lambda_2>::operator()
                              (&local_3c0,&local_4a0,true);
                  }
                  else {
                    FCpuProfilerTrace::GetOrCreateSpecId
                              (&__CpuProfilerEventSpecId318,
                               "UPCGMeshSelectorByAttribute::SelectEntries::AddPointsToInstanceList"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MeshSelectors\\PCGMeshSelectorByAttribute.cpp"
                               ,0x13e);
                    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId318);
                    `UPCGMeshSelectorByAttribute::SelectMeshInstances'[::B]::<lambda_2>::operator()
                              (&local_3c0,pTVar36,false);
                    `UPCGMeshSelectorByAttribute::SelectMeshInstances'[::B]::<lambda_2>::operator()
                              (&local_3c0,&local_4a0,true);
                    FCpuProfilerTrace::OutputEndEvent();
                  }
                  param_1 = local_4d8;
                  bVar39 = FPCGAsyncState::ShouldStop((FPCGAsyncState *)&local_4d8->_padding_);
                  if (bVar39) {
                    if (local_4a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_4a0.AllocatorInstance.Data);
                    }
                    break;
                  }
                  if (local_4a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_4a0.AllocatorInstance.Data);
                  }
                }
                uVar24 = (ulonglong)local_4d0;
                uVar34 = local_3f0;
              } while ((int)local_4d0 < (param_1->AttributeOverridePartition).ArrayNum);
            }
            if (bVar38) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            bVar38 = local_4d0 == (param_1->AttributeOverridePartition).ArrayNum;
            param_1->CurrentPointIndex = local_4d0;
          }
          if (bVar8) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          goto LAB_149e896de;
        }
      }
      else if (1 < (byte)LogPCG._0_1_) {
        pFVar16 = FText::FromName(&local_108,pFVar20);
        pFVar17 = FText::AsLocalizable_Advanced_LocText
                            (&local_2b8,L"PCGMeshSelectorByAttribute",L"AttributeInvalidType",
                             L"Attribute \'{0}\' is not of valid type (must be FString or FSoftObjectPath)"
                            );
        pFVar18 = FTextFormat::FTextFormat(&local_148,pFVar17,Default);
        pFVar16 = FText::Format<FText>(&local_2c8,pFVar18,pFVar16);
        FText::ToString(pFVar16);
        if (param_1 != (FPCGStaticMeshSpawnerContext *)0x0) {
          FPCGContext::GetTaskName((FPCGContext *)param_1,&local_2d8);
          uVar34 = 0xc0;
          FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_2e8);
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (((char)uVar34 < '\0') &&
           (uVar34 = (ulonglong)((uint)uVar34 & 0xffffff7f),
           local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
        }
        if (((uVar34 & 0x40) != 0) &&
           (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
        }
        if (local_2c8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_2c8.TextData.Reference + 0x10))();
        }
        goto LAB_149e896d1;
      }
    }
    else if (1 < (byte)LogPCG._0_1_) {
      pFVar16 = FText::FromName(&local_f8,pFVar20);
      pFVar17 = FText::AsLocalizable_Advanced_LocText
                          (&local_2f8,L"PCGMeshSelectorByAttribute",L"AttributeNotInMetadata",
                           L"Attribute \'{0}\' is not in the metadata");
      pFVar18 = FTextFormat::FTextFormat(&local_138,pFVar17,Default);
      pFVar16 = FText::Format<FText>(&local_308,pFVar18,pFVar16);
      FText::ToString(pFVar16);
      if (param_1 != (FPCGStaticMeshSpawnerContext *)0x0) {
        FPCGContext::GetTaskName((FPCGContext *)param_1,&local_318);
        uVar34 = 0x30;
        FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_328);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (((uVar34 & 0x20) != 0) &&
         (uVar34 = (ulonglong)((uint)uVar34 & 0xffffffdf),
         local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_328.Data.AllocatorInstance.Data);
      }
      if (((uVar34 & 0x10) != 0) &&
         (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_318.Data.AllocatorInstance.Data);
      }
      local_2b8.TextData.Reference = local_2f8.TextData.Reference;
      if (local_308.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_308.TextData.Reference + 0x10))();
        local_2b8.TextData.Reference = local_2f8.TextData.Reference;
      }
      goto LAB_149e896d1;
    }
  }
  bVar38 = true;
LAB_149e896de:
  if (bVar37) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar38;
}

// StaticRegisterNativesUPCGMeshSelectorByAttribute @ 149ec1de0

void __cdecl UPCGMeshSelectorByAttribute::StaticRegisterNativesUPCGMeshSelectorByAttribute(void)

{
  return;
}

