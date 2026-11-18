// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 3

// StaticStruct @ 1463d5a20

UScriptStruct * __cdecl FPoseDriverTarget::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPoseDriverTarget.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FPoseDriverTarget.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPoseDriverTarget,(UObject *)pUVar1,
                         L"PoseDriverTarget");
  }
  return Z_Registration_Info_UScriptStruct_FPoseDriverTarget.OuterSingleton;
}

// FPoseDriverTarget @ 1464070d0

FPoseDriverTarget * __thiscall FPoseDriverTarget::FPoseDriverTarget(FPoseDriverTarget *this)

{
  this->TargetScale = 1.0;
  (this->BoneTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneTransforms).ArrayNum = 0;
  (this->BoneTransforms).ArrayMax = 0;
  (this->CustomCurve)._padding_ = 0;
  (this->CustomCurve)._padding_ = 0;
  (this->CustomCurve)._padding_ = 0;
  this->bApplyCustomCurve = false;
  this->DistanceMethod = DefaultMethod;
  this->FunctionType = DefaultFunction;
  (this->TargetRotation).Pitch = 0.0;
  (this->TargetRotation).Yaw = 0.0;
  (this->TargetRotation).Roll = 0.0;
  *(undefined4 *)&(this->CustomCurve)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->CustomCurve)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->CustomCurve)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->CustomCurve)._padding_ + 4) = 0;
  (this->CustomCurve)._padding_ = 0;
  *(undefined4 *)&(this->CustomCurve)._padding_ = 0;
  (this->CustomCurve)._padding_ = 0;
  (this->CustomCurve)._padding_ = 0;
  (this->CustomCurve)._padding_ = (longlong)&___7FRichCurve__6B_;
  *(undefined4 *)&(this->CustomCurve)._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->CustomCurve)._padding_ + 4) = 0x404;
  (this->CustomCurve).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomCurve).Keys.ArrayNum = 0;
  (this->CustomCurve).Keys.ArrayMax = 0;
  (this->DrivenName).ComparisonIndex = 0;
  (this->DrivenName).Number = 0;
  this->PoseCurveIndex = -1;
  this->bIsHidden = false;
  return this;
}

// ~FPoseDriverTarget @ 146409470

void __thiscall FPoseDriverTarget::~FPoseDriverTarget(FPoseDriverTarget *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->CustomCurve).Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->CustomCurve)._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->CustomCurve)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->CustomCurve)._padding_ = 0;
  pvVar2 = (void *)(this->CustomCurve)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->CustomCurve)._padding_);
  pFVar1 = (this->BoneTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

