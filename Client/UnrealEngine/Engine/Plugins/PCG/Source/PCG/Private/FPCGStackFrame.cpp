// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// FPCGStackFrame @ 149be5e90

FPCGStackFrame * __thiscall FPCGStackFrame::FPCGStackFrame(FPCGStackFrame *this,int param_1)

{
  undefined1 *this_00;
  undefined8 local_res8;
  
  this_00 = &(this->Object).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->Object).SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->Object).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->Object).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Object).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this->LoopIndex = -1;
  this->Hash = 0;
  local_res8 = 0;
  FSoftObjectPtr::operator=((FSoftObjectPtr *)this,(FObjectPtr)&local_res8);
  this->LoopIndex = param_1;
  ComputeHash(this);
  return this;
}

// StaticStruct @ 149c961b0

UScriptStruct * __cdecl FPCGStackFrame::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGStackFrame.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGStackFrame.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGStackFrame,(UObject *)pUVar1,L"PCGStackFrame"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FPCGStackFrame.OuterSingleton;
}

// GetObject_AnyThread<UPCGNode> @ 149c9eb70

UPCGNode * __thiscall FPCGStackFrame::GetObject_AnyThread<UPCGNode>(FPCGStackFrame *this)

{
  int iVar1;
  UPCGNode *pUVar2;
  UClass *pUVar3;
  FGCScopeGuard local_res8 [32];
  
  FGCScopeGuard::FGCScopeGuard(local_res8);
  pUVar2 = (UPCGNode *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UPCGNode *)0x0) {
    pUVar3 = Z_Construct_UClass_UPCGNode_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_149c9ebb8;
  }
  pUVar2 = (UPCGNode *)0x0;
LAB_149c9ebb8:
  FGCScopeGuard::~FGCScopeGuard(local_res8);
  return pUVar2;
}

// FPCGStackFrame @ 149ca41c0

FPCGStackFrame * __thiscall FPCGStackFrame::FPCGStackFrame(FPCGStackFrame *this,UObject *param_1)

{
  ForAnyElementType FVar1;
  uint uVar2;
  int iVar3;
  undefined1 *this_00;
  UObject *local_res8;
  FString local_18;
  
  this_00 = &(this->Object).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->Object).SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->Object).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->Object).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Object).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this->LoopIndex = -1;
  this->Hash = 0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)this,(FObjectPtr)&local_res8);
  this->LoopIndex = -1;
  if (*(longlong *)&(this->Object).SoftObjectPtr.field_0x8 == 0) {
    this->Hash = 0xffffffff;
  }
  else {
    FSoftObjectPath::ToString((FSoftObjectPath *)&(this->Object).SoftObjectPtr.field_0x8,&local_18);
    iVar3 = local_18.Data.ArrayNum + -1;
    FVar1.Data = local_18.Data.AllocatorInstance.Data;
    if (local_18.Data.ArrayNum == 0) {
      iVar3 = 0;
      FVar1.Data = (FScriptContainerElement *)L"";
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar1.Data);
    this->Hash = uVar2;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return this;
}

// ComputeHash @ 149cb9000

void __thiscall FPCGStackFrame::ComputeHash(FPCGStackFrame *this)

{
  ForAnyElementType FVar1;
  uint uVar2;
  int iVar3;
  undefined1 *this_00;
  FString local_18;
  
  this_00 = &(this->Object).SoftObjectPtr.field_0x8;
  if (*(longlong *)this_00 == 0) {
    this->Hash = this->LoopIndex;
    return;
  }
  FSoftObjectPath::ToString((FSoftObjectPath *)this_00,&local_18);
  iVar3 = local_18.Data.ArrayNum + -1;
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  if (local_18.Data.ArrayNum == 0) {
    iVar3 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar1.Data);
  this->Hash = uVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// PostSerialize @ 149ccf0a0

void __thiscall FPCGStackFrame::PostSerialize(FPCGStackFrame *this,FArchive *param_1)

{
  ForAnyElementType FVar1;
  uint uVar2;
  int iVar3;
  undefined1 *this_00;
  FString FStack_18;
  
  if ((param_1->field_0x28 & 1) == 0) {
    return;
  }
  this_00 = &(this->Object).SoftObjectPtr.field_0x8;
  if (*(longlong *)this_00 == 0) {
    this->Hash = this->LoopIndex;
    return;
  }
  FSoftObjectPath::ToString((FSoftObjectPath *)this_00,&FStack_18);
  iVar3 = FStack_18.Data.ArrayNum + -1;
  FVar1.Data = FStack_18.Data.AllocatorInstance.Data;
  if (FStack_18.Data.ArrayNum == 0) {
    iVar3 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar1.Data);
  this->Hash = uVar2;
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  return;
}

