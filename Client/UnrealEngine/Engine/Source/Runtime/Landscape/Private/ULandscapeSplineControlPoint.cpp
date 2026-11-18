// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 9

// StaticClass @ 145ef03f0

UClass * __cdecl ULandscapeSplineControlPoint::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeSplineControlPoint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeSplineControlPoint",
               &Z_Registration_Info_UClass_ULandscapeSplineControlPoint.InnerSingleton,
               StaticRegisterNativesULandscapeSplineControlPoint,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULandscapeSplineControlPoint>,
               InternalVTableHelperCtorCaller<ULandscapeSplineControlPoint>,local_res8,
               UObject::StaticClass,ULandscapeSplinesComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeSplineControlPoint.InnerSingleton;
}

// ULandscapeSplineControlPoint @ 145ef3da0

ULandscapeSplineControlPoint * __thiscall
ULandscapeSplineControlPoint::ULandscapeSplineControlPoint
          (ULandscapeSplineControlPoint *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->LayerWidthRatio = 1.0;
  this->_padding_ = (longlong)&___7ULandscapeSplineControlPoint__6B_;
  (this->ConnectedSegments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConnectedSegments).ArrayNum = 0;
  (this->ConnectedSegments).ArrayMax = 0;
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  (this->Bounds).IsValid = '\0';
  (this->LocalMeshComponent).field0_0x0.DebugPtr = (UControlPointMeshComponent *)0x0;
  this->LeftSideFalloffFactor = 1.0;
  this->RightSideFalloffFactor = 1.0;
  this->LeftSideLayerFalloffFactor = 0.5;
  this->RightSideLayerFalloffFactor = 0.5;
  return this;
}

// ~ULandscapeSplineControlPoint @ 145ef4490

void __thiscall
ULandscapeSplineControlPoint::~ULandscapeSplineControlPoint(ULandscapeSplineControlPoint *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULandscapeSplineControlPoint__6B_;
  pFVar1 = (this->Points).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConnectedSegments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 145ef5b90

UClass * __cdecl ULandscapeSplineControlPoint::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeSplineControlPoint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeSplineControlPoint",
               &Z_Registration_Info_UClass_ULandscapeSplineControlPoint.InnerSingleton,
               StaticRegisterNativesULandscapeSplineControlPoint,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULandscapeSplineControlPoint>,
               InternalVTableHelperCtorCaller<ULandscapeSplineControlPoint>,local_res8,
               UObject::StaticClass,ULandscapeSplinesComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeSplineControlPoint.InnerSingleton;
}

// Serialize @ 145ef5f00

void __thiscall
ULandscapeSplineControlPoint::Serialize
          (ULandscapeSplineControlPoint *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesULandscapeSplineControlPoint @ 145ef60b0

void __cdecl ULandscapeSplineControlPoint::StaticRegisterNativesULandscapeSplineControlPoint(void)

{
  return;
}

// ULandscapeSplineControlPoint @ 145fb5480

ULandscapeSplineControlPoint * __thiscall
ULandscapeSplineControlPoint::ULandscapeSplineControlPoint
          (ULandscapeSplineControlPoint *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->LayerWidthRatio = 1.0;
  this->_padding_ = (longlong)&___7ULandscapeSplineControlPoint__6B_;
  (this->ConnectedSegments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConnectedSegments).ArrayNum = 0;
  (this->ConnectedSegments).ArrayMax = 0;
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  (this->Bounds).IsValid = '\0';
  (this->LocalMeshComponent).field0_0x0.DebugPtr = (UControlPointMeshComponent *)0x0;
  this->LeftSideFalloffFactor = 1.0;
  this->RightSideFalloffFactor = 1.0;
  this->LeftSideLayerFalloffFactor = 0.5;
  this->RightSideLayerFalloffFactor = 0.5;
  this->Width = 1000.0;
  this->SideFalloff = 1000.0;
  this->EndFalloff = 2000.0;
  return this;
}

// PostLoad @ 145fc6160

void __thiscall ULandscapeSplineControlPoint::PostLoad(ULandscapeSplineControlPoint *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(ULandscapeSplineControlPoint **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// Serialize @ 145fc7e30

void __thiscall
ULandscapeSplineControlPoint::Serialize(ULandscapeSplineControlPoint *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FLandscapeCustomVersion::GUID);
                    /* WARNING: Could not recover jumptable at 0x000145fc7e63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))
            (param_1,&FFortniteReleaseBranchCustomObjectVersion::GUID);
  return;
}

