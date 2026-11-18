// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 56

// OnDisconnected @ 14ca9ac10

void __thiscall UPreviewGeometry::OnDisconnected(UPreviewGeometry *this)

{
  return;
}

// StaticClass @ 14caa6f00

UClass * __cdecl UPreviewGeometry::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UPreviewGeometry.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"PreviewGeometry",
               &Z_Registration_Info_UClass_UPreviewGeometry.InnerSingleton,
               StaticRegisterNativesUPreviewGeometry,0x120,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UPreviewGeometry>,
               InternalVTableHelperCtorCaller<UPreviewGeometry>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPreviewGeometry.InnerSingleton;
}

// UPreviewGeometry @ 14cacecf0

UPreviewGeometry * __thiscall
UPreviewGeometry::UPreviewGeometry(UPreviewGeometry *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPreviewGeometry__6B_;
  (this->ParentActor).field0_0x0.DebugPtr = (APreviewGeometryActor *)0x0;
  *(undefined8 *)&this->TriangleSets = 0;
  *(undefined8 *)&(this->TriangleSets).field_0x8 = 0;
  *(undefined8 *)&(this->TriangleSets).field_0x20 = 0;
  *(undefined4 *)&(this->TriangleSets).field_0x28 = 0;
  *(undefined4 *)&(this->TriangleSets).field_0x2c = 0x80;
  *(undefined4 *)&(this->TriangleSets).field_0x34 = 0;
  *(undefined4 *)&(this->TriangleSets).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TriangleSets).field_0x40 = 0;
  *(undefined4 *)&(this->TriangleSets).field_0x48 = 0;
  *(undefined8 *)&this->LineSets = 0;
  *(undefined8 *)&(this->LineSets).field_0x8 = 0;
  *(undefined8 *)&(this->LineSets).field_0x20 = 0;
  *(undefined4 *)&(this->LineSets).field_0x28 = 0;
  *(undefined4 *)&(this->LineSets).field_0x2c = 0x80;
  *(undefined4 *)&(this->LineSets).field_0x34 = 0;
  *(undefined4 *)&(this->LineSets).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LineSets).field_0x40 = 0;
  *(undefined4 *)&(this->LineSets).field_0x48 = 0;
  *(undefined8 *)&this->PointSets = 0;
  *(undefined8 *)&(this->PointSets).field_0x8 = 0;
  *(undefined8 *)&(this->PointSets).field_0x20 = 0;
  *(undefined4 *)&(this->PointSets).field_0x28 = 0;
  *(undefined4 *)&(this->PointSets).field_0x2c = 0x80;
  *(undefined4 *)&(this->PointSets).field_0x34 = 0;
  *(undefined4 *)&(this->PointSets).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PointSets).field_0x40 = 0;
  *(undefined4 *)&(this->PointSets).field_0x48 = 0;
  return this;
}

// UPreviewGeometry @ 14cacedd0

UPreviewGeometry * __thiscall
UPreviewGeometry::UPreviewGeometry(UPreviewGeometry *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPreviewGeometry__6B_;
  (this->ParentActor).field0_0x0.DebugPtr = (APreviewGeometryActor *)0x0;
  *(undefined8 *)&this->TriangleSets = 0;
  *(undefined8 *)&(this->TriangleSets).field_0x8 = 0;
  *(undefined8 *)&(this->TriangleSets).field_0x20 = 0;
  *(undefined4 *)&(this->TriangleSets).field_0x28 = 0;
  *(undefined4 *)&(this->TriangleSets).field_0x2c = 0x80;
  *(undefined4 *)&(this->TriangleSets).field_0x34 = 0;
  *(undefined4 *)&(this->TriangleSets).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TriangleSets).field_0x40 = 0;
  *(undefined4 *)&(this->TriangleSets).field_0x48 = 0;
  *(undefined8 *)&this->LineSets = 0;
  *(undefined8 *)&(this->LineSets).field_0x8 = 0;
  *(undefined8 *)&(this->LineSets).field_0x20 = 0;
  *(undefined4 *)&(this->LineSets).field_0x28 = 0;
  *(undefined4 *)&(this->LineSets).field_0x2c = 0x80;
  *(undefined4 *)&(this->LineSets).field_0x34 = 0;
  *(undefined4 *)&(this->LineSets).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LineSets).field_0x40 = 0;
  *(undefined4 *)&(this->LineSets).field_0x48 = 0;
  *(undefined8 *)&this->PointSets = 0;
  *(undefined8 *)&(this->PointSets).field_0x8 = 0;
  *(undefined8 *)&(this->PointSets).field_0x20 = 0;
  *(undefined4 *)&(this->PointSets).field_0x28 = 0;
  *(undefined4 *)&(this->PointSets).field_0x2c = 0x80;
  *(undefined4 *)&(this->PointSets).field_0x34 = 0;
  *(undefined4 *)&(this->PointSets).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PointSets).field_0x40 = 0;
  *(undefined4 *)&(this->PointSets).field_0x48 = 0;
  return this;
}

// ~UPreviewGeometry @ 14cad28d0

void __thiscall UPreviewGeometry::~UPreviewGeometry(UPreviewGeometry *this)

{
  void *pvVar1;
  undefined1 local_res8 [8];
  
  this->_padding_ = (longlong)&___7UPreviewGeometry__6B_;
  if ((this->ParentActor).field0_0x0.DebugPtr != (APreviewGeometryActor *)0x0) {
    `UPreviewGeometry::~UPreviewGeometry'::__l2::<lambda_1>::operator()(local_res8);
  }
  *(undefined4 *)&(this->PointSets).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PointSets).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UPointSetComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UPointSetComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UPointSetComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PointSets);
  *(undefined4 *)&(this->LineSets).field_0x48 = 0;
  pvVar1 = *(void **)&(this->LineSets).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<ULineSetComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<ULineSetComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<ULineSetComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LineSets);
  *(undefined4 *)&(this->TriangleSets).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TriangleSets).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UTriangleSetComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UTriangleSetComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UTriangleSetComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TriangleSets);
  UObject::~UObject((UObject *)this);
  return;
}

// AddLineSet @ 14cae6790

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULineSetComponent * __thiscall UPreviewGeometry::AddLineSet(UPreviewGeometry *this,FString *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ULineSetComponent *pUVar6;
  UMaterialInterface *pUVar7;
  wchar_t *pwVar8;
  TPairInitializer<FString_const_&,TObjectPtr<ULineSetComponent>_&&> local_res8;
  undefined8 local_res18;
  ULineSetComponent *local_res20;
  FString *local_38;
  ULineSetComponent **local_30;
  
  if ((this->ParentActor).field0_0x0.DebugPtr != (APreviewGeometryActor *)0x0) {
    iVar1 = (param_1->Data).ArrayNum;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      pwVar8 = L"";
      iVar5 = 0;
    }
    else {
      pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar8);
    iVar5 = TSet<TTuple<FString,TObjectPtr<ULineSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TObjectPtr<ULineSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>,FDefaultSetAllocator>
                        *)&this->LineSets,uVar4,param_1);
    if (iVar5 == -1) {
      pUVar6 = NewObject<ULineSetComponent>((UObject *)(this->ParentActor).field0_0x0.DebugPtr);
      local_res18 = 0;
      USceneComponent::SetupAttachment
                ((USceneComponent *)pUVar6,
                 *(USceneComponent **)&((this->ParentActor).field0_0x0.DebugPtr)->field_0x1b8,
                 (FName)0x0);
      pUVar7 = ToolSetupUtil::GetDefaultLineComponentMaterial((UInteractiveToolManager *)0x0,true);
      if (pUVar7 != (UMaterialInterface *)0x0) {
        ULineSetComponent::SetLineMaterial(pUVar6,pUVar7);
      }
      UActorComponent::RegisterComponent((UActorComponent *)pUVar6);
      local_res20 = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar6 != (ULineSetComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      local_30 = &local_res20;
      local_38 = param_1;
      TSet<TTuple<FString,TObjectPtr<ULineSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,TObjectPtr<ULineSetComponent>_&&>_>
                ((TSet<TTuple<FString,TObjectPtr<ULineSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>,FDefaultSetAllocator>
                  *)&this->LineSets,&local_res8,(bool *)&local_38);
      return pUVar6;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Drawing\\PreviewGeometryActor.cpp"
                       ,0xa0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (ULineSetComponent *)(*pcVar2)();
      return pUVar6;
    }
  }
  return (ULineSetComponent *)0x0;
}

// AddPointSet @ 14cae6ac0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPointSetComponent * __thiscall
UPreviewGeometry::AddPointSet(UPreviewGeometry *this,FString *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UPointSetComponent *pUVar6;
  UMaterialInterface *pUVar7;
  wchar_t *pwVar8;
  TPairInitializer<FString_const_&,TObjectPtr<UPointSetComponent>_&&> local_res8;
  undefined8 local_res18;
  UPointSetComponent *local_res20;
  FString *local_38;
  UPointSetComponent **local_30;
  
  if ((this->ParentActor).field0_0x0.DebugPtr != (APreviewGeometryActor *)0x0) {
    iVar1 = (param_1->Data).ArrayNum;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      pwVar8 = L"";
      iVar5 = 0;
    }
    else {
      pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar8);
    iVar5 = TSet<TTuple<FString,TObjectPtr<UPointSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TObjectPtr<UPointSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>,FDefaultSetAllocator>
                        *)&this->PointSets,uVar4,param_1);
    if (iVar5 == -1) {
      pUVar6 = NewObject<UPointSetComponent>((UObject *)(this->ParentActor).field0_0x0.DebugPtr);
      local_res18 = 0;
      USceneComponent::SetupAttachment
                ((USceneComponent *)pUVar6,
                 *(USceneComponent **)&((this->ParentActor).field0_0x0.DebugPtr)->field_0x1b8,
                 (FName)0x0);
      pUVar7 = ToolSetupUtil::GetDefaultPointComponentMaterial((UInteractiveToolManager *)0x0,true);
      if (pUVar7 != (UMaterialInterface *)0x0) {
        UPointSetComponent::SetPointMaterial(pUVar6,pUVar7);
      }
      UActorComponent::RegisterComponent((UActorComponent *)pUVar6);
      local_res20 = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar6 != (UPointSetComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      local_30 = &local_res20;
      local_38 = param_1;
      TSet<TTuple<FString,TObjectPtr<UPointSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,TObjectPtr<UPointSetComponent>_&&>_>
                ((TSet<TTuple<FString,TObjectPtr<UPointSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>,FDefaultSetAllocator>
                  *)&this->PointSets,&local_res8,(bool *)&local_38);
      return pUVar6;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Drawing\\PreviewGeometryActor.cpp"
                       ,0x14d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UPointSetComponent *)(*pcVar2)();
      return pUVar6;
    }
  }
  return (UPointSetComponent *)0x0;
}

// AddTriangleSet @ 14cae9300

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UTriangleSetComponent * __thiscall
UPreviewGeometry::AddTriangleSet(UPreviewGeometry *this,FString *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UTriangleSetComponent *pUVar6;
  wchar_t *pwVar7;
  TPairInitializer<FString_const_&,TObjectPtr<UTriangleSetComponent>_&&> local_res8;
  undefined8 local_res18;
  UTriangleSetComponent *local_res20;
  FString *local_38;
  UTriangleSetComponent **local_30;
  
  if ((this->ParentActor).field0_0x0.DebugPtr != (APreviewGeometryActor *)0x0) {
    iVar1 = (param_1->Data).ArrayNum;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      pwVar7 = L"";
      iVar5 = 0;
    }
    else {
      pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar7);
    iVar5 = TSet<TTuple<FString,TObjectPtr<UTriangleSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UTriangleSetComponent>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TObjectPtr<UTriangleSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UTriangleSetComponent>,0>,FDefaultSetAllocator>
                        *)&this->TriangleSets,uVar4,param_1);
    if (iVar5 == -1) {
      pUVar6 = NewObject<UTriangleSetComponent>((UObject *)(this->ParentActor).field0_0x0.DebugPtr);
      local_res18 = 0;
      USceneComponent::SetupAttachment
                ((USceneComponent *)pUVar6,
                 *(USceneComponent **)&((this->ParentActor).field0_0x0.DebugPtr)->field_0x1b8,
                 (FName)0x0);
      UActorComponent::RegisterComponent((UActorComponent *)pUVar6);
      local_res20 = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar6 != (UTriangleSetComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      local_30 = &local_res20;
      local_38 = param_1;
      TSet<TTuple<FString,TObjectPtr<UTriangleSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UTriangleSetComponent>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,TObjectPtr<UTriangleSetComponent>_&&>_>
                ((TSet<TTuple<FString,TObjectPtr<UTriangleSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UTriangleSetComponent>,0>,FDefaultSetAllocator>
                  *)&this->TriangleSets,&local_res8,(bool *)&local_38);
      return pUVar6;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Drawing\\PreviewGeometryActor.cpp"
                       ,0x69,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UTriangleSetComponent *)(*pcVar2)();
      return pUVar6;
    }
  }
  return (UTriangleSetComponent *)0x0;
}

// CreateInWorld @ 14cafe660

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UPreviewGeometry::CreateInWorld(UPreviewGeometry *this,UWorld *param_1,TTransform<double> *param_2)

{
  int iVar1;
  UClass *pUVar2;
  APreviewGeometryActor *pAVar3;
  FString *pFVar4;
  USceneComponent *this_00;
  longlong *plVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  undefined1 auStackY_188 [32];
  TRotator<double> local_158;
  FString local_140;
  FString local_130;
  undefined1 local_118 [128];
  undefined1 local_98 [112];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_158.Roll = 0.0;
  local_158.Pitch = 0.0;
  local_158.Yaw = 0.0;
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_98);
  pUVar2 = APreviewGeometryActor::StaticClass();
  pAVar3 = (APreviewGeometryActor *)
           UWorld::SpawnActor(param_1,pUVar2,&UE::Math::TVector<double>::ZeroVector,&local_158,
                              (FActorSpawnParameters *)local_98);
  if (pAVar3 == (APreviewGeometryActor *)0x0) {
    pAVar3 = (APreviewGeometryActor *)0x0;
  }
  else {
    pUVar2 = APreviewGeometryActor::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(*(longlong *)&pAVar3->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pAVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar2->_padding_)) {
      pFVar4 = GetTypeName<APreviewGeometryActor>(&local_140);
      pwVar7 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<AActor>(&local_130,(AActor *)pAVar3);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar7 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar7,pwVar6);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pAVar3 != (APreviewGeometryActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar3);
  }
  (this->ParentActor).field0_0x0.DebugPtr = pAVar3;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pAVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_USphereComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_118,pUVar2);
  local_118._8_8_ = pAVar3;
  this_00 = (USceneComponent *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_118);
  if (local_118._64_8_ != 0) {
    plVar5 = (longlong *)(local_118 + 0x50);
    if ((longlong *)local_118._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_118._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  AActor::SetRootComponent((AActor *)(this->ParentActor).field0_0x0.DebugPtr,this_00);
  this_00[2].PhysicsVolume.WeakPtr.ObjectIndex = 0x3f800000;
  USceneComponent::SetVisibility(this_00,false,DirtyOnly);
  (**(code **)(this_00->_padding_ + 0x788))(this_00,UCollisionProfile::NoCollision_ProfileName);
  AActor::SetActorTransform
            ((AActor *)(this->ParentActor).field0_0x0.DebugPtr,param_2,false,(FHitResult *)0x0,None)
  ;
  (**(code **)(this->_padding_ + 0x2b0))(this);
  if (local_98._64_8_ != 0) {
    plVar5 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return;
}

// CreateOrUpdateLineSet @ 14caff350

ULineSetComponent * __thiscall
UPreviewGeometry::CreateOrUpdateLineSet
          (UPreviewGeometry *this,FString *param_1,int param_2,
          TFunctionRef<void___cdecl(int,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&)>
          *param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  TObjectPtr<ULineSetComponent> *pTVar3;
  ULineSetComponent *pUVar4;
  TFunctionRef<void___cdecl(int,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&)> local_18;
  
  pTVar3 = TMapBase<FString,TObjectPtr<ULineSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>_>
           ::Find((TMapBase<FString,TObjectPtr<ULineSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>_>
                   *)&this->LineSets,param_1);
  if (((pTVar3 == (TObjectPtr<ULineSetComponent> *)0x0) ||
      (pUVar4 = (pTVar3->field0_0x0).DebugPtr, pUVar4 == (ULineSetComponent *)0x0)) &&
     (pUVar4 = AddLineSet(this,param_1), pUVar4 == (ULineSetComponent *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Drawing\\PreviewGeometryActor.cpp"
                       ,0x139,L"");
    if (!bVar2) {
      return (ULineSetComponent *)0x0;
    }
    pcVar1 = (code *)swi(3);
    pUVar4 = (ULineSetComponent *)(*pcVar1)();
    return pUVar4;
  }
  ULineSetComponent::Clear(pUVar4);
  local_18._0_8_ = *(undefined8 *)param_3;
  local_18._8_8_ = *(undefined8 *)&param_3->field_0x8;
  ULineSetComponent::AddLines(pUVar4,param_2,&local_18,param_4,false);
  return pUVar4;
}

// CreateOrUpdatePointSet @ 14caff420

void __thiscall
UPreviewGeometry::CreateOrUpdatePointSet
          (UPreviewGeometry *this,FString *param_1,int param_2,
          TFunctionRef<void___cdecl(int,TArray<FRenderablePoint,TSizedDefaultAllocator<32>_>_&)>
          *param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  TObjectPtr<UPointSetComponent> *pTVar3;
  UPointSetComponent *this_00;
  TFunctionRef<void___cdecl(int,TArray<FRenderablePoint,TSizedDefaultAllocator<32>_>_&)> local_18;
  
  pTVar3 = TMapBase<FString,TObjectPtr<UPointSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>_>
           ::Find((TMapBase<FString,TObjectPtr<UPointSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>_>
                   *)&this->PointSets,param_1);
  if (((pTVar3 == (TObjectPtr<UPointSetComponent> *)0x0) ||
      (this_00 = (pTVar3->field0_0x0).DebugPtr, this_00 == (UPointSetComponent *)0x0)) &&
     (this_00 = AddPointSet(this,param_1), this_00 == (UPointSetComponent *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Drawing\\PreviewGeometryActor.cpp"
                       ,0x174,L"");
    if (!bVar2) {
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UPointSetComponent::Clear(this_00);
  local_18._0_8_ = *(undefined8 *)param_3;
  local_18._8_8_ = *(undefined8 *)&param_3->field_0x8;
  UPointSetComponent::AddPoints(this_00,param_2,&local_18,param_4,false);
  return;
}

// CreateOrUpdateTriangleSet @ 14caff4f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UTriangleSetComponent * __thiscall
UPreviewGeometry::CreateOrUpdateTriangleSet
          (UPreviewGeometry *this,FString *param_1,int param_2,
          TFunctionRef<void___cdecl(int,TArray<FRenderableTriangle,TSizedDefaultAllocator<32>_>_&)>
          *param_3,int param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  TObjectPtr<UTriangleSetComponent> *pTVar5;
  UTriangleSetComponent *pUVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  FRenderableTriangle *pFVar9;
  int iVar10;
  undefined1 local_res8 [8];
  int local_48 [2];
  ForAnyElementType local_40;
  uint local_38;
  int local_34 [3];
  
  pTVar5 = TMapBase<FString,TObjectPtr<UTriangleSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UTriangleSetComponent>,0>_>
           ::Find((TMapBase<FString,TObjectPtr<UTriangleSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UTriangleSetComponent>,0>_>
                   *)&this->TriangleSets,param_1);
  if (((pTVar5 == (TObjectPtr<UTriangleSetComponent> *)0x0) ||
      (pUVar6 = (pTVar5->field0_0x0).DebugPtr, pUVar6 == (UTriangleSetComponent *)0x0)) &&
     (pUVar6 = AddTriangleSet(this,param_1), pUVar6 == (UTriangleSetComponent *)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Drawing\\PreviewGeometryActor.cpp"
                       ,0x8c,L"");
    if (!bVar4) {
      return (UTriangleSetComponent *)0x0;
    }
    pcVar2 = (code *)swi(3);
    pUVar6 = (UTriangleSetComponent *)(*pcVar2)();
    return pUVar6;
  }
  UTriangleSetComponent::Clear(pUVar6);
  iVar10 = 0;
  pcVar2 = *(code **)param_3;
  uVar1 = *(undefined8 *)&param_3->field_0x8;
  local_34[0] = 0;
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38 = 0;
  if ((0 < param_4) &&
     (TSparseArrayBase<8,4,FDefaultSparseArrayAllocator>::Reserve
                ((TSparseArrayBase<8,4,FDefaultSparseArrayAllocator> *)&pUVar6->Triangles,
                 (param_2 * param_4 - *(int *)&(pUVar6->Triangles).field_0x34) +
                 *(int *)&(pUVar6->Triangles).field_0x8), local_34[0] < param_4)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xe0,8,param_4,&local_40,local_38,local_34);
  }
  if (0 < param_2) {
    do {
      local_38 = 0;
      if ((local_34[0] < 0) && (local_34[0] != 0)) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xe0,8,0,&local_40,0,local_34);
      }
      local_48[0] = iVar10;
      (*pcVar2)(uVar1,local_48);
      uVar3 = local_38;
      uVar7 = (ulonglong)(int)local_38;
      pFVar9 = (FRenderableTriangle *)(local_40.Data + uVar7 * 0xe0);
      FVar8.Data = local_40.Data;
      while( true ) {
        if ((uint)uVar7 != uVar3) {
          `TCheckedPointerIterator<FRenderableTriangle,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if ((FRenderableTriangle *)FVar8.Data == pFVar9) break;
        UTriangleSetComponent::AddTriangleInternal(pUVar6,(FRenderableTriangle *)FVar8.Data);
        uVar7 = (ulonglong)local_38;
        FVar8.Data = FVar8.Data + 0xe0;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < param_2);
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)pUVar6);
  if ((FRenderableTriangle *)local_40.Data != (FRenderableTriangle *)0x0) {
    FMemory::Free(local_40.Data);
  }
  return pUVar6;
}

// Disconnect @ 14cb01ef0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPreviewGeometry::Disconnect(UPreviewGeometry *this)

{
  APreviewGeometryActor *this_00;
  
  (**(code **)(this->_padding_ + 0x2b8))();
  this_00 = (this->ParentActor).field0_0x0.DebugPtr;
  if (this_00 != (APreviewGeometryActor *)0x0) {
    AActor::Destroy((AActor *)this_00,false,true);
    (this->ParentActor).field0_0x0.DebugPtr = (APreviewGeometryActor *)0x0;
  }
  return;
}

// FindLineSet @ 14cb08bd0

ULineSetComponent * __thiscall
UPreviewGeometry::FindLineSet(UPreviewGeometry *this,FString *param_1)

{
  FObjectPtr_u_0 *pFVar1;
  
  pFVar1 = (FObjectPtr_u_0 *)
           TMapBase<FString,TObjectPtr<ULineSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>_>
           ::Find((TMapBase<FString,TObjectPtr<ULineSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>_>
                   *)&this->LineSets,param_1);
  if (pFVar1 != (FObjectPtr_u_0 *)0x0) {
    return (ULineSetComponent *)(FObjectPtr)pFVar1->Handle;
  }
  return (ULineSetComponent *)0x0;
}

// FindPointSet @ 14cb09c40

UPointSetComponent * __thiscall
UPreviewGeometry::FindPointSet(UPreviewGeometry *this,FString *param_1)

{
  FObjectPtr_u_0 *pFVar1;
  
  pFVar1 = (FObjectPtr_u_0 *)
           TMapBase<FString,TObjectPtr<UPointSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>_>
           ::Find((TMapBase<FString,TObjectPtr<UPointSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>_>
                   *)&this->PointSets,param_1);
  if (pFVar1 != (FObjectPtr_u_0 *)0x0) {
    return (UPointSetComponent *)(FObjectPtr)pFVar1->Handle;
  }
  return (UPointSetComponent *)0x0;
}

// FindTriangleSet @ 14cb0a490

UTriangleSetComponent * __thiscall
UPreviewGeometry::FindTriangleSet(UPreviewGeometry *this,FString *param_1)

{
  FObjectPtr_u_0 *pFVar1;
  
  pFVar1 = (FObjectPtr_u_0 *)
           TMapBase<FString,TObjectPtr<UTriangleSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UTriangleSetComponent>,0>_>
           ::Find((TMapBase<FString,TObjectPtr<UTriangleSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UTriangleSetComponent>,0>_>
                   *)&this->TriangleSets,param_1);
  if (pFVar1 != (FObjectPtr_u_0 *)0x0) {
    return (UTriangleSetComponent *)(FObjectPtr)pFVar1->Handle;
  }
  return (UTriangleSetComponent *)0x0;
}

// GetPrivateStaticClass @ 14cb12d60

UClass * __cdecl UPreviewGeometry::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPreviewGeometry.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"PreviewGeometry",
               &Z_Registration_Info_UClass_UPreviewGeometry.InnerSingleton,
               StaticRegisterNativesUPreviewGeometry,0x120,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UPreviewGeometry>,
               InternalVTableHelperCtorCaller<UPreviewGeometry>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPreviewGeometry.InnerSingleton;
}

// GetTransform @ 14cb14a00

TTransform<double> * __thiscall
UPreviewGeometry::GetTransform(UPreviewGeometry *this,TTransform<double> *__return_storage_ptr__)

{
  APreviewGeometryActor *pAVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  TTransform<double> *pTVar12;
  
  pAVar1 = (this->ParentActor).field0_0x0.DebugPtr;
  if (pAVar1 != (APreviewGeometryActor *)0x0) {
    lVar2 = *(longlong *)&pAVar1->field_0x1b8;
    if (lVar2 == 0) {
      pTVar12 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar12 = (TTransform<double> *)(lVar2 + 0x1f0);
    }
    dVar11 = (pTVar12->Rotation).XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (pTVar12->Rotation).XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar11;
    dVar11 = (pTVar12->Rotation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (pTVar12->Rotation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar11;
    dVar11 = (pTVar12->Translation).XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (pTVar12->Translation).XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar11;
    dVar11 = (pTVar12->Translation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (pTVar12->Translation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar11;
    dVar11 = (pTVar12->Scale3D).XY.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (pTVar12->Scale3D).XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar11;
    dVar11 = (pTVar12->Scale3D).ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (pTVar12->Scale3D).ZW.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar11;
    return __return_storage_ptr__;
  }
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar4,0);
  auVar6._0_8_ = (double)fVar3;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar6;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar4,0);
  auVar8._0_8_ = (double)fVar3;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar8;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar4,0);
  auVar10._0_8_ = (double)fVar3;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar10;
  return __return_storage_ptr__;
}

// OnCreated @ 14cb26070

void __thiscall UPreviewGeometry::OnCreated(UPreviewGeometry *this)

{
  return;
}

// RemoveAllLineSets @ 14cb2df30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPreviewGeometry::RemoveAllLineSets(UPreviewGeometry *this,bool param_1)

{
  undefined1 *puVar1;
  TMap<FString,TObjectPtr<ULineSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>_>
  *this_00;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FString,TObjectPtr<ULineSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>_>
  *pTVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  FString *pFVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 local_res10 [8];
  FString local_a8;
  UActorComponent *local_98;
  TMap<FString,TObjectPtr<ULineSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>_>
  *local_90;
  int iStack_88;
  uint uStack_84;
  undefined1 *local_80;
  undefined4 uStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  TMap<FString,TObjectPtr<ULineSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>_>
  *local_60;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_58;
  undefined8 uStack_38;
  
  this_00 = &this->LineSets;
  if (param_1) {
    iVar3 = *(int *)&(this->LineSets).field_0x28;
    iStack_88 = 0;
    local_70 = 0;
    uStack_84 = 1;
    puVar1 = &(this->LineSets).field_0x10;
    iStack_74 = 0;
    if (iVar3 != 0) {
      puVar14 = *(uint **)&(this->LineSets).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)puVar1;
      }
      uVar12 = *puVar14;
      while (uVar12 == 0) {
        lVar8 = (longlong)iStack_88;
        local_70 = local_70 + 0x20;
        iStack_88 = iStack_88 + 1;
        iStack_74 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_88) goto LAB_14cb2dfde;
        uVar12 = puVar14[lVar8 + 1];
      }
      uStack_84 = -uVar12 & uVar12;
      uVar2 = (ulonglong)uStack_84 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iStack_74 = (int)lVar8 + -1 + local_70;
      if (iVar3 < iStack_74) {
        iStack_74 = iVar3;
      }
    }
LAB_14cb2dfde:
    uVar12 = *(uint *)&(this->LineSets).field_0x28;
    uVar11 = uVar12 & 0xffffffe0;
    iStack_68 = *(int *)&(this->LineSets).field_0x8 - *(int *)&(this->LineSets).field_0x34;
    uStack_78 = 0xffffffff;
    TStack_58._padding_ = CONCAT44(uStack_84,iStack_88);
    TStack_58.CurrentBitIndex = iStack_74;
    TStack_58.UnvisitedBitMask = 0xffffffff;
    iVar9 = (int)uVar12 >> 5;
    TStack_58._28_4_ = iStack_74;
    TStack_58.BaseBitIndex = local_70;
    uStack_38 = CONCAT44(uStack_64,iStack_68);
    local_90 = this_00;
    local_80 = puVar1;
    iStack_6c = iStack_74;
    local_60 = this_00;
    TStack_58.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar4 = *(uint *)&(this->LineSets).field_0x28;
    if (uVar12 != uVar4) {
      puVar13 = *(undefined1 **)&(this->LineSets).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar9 * 4);
      while (uVar12 == 0) {
        lVar8 = (longlong)iVar9;
        uVar11 = uVar11 + 0x20;
        iVar9 = iVar9 + 1;
        uVar12 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
        goto LAB_14cb2e0f0;
        uVar12 = *(uint *)(puVar13 + lVar8 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar12 = (int)lVar8 + -1 + uVar11;
      if ((int)uVar4 < (int)uVar12) {
        uVar12 = uVar4;
      }
    }
LAB_14cb2e0f0:
    do {
      pTVar6 = local_60;
      if (*(int *)(&local_60->field_0x0 + 8) - *(int *)(&local_60->field_0x0 + 0x34) !=
          (int)uStack_38) {
        `TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<ULineSetComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_58.CurrentBitIndex == uVar12) &&
          (TStack_58.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar6 == this_00)) break;
      pFVar10 = (FString *)
                (*(longlong *)&pTVar6->field_0x0 + (longlong)TStack_58.CurrentBitIndex * 0x20);
      ::FString::FString(&local_a8,pFVar10);
      local_98 = (UActorComponent *)pFVar10[1].Data.AllocatorInstance.Data;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14cb2e154:
        if (local_98 != (UActorComponent *)0x0) {
          UActorComponent::UnregisterComponent(local_98);
          (**(code **)(local_98->_padding_ + 0x4a0))(local_98,0);
        }
      }
      else if (local_98 != (UActorComponent *)0x0) {
        UE::GC::MarkAsReachable((UObject *)local_98);
        goto LAB_14cb2e154;
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      TStack_58.UnvisitedBitMask = TStack_58.UnvisitedBitMask & ~TStack_58._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_58);
    } while( true );
  }
  TSet<TTuple<FString,TObjectPtr<ULineSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,TObjectPtr<ULineSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>,FDefaultSetAllocator>
           *)this_00);
  return;
}

// RemoveAllPointSets @ 14cb2e1d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPreviewGeometry::RemoveAllPointSets(UPreviewGeometry *this,bool param_1)

{
  undefined1 *puVar1;
  TMap<FString,TObjectPtr<UPointSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>_>
  *this_00;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FString,TObjectPtr<UPointSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>_>
  *pTVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  FString *pFVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 local_res10 [8];
  FString local_a8;
  UActorComponent *local_98;
  TMap<FString,TObjectPtr<UPointSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>_>
  *local_90;
  int iStack_88;
  uint uStack_84;
  undefined1 *local_80;
  undefined4 uStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  TMap<FString,TObjectPtr<UPointSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>_>
  *local_60;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_58;
  undefined8 uStack_38;
  
  this_00 = &this->PointSets;
  if (param_1) {
    iVar3 = *(int *)&(this->PointSets).field_0x28;
    iStack_88 = 0;
    local_70 = 0;
    uStack_84 = 1;
    puVar1 = &(this->PointSets).field_0x10;
    iStack_74 = 0;
    if (iVar3 != 0) {
      puVar14 = *(uint **)&(this->PointSets).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)puVar1;
      }
      uVar12 = *puVar14;
      while (uVar12 == 0) {
        lVar8 = (longlong)iStack_88;
        local_70 = local_70 + 0x20;
        iStack_88 = iStack_88 + 1;
        iStack_74 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_88) goto LAB_14cb2e27e;
        uVar12 = puVar14[lVar8 + 1];
      }
      uStack_84 = -uVar12 & uVar12;
      uVar2 = (ulonglong)uStack_84 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iStack_74 = (int)lVar8 + -1 + local_70;
      if (iVar3 < iStack_74) {
        iStack_74 = iVar3;
      }
    }
LAB_14cb2e27e:
    uVar12 = *(uint *)&(this->PointSets).field_0x28;
    uVar11 = uVar12 & 0xffffffe0;
    iStack_68 = *(int *)&(this->PointSets).field_0x8 - *(int *)&(this->PointSets).field_0x34;
    uStack_78 = 0xffffffff;
    TStack_58._padding_ = CONCAT44(uStack_84,iStack_88);
    TStack_58.CurrentBitIndex = iStack_74;
    TStack_58.UnvisitedBitMask = 0xffffffff;
    iVar9 = (int)uVar12 >> 5;
    TStack_58._28_4_ = iStack_74;
    TStack_58.BaseBitIndex = local_70;
    uStack_38 = CONCAT44(uStack_64,iStack_68);
    local_90 = this_00;
    local_80 = puVar1;
    iStack_6c = iStack_74;
    local_60 = this_00;
    TStack_58.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar4 = *(uint *)&(this->PointSets).field_0x28;
    if (uVar12 != uVar4) {
      puVar13 = *(undefined1 **)&(this->PointSets).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar9 * 4);
      while (uVar12 == 0) {
        lVar8 = (longlong)iVar9;
        uVar11 = uVar11 + 0x20;
        iVar9 = iVar9 + 1;
        uVar12 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
        goto LAB_14cb2e390;
        uVar12 = *(uint *)(puVar13 + lVar8 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar12 = (int)lVar8 + -1 + uVar11;
      if ((int)uVar4 < (int)uVar12) {
        uVar12 = uVar4;
      }
    }
LAB_14cb2e390:
    do {
      pTVar6 = local_60;
      if (*(int *)(&local_60->field_0x0 + 8) - *(int *)(&local_60->field_0x0 + 0x34) !=
          (int)uStack_38) {
        `TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UPointSetComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_58.CurrentBitIndex == uVar12) &&
          (TStack_58.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar6 == this_00)) break;
      pFVar10 = (FString *)
                (*(longlong *)&pTVar6->field_0x0 + (longlong)TStack_58.CurrentBitIndex * 0x20);
      ::FString::FString(&local_a8,pFVar10);
      local_98 = (UActorComponent *)pFVar10[1].Data.AllocatorInstance.Data;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14cb2e3f4:
        if (local_98 != (UActorComponent *)0x0) {
          UActorComponent::UnregisterComponent(local_98);
          (**(code **)(local_98->_padding_ + 0x4a0))(local_98,0);
        }
      }
      else if (local_98 != (UActorComponent *)0x0) {
        UE::GC::MarkAsReachable((UObject *)local_98);
        goto LAB_14cb2e3f4;
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      TStack_58.UnvisitedBitMask = TStack_58.UnvisitedBitMask & ~TStack_58._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_58);
    } while( true );
  }
  TSet<TTuple<FString,TObjectPtr<UPointSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,TObjectPtr<UPointSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>,FDefaultSetAllocator>
           *)this_00);
  return;
}

// RemoveAllTriangleSets @ 14cb2e470

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPreviewGeometry::RemoveAllTriangleSets(UPreviewGeometry *this,bool param_1)

{
  TMap<FString,TObjectPtr<UTriangleSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UTriangleSetComponent>,0>_>
  *this_00;
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FString,TObjectPtr<UTriangleSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UTriangleSetComponent>,0>_>
  *pTVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  FString *pFVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 local_res10 [8];
  FString local_a8;
  UActorComponent *local_98;
  TMap<FString,TObjectPtr<UTriangleSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UTriangleSetComponent>,0>_>
  *local_90;
  int iStack_88;
  uint uStack_84;
  undefined1 *local_80;
  undefined4 uStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  TMap<FString,TObjectPtr<UTriangleSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UTriangleSetComponent>,0>_>
  *local_60;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_58;
  undefined8 uStack_38;
  
  this_00 = &this->TriangleSets;
  if (param_1) {
    iVar3 = *(int *)&(this->TriangleSets).field_0x28;
    iStack_88 = 0;
    local_70 = 0;
    uStack_84 = 1;
    puVar1 = &(this->TriangleSets).field_0x10;
    iStack_74 = 0;
    if (iVar3 != 0) {
      puVar14 = *(uint **)&(this->TriangleSets).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)puVar1;
      }
      uVar12 = *puVar14;
      while (uVar12 == 0) {
        lVar8 = (longlong)iStack_88;
        local_70 = local_70 + 0x20;
        iStack_88 = iStack_88 + 1;
        iStack_74 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_88) goto LAB_14cb2e51d;
        uVar12 = puVar14[lVar8 + 1];
      }
      uStack_84 = -uVar12 & uVar12;
      uVar2 = (ulonglong)uStack_84 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iStack_74 = (int)lVar8 + -1 + local_70;
      if (iVar3 < iStack_74) {
        iStack_74 = iVar3;
      }
    }
LAB_14cb2e51d:
    uVar12 = *(uint *)&(this->TriangleSets).field_0x28;
    uVar11 = uVar12 & 0xffffffe0;
    iStack_68 = *(int *)&(this->TriangleSets).field_0x8 - *(int *)&(this->TriangleSets).field_0x34;
    uStack_78 = 0xffffffff;
    TStack_58._padding_ = CONCAT44(uStack_84,iStack_88);
    TStack_58.CurrentBitIndex = iStack_74;
    TStack_58.UnvisitedBitMask = 0xffffffff;
    iVar9 = (int)uVar12 >> 5;
    TStack_58._28_4_ = iStack_74;
    TStack_58.BaseBitIndex = local_70;
    uStack_38 = CONCAT44(uStack_64,iStack_68);
    local_90 = this_00;
    local_80 = puVar1;
    iStack_6c = iStack_74;
    local_60 = this_00;
    TStack_58.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar4 = *(uint *)&(this->TriangleSets).field_0x28;
    if (uVar12 != uVar4) {
      puVar13 = *(undefined1 **)&(this->TriangleSets).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar9 * 4);
      while (uVar12 == 0) {
        lVar8 = (longlong)iVar9;
        uVar11 = uVar11 + 0x20;
        iVar9 = iVar9 + 1;
        uVar12 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
        goto LAB_14cb2e630;
        uVar12 = *(uint *)(puVar13 + lVar8 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar12 = (int)lVar8 + -1 + uVar11;
      if ((int)uVar4 < (int)uVar12) {
        uVar12 = uVar4;
      }
    }
LAB_14cb2e630:
    do {
      pTVar6 = local_60;
      if (*(int *)(&local_60->field_0x0 + 8) - *(int *)(&local_60->field_0x0 + 0x34) !=
          (int)uStack_38) {
        `TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UTriangleSetComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_58.CurrentBitIndex == uVar12) &&
          (TStack_58.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar6 == this_00)) break;
      pFVar10 = (FString *)
                (*(longlong *)&pTVar6->field_0x0 + (longlong)TStack_58.CurrentBitIndex * 0x20);
      ::FString::FString(&local_a8,pFVar10);
      local_98 = (UActorComponent *)pFVar10[1].Data.AllocatorInstance.Data;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14cb2e694:
        if (local_98 != (UActorComponent *)0x0) {
          UActorComponent::UnregisterComponent(local_98);
          (**(code **)(local_98->_padding_ + 0x4a0))(local_98,0);
        }
      }
      else if (local_98 != (UActorComponent *)0x0) {
        UE::GC::MarkAsReachable((UObject *)local_98);
        goto LAB_14cb2e694;
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      TStack_58.UnvisitedBitMask = TStack_58.UnvisitedBitMask & ~TStack_58._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_58);
    } while( true );
  }
  TSet<TTuple<FString,TObjectPtr<UTriangleSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UTriangleSetComponent>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,TObjectPtr<UTriangleSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UTriangleSetComponent>,0>,FDefaultSetAllocator>
           *)this_00);
  return;
}

// RemoveLineSet @ 14cb2e9b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UPreviewGeometry::RemoveLineSet(UPreviewGeometry *this,FString *param_1,bool param_2)

{
  int iVar1;
  TObjectPtr<ULineSetComponent> this_00;
  uint uVar2;
  TObjectPtr<ULineSetComponent>_u_0 *pTVar3;
  int iVar4;
  wchar_t *pwVar5;
  
  pTVar3 = &TMapBase<FString,TObjectPtr<ULineSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>_>
            ::Find((TMapBase<FString,TObjectPtr<ULineSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>_>
                    *)&this->LineSets,param_1)->field0_0x0;
  if (pTVar3 == (TObjectPtr<ULineSetComponent>_u_0 *)0x0) {
    return false;
  }
  this_00.field0_0x0 = (TObjectPtr<ULineSetComponent>_u_0)pTVar3->DebugPtr;
  if (*(int *)&(this->LineSets).field_0x8 != *(int *)&(this->LineSets).field_0x34) {
    iVar1 = (param_1->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      pwVar5 = L"";
      iVar4 = 0;
    }
    else {
      pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
    TSet<TTuple<FString,TObjectPtr<ULineSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FString>
              ((TSet<TTuple<FString,TObjectPtr<ULineSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>,FDefaultSetAllocator>
                *)&this->LineSets,uVar2,param_1);
  }
  if ((param_2) && (this_00.field0_0x0 != (ULineSetComponent *)0x0)) {
    UActorComponent::UnregisterComponent((UActorComponent *)this_00.field0_0x0);
    (**(code **)(*(longlong *)this_00.field0_0x0 + 0x4a0))(this_00.field0_0x0,0);
  }
  return true;
}

// RemovePointSet @ 14cb2ed30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UPreviewGeometry::RemovePointSet(UPreviewGeometry *this,FString *param_1,bool param_2)

{
  int iVar1;
  TObjectPtr<UPointSetComponent> this_00;
  uint uVar2;
  TObjectPtr<UPointSetComponent>_u_0 *pTVar3;
  int iVar4;
  wchar_t *pwVar5;
  
  pTVar3 = &TMapBase<FString,TObjectPtr<UPointSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>_>
            ::Find((TMapBase<FString,TObjectPtr<UPointSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>_>
                    *)&this->PointSets,param_1)->field0_0x0;
  if (pTVar3 == (TObjectPtr<UPointSetComponent>_u_0 *)0x0) {
    return false;
  }
  this_00.field0_0x0 = (TObjectPtr<UPointSetComponent>_u_0)pTVar3->DebugPtr;
  if (*(int *)&(this->PointSets).field_0x8 != *(int *)&(this->PointSets).field_0x34) {
    iVar1 = (param_1->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      pwVar5 = L"";
      iVar4 = 0;
    }
    else {
      pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
    TSet<TTuple<FString,TObjectPtr<UPointSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FString>
              ((TSet<TTuple<FString,TObjectPtr<UPointSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>,FDefaultSetAllocator>
                *)&this->PointSets,uVar2,param_1);
  }
  if ((param_2) && (this_00.field0_0x0 != (UPointSetComponent *)0x0)) {
    UActorComponent::UnregisterComponent((UActorComponent *)this_00.field0_0x0);
    (**(code **)(*(longlong *)this_00.field0_0x0 + 0x4a0))(this_00.field0_0x0,0);
  }
  return true;
}

// RemoveTriangleSet @ 14cb2f3a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UPreviewGeometry::RemoveTriangleSet(UPreviewGeometry *this,FString *param_1,bool param_2)

{
  int iVar1;
  TObjectPtr<UTriangleSetComponent> this_00;
  uint uVar2;
  TObjectPtr<UTriangleSetComponent>_u_0 *pTVar3;
  int iVar4;
  wchar_t *pwVar5;
  
  pTVar3 = &TMapBase<FString,TObjectPtr<UTriangleSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UTriangleSetComponent>,0>_>
            ::Find((TMapBase<FString,TObjectPtr<UTriangleSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UTriangleSetComponent>,0>_>
                    *)&this->TriangleSets,param_1)->field0_0x0;
  if (pTVar3 == (TObjectPtr<UTriangleSetComponent>_u_0 *)0x0) {
    return false;
  }
  this_00.field0_0x0 = (TObjectPtr<UTriangleSetComponent>_u_0)pTVar3->DebugPtr;
  if (*(int *)&(this->TriangleSets).field_0x8 != *(int *)&(this->TriangleSets).field_0x34) {
    iVar1 = (param_1->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      pwVar5 = L"";
      iVar4 = 0;
    }
    else {
      pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
    TSet<TTuple<FString,TObjectPtr<UTriangleSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UTriangleSetComponent>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FString>
              ((TSet<TTuple<FString,TObjectPtr<UTriangleSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UTriangleSetComponent>,0>,FDefaultSetAllocator>
                *)&this->TriangleSets,uVar2,param_1);
  }
  if ((param_2) && (this_00.field0_0x0 != (UTriangleSetComponent *)0x0)) {
    UActorComponent::UnregisterComponent((UActorComponent *)this_00.field0_0x0);
    (**(code **)(*(longlong *)this_00.field0_0x0 + 0x4a0))(this_00.field0_0x0,0);
  }
  return true;
}

// SetAllLineSetsMaterial @ 14cb348a0

void __thiscall
UPreviewGeometry::SetAllLineSetsMaterial(UPreviewGeometry *this,UMaterialInterface *param_1)

{
  undefined1 *puVar1;
  TMap<FString,TObjectPtr<ULineSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<FString,TObjectPtr<ULineSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>_>
  *pTVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  FString *pFVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  FString local_b8;
  ULineSetComponent *local_a8;
  TMap<FString,TObjectPtr<ULineSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>_>
  *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TMap<FString,TObjectPtr<ULineSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iStack_98 = 0;
  puVar1 = &(this->LineSets).field_0x10;
  iVar4 = *(int *)&(this->LineSets).field_0x28;
  pTVar2 = &this->LineSets;
  uStack_94 = 1;
  local_80 = 0;
  iStack_84 = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(this->LineSets).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    while (uVar13 == 0) {
      lVar9 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_14cb3494d;
      uVar13 = puVar15[lVar9 + 1];
    }
    uStack_94 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uStack_94 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iStack_84 = (int)lVar9 + -1 + local_80;
    if (iVar4 < iStack_84) {
      iStack_84 = iVar4;
    }
  }
LAB_14cb3494d:
  iStack_78 = *(int *)&(this->LineSets).field_0x8 - *(int *)&(this->LineSets).field_0x34;
  uVar13 = *(uint *)&(this->LineSets).field_0x28;
  uStack_88 = 0xffffffff;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar13 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_a0 = pTVar2;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_70 = pTVar2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(this->LineSets).field_0x28;
  if (uVar13 != uVar5) {
    puVar14 = *(undefined1 **)&(this->LineSets).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar10 * 4);
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar10;
      uVar12 = uVar12 + 0x20;
      iVar10 = iVar10 + 1;
      uVar13 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14cb34a50;
      uVar13 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar13 = (int)lVar9 + -1 + uVar12;
    if ((int)uVar5 < (int)uVar13) {
      uVar13 = uVar5;
    }
  }
LAB_14cb34a50:
  do {
    pTVar7 = local_70;
    if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<ULineSetComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_68.CurrentBitIndex == uVar13) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    {
      return;
    }
    pFVar11 = (FString *)(*(longlong *)pTVar7 + (longlong)TStack_68.CurrentBitIndex * 0x20);
    ::FString::FString(&local_b8,pFVar11);
    local_a8 = (ULineSetComponent *)pFVar11[1].Data.AllocatorInstance.Data;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14cb34ab4:
      if (local_a8 != (ULineSetComponent *)0x0) {
        ULineSetComponent::SetLineMaterial(local_a8,param_1);
      }
    }
    else if (local_a8 != (ULineSetComponent *)0x0) {
      UE::GC::MarkAsReachable((UObject *)local_a8);
      goto LAB_14cb34ab4;
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// SetAllPointSetsMaterial @ 14cb34b10

void __thiscall
UPreviewGeometry::SetAllPointSetsMaterial(UPreviewGeometry *this,UMaterialInterface *param_1)

{
  undefined1 *puVar1;
  TMap<FString,TObjectPtr<UPointSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<FString,TObjectPtr<UPointSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>_>
  *pTVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  FString *pFVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  FString local_b8;
  UPointSetComponent *local_a8;
  TMap<FString,TObjectPtr<UPointSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>_>
  *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TMap<FString,TObjectPtr<UPointSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iStack_98 = 0;
  puVar1 = &(this->PointSets).field_0x10;
  iVar4 = *(int *)&(this->PointSets).field_0x28;
  pTVar2 = &this->PointSets;
  uStack_94 = 1;
  local_80 = 0;
  iStack_84 = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(this->PointSets).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    while (uVar13 == 0) {
      lVar9 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_14cb34bbd;
      uVar13 = puVar15[lVar9 + 1];
    }
    uStack_94 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uStack_94 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iStack_84 = (int)lVar9 + -1 + local_80;
    if (iVar4 < iStack_84) {
      iStack_84 = iVar4;
    }
  }
LAB_14cb34bbd:
  iStack_78 = *(int *)&(this->PointSets).field_0x8 - *(int *)&(this->PointSets).field_0x34;
  uVar13 = *(uint *)&(this->PointSets).field_0x28;
  uStack_88 = 0xffffffff;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar13 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_a0 = pTVar2;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_70 = pTVar2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(this->PointSets).field_0x28;
  if (uVar13 != uVar5) {
    puVar14 = *(undefined1 **)&(this->PointSets).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar10 * 4);
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar10;
      uVar12 = uVar12 + 0x20;
      iVar10 = iVar10 + 1;
      uVar13 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14cb34cc0;
      uVar13 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar13 = (int)lVar9 + -1 + uVar12;
    if ((int)uVar5 < (int)uVar13) {
      uVar13 = uVar5;
    }
  }
LAB_14cb34cc0:
  do {
    pTVar7 = local_70;
    if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UPointSetComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_68.CurrentBitIndex == uVar13) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    {
      return;
    }
    pFVar11 = (FString *)(*(longlong *)pTVar7 + (longlong)TStack_68.CurrentBitIndex * 0x20);
    ::FString::FString(&local_b8,pFVar11);
    local_a8 = (UPointSetComponent *)pFVar11[1].Data.AllocatorInstance.Data;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14cb34d24:
      if (local_a8 != (UPointSetComponent *)0x0) {
        UPointSetComponent::SetPointMaterial(local_a8,param_1);
      }
    }
    else if (local_a8 != (UPointSetComponent *)0x0) {
      UE::GC::MarkAsReachable((UObject *)local_a8);
      goto LAB_14cb34d24;
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// SetAllVisible @ 14cb354b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPreviewGeometry::SetAllVisible(UPreviewGeometry *this,bool param_1)

{
  undefined1 *puVar1;
  TMap<FString,TObjectPtr<UPointSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<FString,TObjectPtr<UTriangleSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UTriangleSetComponent>,0>_>
  *pTVar7;
  TMap<FString,TObjectPtr<UTriangleSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UTriangleSetComponent>,0>_>
  *pTVar8;
  TMap<FString,TObjectPtr<ULineSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>_>
  *pTVar9;
  TMap<FString,TObjectPtr<UPointSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>_>
  *pTVar10;
  bool bVar11;
  longlong lVar12;
  int iVar13;
  FString *pFVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_1f8 [8];
  ulonglong local_1f0;
  TMap<FString,TObjectPtr<UTriangleSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UTriangleSetComponent>,0>_>
  *local_1e8;
  TMap<FString,TObjectPtr<ULineSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>_>
  *local_1e0;
  int iStack_1d8;
  uint uStack_1d4;
  undefined1 *local_1d0;
  undefined4 uStack_1c8;
  int iStack_1c4;
  int local_1c0;
  int iStack_1bc;
  int iStack_1b8;
  undefined4 uStack_1b4;
  TMap<FString,TObjectPtr<UTriangleSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UTriangleSetComponent>,0>_>
  *local_1b0;
  int iStack_1a8;
  uint uStack_1a4;
  undefined1 *local_1a0;
  undefined4 uStack_198;
  int iStack_194;
  int local_190;
  int iStack_188;
  undefined4 uStack_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  TMap<FString,TObjectPtr<UTriangleSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UTriangleSetComponent>,0>_>
  *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 uStack_140;
  TMap<FString,TObjectPtr<ULineSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>_>
  *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  TMap<FString,TObjectPtr<UPointSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>_>
  *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  FString local_d8;
  USceneComponent *local_c8;
  FString local_c0;
  USceneComponent *local_b0;
  FString local_a8;
  USceneComponent *local_98;
  undefined4 local_74;
  undefined4 local_54;
  
  iVar4 = *(int *)&(this->TriangleSets).field_0x28;
  puVar1 = &(this->TriangleSets).field_0x10;
  local_1e8 = &this->TriangleSets;
  local_1f0 = 1;
  iStack_1a8 = 0;
  local_190 = 0;
  uStack_1a4 = 1;
  iStack_194 = 0;
  if (iVar4 != 0) {
    puVar18 = *(uint **)&(this->TriangleSets).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uStack_1a4 = *puVar18;
    local_190 = 0;
    while (uStack_1a4 == 0) {
      lVar12 = (longlong)iStack_1a8;
      local_190 = local_190 + 0x20;
      iStack_1a8 = iStack_1a8 + 1;
      uStack_1a4 = 1;
      iStack_194 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1a8) goto LAB_14cb3556d;
      uStack_1a4 = puVar18[lVar12 + 1];
    }
    uStack_1a4 = -uStack_1a4 & uStack_1a4;
    uVar3 = (ulonglong)uStack_1a4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_180 = (int)lVar12;
    iStack_194 = local_190 + -1 + local_180;
    if (iVar4 < iStack_194) {
      iStack_194 = iVar4;
    }
  }
LAB_14cb3556d:
  iStack_188 = *(int *)&(this->TriangleSets).field_0x8 - *(int *)&(this->TriangleSets).field_0x34;
  uVar16 = *(uint *)&(this->TriangleSets).field_0x28;
  uVar15 = uVar16 & 0xffffffe0;
  TStack_160._padding_ = CONCAT44(uStack_1a4,iStack_1a8);
  uStack_198 = 0xffffffff;
  TStack_160.CurrentBitIndex = iStack_194;
  TStack_160.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar16 >> 5;
  TStack_160._28_4_ = local_74;
  TStack_160.BaseBitIndex = local_190;
  uStack_140 = CONCAT44(uStack_184,iStack_188);
  local_1b0 = local_1e8;
  local_1a0 = puVar1;
  local_168 = local_1e8;
  TStack_160.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar7 = local_1e8;
  uVar5 = *(uint *)&(this->TriangleSets).field_0x28;
  if (uVar16 != uVar5) {
    puVar17 = *(undefined1 **)&(this->TriangleSets).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar13 * 4);
    while (uVar16 == 0) {
      lVar12 = (longlong)iVar13;
      uVar15 = uVar15 + 0x20;
      iVar13 = iVar13 + 1;
      uVar16 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14cb35690;
      uVar16 = *(uint *)(puVar17 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_17c = (int)lVar12;
    uVar16 = (uVar15 - 1) + local_17c;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_14cb35690:
  do {
    pTVar8 = local_168;
    if (*(int *)&local_168->field_0x8 - *(int *)&local_168->field_0x34 != (int)uStack_140) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UTriangleSetComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_160.CurrentBitIndex == uVar16) &&
        (TStack_160.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar7))
    break;
    pFVar14 = (FString *)(*(longlong *)pTVar8 + (longlong)TStack_160.CurrentBitIndex * 0x20);
    ::FString::FString(&local_d8,pFVar14);
    local_c8 = (USceneComponent *)pFVar14[1].Data.AllocatorInstance.Data;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14cb356fe:
      if (local_c8 != (USceneComponent *)0x0) {
        USceneComponent::SetVisibility(local_c8,param_1,DirtyOnly);
      }
    }
    else if (local_c8 != (USceneComponent *)0x0) {
      UE::GC::MarkAsReachable((UObject *)local_c8);
      goto LAB_14cb356fe;
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
  } while( true );
  iStack_1d8 = 0;
  local_1c0 = 0;
  puVar1 = &(this->LineSets).field_0x10;
  iVar4 = *(int *)&(this->LineSets).field_0x28;
  local_1e8 = (TMap<FString,TObjectPtr<UTriangleSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UTriangleSetComponent>,0>_>
               *)&this->LineSets;
  uStack_1d4 = (uint)local_1f0;
  iStack_1c4 = 0;
  if (iVar4 != 0) {
    puVar18 = *(uint **)&(this->LineSets).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar16 = *puVar18;
    while (uVar16 == 0) {
      lVar12 = (longlong)iStack_1d8;
      local_1c0 = local_1c0 + 0x20;
      iStack_1d8 = iStack_1d8 + 1;
      iStack_1c4 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1d8) goto LAB_14cb357cd;
      uVar16 = puVar18[lVar12 + 1];
    }
    uStack_1d4 = -uVar16 & uVar16;
    uVar3 = (ulonglong)uStack_1d4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_178 = (int)lVar12;
    iStack_1c4 = local_1c0 + -1 + local_178;
    if (iVar4 < iStack_1c4) {
      iStack_1c4 = iVar4;
    }
  }
LAB_14cb357cd:
  iStack_1bc = local_54;
  iStack_1b8 = *(int *)&(this->LineSets).field_0x8 - *(int *)&(this->LineSets).field_0x34;
  uVar16 = *(uint *)&(this->LineSets).field_0x28;
  uVar15 = uVar16 & 0xffffffe0;
  TStack_130._padding_ = CONCAT44(uStack_1d4,iStack_1d8);
  uStack_1c8 = 0xffffffff;
  TStack_130.CurrentBitIndex = iStack_1c4;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar16 >> 5;
  TStack_130._28_4_ = local_54;
  TStack_130.BaseBitIndex = local_1c0;
  uStack_110 = CONCAT44(uStack_1b4,iStack_1b8);
  local_1e0 = (TMap<FString,TObjectPtr<ULineSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>_>
               *)local_1e8;
  local_1d0 = puVar1;
  local_138 = (TMap<FString,TObjectPtr<ULineSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>_>
               *)local_1e8;
  TStack_130.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar7 = local_1e8;
  uVar5 = *(uint *)&(this->LineSets).field_0x28;
  if (uVar16 != uVar5) {
    puVar17 = *(undefined1 **)&(this->LineSets).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar13 * 4);
    while (uVar16 == 0) {
      lVar12 = (longlong)iVar13;
      uVar15 = uVar15 + 0x20;
      iVar13 = iVar13 + 1;
      uVar16 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14cb358f0;
      uVar16 = *(uint *)(puVar17 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_174 = (int)lVar12;
    uVar16 = (uVar15 - 1) + local_174;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_14cb358f0:
  do {
    pTVar9 = local_138;
    if (*(int *)&local_138->field_0x8 - *(int *)&local_138->field_0x34 != (int)uStack_110) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<ULineSetComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_130.CurrentBitIndex == uVar16) &&
        (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar9 == (TMap<FString,TObjectPtr<ULineSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>_>
                   *)pTVar7)) break;
    pFVar14 = (FString *)(*(longlong *)pTVar9 + (longlong)TStack_130.CurrentBitIndex * 0x20);
    ::FString::FString(&local_c0,pFVar14);
    local_b0 = (USceneComponent *)pFVar14[1].Data.AllocatorInstance.Data;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14cb3595e:
      if (local_b0 != (USceneComponent *)0x0) {
        USceneComponent::SetVisibility(local_b0,param_1,DirtyOnly);
      }
    }
    else if (local_b0 != (USceneComponent *)0x0) {
      UE::GC::MarkAsReachable((UObject *)local_b0);
      goto LAB_14cb3595e;
    }
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  } while( true );
  iStack_1d8 = 0;
  local_1c0 = 0;
  puVar1 = &(this->PointSets).field_0x10;
  iVar4 = *(int *)&(this->PointSets).field_0x28;
  pTVar2 = &this->PointSets;
  iStack_1c4 = 0;
  if (iVar4 != 0) {
    puVar18 = *(uint **)&(this->PointSets).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar16 = *puVar18;
    while (uVar16 == 0) {
      lVar12 = (longlong)iStack_1d8;
      local_1c0 = local_1c0 + 0x20;
      iStack_1d8 = iStack_1d8 + 1;
      iStack_1c4 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1d8) goto LAB_14cb35a22;
      uVar16 = puVar18[lVar12 + 1];
    }
    local_1f0 = (ulonglong)(-uVar16 & uVar16);
    uVar3 = local_1f0 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_170 = (int)lVar12;
    iStack_1c4 = local_1c0 + -1 + local_170;
    if (iVar4 < iStack_1c4) {
      iStack_1c4 = iVar4;
    }
  }
LAB_14cb35a22:
  uVar16 = *(uint *)&(this->PointSets).field_0x28;
  uStack_1d4 = (uint)local_1f0;
  uVar15 = uVar16 & 0xffffffe0;
  iStack_1bc = iStack_194;
  iStack_1b8 = *(int *)&(this->PointSets).field_0x8 - *(int *)&(this->PointSets).field_0x34;
  uStack_1c8 = 0xffffffff;
  TStack_100._padding_ = CONCAT44(uStack_1d4,iStack_1d8);
  TStack_100.CurrentBitIndex = iStack_1c4;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar16 >> 5;
  TStack_100._28_4_ = iStack_194;
  TStack_100.BaseBitIndex = local_1c0;
  uStack_e0 = CONCAT44(uStack_1b4,iStack_1b8);
  local_1e0 = (TMap<FString,TObjectPtr<ULineSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>_>
               *)pTVar2;
  local_1d0 = puVar1;
  local_108 = pTVar2;
  TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(this->PointSets).field_0x28;
  if (uVar16 != uVar5) {
    puVar17 = *(undefined1 **)&(this->PointSets).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar13 * 4);
    while (uVar16 == 0) {
      lVar12 = (longlong)iVar13;
      uVar15 = uVar15 + 0x20;
      iVar13 = iVar13 + 1;
      uVar16 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14cb35b30;
      uVar16 = *(uint *)(puVar17 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar16 = (uVar15 - 1) + (int)lVar12;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_14cb35b30:
  do {
    pTVar10 = local_108;
    if (*(int *)&local_108->field_0x8 - *(int *)&local_108->field_0x34 != (int)uStack_e0) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UPointSetComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1f8);
    }
    if (((TStack_100.CurrentBitIndex == uVar16) &&
        (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar10 == pTVar2)
       ) {
      return;
    }
    pFVar14 = (FString *)(*(longlong *)pTVar10 + (longlong)TStack_100.CurrentBitIndex * 0x20);
    ::FString::FString(&local_a8,pFVar14);
    local_98 = (USceneComponent *)pFVar14[1].Data.AllocatorInstance.Data;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14cb35b9a:
      if (local_98 != (USceneComponent *)0x0) {
        USceneComponent::SetVisibility(local_98,param_1,DirtyOnly);
      }
    }
    else if (local_98 != (USceneComponent *)0x0) {
      UE::GC::MarkAsReachable((UObject *)local_98);
      goto LAB_14cb35b9a;
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  } while( true );
}

// SetLineSetMaterial @ 14cb36c60

bool __thiscall
UPreviewGeometry::SetLineSetMaterial
          (UPreviewGeometry *this,FString *param_1,UMaterialInterface *param_2)

{
  TObjectPtr<ULineSetComponent>_u_0 *pTVar1;
  
  pTVar1 = &TMapBase<FString,TObjectPtr<ULineSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>_>
            ::Find((TMapBase<FString,TObjectPtr<ULineSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>_>
                    *)&this->LineSets,param_1)->field0_0x0;
  if (pTVar1 != (TObjectPtr<ULineSetComponent>_u_0 *)0x0) {
    ULineSetComponent::SetLineMaterial(pTVar1->DebugPtr,param_2);
    return true;
  }
  return false;
}

// SetLineSetVisibility @ 14cb36ca0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UPreviewGeometry::SetLineSetVisibility(UPreviewGeometry *this,FString *param_1,bool param_2)

{
  TObjectPtr<ULineSetComponent>_u_0 *pTVar1;
  
  pTVar1 = &TMapBase<FString,TObjectPtr<ULineSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>_>
            ::Find((TMapBase<FString,TObjectPtr<ULineSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>_>
                    *)&this->LineSets,param_1)->field0_0x0;
  if (pTVar1 != (TObjectPtr<ULineSetComponent>_u_0 *)0x0) {
    USceneComponent::SetVisibility((USceneComponent *)pTVar1->DebugPtr,param_2,DirtyOnly);
    return true;
  }
  return false;
}

// SetPointSetMaterial @ 14cb37630

bool __thiscall
UPreviewGeometry::SetPointSetMaterial
          (UPreviewGeometry *this,FString *param_1,UMaterialInterface *param_2)

{
  TObjectPtr<UPointSetComponent>_u_0 *pTVar1;
  
  pTVar1 = &TMapBase<FString,TObjectPtr<UPointSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>_>
            ::Find((TMapBase<FString,TObjectPtr<UPointSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>_>
                    *)&this->PointSets,param_1)->field0_0x0;
  if (pTVar1 != (TObjectPtr<UPointSetComponent>_u_0 *)0x0) {
    UPointSetComponent::SetPointMaterial(pTVar1->DebugPtr,param_2);
    return true;
  }
  return false;
}

// SetPointSetVisibility @ 14cb37670

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UPreviewGeometry::SetPointSetVisibility(UPreviewGeometry *this,FString *param_1,bool param_2)

{
  TObjectPtr<UPointSetComponent>_u_0 *pTVar1;
  
  pTVar1 = &TMapBase<FString,TObjectPtr<UPointSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>_>
            ::Find((TMapBase<FString,TObjectPtr<UPointSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>_>
                    *)&this->PointSets,param_1)->field0_0x0;
  if (pTVar1 != (TObjectPtr<UPointSetComponent>_u_0 *)0x0) {
    USceneComponent::SetVisibility((USceneComponent *)pTVar1->DebugPtr,param_2,DirtyOnly);
    return true;
  }
  return false;
}

// SetTransform @ 14cb38320

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPreviewGeometry::SetTransform(UPreviewGeometry *this,TTransform<double> *param_1)

{
  APreviewGeometryActor *this_00;
  
  this_00 = (this->ParentActor).field0_0x0.DebugPtr;
  if (this_00 != (APreviewGeometryActor *)0x0) {
    AActor::SetActorTransform((AActor *)this_00,param_1,false,(FHitResult *)0x0,None);
  }
  return;
}

// StaticRegisterNativesUPreviewGeometry @ 14cb3ec30

void __cdecl UPreviewGeometry::StaticRegisterNativesUPreviewGeometry(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x15;
  local_18.DataPtr = Z_Construct_UClass_UPreviewGeometry_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddLineSet @ 14cb4ff80

void __cdecl UPreviewGeometry::execAddLineSet(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ULineSetComponent *pUVar2;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = AddLineSet((UPreviewGeometry *)param_1,&local_18);
  *(ULineSetComponent **)param_3 = pUVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execAddPointSet @ 14cb50030

void __cdecl UPreviewGeometry::execAddPointSet(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UPointSetComponent *pUVar2;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = AddPointSet((UPreviewGeometry *)param_1,&local_18);
  *(UPointSetComponent **)param_3 = pUVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execAddTriangleSet @ 14cb500e0

void __cdecl UPreviewGeometry::execAddTriangleSet(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UTriangleSetComponent *pUVar2;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = AddTriangleSet((UPreviewGeometry *)param_1,&local_18);
  *(UTriangleSetComponent **)param_3 = pUVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execCreateInWorld @ 14cb50190

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

void __cdecl UPreviewGeometry::execCreateInWorld(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  TTransform<double> *pTVar12;
  undefined1 auStack_a8 [32];
  UWorld *local_88 [2];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88[0] = (UWorld *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_78.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_78.Rotation.ZW.m128d_f64[0] = (double)fVar6;
  local_78.Rotation.ZW.m128d_f64[1] = (double)fVar9;
  local_78.Translation.ZW.m128d_f64[0] = (double)fVar7;
  local_78.Translation.ZW.m128d_f64[1] = (double)fVar10;
  local_78.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar4,0);
  local_78.Translation.XY.m128d_f64[0] = (double)fVar2;
  local_78.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  local_78.Scale3D.ZW.m128d_f64[0] = (double)fVar8;
  local_78.Scale3D.ZW.m128d_f64[1] = (double)fVar11;
  local_78.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar5,0);
  local_78.Scale3D.XY.m128d_f64[0] = (double)fVar3;
  local_78.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pTVar12 = &local_78;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar12 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  CreateInWorld((UPreviewGeometry *)param_1,local_88[0],pTVar12);
  return;
}

// execDisconnect @ 14cb508d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UPreviewGeometry::execDisconnect(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2b8))();
  if (*(AActor **)(param_1 + 1) != (AActor *)0x0) {
    AActor::Destroy(*(AActor **)(param_1 + 1),false,true);
    *(undefined8 *)(param_1 + 1) = 0;
  }
  return;
}

// execFindLineSet @ 14cb50920

void __cdecl UPreviewGeometry::execFindLineSet(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType FVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  FString local_18;
  
  puVar7 = (undefined8 *)0x0;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar4 = local_18.Data.ArrayNum + -1;
  FVar2.Data = local_18.Data.AllocatorInstance.Data;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar2.Data);
  iVar4 = TSet<TTuple<FString,TObjectPtr<ULineSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TObjectPtr<ULineSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>,FDefaultSetAllocator>
                      *)&param_1[3].field_0x8,uVar3,&local_18);
  if (iVar4 != -1) {
    lVar5 = (longlong)iVar4 * 0x20 + *(longlong *)&param_1[3].field_0x8;
    puVar6 = (undefined8 *)(lVar5 + 0x10);
    if (lVar5 == 0) {
      puVar6 = puVar7;
    }
    if (puVar6 != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)*puVar6;
    }
  }
  *(undefined8 **)param_3 = puVar7;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execFindPointSet @ 14cb50a20

void __cdecl UPreviewGeometry::execFindPointSet(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType FVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  FString local_18;
  
  puVar7 = (undefined8 *)0x0;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar4 = local_18.Data.ArrayNum + -1;
  FVar2.Data = local_18.Data.AllocatorInstance.Data;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar2.Data);
  iVar4 = TSet<TTuple<FString,TObjectPtr<UPointSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TObjectPtr<UPointSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>,FDefaultSetAllocator>
                      *)&param_1[5].field_0x8,uVar3,&local_18);
  if (iVar4 != -1) {
    lVar5 = (longlong)iVar4 * 0x20 + *(longlong *)&param_1[5].field_0x8;
    puVar6 = (undefined8 *)(lVar5 + 0x10);
    if (lVar5 == 0) {
      puVar6 = puVar7;
    }
    if (puVar6 != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)*puVar6;
    }
  }
  *(undefined8 **)param_3 = puVar7;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execFindTriangleSet @ 14cb50b20

void __cdecl UPreviewGeometry::execFindTriangleSet(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType FVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  FString local_18;
  
  puVar7 = (undefined8 *)0x0;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar4 = local_18.Data.ArrayNum + -1;
  FVar2.Data = local_18.Data.AllocatorInstance.Data;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar2.Data);
  iVar4 = TSet<TTuple<FString,TObjectPtr<UTriangleSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UTriangleSetComponent>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TObjectPtr<UTriangleSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UTriangleSetComponent>,0>,FDefaultSetAllocator>
                      *)&param_1[1].field_0x8,uVar3,&local_18);
  if (iVar4 != -1) {
    lVar5 = (longlong)iVar4 * 0x20 + *(longlong *)&param_1[1].field_0x8;
    puVar6 = (undefined8 *)(lVar5 + 0x10);
    if (lVar5 == 0) {
      puVar6 = puVar7;
    }
    if (puVar6 != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)*puVar6;
    }
  }
  *(undefined8 **)param_3 = puVar7;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetActor @ 14cb50c20

void __cdecl UPreviewGeometry::execGetActor(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 1);
  return;
}

// execRemoveAllLineSets @ 14cb51040

void __cdecl UPreviewGeometry::execRemoveAllLineSets(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RemoveAllLineSets((UPreviewGeometry *)param_1,local_res10[0] != 0);
  return;
}

// execRemoveAllPointSets @ 14cb510d0

void __cdecl
UPreviewGeometry::execRemoveAllPointSets(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RemoveAllPointSets((UPreviewGeometry *)param_1,local_res10[0] != 0);
  return;
}

// execRemoveAllTriangleSets @ 14cb51160

void __cdecl
UPreviewGeometry::execRemoveAllTriangleSets(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RemoveAllTriangleSets((UPreviewGeometry *)param_1,local_res10[0] != 0);
  return;
}

// execRemoveLineSet @ 14cb511f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UPreviewGeometry::execRemoveLineSet(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UActorComponent *this;
  ForAnyElementType FVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  bool bVar8;
  int local_res8 [2];
  FString local_38;
  
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
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar8 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar5 = local_38.Data.ArrayNum + -1;
  FVar2.Data = local_38.Data.AllocatorInstance.Data;
  if (local_38.Data.ArrayNum == 0) {
    iVar5 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar2.Data);
  iVar5 = TSet<TTuple<FString,TObjectPtr<ULineSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TObjectPtr<ULineSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>,FDefaultSetAllocator>
                      *)&param_1[3].field_0x8,uVar4,&local_38);
  if (iVar5 != -1) {
    lVar6 = (longlong)iVar5 * 0x20 + *(longlong *)&param_1[3].field_0x8;
    puVar7 = (undefined8 *)(lVar6 + 0x10);
    if (lVar6 == 0) {
      puVar7 = (undefined8 *)0x0;
    }
    if (puVar7 != (undefined8 *)0x0) {
      this = (UActorComponent *)*puVar7;
      if (*(int *)&param_1[3].field_0x10 != *(int *)&param_1[4].field_0x14) {
        iVar5 = local_38.Data.ArrayNum + -1;
        FVar2.Data = local_38.Data.AllocatorInstance.Data;
        if (local_38.Data.ArrayNum == 0) {
          iVar5 = 0;
          FVar2.Data = (FScriptContainerElement *)L"";
        }
        uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar2.Data);
        TSet<TTuple<FString,TObjectPtr<ULineSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>,FDefaultSetAllocator>
        ::RemoveImpl<FString>
                  ((TSet<TTuple<FString,TObjectPtr<ULineSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>,FDefaultSetAllocator>
                    *)&param_1[3].field_0x8,uVar4,&local_38);
      }
      if ((bVar8) && (this != (UActorComponent *)0x0)) {
        UActorComponent::UnregisterComponent(this);
        (**(code **)(this->_padding_ + 0x4a0))(this,0);
      }
      uVar3 = 1;
      goto LAB_14cb51372;
    }
  }
  uVar3 = 0;
LAB_14cb51372:
  *(undefined1 *)param_3 = uVar3;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execRemovePointSet @ 14cb513b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UPreviewGeometry::execRemovePointSet(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UActorComponent *this;
  ForAnyElementType FVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  bool bVar8;
  int local_res8 [2];
  FString local_38;
  
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
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar8 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar5 = local_38.Data.ArrayNum + -1;
  FVar2.Data = local_38.Data.AllocatorInstance.Data;
  if (local_38.Data.ArrayNum == 0) {
    iVar5 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar2.Data);
  iVar5 = TSet<TTuple<FString,TObjectPtr<UPointSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TObjectPtr<UPointSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>,FDefaultSetAllocator>
                      *)&param_1[5].field_0x8,uVar4,&local_38);
  if (iVar5 != -1) {
    lVar6 = (longlong)iVar5 * 0x20 + *(longlong *)&param_1[5].field_0x8;
    puVar7 = (undefined8 *)(lVar6 + 0x10);
    if (lVar6 == 0) {
      puVar7 = (undefined8 *)0x0;
    }
    if (puVar7 != (undefined8 *)0x0) {
      this = (UActorComponent *)*puVar7;
      if (*(int *)&param_1[5].field_0x10 != *(int *)&param_1[6].field_0x14) {
        iVar5 = local_38.Data.ArrayNum + -1;
        FVar2.Data = local_38.Data.AllocatorInstance.Data;
        if (local_38.Data.ArrayNum == 0) {
          iVar5 = 0;
          FVar2.Data = (FScriptContainerElement *)L"";
        }
        uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar2.Data);
        TSet<TTuple<FString,TObjectPtr<UPointSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>,FDefaultSetAllocator>
        ::RemoveImpl<FString>
                  ((TSet<TTuple<FString,TObjectPtr<UPointSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>,FDefaultSetAllocator>
                    *)&param_1[5].field_0x8,uVar4,&local_38);
      }
      if ((bVar8) && (this != (UActorComponent *)0x0)) {
        UActorComponent::UnregisterComponent(this);
        (**(code **)(this->_padding_ + 0x4a0))(this,0);
      }
      uVar3 = 1;
      goto LAB_14cb51532;
    }
  }
  uVar3 = 0;
LAB_14cb51532:
  *(undefined1 *)param_3 = uVar3;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execRemoveTriangleSet @ 14cb51570

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UPreviewGeometry::execRemoveTriangleSet(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UActorComponent *this;
  ForAnyElementType FVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  bool bVar8;
  int local_res8 [2];
  FString local_38;
  
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
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar8 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar5 = local_38.Data.ArrayNum + -1;
  FVar2.Data = local_38.Data.AllocatorInstance.Data;
  if (local_38.Data.ArrayNum == 0) {
    iVar5 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar2.Data);
  iVar5 = TSet<TTuple<FString,TObjectPtr<UTriangleSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UTriangleSetComponent>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TObjectPtr<UTriangleSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UTriangleSetComponent>,0>,FDefaultSetAllocator>
                      *)&param_1[1].field_0x8,uVar4,&local_38);
  if (iVar5 != -1) {
    lVar6 = (longlong)iVar5 * 0x20 + *(longlong *)&param_1[1].field_0x8;
    puVar7 = (undefined8 *)(lVar6 + 0x10);
    if (lVar6 == 0) {
      puVar7 = (undefined8 *)0x0;
    }
    if (puVar7 != (undefined8 *)0x0) {
      this = (UActorComponent *)*puVar7;
      if (*(int *)&param_1[1].field_0x10 != *(int *)&param_1[2].field_0x14) {
        iVar5 = local_38.Data.ArrayNum + -1;
        FVar2.Data = local_38.Data.AllocatorInstance.Data;
        if (local_38.Data.ArrayNum == 0) {
          iVar5 = 0;
          FVar2.Data = (FScriptContainerElement *)L"";
        }
        uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar2.Data);
        TSet<TTuple<FString,TObjectPtr<UTriangleSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UTriangleSetComponent>,0>,FDefaultSetAllocator>
        ::RemoveImpl<FString>
                  ((TSet<TTuple<FString,TObjectPtr<UTriangleSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UTriangleSetComponent>,0>,FDefaultSetAllocator>
                    *)&param_1[1].field_0x8,uVar4,&local_38);
      }
      if ((bVar8) && (this != (UActorComponent *)0x0)) {
        UActorComponent::UnregisterComponent(this);
        (**(code **)(this->_padding_ + 0x4a0))(this,0);
      }
      uVar3 = 1;
      goto LAB_14cb516df;
    }
  }
  uVar3 = 0;
LAB_14cb516df:
  *(undefined1 *)param_3 = uVar3;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetAllLineSetsMaterial @ 14cb51710

void __cdecl
UPreviewGeometry::execSetAllLineSetsMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMaterialInterface *local_res10;
  
  local_res10 = (UMaterialInterface *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetAllLineSetsMaterial((UPreviewGeometry *)param_1,local_res10);
  return;
}

// execSetAllPointSetsMaterial @ 14cb517a0

void __cdecl
UPreviewGeometry::execSetAllPointSetsMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMaterialInterface *local_res10;
  
  local_res10 = (UMaterialInterface *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetAllPointSetsMaterial((UPreviewGeometry *)param_1,local_res10);
  return;
}

// execSetLineSetMaterial @ 14cb51830

void __cdecl
UPreviewGeometry::execSetLineSetMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType FVar2;
  UMaterialInterface *pUVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  UMaterialInterface *local_res8;
  FString local_28;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res8 = (UMaterialInterface *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar3 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar6 = local_28.Data.ArrayNum + -1;
  FVar2.Data = local_28.Data.AllocatorInstance.Data;
  if (local_28.Data.ArrayNum == 0) {
    iVar6 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar2.Data);
  iVar6 = TSet<TTuple<FString,TObjectPtr<ULineSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TObjectPtr<ULineSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>,FDefaultSetAllocator>
                      *)&param_1[3].field_0x8,uVar5,&local_28);
  if (iVar6 != -1) {
    lVar7 = (longlong)iVar6 * 0x20 + *(longlong *)&param_1[3].field_0x8;
    puVar8 = (undefined8 *)(lVar7 + 0x10);
    if (lVar7 == 0) {
      puVar8 = (undefined8 *)0x0;
    }
    if (puVar8 != (undefined8 *)0x0) {
      ULineSetComponent::SetLineMaterial((ULineSetComponent *)*puVar8,pUVar3);
      uVar4 = 1;
      goto LAB_14cb51953;
    }
  }
  uVar4 = 0;
LAB_14cb51953:
  *(undefined1 *)param_3 = uVar4;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetLineSetVisibility @ 14cb51990

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UPreviewGeometry::execSetLineSetVisibility(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType FVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  bool bVar8;
  int local_res8 [2];
  FString local_28;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar8 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar5 = local_28.Data.ArrayNum + -1;
  FVar2.Data = local_28.Data.AllocatorInstance.Data;
  if (local_28.Data.ArrayNum == 0) {
    iVar5 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar2.Data);
  iVar5 = TSet<TTuple<FString,TObjectPtr<ULineSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TObjectPtr<ULineSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>,FDefaultSetAllocator>
                      *)&param_1[3].field_0x8,uVar4,&local_28);
  if (iVar5 != -1) {
    lVar6 = (longlong)iVar5 * 0x20 + *(longlong *)&param_1[3].field_0x8;
    puVar7 = (undefined8 *)(lVar6 + 0x10);
    if (lVar6 == 0) {
      puVar7 = (undefined8 *)0x0;
    }
    if (puVar7 != (undefined8 *)0x0) {
      USceneComponent::SetVisibility((USceneComponent *)*puVar7,bVar8,DirtyOnly);
      uVar3 = 1;
      goto LAB_14cb51abb;
    }
  }
  uVar3 = 0;
LAB_14cb51abb:
  *(undefined1 *)param_3 = uVar3;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetPointSetMaterial @ 14cb51af0

void __cdecl
UPreviewGeometry::execSetPointSetMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType FVar2;
  UMaterialInterface *pUVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  UMaterialInterface *local_res8;
  FString local_28;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res8 = (UMaterialInterface *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar3 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar6 = local_28.Data.ArrayNum + -1;
  FVar2.Data = local_28.Data.AllocatorInstance.Data;
  if (local_28.Data.ArrayNum == 0) {
    iVar6 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar2.Data);
  iVar6 = TSet<TTuple<FString,TObjectPtr<UPointSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TObjectPtr<UPointSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>,FDefaultSetAllocator>
                      *)&param_1[5].field_0x8,uVar5,&local_28);
  if (iVar6 != -1) {
    lVar7 = (longlong)iVar6 * 0x20 + *(longlong *)&param_1[5].field_0x8;
    puVar8 = (undefined8 *)(lVar7 + 0x10);
    if (lVar7 == 0) {
      puVar8 = (undefined8 *)0x0;
    }
    if (puVar8 != (undefined8 *)0x0) {
      UPointSetComponent::SetPointMaterial((UPointSetComponent *)*puVar8,pUVar3);
      uVar4 = 1;
      goto LAB_14cb51c13;
    }
  }
  uVar4 = 0;
LAB_14cb51c13:
  *(undefined1 *)param_3 = uVar4;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetPointSetVisibility @ 14cb51c50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UPreviewGeometry::execSetPointSetVisibility(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType FVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  bool bVar8;
  int local_res8 [2];
  FString local_28;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar8 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar5 = local_28.Data.ArrayNum + -1;
  FVar2.Data = local_28.Data.AllocatorInstance.Data;
  if (local_28.Data.ArrayNum == 0) {
    iVar5 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar2.Data);
  iVar5 = TSet<TTuple<FString,TObjectPtr<UPointSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TObjectPtr<UPointSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>,FDefaultSetAllocator>
                      *)&param_1[5].field_0x8,uVar4,&local_28);
  if (iVar5 != -1) {
    lVar6 = (longlong)iVar5 * 0x20 + *(longlong *)&param_1[5].field_0x8;
    puVar7 = (undefined8 *)(lVar6 + 0x10);
    if (lVar6 == 0) {
      puVar7 = (undefined8 *)0x0;
    }
    if (puVar7 != (undefined8 *)0x0) {
      USceneComponent::SetVisibility((USceneComponent *)*puVar7,bVar8,DirtyOnly);
      uVar3 = 1;
      goto LAB_14cb51d7b;
    }
  }
  uVar3 = 0;
LAB_14cb51d7b:
  *(undefined1 *)param_3 = uVar3;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 150575f30

bool __thiscall `UPreviewGeometry::~UPreviewGeometry'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4874203864191991791>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4874203864191991791>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

