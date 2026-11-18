// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 14

// StaticClass @ 145ef2360

UClass * __cdecl ULandscapeSplineSegment::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeSplineSegment.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeSplineSegment",
               &Z_Registration_Info_UClass_ULandscapeSplineSegment.InnerSingleton,
               StaticRegisterNativesULandscapeSplineSegment,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULandscapeSplineSegment>,
               InternalVTableHelperCtorCaller<ULandscapeSplineSegment>,local_res8,
               UObject::StaticClass,ULandscapeSplinesComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeSplineSegment.InnerSingleton;
}

// ULandscapeSplineSegment @ 145ef3e50

ULandscapeSplineSegment * __thiscall
ULandscapeSplineSegment::ULandscapeSplineSegment
          (ULandscapeSplineSegment *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULandscapeSplineSegment__6B_;
  this->Connections[0].ControlPoint.field0_0x0.DebugPtr = (ULandscapeSplineControlPoint *)0x0;
  this->Connections[0].TangentLen = 0.0;
  this->Connections[0].SocketName.ComparisonIndex = 0;
  this->Connections[0].SocketName.Number = 0;
  this->Connections[1].ControlPoint.field0_0x0.DebugPtr = (ULandscapeSplineControlPoint *)0x0;
  this->Connections[1].TangentLen = 0.0;
  this->Connections[1].SocketName.ComparisonIndex = 0;
  this->Connections[1].SocketName.Number = 0;
  *(undefined8 *)&this->SplineInfo = 0;
  *(undefined8 *)&(this->SplineInfo).field_0x8 = 0;
  (this->SplineInfo).field_0x10 = 0;
  *(undefined4 *)&(this->SplineInfo).field_0x14 = 0;
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  (this->Bounds).IsValid = '\0';
  (this->LocalMeshComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalMeshComponents).ArrayNum = 0;
  (this->LocalMeshComponents).ArrayMax = 0;
  return this;
}

// ~ULandscapeSplineSegment @ 145ef44f0

void __thiscall ULandscapeSplineSegment::~ULandscapeSplineSegment(ULandscapeSplineSegment *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULandscapeSplineSegment__6B_;
  pFVar1 = (this->LocalMeshComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Points).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(void **)&this->SplineInfo != (void *)0x0) {
    FMemory::Free(*(void **)&this->SplineInfo);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 145ef5d10

UClass * __cdecl ULandscapeSplineSegment::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeSplineSegment.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeSplineSegment",
               &Z_Registration_Info_UClass_ULandscapeSplineSegment.InnerSingleton,
               StaticRegisterNativesULandscapeSplineSegment,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULandscapeSplineSegment>,
               InternalVTableHelperCtorCaller<ULandscapeSplineSegment>,local_res8,
               UObject::StaticClass,ULandscapeSplinesComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeSplineSegment.InnerSingleton;
}

// Serialize @ 145ef5f30

void __thiscall
ULandscapeSplineSegment::Serialize(ULandscapeSplineSegment *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesULandscapeSplineSegment @ 145ef60d0

void __cdecl ULandscapeSplineSegment::StaticRegisterNativesULandscapeSplineSegment(void)

{
  return;
}

// ULandscapeSplineSegment @ 145fb5540

ULandscapeSplineSegment * __thiscall
ULandscapeSplineSegment::ULandscapeSplineSegment
          (ULandscapeSplineSegment *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULandscapeSplineSegment__6B_;
  this->Connections[0].SocketName.ComparisonIndex = 0;
  this->Connections[0].SocketName.Number = 0;
  this->Connections[1].SocketName.ComparisonIndex = 0;
  this->Connections[1].SocketName.Number = 0;
  *(undefined8 *)&this->SplineInfo = 0;
  *(undefined8 *)&(this->SplineInfo).field_0x8 = 0;
  (this->SplineInfo).field_0x10 = 0;
  *(undefined4 *)&(this->SplineInfo).field_0x14 = 0;
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  (this->Bounds).IsValid = '\0';
  (this->LocalMeshComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalMeshComponents).ArrayNum = 0;
  (this->LocalMeshComponents).ArrayMax = 0;
  this->Connections[0].ControlPoint.field0_0x0.DebugPtr = (ULandscapeSplineControlPoint *)0x0;
  this->Connections[0].TangentLen = 0.0;
  this->Connections[1].ControlPoint.field0_0x0.DebugPtr = (ULandscapeSplineControlPoint *)0x0;
  this->Connections[1].TangentLen = 0.0;
  return this;
}

// Evaluate @ 145fbea50

TVector<double> * __thiscall
ULandscapeSplineSegment::Evaluate
          (ULandscapeSplineSegment *this,TVector<double> *__return_storage_ptr__,float param_1,
          TVector<double> *param_2)

{
  FInterpCurve<UE::Math::TVector<double>_>::Eval
            ((FInterpCurve<UE::Math::TVector<double>_> *)&this->SplineInfo,__return_storage_ptr__,
             param_1,param_2);
  return __return_storage_ptr__;
}

// FindNearest @ 145fbf810

void __thiscall
ULandscapeSplineSegment::FindNearest
          (ULandscapeSplineSegment *this,TVector<double> *param_1,float *param_2,
          TVector<double> *param_3,TVector<double> *param_4)

{
  FInterpCurveVector *this_00;
  code *pcVar1;
  int iVar2;
  double dVar3;
  bool bVar4;
  TVector<double> *pTVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float local_res8 [2];
  float local_res18 [4];
  TVector<double> local_78;
  TVector<double> local_60 [2];
  
  this_00 = &this->SplineInfo;
  iVar6 = *(int *)&(this->SplineInfo).field_0x8;
  iVar2 = iVar6;
  if ((this->SplineInfo).field_0x10 == '\0') {
    iVar2 = iVar6 + -1;
  }
  if (iVar6 < 2) {
    if (iVar6 == 1) {
      if ((*(int *)&(this->SplineInfo).field_0x8 < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      fVar7 = **(float **)&this_00->field_0x0;
    }
    else {
      fVar7 = 0.0;
    }
  }
  else {
    fVar7 = FInterpCurve<UE::Math::TVector<double>_>::FindNearestOnSegment
                      ((FInterpCurve<UE::Math::TVector<double>_> *)this_00,param_1,0,local_res8);
    iVar6 = 1;
    if (1 < iVar2) {
      do {
        fVar8 = FInterpCurve<UE::Math::TVector<double>_>::FindNearestOnSegment
                          ((FInterpCurve<UE::Math::TVector<double>_> *)this_00,param_1,iVar6,
                           local_res18);
        if (local_res18[0] < local_res8[0]) {
          local_res8[0] = local_res18[0];
          fVar7 = fVar8;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar2);
    }
  }
  *param_2 = fVar7;
  pTVar5 = FInterpCurve<UE::Math::TVector<double>_>::Eval
                     ((FInterpCurve<UE::Math::TVector<double>_> *)this_00,&local_78,fVar7,
                      &UE::Math::TVector<double>::ZeroVector);
  dVar3 = (pTVar5->field0_0x0)._s_0.Y;
  (param_3->field0_0x0)._s_0.X = (pTVar5->field0_0x0)._s_0.X;
  (param_3->field0_0x0)._s_0.Y = dVar3;
  (param_3->field0_0x0)._s_0.Z = (pTVar5->field0_0x0)._s_0.Z;
  pTVar5 = FInterpCurve<UE::Math::TVector<double>_>::EvalDerivative
                     ((FInterpCurve<UE::Math::TVector<double>_> *)this_00,local_60,*param_2,
                      &UE::Math::TVector<double>::ZeroVector);
  dVar3 = (pTVar5->field0_0x0)._s_0.Y;
  (param_4->field0_0x0)._s_0.X = (pTVar5->field0_0x0)._s_0.X;
  (param_4->field0_0x0)._s_0.Y = dVar3;
  (param_4->field0_0x0)._s_0.Z = (pTVar5->field0_0x0)._s_0.Z;
  return;
}

// GetKeyInterval @ 145fc2190

FFloatInterval __thiscall ULandscapeSplineSegment::GetKeyInterval(ULandscapeSplineSegment *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FFloatInterval FVar4;
  uint uVar5;
  FFloatInterval in_RDX;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar1 = *(int *)&(this->SplineInfo).field_0x8;
  uVar6 = __real_7f7fffff;
  uVar7 = __real_ff7fffff;
  if (iVar1 != 0) {
    uVar5 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar5 = ~(iVar1 - 1U) >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FFloatInterval)(*pcVar2)();
      return FVar4;
    }
    iVar1 = *(int *)&(this->SplineInfo).field_0x8;
    uVar7 = *(undefined4 *)((longlong)iVar1 * 0x58 + -0x58 + *(longlong *)&this->SplineInfo);
    if ((iVar1 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FFloatInterval)(*pcVar2)();
      return FVar4;
    }
    uVar6 = **(undefined4 **)&this->SplineInfo;
  }
  *(undefined4 *)in_RDX = uVar6;
  *(undefined4 *)((longlong)in_RDX + 4) = uVar7;
  return in_RDX;
}

// PostInitProperties @ 145fc6150

void __thiscall ULandscapeSplineSegment::PostInitProperties(ULandscapeSplineSegment *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  ULandscapeSplineSegment *pUStack_28;
  code *pcStack_20;
  undefined1 *puStack_18;
  
  puVar5 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_18 = auStackX_8;
  pcStack_20 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_20,puVar5);
  FVar1 = (FTlsAutoCleanup)(pFVar6 + 0xb);
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  pUStack_28 = this;
  if (((ulonglong)FVar7 <= &pUStack_28) &&
     (&pUStack_28 <
      (ULandscapeSplineSegment **)((longlong)FVar7 + (longlong)*(int *)&pFVar6[0x1c].field_0x4 * 8))
     ) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)(pFVar6 + 0x1c);
  if (iVar4 == *(int *)&pFVar6[0x1c].field_0x4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                      (0x808,(ForElementType<UObject_*> *)FVar1,(int *)&pFVar6[0x1c].field_0x4);
  }
  *(int *)(pFVar6 + 0x1c) = iVar4 + 1;
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  *(ULandscapeSplineSegment **)((longlong)FVar7 + (longlong)iVar4 * 8) = pUStack_28;
  (**(code **)(*(longlong *)this->_padding_ + 0x3a8))((longlong *)this->_padding_,this,1,0,0);
  if (FOverridableManager::OverridableManager != (FOverridableManager *)0x0) {
    FOverridableManager::ClearOverrides
              (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)this);
  }
  return;
}

// PostLoad @ 145fc6170

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ULandscapeSplineSegment::PostLoad(ULandscapeSplineSegment *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UPrimitiveComponent *this_00;
  FName FVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res10 [24];
  
  UObject::PostLoad((UObject *)this);
  if (SplinesAlwaysUseBlockAll != 0) {
    pFVar5 = (this->LocalMeshComponents).AllocatorInstance.Data;
    iVar2 = (this->LocalMeshComponents).ArrayNum;
    pFVar1 = pFVar5 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->LocalMeshComponents).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<USplineMeshComponent>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      FVar3 = UCollisionProfile::BlockAll_ProfileName;
      if (pFVar5 == pFVar1) break;
      this_00 = *(UPrimitiveComponent **)pFVar5;
      FVar4 = UPrimitiveComponent::GetCollisionProfileName(this_00);
      if (*(FName *)FVar4 != FVar3) {
        (**(code **)(*(longlong *)this_00 + 0x788))(this_00,FVar3,1);
      }
      pFVar5 = pFVar5 + 8;
    }
  }
  return;
}

// Serialize @ 145fc7e70

void __thiscall ULandscapeSplineSegment::Serialize(ULandscapeSplineSegment *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FLandscapeCustomVersion::GUID);
                    /* WARNING: Could not recover jumptable at 0x000145fc7ea3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))
            (param_1,&FFortniteReleaseBranchCustomObjectVersion::GUID);
  return;
}

// UpdateMeshCollisionProfile @ 145fca9d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
ULandscapeSplineSegment::UpdateMeshCollisionProfile
          (ULandscapeSplineSegment *this,USplineMeshComponent *param_1)

{
  FName FVar1;
  FName FVar2;
  
  FVar1 = UCollisionProfile::BlockAll_ProfileName;
  FVar2 = UPrimitiveComponent::GetCollisionProfileName((UPrimitiveComponent *)param_1);
  if (*(FName *)FVar2 != FVar1) {
    (**(code **)(param_1->_padding_ + 0x788))(param_1,FVar1,1);
  }
  return;
}

