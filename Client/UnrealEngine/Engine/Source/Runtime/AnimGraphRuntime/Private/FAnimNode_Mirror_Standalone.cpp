// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 18

// StaticStruct @ 1463d59a0

UScriptStruct * __cdecl FAnimNode_Mirror_Standalone::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_Mirror_Standalone.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_Mirror_Standalone.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone,(UObject *)pUVar1,
                         L"AnimNode_Mirror_Standalone");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_Mirror_Standalone.OuterSingleton;
}

// FAnimNode_Mirror_Standalone @ 146404530

FAnimNode_Mirror_Standalone * __thiscall
FAnimNode_Mirror_Standalone::FAnimNode_Mirror_Standalone
          (FAnimNode_Mirror_Standalone *this,FAnimNode_Mirror_Standalone *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  UMirrorDataTable *pUVar5;
  longlong lVar6;
  
  plVar1 = &this->_padding_;
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FAnimNode_MirrorBase__6B_;
  lVar6 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar6;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 1) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  *plVar1 = 0;
  iVar3 = (int)param_1->_padding_;
  pvVar4 = (void *)param_1->_padding_;
  *(int *)&this->_padding_ = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,(ForAnyElementType *)plVar1,iVar3,piVar2);
    memcpy((void *)*plVar1,pvVar4,(longlong)iVar3 << 2);
  }
  plVar1 = &this->_padding_;
  *plVar1 = 0;
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  iVar3 = (int)param_1->_padding_;
  pvVar4 = (void *)param_1->_padding_;
  *(int *)&this->_padding_ = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,iVar3,0,(ForAnyElementType *)plVar1,iVar3,piVar2);
    memcpy((void *)*plVar1,pvVar4,(longlong)iVar3 << 5);
  }
  this->_padding_ = (longlong)&___7FAnimNode_Mirror_Standalone__6B_;
  this->bMirror = param_1->bMirror;
  pUVar5 = (param_1->MirrorDataTable).field0_0x0.DebugPtr;
  (this->MirrorDataTable).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UMirrorDataTable *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  this->BlendTime = param_1->BlendTime;
  this->bResetChild = param_1->bResetChild;
  this->bBoneMirroring = param_1->bBoneMirroring;
  this->bCurveMirroring = param_1->bCurveMirroring;
  this->bAttributeMirroring = param_1->bAttributeMirroring;
  return this;
}

// FAnimNode_Mirror_Standalone @ 1464046a0

FAnimNode_Mirror_Standalone * __thiscall
FAnimNode_Mirror_Standalone::FAnimNode_Mirror_Standalone(FAnimNode_Mirror_Standalone *this)

{
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAnimNode_Mirror_Standalone__6B_;
  this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->bMirror = true;
  (this->MirrorDataTable).field0_0x0.DebugPtr = (UMirrorDataTable *)0x0;
  this->BlendTime = 0.0;
  this->bResetChild = false;
  this->bBoneMirroring = true;
  this->bCurveMirroring = true;
  this->bAttributeMirroring = true;
  return this;
}

// ~FAnimNode_Mirror_Standalone @ 146408b50

void __thiscall
FAnimNode_Mirror_Standalone::~FAnimNode_Mirror_Standalone(FAnimNode_Mirror_Standalone *this)

{
  this->_padding_ = (longlong)&___7FAnimNode_MirrorBase__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  return;
}

// GetAttributeMirroring @ 146447b40

bool __thiscall
FAnimNode_Mirror_Standalone::GetAttributeMirroring(FAnimNode_Mirror_Standalone *this)

{
  return this->bAttributeMirroring;
}

// GetBlendTimeOnMirrorStateChange @ 146447f10

float __thiscall
FAnimNode_Mirror_Standalone::GetBlendTimeOnMirrorStateChange(FAnimNode_Mirror_Standalone *this)

{
  return this->BlendTime;
}

// GetBoneMirroring @ 146448560

bool __thiscall FAnimNode_Mirror_Standalone::GetBoneMirroring(FAnimNode_Mirror_Standalone *this)

{
  return this->bBoneMirroring;
}

// GetCurveMirroring @ 1464497e0

bool __thiscall FAnimNode_Mirror_Standalone::GetCurveMirroring(FAnimNode_Mirror_Standalone *this)

{
  return this->bCurveMirroring;
}

// GetMirror @ 14644bab0

bool __thiscall FAnimNode_Mirror_Standalone::GetMirror(FAnimNode_Mirror_Standalone *this)

{
  return this->bMirror;
}

// GetMirrorDataTable @ 14644bc70

UMirrorDataTable * __thiscall
FAnimNode_Mirror_Standalone::GetMirrorDataTable(FAnimNode_Mirror_Standalone *this)

{
  return (this->MirrorDataTable).field0_0x0.DebugPtr;
}

// GetResetChildOnMirrorStateChange @ 14644ec00

bool __thiscall
FAnimNode_Mirror_Standalone::GetResetChildOnMirrorStateChange(FAnimNode_Mirror_Standalone *this)

{
  return this->bResetChild;
}

// SetAttributeMirroring @ 146467d90

bool __thiscall
FAnimNode_Mirror_Standalone::SetAttributeMirroring(FAnimNode_Mirror_Standalone *this,bool param_1)

{
  this->bAttributeMirroring = param_1;
  return true;
}

// SetBlendTimeOnMirrorStateChange @ 146468240

bool __thiscall
FAnimNode_Mirror_Standalone::SetBlendTimeOnMirrorStateChange
          (FAnimNode_Mirror_Standalone *this,float param_1)

{
  this->BlendTime = param_1;
  return true;
}

// SetBoneMirroring @ 1464684c0

bool __thiscall
FAnimNode_Mirror_Standalone::SetBoneMirroring(FAnimNode_Mirror_Standalone *this,bool param_1)

{
  this->bBoneMirroring = param_1;
  return true;
}

// SetCurveMirroring @ 146468ba0

bool __thiscall
FAnimNode_Mirror_Standalone::SetCurveMirroring(FAnimNode_Mirror_Standalone *this,bool param_1)

{
  this->bCurveMirroring = param_1;
  return true;
}

// SetMirror @ 146469970

bool __thiscall
FAnimNode_Mirror_Standalone::SetMirror(FAnimNode_Mirror_Standalone *this,bool param_1)

{
  this->bMirror = param_1;
  return true;
}

// SetMirrorDataTable @ 146469b80

bool __thiscall
FAnimNode_Mirror_Standalone::SetMirrorDataTable
          (FAnimNode_Mirror_Standalone *this,UMirrorDataTable *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMirrorDataTable *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->MirrorDataTable).field0_0x0.DebugPtr = param_1;
    return true;
  }
  (this->MirrorDataTable).field0_0x0.DebugPtr = param_1;
  return true;
}

// SetResetChildOnMirrorStateChange @ 14646ab40

bool __thiscall
FAnimNode_Mirror_Standalone::SetResetChildOnMirrorStateChange
          (FAnimNode_Mirror_Standalone *this,bool param_1)

{
  this->bResetChild = param_1;
  return true;
}

