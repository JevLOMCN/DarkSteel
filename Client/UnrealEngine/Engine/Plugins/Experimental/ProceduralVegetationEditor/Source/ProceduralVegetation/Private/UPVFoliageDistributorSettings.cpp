// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 10

// StaticClass @ 14da584e0

UClass * __cdecl UPVFoliageDistributorSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPVFoliageDistributorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"PVFoliageDistributorSettings",
               &Z_Registration_Info_UClass_UPVFoliageDistributorSettings.InnerSingleton,
               StaticRegisterNativesUPVFoliageDistributorSettings,0x2a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPVFoliageDistributorSettings>,
               InternalVTableHelperCtorCaller<UPVFoliageDistributorSettings>,local_res8,
               UPVBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPVFoliageDistributorSettings.InnerSingleton;
}

// UPVFoliageDistributorSettings @ 14da66250

UPVFoliageDistributorSettings * __thiscall
UPVFoliageDistributorSettings::UPVFoliageDistributorSettings
          (UPVFoliageDistributorSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->EthyleneThreshold = 0.85;
  this->_padding_ = (longlong)&___7UPVFoliageDistributorSettings__6B_;
  (this->InstanceSpacingRamp).EditorCurveData._padding_ = 0;
  (this->InstanceSpacingRamp).EditorCurveData._padding_ = 0;
  (this->InstanceSpacingRamp).EditorCurveData._padding_ = 0;
  this->OverrideDistribution = true;
  this->InstanceSpacing = 0.3;
  *(undefined4 *)&(this->InstanceSpacingRamp).EditorCurveData._padding_ = 0;
  *(undefined4 *)((longlong)&(this->InstanceSpacingRamp).EditorCurveData._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->InstanceSpacingRamp).EditorCurveData._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->InstanceSpacingRamp).EditorCurveData._padding_ + 4) = 0;
  (this->InstanceSpacingRamp).EditorCurveData._padding_ = 0;
  *(undefined4 *)&(this->InstanceSpacingRamp).EditorCurveData._padding_ = 0;
  (this->InstanceSpacingRamp).EditorCurveData._padding_ = 0;
  (this->InstanceSpacingRamp).EditorCurveData._padding_ = 0;
  (this->InstanceSpacingRamp).EditorCurveData._padding_ = (longlong)&___7FRichCurve__6B_;
  *(undefined4 *)&(this->InstanceSpacingRamp).EditorCurveData._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->InstanceSpacingRamp).EditorCurveData._padding_ + 4) = 0x404;
  (this->InstanceSpacingRamp).EditorCurveData.Keys.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->InstanceSpacingRamp).EditorCurveData.Keys.ArrayNum = 0;
  (this->InstanceSpacingRamp).EditorCurveData.Keys.ArrayMax = 0;
  (this->ScaleRamp).EditorCurveData._padding_ = 0;
  (this->ScaleRamp).EditorCurveData._padding_ = 0;
  (this->ScaleRamp).EditorCurveData._padding_ = 0;
  this->InstanceSpacingRampEffect = 0.0;
  this->MaxPerBranch = -1;
  this->BaseScale = 1.0;
  this->BranchScaleImpact = 0.0;
  this->MinScale = 0.5;
  this->MaxScale = 1.0;
  this->RandomScaleMin = 1.0;
  this->RandomScaleMax = 1.0;
  *(undefined4 *)&(this->ScaleRamp).EditorCurveData._padding_ = 0;
  *(undefined4 *)((longlong)&(this->ScaleRamp).EditorCurveData._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->ScaleRamp).EditorCurveData._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->ScaleRamp).EditorCurveData._padding_ + 4) = 0;
  (this->ScaleRamp).EditorCurveData._padding_ = 0;
  *(undefined4 *)&(this->ScaleRamp).EditorCurveData._padding_ = 0;
  (this->ScaleRamp).EditorCurveData._padding_ = 0;
  (this->ScaleRamp).EditorCurveData._padding_ = 0;
  (this->ScaleRamp).EditorCurveData._padding_ = (longlong)&___7FRichCurve__6B_;
  *(undefined4 *)&(this->ScaleRamp).EditorCurveData._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->ScaleRamp).EditorCurveData._padding_ + 4) = 0x404;
  (this->ScaleRamp).EditorCurveData.Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScaleRamp).EditorCurveData.Keys.ArrayNum = 0;
  (this->ScaleRamp).EditorCurveData.Keys.ArrayMax = 0;
  (this->AxilAngleRamp).EditorCurveData._padding_ = 0;
  (this->AxilAngleRamp).EditorCurveData._padding_ = 0;
  (this->AxilAngleRamp).EditorCurveData._padding_ = 0;
  this->OverrideAxilAngle = true;
  this->AxilAngle = 45.0;
  *(undefined4 *)&(this->AxilAngleRamp).EditorCurveData._padding_ = 0;
  *(undefined4 *)((longlong)&(this->AxilAngleRamp).EditorCurveData._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->AxilAngleRamp).EditorCurveData._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->AxilAngleRamp).EditorCurveData._padding_ + 4) = 0;
  (this->AxilAngleRamp).EditorCurveData._padding_ = 0;
  *(undefined4 *)&(this->AxilAngleRamp).EditorCurveData._padding_ = 0;
  (this->AxilAngleRamp).EditorCurveData._padding_ = 0;
  (this->AxilAngleRamp).EditorCurveData._padding_ = 0;
  (this->AxilAngleRamp).EditorCurveData._padding_ = (longlong)&___7FRichCurve__6B_;
  *(undefined4 *)&(this->AxilAngleRamp).EditorCurveData._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->AxilAngleRamp).EditorCurveData._padding_ + 4) = 0x404;
  (this->AxilAngleRamp).EditorCurveData.Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->AxilAngleRamp).EditorCurveData.Keys.ArrayNum = 0;
  (this->AxilAngleRamp).EditorCurveData.Keys.ArrayMax = 0;
  this->AxilAngleRampUpperValue = 45.0;
  this->AxilAngleRampEffect = 0.0;
  this->OverridePhyllotaxy = false;
  this->PhyllotaxyType = Alternate;
  this->PhyllotaxyFormation = Distichous;
  this->MinimumNodeBuds = 2;
  this->MaximumNodeBuds = 3;
  this->PhyllotaxyAdditionalAngle = 0.0;
  this->RandomSeed = 0x1e240;
  return this;
}

// UPVFoliageDistributorSettings @ 14da66490

UPVFoliageDistributorSettings * __thiscall
UPVFoliageDistributorSettings::UPVFoliageDistributorSettings(UPVFoliageDistributorSettings *this)

{
  FPVFloatRamp *this_00;
  FPVFloatRamp *this_01;
  FPVFloatRamp *this_02;
  float fVar1;
  bool bVar2;
  undefined1 in_R9B;
  float in_XMM1_Da;
  FKeyHandle local_res8;
  FKeyHandle local_res10;
  FKeyHandle local_res18;
  FKeyHandle local_res20;
  uint in_stack_ffffffffffffffa8;
  FKeyHandle FVar3;
  FKeyHandle local_48;
  FKeyHandle local_44;
  FKeyHandle local_40 [8];
  
  UPVBaseSettings::UPVBaseSettings((UPVBaseSettings *)this);
  this->EthyleneThreshold = 0.85;
  this_00 = &this->InstanceSpacingRamp;
  this->OverrideDistribution = true;
  this_01 = &this->ScaleRamp;
  this->InstanceSpacing = 0.3;
  this_02 = &this->AxilAngleRamp;
  this->_padding_ = (longlong)&___7UPVFoliageDistributorSettings__6B_;
  (this->InstanceSpacingRamp).EditorCurveData._padding_ = 0;
  (this->InstanceSpacingRamp).EditorCurveData._padding_ = 0;
  (this->InstanceSpacingRamp).EditorCurveData._padding_ = 0;
  *(undefined4 *)&(this->InstanceSpacingRamp).EditorCurveData._padding_ = 0;
  *(undefined4 *)((longlong)&(this->InstanceSpacingRamp).EditorCurveData._padding_ + 4) = 0x80;
  *(undefined4 *)((longlong)&(this->InstanceSpacingRamp).EditorCurveData._padding_ + 4) = 0;
  *(undefined4 *)&(this->InstanceSpacingRamp).EditorCurveData._padding_ = 0xffffffff;
  (this->InstanceSpacingRamp).EditorCurveData._padding_ = 0;
  *(undefined4 *)&(this->InstanceSpacingRamp).EditorCurveData._padding_ = 0;
  (this->InstanceSpacingRamp).EditorCurveData._padding_ = 0;
  (this->InstanceSpacingRamp).EditorCurveData._padding_ = 0;
  (this->InstanceSpacingRamp).EditorCurveData.Keys.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->InstanceSpacingRamp).EditorCurveData.Keys.ArrayNum = 0;
  (this->InstanceSpacingRamp).EditorCurveData.Keys.ArrayMax = 0;
  *(undefined4 *)&(this->InstanceSpacingRamp).EditorCurveData._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->InstanceSpacingRamp).EditorCurveData._padding_ + 4) = 0x404;
  (this_00->EditorCurveData)._padding_ = (longlong)&___7FRichCurve__6B_;
  (this->ScaleRamp).EditorCurveData._padding_ = 0;
  (this->ScaleRamp).EditorCurveData._padding_ = 0;
  (this->ScaleRamp).EditorCurveData._padding_ = 0;
  this->InstanceSpacingRampEffect = 0.0;
  this->MaxPerBranch = -1;
  this->BaseScale = 1.0;
  this->BranchScaleImpact = 0.0;
  this->MinScale = 0.5;
  this->MaxScale = 1.0;
  this->RandomScaleMin = 1.0;
  this->RandomScaleMax = 1.0;
  *(undefined4 *)&(this->ScaleRamp).EditorCurveData._padding_ = 0;
  *(undefined4 *)((longlong)&(this->ScaleRamp).EditorCurveData._padding_ + 4) = 0x80;
  *(undefined4 *)((longlong)&(this->ScaleRamp).EditorCurveData._padding_ + 4) = 0;
  *(undefined4 *)&(this->ScaleRamp).EditorCurveData._padding_ = 0xffffffff;
  (this->ScaleRamp).EditorCurveData._padding_ = 0;
  *(undefined4 *)&(this->ScaleRamp).EditorCurveData._padding_ = 0;
  (this->ScaleRamp).EditorCurveData._padding_ = 0;
  (this->ScaleRamp).EditorCurveData._padding_ = 0;
  (this->ScaleRamp).EditorCurveData.Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScaleRamp).EditorCurveData.Keys.ArrayNum = 0;
  (this->ScaleRamp).EditorCurveData.Keys.ArrayMax = 0;
  *(undefined4 *)&(this->ScaleRamp).EditorCurveData._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->ScaleRamp).EditorCurveData._padding_ + 4) = 0x404;
  (this_01->EditorCurveData)._padding_ = (longlong)&___7FRichCurve__6B_;
  (this->AxilAngleRamp).EditorCurveData._padding_ = 0;
  (this->AxilAngleRamp).EditorCurveData._padding_ = 0;
  (this->AxilAngleRamp).EditorCurveData._padding_ = 0;
  this->OverrideAxilAngle = true;
  this->AxilAngle = 45.0;
  *(undefined4 *)&(this->AxilAngleRamp).EditorCurveData._padding_ = 0;
  *(undefined4 *)((longlong)&(this->AxilAngleRamp).EditorCurveData._padding_ + 4) = 0x80;
  *(undefined4 *)((longlong)&(this->AxilAngleRamp).EditorCurveData._padding_ + 4) = 0;
  *(undefined4 *)&(this->AxilAngleRamp).EditorCurveData._padding_ = 0xffffffff;
  (this->AxilAngleRamp).EditorCurveData._padding_ = 0;
  *(undefined4 *)&(this->AxilAngleRamp).EditorCurveData._padding_ = 0;
  (this->AxilAngleRamp).EditorCurveData._padding_ = 0;
  (this->AxilAngleRamp).EditorCurveData._padding_ = 0;
  (this->AxilAngleRamp).EditorCurveData.Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->AxilAngleRamp).EditorCurveData.Keys.ArrayNum = 0;
  (this->AxilAngleRamp).EditorCurveData.Keys.ArrayMax = 0;
  *(undefined4 *)&(this->AxilAngleRamp).EditorCurveData._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->AxilAngleRamp).EditorCurveData._padding_ + 4) = 0x404;
  (this_02->EditorCurveData)._padding_ = (longlong)&___7FRichCurve__6B_;
  this->OverridePhyllotaxy = false;
  this->PhyllotaxyType = Alternate;
  this->PhyllotaxyFormation = Distichous;
  this->AxilAngleRampUpperValue = 45.0;
  this->AxilAngleRampEffect = 0.0;
  this->MinimumNodeBuds = 2;
  this->MaximumNodeBuds = 3;
  this->PhyllotaxyAdditionalAngle = 0.0;
  this->RandomSeed = 0x1e240;
  bVar2 = PCGHelpers::IsNewObjectAndNotDefault((UObject *)this,false);
  if (bVar2) {
    FRichCurve::Reset(&this_00->EditorCurveData);
    FKeyHandle::FKeyHandle(local_40);
    FVar3.Index = in_stack_ffffffffffffffa8 & 0xffffff00;
    FRichCurve::AddKey(&this_00->EditorCurveData,in_XMM1_Da,0.0,(bool)in_R9B,FVar3);
    FKeyHandle::FKeyHandle(local_40);
    fVar1 = __real_3f800000;
    FVar3.Index = FVar3.Index & 0xffffff00;
    FRichCurve::AddKey(&this_00->EditorCurveData,in_XMM1_Da,__real_3f800000,(bool)in_R9B,FVar3);
    FRichCurve::SetKeyInterpMode(&this_00->EditorCurveData,local_res8,RCIM_Linear);
    FRichCurve::SetKeyInterpMode(&this_00->EditorCurveData,local_res10,RCIM_Linear);
    FRichCurve::Reset(&this_01->EditorCurveData);
    FKeyHandle::FKeyHandle(local_40);
    FVar3.Index = FVar3.Index & 0xffffff00;
    FRichCurve::AddKey(&this_01->EditorCurveData,in_XMM1_Da,0.0,(bool)in_R9B,FVar3);
    FKeyHandle::FKeyHandle(local_40);
    FVar3.Index = FVar3.Index & 0xffffff00;
    FRichCurve::AddKey(&this_01->EditorCurveData,in_XMM1_Da,fVar1,(bool)in_R9B,FVar3);
    FRichCurve::SetKeyInterpMode(&this_01->EditorCurveData,local_res18,RCIM_Linear);
    FRichCurve::SetKeyInterpMode(&this_01->EditorCurveData,local_res20,RCIM_Linear);
    FRichCurve::Reset(&this_02->EditorCurveData);
    FKeyHandle::FKeyHandle(local_40);
    FVar3.Index = FVar3.Index & 0xffffff00;
    FRichCurve::AddKey(&this_02->EditorCurveData,in_XMM1_Da,0.0,(bool)in_R9B,FVar3);
    FKeyHandle::FKeyHandle(local_40);
    FRichCurve::AddKey(&this_02->EditorCurveData,in_XMM1_Da,fVar1,(bool)in_R9B,
                       (FKeyHandle)(FVar3.Index & 0xffffff00));
    FRichCurve::SetKeyInterpMode(&this_02->EditorCurveData,local_48,RCIM_Linear);
    FRichCurve::SetKeyInterpMode(&this_02->EditorCurveData,local_44,RCIM_Linear);
  }
  return this;
}

// ~UPVFoliageDistributorSettings @ 14da67a80

void __thiscall
UPVFoliageDistributorSettings::~UPVFoliageDistributorSettings(UPVFoliageDistributorSettings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPVFoliageDistributorSettings__6B_;
  pFVar1 = (this->AxilAngleRamp).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->AxilAngleRamp).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->AxilAngleRamp).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->AxilAngleRamp).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->AxilAngleRamp).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->AxilAngleRamp).EditorCurveData._padding_);
  pFVar1 = (this->ScaleRamp).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->ScaleRamp).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->ScaleRamp).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->ScaleRamp).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->ScaleRamp).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->ScaleRamp).EditorCurveData._padding_);
  pFVar1 = (this->InstanceSpacingRamp).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->InstanceSpacingRamp).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->InstanceSpacingRamp).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->InstanceSpacingRamp).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->InstanceSpacingRamp).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->InstanceSpacingRamp).EditorCurveData._padding_);
  this->_padding_ = (longlong)&___7UPVBaseSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 14da796c0

TSharedPtr<IPCGElement,1> * __thiscall
UPVFoliageDistributorSettings::CreateElement
          (UPVFoliageDistributorSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<IPCGElement,1> *pTVar4;
  
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IPCGElement *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPVFoliageDistributorElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPVFoliageDistributorElement__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<IPCGElement,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (IPCGElement *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// GetInputPinTypeIdentifier @ 14da95c70

FPCGDataTypeIdentifier * __thiscall
UPVFoliageDistributorSettings::GetInputPinTypeIdentifier
          (UPVFoliageDistributorSettings *this,FPCGDataTypeIdentifier *__return_storage_ptr__)

{
  FPCGDataTypeBaseId *pFVar1;
  
  pFVar1 = FPVDataTypeInfoMesh::AsId();
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetOutputPinTypeIdentifier @ 14da96fe0

FPCGDataTypeIdentifier * __thiscall
UPVFoliageDistributorSettings::GetOutputPinTypeIdentifier
          (UPVFoliageDistributorSettings *this,FPCGDataTypeIdentifier *__return_storage_ptr__)

{
  FPCGDataTypeBaseId *pFVar1;
  
  pFVar1 = FPVDataTypeInfoFoliageMesh::AsId();
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14da99080

UClass * __cdecl UPVFoliageDistributorSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPVFoliageDistributorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"PVFoliageDistributorSettings",
               &Z_Registration_Info_UClass_UPVFoliageDistributorSettings.InnerSingleton,
               StaticRegisterNativesUPVFoliageDistributorSettings,0x2a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPVFoliageDistributorSettings>,
               InternalVTableHelperCtorCaller<UPVFoliageDistributorSettings>,local_res8,
               UPVBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPVFoliageDistributorSettings.InnerSingleton;
}

// StaticRegisterNativesUPVFoliageDistributorSettings @ 14daa9890

void __cdecl UPVFoliageDistributorSettings::StaticRegisterNativesUPVFoliageDistributorSettings(void)

{
  return;
}

// __VTableCtorCaller @ 14daae3b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UPVFoliageDistributorSettings::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x3f59999a;
    this->_padding_ = (longlong)&___7UPVFoliageDistributorSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 1;
    *(undefined4 *)&this[1]._padding_ = 0x3e99999a;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1].OriginalSettings = (UPCGSettings *)0x0;
    *(undefined4 *)&this[1].bUseSeed = 0;
    this[1].CachedElement.Object = (IPCGElement *)0x0;
    this[1].CachedElement.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1]._padding_ = (longlong)&___7FRichCurve__6B_;
    *(undefined4 *)this[1].CacheLock.CriticalSection.Opaque1 = 0x7f7fffff;
    *(undefined2 *)((longlong)this[1].CacheLock.CriticalSection.Opaque1 + 4) = 0x404;
    this[1].CacheLock.CriticalSection.Opaque2[0] = 0;
    this[1].CacheLock.CriticalSection.Opaque2[1] = 0;
    this[1].CacheLock.CriticalSection.Opaque3[0] = (void *)0x0;
    this[1].bHasAnyOverridableHardReferences = false;
    this[1].bExecuteOnGPU = false;
    this[1].bDumpCookedHLSL = false;
    this[1].bDumpDataDescriptions = false;
    this[1].bPrintShaderDebugValues = false;
    *(undefined3 *)&this[1].field_0xbd = 0;
    *(undefined8 *)&this[1].DebugBufferSize = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)(this[1].CacheLock.CriticalSection.Opaque3 + 1) = 0;
    *(undefined4 *)((longlong)this[1].CacheLock.CriticalSection.Opaque3 + 0xc) = 0xffffffff;
    this[1].CacheLock.CriticalSection.Opaque3[2] = &DAT_3f800000;
    *(undefined4 *)&this[1].CachedOverridableParams.AllocatorInstance.Data = 0x3f000000;
    *(undefined4 *)((longlong)&this[1].CachedOverridableParams.AllocatorInstance.Data + 4) =
         0x3f800000;
    this[1].CachedOverridableParams.ArrayNum = 0x3f800000;
    this[1].CachedOverridableParams.ArrayMax = 0x3f800000;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[1].OverriddenSettingsPropertyBag.field0_0x0.DebugPtr = (UPropertyBag *)&___7FRichCurve__6B_
    ;
    this[2].Seed = 0x7f7fffff;
    *(undefined2 *)&this[2].bExecutionDependencyRequired = 0x404;
    this[2].OriginalSettings = (UPCGSettings *)0x0;
    *(undefined8 *)&this[2].bUseSeed = 0;
    this[2].CacheLock.CriticalSection.Opaque1[0] = (void *)0x0;
    this[2].CacheLock.CriticalSection.Opaque2[0] = 0;
    this[2].CacheLock.CriticalSection.Opaque2[1] = 0;
    this[2].CacheLock.CriticalSection.Opaque3[2] = (void *)0x0;
    *(undefined1 *)&this[2].CachedElement.Object = 1;
    *(undefined4 *)((longlong)&this[2].CachedElement.Object + 4) = 0x42340000;
    *(undefined4 *)&this[2].CachedOverridableParams.AllocatorInstance.Data = 0;
    *(undefined4 *)((longlong)&this[2].CachedOverridableParams.AllocatorInstance.Data + 4) = 0x80;
    this[2].CachedOverridableParams.ArrayNum = -1;
    this[2].CachedOverridableParams.ArrayMax = 0;
    this[2].bHasAnyOverridableHardReferences = false;
    this[2].bExecuteOnGPU = false;
    this[2].bDumpCookedHLSL = false;
    this[2].bDumpDataDescriptions = false;
    this[2].bPrintShaderDebugValues = false;
    *(undefined3 *)&this[2].field_0xbd = 0;
    this[2].DebugBufferSize = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[2].CachedElement.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)&___7FRichCurve__6B_;
    *(undefined4 *)&this[3]._padding_ = 0x7f7fffff;
    *(undefined2 *)((longlong)&this[3]._padding_ + 4) = 0x404;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0x42340000;
    *(undefined2 *)&this[3]._padding_ = 0;
    *(undefined1 *)((longlong)&this[3]._padding_ + 2) = 0;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 2;
    this[3]._padding_ = 3;
    *(undefined4 *)&this[3]._padding_ = 0x1e240;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

