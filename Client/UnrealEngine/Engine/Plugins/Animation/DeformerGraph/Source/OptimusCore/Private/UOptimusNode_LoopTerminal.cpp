// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 47

// StaticClass @ 14e11ba20

UClass * __cdecl UOptimusNode_LoopTerminal::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode_LoopTerminal.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode_LoopTerminal",
               &Z_Registration_Info_UClass_UOptimusNode_LoopTerminal.InnerSingleton,
               StaticRegisterNativesUOptimusNode_LoopTerminal,0x170,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UOptimusNode_LoopTerminal>,
               InternalVTableHelperCtorCaller<UOptimusNode_LoopTerminal>,local_res8,
               UOptimusNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode_LoopTerminal.InnerSingleton;
}

// UOptimusNode_LoopTerminal @ 14e15bdf0

UOptimusNode_LoopTerminal * __thiscall
UOptimusNode_LoopTerminal::UOptimusNode_LoopTerminal
          (UOptimusNode_LoopTerminal *this,FVTableHelper *param_1)

{
  UOptimusNode::UOptimusNode((UOptimusNode *)this,param_1);
  (this->LoopInfo).Count = 1;
  this->_padding_ = (longlong)&_vftable__for__UOptimusNode__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodeAdderPinProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusUnnamedNodePinProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodePairProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusPinMutabilityDefiner__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusParameterBindingProvider__;
  (this->LoopInfo).Bindings.InnerArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LoopInfo).Bindings.InnerArray.ArrayNum = 0;
  (this->LoopInfo).Bindings.InnerArray.ArrayMax = 0;
  (this->IndexPin).field0_0x0.DebugPtr = (UOptimusNodePin *)0x0;
  (this->CountPin).field0_0x0.DebugPtr = (UOptimusNodePin *)0x0;
  (this->PinPairInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PinPairInfos).ArrayNum = 0;
  (this->PinPairInfos).ArrayMax = 0;
  return this;
}

// UOptimusNode_LoopTerminal @ 14e15bea0

UOptimusNode_LoopTerminal * __thiscall
UOptimusNode_LoopTerminal::UOptimusNode_LoopTerminal(UOptimusNode_LoopTerminal *this)

{
  UOptimusNode::UOptimusNode((UOptimusNode *)this);
  (this->LoopInfo).Count = 1;
  this->_padding_ = (longlong)&_vftable__for__UOptimusNode__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodeAdderPinProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusUnnamedNodePinProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodePairProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusPinMutabilityDefiner__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusParameterBindingProvider__;
  (this->LoopInfo).Bindings.InnerArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LoopInfo).Bindings.InnerArray.ArrayNum = 0;
  (this->LoopInfo).Bindings.InnerArray.ArrayMax = 0;
  (this->IndexPin).field0_0x0.DebugPtr = (UOptimusNodePin *)0x0;
  (this->CountPin).field0_0x0.DebugPtr = (UOptimusNodePin *)0x0;
  (this->PinPairInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PinPairInfos).ArrayNum = 0;
  (this->PinPairInfos).ArrayMax = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  return this;
}

// ~UOptimusNode_LoopTerminal @ 14e1638f0

void __thiscall
UOptimusNode_LoopTerminal::~UOptimusNode_LoopTerminal(UOptimusNode_LoopTerminal *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UOptimusNode__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodeAdderPinProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusUnnamedNodePinProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodePairProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusPinMutabilityDefiner__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusParameterBindingProvider__;
  DestructItems<FOptimusPinPairInfo,int>
            ((FOptimusPinPairInfo *)(this->PinPairInfos).AllocatorInstance.Data,
             (this->PinPairInfos).ArrayNum);
  pFVar1 = (this->PinPairInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FOptimusParameterBinding,int>
            ((FOptimusParameterBinding *)(this->LoopInfo).Bindings.InnerArray.AllocatorInstance.Data
             ,(this->LoopInfo).Bindings.InnerArray.ArrayNum);
  pFVar1 = (this->LoopInfo).Bindings.InnerArray.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IOptimusParameterBindingProvider__6B_;
  this->_padding_ = (longlong)&___7IOptimusPinMutabilityDefiner__6B_;
  this->_padding_ = (longlong)&___7IOptimusNodePairProvider__6B_;
  this->_padding_ = (longlong)&___7IOptimusUnnamedNodePinProvider__6B_;
  this->_padding_ = (longlong)&___7IOptimusNodeAdderPinProvider__6B_;
  UOptimusNode::~UOptimusNode((UOptimusNode *)this);
  return;
}

// operator() @ 14e167400

bool __thiscall
`UOptimusNode_LoopTerminal::GetPairIndex'::__l2::<lambda_1>::operator()
          (void *this,FOptimusPinPairInfo *param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FName,TSizedDefaultAllocator<32>_> local_28;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  bVar4 = false;
  pTVar5 = UOptimusNodePin::GetPinNamePath(*(UOptimusNodePin **)this,&local_18);
  iVar1 = (param_1->InputPinPath).ArrayNum;
  if ((iVar1 == pTVar5->ArrayNum) &&
     (bVar3 = CompareItems<FName,int>
                        ((FName *)(param_1->InputPinPath).AllocatorInstance.Data,
                         (FName *)(pTVar5->AllocatorInstance).Data,iVar1), bVar3)) {
LAB_14e167469:
    bVar2 = true;
    bVar3 = true;
    if (!bVar4) goto LAB_14e167482;
  }
  else {
    pTVar5 = UOptimusNodePin::GetPinNamePath(*(UOptimusNodePin **)this,&local_28);
    iVar1 = (param_1->OutputPinPath).ArrayNum;
    if ((iVar1 == pTVar5->ArrayNum) &&
       (bVar4 = CompareItems<FName,int>
                          ((FName *)(param_1->OutputPinPath).AllocatorInstance.Data,
                           (FName *)(pTVar5->AllocatorInstance).Data,iVar1), bVar4)) {
      bVar4 = true;
      goto LAB_14e167469;
    }
    bVar3 = false;
  }
  bVar2 = bVar3;
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
LAB_14e167482:
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar2;
}

// AddPinPairs @ 14e177a60

/* WARNING: Removing unreachable block (ram,0x00014e177e65) */
/* WARNING: Removing unreachable block (ram,0x00014e177e73) */

TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusNode_LoopTerminal::AddPinPairs
          (UOptimusNode_LoopTerminal *this,
          TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FOptimusParameterBinding *param_1)

{
  int *piVar1;
  TArray<FOptimusPinPairInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  UOptimusNodePin *pUVar3;
  FName FVar4;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FString *pFVar9;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *pTVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  FName FVar13;
  FName local_res8;
  FName local_res10;
  UOptimusNodePin *local_res18;
  UOptimusNodePin *local_e8;
  UOptimusNodePin *local_e0;
  TArray<FName,TSizedDefaultAllocator<32>_> local_d8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_c8;
  FString local_b8;
  FString local_a8;
  undefined1 local_98 [48];
  undefined1 local_68 [48];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pUVar3 = (this->IndexPin).field0_0x0.DebugPtr;
  FVar4 = (param_1->Name).Name;
  local_res18 = (UOptimusNodePin *)0x0;
  if (pUVar3 != (UOptimusNodePin *)0x0) {
    local_res18 = pUVar3;
  }
  local_res10 = FVar4;
  pFVar9 = ::FName::ToString(&local_res10,&local_a8);
  ::FString::ConcatCF(&local_b8,L"(Hidden)",pFVar9);
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_b8.Data.ArrayNum != 0) {
    FVar11.Data = local_b8.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar11.Data);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  FVar13 = FVar4;
  if (this->TerminalType == Return) {
    FVar13 = local_res8;
    local_res8 = FVar4;
  }
  local_98._0_8_ = (param_1->DataType).TypeName;
  local_98._8_8_ = *(undefined8 *)&(param_1->DataType).TypeObject.SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(local_98 + 0x10),
             (FSoftObjectPath *)&(param_1->DataType).TypeObject.SoftObjectPtr.field_0x8);
  local_e8 = UOptimusNode::AddPin
                       ((UOptimusNode *)this,FVar13,Input,&param_1->DataDomain,
                        (FOptimusDataTypeRef *)local_98,(UOptimusNodePin *)0x0,
                        (UOptimusNodePin *)0x0);
  pFVar12 = (__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar12 <= (FScriptContainerElement *)&local_e8) &&
      ((FScriptContainerElement *)&local_e8 <
       pFVar12 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar10;
  }
  iVar8 = __return_storage_ptr__->ArrayNum;
  if (iVar8 == __return_storage_ptr__->ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar8 + 1;
  *(UOptimusNodePin **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
       local_e8;
  local_68._0_8_ = (param_1->DataType).TypeName;
  local_68._8_8_ = *(undefined8 *)&(param_1->DataType).TypeObject.SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(local_68 + 0x10),
             (FSoftObjectPath *)&(param_1->DataType).TypeObject.SoftObjectPtr.field_0x8);
  local_e0 = UOptimusNode::AddPin
                       ((UOptimusNode *)this,local_res8,Output,&param_1->DataDomain,
                        (FOptimusDataTypeRef *)local_68,local_res18,(UOptimusNodePin *)0x0);
  pFVar12 = (__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar12 <= (FScriptContainerElement *)&local_e0) &&
      ((FScriptContainerElement *)&local_e0 <
       pFVar12 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar10;
  }
  iVar8 = __return_storage_ptr__->ArrayNum;
  if (iVar8 == __return_storage_ptr__->ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  pTVar2 = &this->PinPairInfos;
  __return_storage_ptr__->ArrayNum = iVar8 + 1;
  *(UOptimusNodePin **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
       local_e0;
  if ((__return_storage_ptr__->ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar10;
  }
  UOptimusNodePin::GetPinNamePath
            (*(UOptimusNodePin **)(__return_storage_ptr__->AllocatorInstance).Data,&local_d8);
  if ((__return_storage_ptr__->ArrayNum < 2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar10;
  }
  UOptimusNodePin::GetPinNamePath
            (*(UOptimusNodePin **)((__return_storage_ptr__->AllocatorInstance).Data + 8),&local_c8);
  pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(pTVar2->AllocatorInstance).Data;
  if (((pTVar5 <= &local_d8) && (&local_d8 < pTVar5 + (longlong)(this->PinPairInfos).ArrayMax * 2))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar10;
  }
  iVar8 = (this->PinPairInfos).ArrayNum;
  piVar1 = &(this->PinPairInfos).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->PinPairInfos).ArrayNum = iVar8 + 1;
  pFVar12 = (pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x20;
  *(undefined8 *)pFVar12 = 0;
  *(FScriptContainerElement **)pFVar12 = local_d8.AllocatorInstance.Data;
  *(int *)(pFVar12 + 8) = local_d8.ArrayNum;
  *(int *)(pFVar12 + 0xc) = local_d8.ArrayMax;
  *(undefined8 *)(pFVar12 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar12 + 0x10) = local_c8.AllocatorInstance.Data;
  *(int *)(pFVar12 + 0x18) = local_c8.ArrayNum;
  *(int *)(pFVar12 + 0x1c) = local_c8.ArrayMax;
  return __return_storage_ptr__;
}

// AddPinPairsDirect @ 14e177ea0

/* WARNING: Removing unreachable block (ram,0x00014e1782a5) */
/* WARNING: Removing unreachable block (ram,0x00014e1782b3) */

TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusNode_LoopTerminal::AddPinPairsDirect
          (UOptimusNode_LoopTerminal *this,
          TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FOptimusParameterBinding *param_1)

{
  int *piVar1;
  TArray<FOptimusPinPairInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  UOptimusNodePin *pUVar3;
  FName FVar4;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FString *pFVar9;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *pTVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  FName FVar13;
  FName local_res8;
  FName local_res10;
  UOptimusNodePin *local_res18;
  UOptimusNodePin *local_e8;
  UOptimusNodePin *local_e0;
  TArray<FName,TSizedDefaultAllocator<32>_> local_d8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_c8;
  FString local_b8;
  FString local_a8;
  undefined1 local_98 [48];
  undefined1 local_68 [48];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pUVar3 = (this->IndexPin).field0_0x0.DebugPtr;
  FVar4 = (param_1->Name).Name;
  local_res18 = (UOptimusNodePin *)0x0;
  if (pUVar3 != (UOptimusNodePin *)0x0) {
    local_res18 = pUVar3;
  }
  local_res10 = FVar4;
  pFVar9 = ::FName::ToString(&local_res10,&local_a8);
  ::FString::ConcatCF(&local_b8,L"(Hidden)",pFVar9);
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_b8.Data.ArrayNum != 0) {
    FVar11.Data = local_b8.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar11.Data);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  FVar13 = FVar4;
  if (this->TerminalType == Return) {
    FVar13 = local_res8;
    local_res8 = FVar4;
  }
  local_98._0_8_ = (param_1->DataType).TypeName;
  local_98._8_8_ = *(undefined8 *)&(param_1->DataType).TypeObject.SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(local_98 + 0x10),
             (FSoftObjectPath *)&(param_1->DataType).TypeObject.SoftObjectPtr.field_0x8);
  local_e8 = UOptimusNode::AddPinDirect
                       ((UOptimusNode *)this,FVar13,Input,&param_1->DataDomain,
                        (FOptimusDataTypeRef *)local_98,(UOptimusNodePin *)0x0,
                        (UOptimusNodePin *)0x0);
  pFVar12 = (__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar12 <= (FScriptContainerElement *)&local_e8) &&
      ((FScriptContainerElement *)&local_e8 <
       pFVar12 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar10;
  }
  iVar8 = __return_storage_ptr__->ArrayNum;
  if (iVar8 == __return_storage_ptr__->ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar8 + 1;
  *(UOptimusNodePin **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
       local_e8;
  local_68._0_8_ = (param_1->DataType).TypeName;
  local_68._8_8_ = *(undefined8 *)&(param_1->DataType).TypeObject.SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(local_68 + 0x10),
             (FSoftObjectPath *)&(param_1->DataType).TypeObject.SoftObjectPtr.field_0x8);
  local_e0 = UOptimusNode::AddPinDirect
                       ((UOptimusNode *)this,local_res8,Output,&param_1->DataDomain,
                        (FOptimusDataTypeRef *)local_68,local_res18,(UOptimusNodePin *)0x0);
  pFVar12 = (__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar12 <= (FScriptContainerElement *)&local_e0) &&
      ((FScriptContainerElement *)&local_e0 <
       pFVar12 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar10;
  }
  iVar8 = __return_storage_ptr__->ArrayNum;
  if (iVar8 == __return_storage_ptr__->ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  pTVar2 = &this->PinPairInfos;
  __return_storage_ptr__->ArrayNum = iVar8 + 1;
  *(UOptimusNodePin **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
       local_e0;
  if ((__return_storage_ptr__->ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar10;
  }
  UOptimusNodePin::GetPinNamePath
            (*(UOptimusNodePin **)(__return_storage_ptr__->AllocatorInstance).Data,&local_d8);
  if ((__return_storage_ptr__->ArrayNum < 2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar10;
  }
  UOptimusNodePin::GetPinNamePath
            (*(UOptimusNodePin **)((__return_storage_ptr__->AllocatorInstance).Data + 8),&local_c8);
  pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(pTVar2->AllocatorInstance).Data;
  if (((pTVar5 <= &local_d8) && (&local_d8 < pTVar5 + (longlong)(this->PinPairInfos).ArrayMax * 2))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar10;
  }
  iVar8 = (this->PinPairInfos).ArrayNum;
  piVar1 = &(this->PinPairInfos).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->PinPairInfos).ArrayNum = iVar8 + 1;
  pFVar12 = (pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x20;
  *(undefined8 *)pFVar12 = 0;
  *(FScriptContainerElement **)pFVar12 = local_d8.AllocatorInstance.Data;
  *(int *)(pFVar12 + 8) = local_d8.ArrayNum;
  *(int *)(pFVar12 + 0xc) = local_d8.ArrayMax;
  *(undefined8 *)(pFVar12 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar12 + 0x10) = local_c8.AllocatorInstance.Data;
  *(int *)(pFVar12 + 0x18) = local_c8.ArrayNum;
  *(int *)(pFVar12 + 0x1c) = local_c8.ArrayMax;
  return __return_storage_ptr__;
}

// ClearPinPairs @ 14e181db0

void __thiscall UOptimusNode_LoopTerminal::ClearPinPairs(UOptimusNode_LoopTerminal *this)

{
  int *piVar1;
  TArray<FOptimusPinPairInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FOptimusPinPairInfo *pFVar5;
  uint uVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar10;
  undefined1 local_res8 [8];
  ForAnyElementType local_48;
  uint local_40;
  int local_3c;
  UOptimusNodePin *local_38;
  UOptimusNodePin *pUStack_30;
  
  pTVar2 = &this->PinPairInfos;
  iVar4 = (this->PinPairInfos).ArrayNum;
  pTVar10 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(pTVar2->AllocatorInstance).Data;
  pTVar9 = pTVar10 + (longlong)iVar4 * 2;
  while( true ) {
    if ((this->PinPairInfos).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FOptimusPinPairInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pTVar10 == pTVar9) break;
    local_38 = UOptimusNode::FindPinFromPath((UOptimusNode *)this,pTVar10);
    pUStack_30 = UOptimusNode::FindPinFromPath((UOptimusNode *)this,pTVar10 + 1);
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,2,0,&local_48,2,&local_3c);
    uVar6 = local_40;
    *(UOptimusNodePin **)local_48.Data = local_38;
    *(UOptimusNodePin **)(local_48.Data + 8) = pUStack_30;
    uVar7 = (ulonglong)(int)local_40;
    pFVar3 = local_48.Data + uVar7 * 8;
    FVar8.Data = local_48.Data;
    while( true ) {
      if ((uint)uVar7 != uVar6) {
        `TCheckedPointerIterator<UOptimusNodePin_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar8.Data == pFVar3) break;
      UOptimusNode::RemovePin((UOptimusNode *)this,*(UOptimusNodePin **)FVar8.Data);
      uVar7 = (ulonglong)local_40;
      FVar8.Data = FVar8.Data + 8;
    }
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    pTVar10 = pTVar10 + 2;
  }
  piVar1 = &(this->PinPairInfos).ArrayMax;
  pFVar5 = (FOptimusPinPairInfo *)(pTVar2->AllocatorInstance).Data;
  iVar4 = (this->PinPairInfos).ArrayNum;
  if ((this->PinPairInfos).ArrayMax < 0) {
    DestructItems<FOptimusPinPairInfo,int>(pFVar5,iVar4);
    (this->PinPairInfos).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FOptimusPinPairInfo,int>(pFVar5,iVar4);
    (this->PinPairInfos).ArrayNum = 0;
  }
  return;
}

// ConstructNode @ 14e193d40

void __thiscall UOptimusNode_LoopTerminal::ConstructNode(UOptimusNode_LoopTerminal *this)

{
  int *piVar1;
  int iVar2;
  FOptimusPinPairInfo *pFVar3;
  code *pcVar4;
  bool bVar5;
  FOptimusDataTypeRegistry *pFVar6;
  FFieldClass *pFVar7;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar8;
  FOptimusDataTypeRef *pFVar9;
  FOptimusDataDomain *pFVar10;
  FName *pFVar11;
  UOptimusNodePin *pUVar12;
  FOptimusDataType *pFVar13;
  FOptimusDataType *pFVar14;
  FName FVar15;
  FName local_res8;
  FName local_res10;
  TSharedPtr<FOptimusDataType_const_,1> local_128;
  TSharedPtr<FOptimusDataType_const_,1> local_118;
  FOptimusDataDomain local_108;
  FOptimusDataDomain local_c8;
  FOptimusDataTypeRef local_88;
  FOptimusDataTypeRef local_58;
  
  iVar2 = (int)this->_padding_;
  pFVar14 = (FOptimusDataType *)0x0;
  if (iVar2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (iVar2 == 0) goto LAB_14e193db7;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("GetPins().IsEmpty()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_LoopTerminal.cpp"
                     ,0x51,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14e193db7:
  if (this->TerminalType == Entry) {
    pFVar6 = FOptimusDataTypeRegistry::Get();
    pFVar7 = FUInt32Property::StaticClass();
    pTVar8 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                     *)&pFVar6->RegisteredTypes,pFVar7->Name);
    pFVar13 = (FOptimusDataType *)&pTVar8->field_0x10;
    if (pTVar8 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) {
      pFVar13 = pFVar14;
    }
    if (pFVar13 == (FOptimusDataType *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      FVar15 = (FName)pFVar14;
    }
    else {
      FVar15 = pFVar13->TypeName;
      pFVar14 = (FOptimusDataType *)(pFVar13->DisplayName).TextData.Reference;
      if (pFVar14 != (FOptimusDataType *)0x0) {
        LOCK();
        *(int *)&(pFVar14->DisplayName).TextData.Reference =
             *(int *)&(pFVar14->DisplayName).TextData.Reference + 1;
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    if (pFVar14 != (FOptimusDataType *)0x0) {
      LOCK();
      *(int *)&(pFVar14->DisplayName).TextData.Reference =
           *(int *)&(pFVar14->DisplayName).TextData.Reference + 1;
      UNLOCK();
    }
    local_128.Object = (FOptimusDataType *)FVar15;
    local_128.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar14;
    pFVar9 = FOptimusDataTypeRef::FOptimusDataTypeRef(&local_88,&local_128);
    local_108.Type = Dimensional;
    local_108._4_4_ = 0;
    local_108.DimensionNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.DimensionNames.ArrayNum = 0;
    local_108.DimensionNames.ArrayMax = 0;
    local_108.Multiplier = 0;
    local_108._28_4_ = 0;
    local_108.Expression.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.Expression.Data.ArrayNum = 0;
    local_108.Expression.Data.ArrayMax = 0;
    local_108.LevelNames_DEPRECATED.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.LevelNames_DEPRECATED.ArrayNum = 0;
    local_108.LevelNames_DEPRECATED.ArrayMax = 0;
    pFVar10 = FOptimusDataDomain::FOptimusDataDomain(&local_108);
    pFVar11 = ::FName::FName(&local_res8,L"Index");
    pUVar12 = UOptimusNode::AddPinDirect
                        ((UOptimusNode *)this,*pFVar11,Output,pFVar10,pFVar9,(UOptimusNodePin *)0x0,
                         (UOptimusNodePin *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UOptimusNodePin *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    (this->IndexPin).field0_0x0.DebugPtr = pUVar12;
    if (local_108.LevelNames_DEPRECATED.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.LevelNames_DEPRECATED.AllocatorInstance.Data);
    }
    if (local_108.Expression.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Expression.Data.AllocatorInstance.Data);
    }
    if (local_108.DimensionNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.DimensionNames.AllocatorInstance.Data);
    }
    if (pFVar14 != (FOptimusDataType *)0x0) {
      LOCK();
      *(int *)&(pFVar14->DisplayName).TextData.Reference =
           *(int *)&(pFVar14->DisplayName).TextData.Reference + 1;
      UNLOCK();
    }
    local_118.Object = (FOptimusDataType *)FVar15;
    local_118.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar14;
    pFVar9 = FOptimusDataTypeRef::FOptimusDataTypeRef(&local_58,&local_118);
    local_c8.Type = Dimensional;
    local_c8._4_4_ = 0;
    local_c8.DimensionNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.DimensionNames.ArrayNum = 0;
    local_c8.DimensionNames.ArrayMax = 0;
    local_c8.Multiplier = 0;
    local_c8._28_4_ = 0;
    local_c8.Expression.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.Expression.Data.ArrayNum = 0;
    local_c8.Expression.Data.ArrayMax = 0;
    local_c8.LevelNames_DEPRECATED.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.LevelNames_DEPRECATED.ArrayNum = 0;
    local_c8.LevelNames_DEPRECATED.ArrayMax = 0;
    pFVar10 = FOptimusDataDomain::FOptimusDataDomain(&local_c8);
    pFVar11 = ::FName::FName(&local_res10,L"Count");
    pUVar12 = UOptimusNode::AddPinDirect
                        ((UOptimusNode *)this,*pFVar11,Output,pFVar10,pFVar9,(UOptimusNodePin *)0x0,
                         (UOptimusNodePin *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UOptimusNodePin *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    (this->CountPin).field0_0x0.DebugPtr = pUVar12;
    if (local_c8.LevelNames_DEPRECATED.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.LevelNames_DEPRECATED.AllocatorInstance.Data);
    }
    if (local_c8.Expression.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Expression.Data.AllocatorInstance.Data);
    }
    if (local_c8.DimensionNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.DimensionNames.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar14);
  }
  piVar1 = &(this->PinPairInfos).ArrayMax;
  pFVar3 = (FOptimusPinPairInfo *)(this->PinPairInfos).AllocatorInstance.Data;
  iVar2 = (this->PinPairInfos).ArrayNum;
  if (-1 < *piVar1) {
    DestructItems<FOptimusPinPairInfo,int>(pFVar3,iVar2);
    (this->PinPairInfos).ArrayNum = 0;
    return;
  }
  DestructItems<FOptimusPinPairInfo,int>(pFVar3,iVar2);
  (this->PinPairInfos).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->PinPairInfos).AllocatorInstance,0,piVar1);
  }
  return;
}

// GetAvailableAdderPinActions @ 14e1bb5b0

TArray<IOptimusNodeAdderPinProvider::FAdderPinAction,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusNode_LoopTerminal::GetAvailableAdderPinActions
          (UOptimusNode_LoopTerminal *this,
          TArray<IOptimusNodeAdderPinProvider::FAdderPinAction,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,UOptimusNodePin *param_1,EOptimusNodePinDirection param_2,
          FString *param_3)

{
  initializer_list<IOptimusNodeAdderPinProvider::FAdderPinAction> local_78;
  FName local_68;
  EOptimusNodePinDirection local_60;
  FName local_5c;
  FText local_50;
  undefined1 local_40;
  FAdderPinAction local_38;
  
  if (((param_1->DataDomain).Type == Dimensional) &&
     ((param_1->DataDomain).DimensionNames.ArrayNum == 0)) {
    if (param_3 != (FString *)0x0) {
      ::FString::operator=(param_3,L"Can\'t add parameter pin ");
    }
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    local_68.ComparisonIndex.Value = 0;
    local_68.Number = 0;
    local_5c.ComparisonIndex.Value = 0;
    local_5c.Number = 0;
    FText::FText(&local_50);
    local_40 = param_1->Direction != param_2;
    local_38.DisplayName = local_68;
    local_38.Key = local_5c;
    local_38.ToolTip.TextData.Reference = local_50.TextData.Reference;
    local_60 = param_2;
    local_38.NewPinDirection = param_2;
    if (local_50.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_50.TextData.Reference + 8))
                (local_50.TextData.Reference,&stack0x00000018);
    }
    local_38.ToolTip.Flags = local_50.Flags;
    local_78._First = &local_38;
    local_78._Last = (FAdderPinAction *)&stack0xfffffffffffffff8;
    local_38.bCanAutoLink = (bool)local_40;
    TArray<IOptimusNodeAdderPinProvider::FAdderPinAction,TSizedDefaultAllocator<32>_>::
    TArray<IOptimusNodeAdderPinProvider::FAdderPinAction,TSizedDefaultAllocator<32>_>
              (__return_storage_ptr__,&local_78);
    if (local_38.ToolTip.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.ToolTip.TextData.Reference + 0x10))();
    }
    if (local_50.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// GetBindingDeclaration @ 14e1bbb40

FString * __thiscall
UOptimusNode_LoopTerminal::GetBindingDeclaration
          (UOptimusNode_LoopTerminal *this,FString *__return_storage_ptr__,FName param_1)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetBindingSupportAtomicCheckBoxVisibility @ 14e1bbf50

bool __thiscall
UOptimusNode_LoopTerminal::GetBindingSupportAtomicCheckBoxVisibility
          (UOptimusNode_LoopTerminal *this,FName param_1)

{
  return false;
}

// GetBindingSupportReadCheckBoxVisibility @ 14e1bbfb0

bool __thiscall
UOptimusNode_LoopTerminal::GetBindingSupportReadCheckBoxVisibility
          (UOptimusNode_LoopTerminal *this,FName param_1)

{
  return false;
}

// GetDataFunctionIndexFromPin @ 14e1c16a0

int __cdecl UOptimusNode_LoopTerminal::GetDataFunctionIndexFromPin(UOptimusNodePin *param_1)

{
  UObject *pUVar1;
  code *pcVar2;
  FOptimusCDIPinDefinition *pFVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  UClass *pUVar7;
  FName FVar8;
  longlong lVar9;
  uint uVar10;
  FOptimusCDIPinDefinition *local_18;
  int local_10;
  
  pUVar7 = UOptimusLoopTerminalDataInterface::StaticClass();
  if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar7);
  }
  pUVar1 = (pUVar7->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar7 = UOptimusLoopTerminalDataInterface::StaticClass();
  iVar5 = (int)pUVar7->_padding_;
  if (((*(int *)(*(longlong *)&pUVar1->field_0x10 + 0x38) < iVar5) ||
      ((longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&pUVar1->field_0x10 + 0x30) + (longlong)iVar5 * 8) !=
       &pUVar7->_padding_)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ret->IsA(T::StaticClass())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x1181,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  (**(code **)(*(longlong *)pUVar1 + 0x350))(pUVar1,&local_18);
  uVar10 = 0;
  if (0 < local_10) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < local_10) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      pFVar3 = local_18;
      FVar8 = UOptimusNodePin::GetUniqueName(param_1);
      if (*(longlong *)FVar8 ==
          *(longlong *)((longlong)&(pFVar3->PinName).ComparisonIndex.Value + lVar9)) {
        if (uVar10 != 0xffffffff) goto LAB_14e1c17ea;
        break;
      }
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 0x38;
    } while ((int)uVar10 < local_10);
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_4855340561101487814>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_LoopTerminal.cpp"
                     ,0x13a,"PinIndex != INDEX_NONE");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  uVar10 = 0xffffffff;
LAB_14e1c17ea:
  DestructItems<FOptimusCDIPinDefinition,int>(local_18,local_10);
  if (local_18 != (FOptimusCDIPinDefinition *)0x0) {
    FMemory::Free(local_18);
  }
  return uVar10;
}

// GetDisplayName @ 14e1c49f0

FText * __thiscall
UOptimusNode_LoopTerminal::GetDisplayName
          (UOptimusNode_LoopTerminal *this,FText *__return_storage_ptr__)

{
  EOptimusTerminalType EVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  
  EVar1 = this->TerminalType;
  if (EVar1 == Unknown) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_LoopTerminal.cpp"
                       ,0x49,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    if (EVar1 == Entry) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"OptimusNodeLoopTerminal",L"LoopTerminalType_Entry",
                 L"Loop Entry");
      return __return_storage_ptr__;
    }
    if (EVar1 == Return) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"OptimusNodeLoopTerminal",L"LoopTerminalType_Return",
                 L"Loop Return");
      return __return_storage_ptr__;
    }
  }
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetLoopCount @ 14e1c91a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall UOptimusNode_LoopTerminal::GetLoopCount(UOptimusNode_LoopTerminal *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UOptimusNode_LoopTerminal *pUVar4;
  
  pUVar4 = this;
  if ((((this->TerminalType != Entry) &&
       (pUVar4 = GetOtherTerminal(this), pUVar4 == (UOptimusNode_LoopTerminal *)0x0)) ||
      (pUVar4 == (UOptimusNode_LoopTerminal *)0xfffffffffffffec8)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetLoopInfo()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_LoopTerminal.cpp"
                         ,0x124,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  if (this->TerminalType == Entry) {
    return (this->LoopInfo).Count;
  }
  pUVar4 = GetOtherTerminal(this);
  if (pUVar4 == (UOptimusNode_LoopTerminal *)0x0) {
    return _DAT_00000000;
  }
  return (pUVar4->LoopInfo).Count;
}

// GetLoopInfo @ 14e1ca520

FOptimusLoopTerminalInfo * __thiscall
UOptimusNode_LoopTerminal::GetLoopInfo(UOptimusNode_LoopTerminal *this)

{
  UOptimusNode_LoopTerminal *pUVar1;
  FOptimusLoopTerminalInfo *pFVar2;
  
  if (this->TerminalType == Entry) {
    return &this->LoopInfo;
  }
  pUVar1 = GetOtherTerminal(this);
  pFVar2 = (FOptimusLoopTerminalInfo *)0x0;
  if (pUVar1 != (UOptimusNode_LoopTerminal *)0x0) {
    pFVar2 = &pUVar1->LoopInfo;
  }
  return pFVar2;
}

// GetLoopInfo @ 14e1ca560

FOptimusLoopTerminalInfo * __thiscall
UOptimusNode_LoopTerminal::GetLoopInfo(UOptimusNode_LoopTerminal *this)

{
  UOptimusNode_LoopTerminal *pUVar1;
  FOptimusLoopTerminalInfo *pFVar2;
  
  if (this->TerminalType == Entry) {
    return &this->LoopInfo;
  }
  pUVar1 = GetOtherTerminal(this);
  pFVar2 = (FOptimusLoopTerminalInfo *)0x0;
  if (pUVar1 != (UOptimusNode_LoopTerminal *)0x0) {
    pFVar2 = &pUVar1->LoopInfo;
  }
  return pFVar2;
}

// GetNameForAdderPin @ 14e1ca7e0

FName __thiscall
UOptimusNode_LoopTerminal::GetNameForAdderPin
          (UOptimusNode_LoopTerminal *this,UOptimusNodePin *param_1)

{
  char cVar1;
  UOptimusNodePin *pUVar2;
  UOptimusNodePin *in_R8;
  undefined1 local_res8;
  undefined1 local_res9;
  
  cVar1 = (**(code **)(this->_padding_ + 0x10))();
  if (cVar1 != '\0') {
    local_res9 = 0;
    pUVar2 = GetPinCounterpart((UOptimusNode_LoopTerminal *)&this[-1]._padding_,in_R8,
                               (EOptimusTerminalType)this->_padding_,SUB82(&local_res8,0));
    param_1->_padding_ = pUVar2->_padding_;
    return (FName)param_1;
  }
  param_1->_padding_ = in_R8->_padding_;
  return (FName)param_1;
}

// GetNodeCategory @ 14e1cae80

FName __thiscall UOptimusNode_LoopTerminal::GetNodeCategory(UOptimusNode_LoopTerminal *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetOtherTerminal @ 14e1cba10

UOptimusNode_LoopTerminal * __thiscall
UOptimusNode_LoopTerminal::GetOtherTerminal(UOptimusNode_LoopTerminal *this)

{
  int iVar1;
  UOptimusNode_LoopTerminal *pUVar2;
  UClass *pUVar3;
  UOptimusNodePair *pUVar4;
  UOptimusNode_LoopTerminal *pUVar5;
  UOptimusNodeGraph *this_00;
  bool bVar6;
  
  this_00 = (UOptimusNodeGraph *)this->_padding_;
  if (this_00 != (UOptimusNodeGraph *)0x0) {
    pUVar3 = UOptimusNodeGraph::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14e1cba4b;
  }
  this_00 = (UOptimusNodeGraph *)0x0;
LAB_14e1cba4b:
  pUVar4 = UOptimusNodeGraph::GetNodePair(this_00,(UOptimusNode *)this);
  if (pUVar4 != (UOptimusNodePair *)0x0) {
    pUVar2 = (UOptimusNode_LoopTerminal *)(pUVar4->First).field0_0x0.DebugPtr;
    if (pUVar2 == (UOptimusNode_LoopTerminal *)0x0) {
      bVar6 = this == (UOptimusNode_LoopTerminal *)0x0;
    }
    else {
      bVar6 = pUVar2 == this;
    }
    if (bVar6) {
      pUVar5 = (UOptimusNode_LoopTerminal *)(pUVar4->Second).field0_0x0.DebugPtr;
    }
    else {
      pUVar5 = (UOptimusNode_LoopTerminal *)(pUVar4->Second).field0_0x0.DebugPtr;
      if (pUVar5 == (UOptimusNode_LoopTerminal *)0x0) {
        bVar6 = this == (UOptimusNode_LoopTerminal *)0x0;
      }
      else {
        bVar6 = pUVar5 == this;
      }
      pUVar5 = (UOptimusNode_LoopTerminal *)0x0;
      if (bVar6) {
        pUVar5 = pUVar2;
      }
    }
    if (pUVar5 != (UOptimusNode_LoopTerminal *)0x0) {
      pUVar3 = StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar5;
      }
    }
  }
  return (UOptimusNode_LoopTerminal *)0x0;
}

// GetOutputPinMutability @ 14e1cbf70

EOptimusPinMutability __thiscall
UOptimusNode_LoopTerminal::GetOutputPinMutability
          (UOptimusNode_LoopTerminal *this,UOptimusNodePin *param_1)

{
  bool bVar1;
  
  if ((UOptimusNodePin *)this->_padding_ == (UOptimusNodePin *)0x0) {
    bVar1 = param_1 == (UOptimusNodePin *)0x0;
  }
  else {
    bVar1 = (UOptimusNodePin *)this->_padding_ == param_1;
  }
  if (!bVar1) {
    if ((UOptimusNodePin *)this->_padding_ == (UOptimusNodePin *)0x0) {
      return (EOptimusPinMutability)(param_1 == (UOptimusNodePin *)0x0);
    }
    return (EOptimusPinMutability)((UOptimusNodePin *)this->_padding_ == param_1);
  }
  return Immutable;
}

// GetPairIndex @ 14e1cc140

int __cdecl UOptimusNode_LoopTerminal::GetPairIndex(UOptimusNodePin *param_1)

{
  int iVar1;
  FOptimusPinPairInfo *pFVar2;
  bool bVar3;
  UOptimusNode *pUVar4;
  UOptimusNode_LoopTerminal *pUVar5;
  FOptimusPinPairInfo *pFVar6;
  UOptimusNodePin *local_res8;
  
  pUVar4 = UOptimusNodePin::GetOwningNode(param_1);
  pUVar5 = CastChecked<UOptimusNode_LoopTerminal,UOptimusNode>(pUVar4);
  pFVar2 = (FOptimusPinPairInfo *)(pUVar5->PinPairInfos).AllocatorInstance.Data;
  iVar1 = (pUVar5->PinPairInfos).ArrayNum;
  pFVar6 = pFVar2;
  local_res8 = param_1;
  while( true ) {
    if (pFVar6 == pFVar2 + iVar1) {
      return -1;
    }
    bVar3 = `UOptimusNode_LoopTerminal::GetPairIndex'::__l2::<lambda_1>::operator()
                      (&local_res8,pFVar6);
    if (bVar3) break;
    pFVar6 = pFVar6 + 1;
  }
  return (int)((longlong)pFVar6 - (longlong)pFVar2 >> 5);
}

// GetPairedPins @ 14e1cc1d0

TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusNode_LoopTerminal::GetPairedPins
          (UOptimusNode_LoopTerminal *this,
          TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FOptimusPinPairInfo *param_1)

{
  FScriptContainerElement *pFVar1;
  UOptimusNodePin *pUVar2;
  UOptimusNodePin *pUVar3;
  
  pUVar2 = UOptimusNode::FindPinFromPath((UOptimusNode *)this,&param_1->InputPinPath);
  pUVar3 = UOptimusNode::FindPinFromPath((UOptimusNode *)this,&param_1->OutputPinPath);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,2,0,&__return_storage_ptr__->AllocatorInstance,2,&__return_storage_ptr__->ArrayMax)
  ;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(UOptimusNodePin **)pFVar1 = pUVar2;
  *(UOptimusNodePin **)(pFVar1 + 8) = pUVar3;
  return __return_storage_ptr__;
}

// GetPinCounterpart @ 14e1cce80

UOptimusNodePin * __thiscall
UOptimusNode_LoopTerminal::GetPinCounterpart
          (UOptimusNode_LoopTerminal *this,UOptimusNodePin *param_1,EOptimusTerminalType param_2,
          TOptional<EOptimusNodePinDirection> param_3)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  UOptimusNodePin *pUVar5;
  uint uVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  undefined6 in_register_0000008a;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  UOptimusNodePin *local_18;
  UOptimusNodePin *pUStack_10;
  
  uVar4 = GetPairIndex(param_1);
  if (param_2 == Unknown) {
    this = (UOptimusNode_LoopTerminal *)0x0;
  }
  else if (this->TerminalType != param_2) {
    this = GetOtherTerminal(this);
  }
  uVar6 = 0;
  if ((int)uVar4 < (this->PinPairInfos).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar5 = (UOptimusNodePin *)(*pcVar1)();
      return pUVar5;
    }
  }
  pTVar7 = (TArray<FName,TSizedDefaultAllocator<32>_> *)
           ((this->PinPairInfos).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x20);
  local_18 = UOptimusNode::FindPinFromPath((UOptimusNode *)this,pTVar7);
  pUStack_10 = UOptimusNode::FindPinFromPath((UOptimusNode *)this,pTVar7 + 1);
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,2,0,&local_28,2,&local_1c);
  *(UOptimusNodePin **)local_28.Data = local_18;
  *(UOptimusNodePin **)(local_28.Data + 8) = pUStack_10;
  cVar3 = (param_1->Direction == Input) + '\x01';
  if (((char *)CONCAT62(in_register_0000008a,param_3))[1] != '\0') {
    cVar3 = *(char *)CONCAT62(in_register_0000008a,param_3);
  }
  if (cVar3 == '\x01') {
    if (local_20 < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar5 = (UOptimusNodePin *)(*pcVar1)();
        return pUVar5;
      }
    }
    pUVar5 = *(UOptimusNodePin **)local_28.Data;
  }
  else {
    if (local_20 < 2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar5 = (UOptimusNodePin *)(*pcVar1)();
        return pUVar5;
      }
    }
    pUVar5 = *(UOptimusNodePin **)(local_28.Data + 8);
  }
  FMemory::Free(local_28.Data);
  return pUVar5;
}

// GetPrivateStaticClass @ 14e1d7ca0

UClass * __cdecl UOptimusNode_LoopTerminal::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode_LoopTerminal.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode_LoopTerminal",
               &Z_Registration_Info_UClass_UOptimusNode_LoopTerminal.InnerSingleton,
               StaticRegisterNativesUOptimusNode_LoopTerminal,0x170,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UOptimusNode_LoopTerminal>,
               InternalVTableHelperCtorCaller<UOptimusNode_LoopTerminal>,local_res8,
               UOptimusNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode_LoopTerminal.InnerSingleton;
}

// GetSanitizedBindingName @ 14e1e0130

FName __thiscall
UOptimusNode_LoopTerminal::GetSanitizedBindingName
          (UOptimusNode_LoopTerminal *this,FName param_1,FName param_2)

{
  longlong lVar1;
  FName FVar2;
  longlong in_R9;
  FName local_res10;
  
  *(FName *)param_1 = param_2;
  if (param_2 == (FName)0x0) {
    ::FName::FName(&local_res10,L"EmptyName");
    *(FName *)param_1 = local_res10;
  }
  FVar2 = Optimus::GetSanitizedNameForHlsl((FName)&local_res10);
  lVar1 = *(longlong *)FVar2;
  *(longlong *)param_1 = lVar1;
  if (lVar1 != in_R9) {
    FVar2 = UOptimusNode::GetAvailablePinNameStable((UObject *)&local_res10,(FName)this);
    *(undefined8 *)param_1 = *(undefined8 *)FVar2;
  }
  return param_1;
}

// GetTerminalByType @ 14e1e6e90

UOptimusNode_LoopTerminal * __thiscall
UOptimusNode_LoopTerminal::GetTerminalByType
          (UOptimusNode_LoopTerminal *this,EOptimusTerminalType param_1)

{
  UOptimusNode_LoopTerminal *pUVar1;
  
  if (param_1 == Unknown) {
    return (UOptimusNode_LoopTerminal *)0x0;
  }
  if (this->TerminalType == param_1) {
    return this;
  }
  pUVar1 = GetOtherTerminal(this);
  return pUVar1;
}

// GetTerminalByType @ 14e1e6eb0

UOptimusNode_LoopTerminal * __thiscall
UOptimusNode_LoopTerminal::GetTerminalByType
          (UOptimusNode_LoopTerminal *this,EOptimusTerminalType param_1)

{
  UOptimusNode_LoopTerminal *pUVar1;
  
  if (param_1 == Unknown) {
    return (UOptimusNode_LoopTerminal *)0x0;
  }
  if (this->TerminalType == param_1) {
    return this;
  }
  pUVar1 = GetOtherTerminal(this);
  return pUVar1;
}

// GetTerminalType @ 14e1e6f80

EOptimusTerminalType __thiscall
UOptimusNode_LoopTerminal::GetTerminalType(UOptimusNode_LoopTerminal *this)

{
  return this->TerminalType;
}

// GetTypeUsageFlags @ 14e1e7e20

EOptimusDataTypeUsageFlags __thiscall
UOptimusNode_LoopTerminal::GetTypeUsageFlags
          (UOptimusNode_LoopTerminal *this,FOptimusDataDomain *param_1)

{
  code *pcVar1;
  bool bVar2;
  EOptimusDataTypeUsageFlags EVar3;
  
  if ((param_1->Type == Dimensional) && ((param_1->DimensionNames).ArrayNum == 0)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4855340561101487870>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_LoopTerminal.cpp"
                       ,0x102,"!InDataDomain.IsSingleton()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    return None;
  }
  return Resource;
}

// IsPinNameHidden @ 14e1efdb0

bool __thiscall
UOptimusNode_LoopTerminal::IsPinNameHidden(UOptimusNode_LoopTerminal *this,UOptimusNodePin *param_1)

{
  int iVar1;
  
  if (((param_1->DataDomain).Type != Dimensional) ||
     ((param_1->DataDomain).DimensionNames.ArrayNum != 0)) {
    iVar1 = (int)this->_padding_;
    if (iVar1 == 1) {
      if (param_1->Direction == Output) {
        return true;
      }
    }
    else if (iVar1 == 2) {
      return param_1->Direction == Input;
    }
  }
  return false;
}

// MovePinPair @ 14e1f2600

/* WARNING: Removing unreachable block (ram,0x00014e1f2913) */

void __thiscall UOptimusNode_LoopTerminal::MovePinPair(UOptimusNode_LoopTerminal *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  UOptimusNode_LoopTerminal *pUVar11;
  ulonglong uVar12;
  FOptimusPinPairInfo *pFVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  UOptimusNodePin *pUVar17;
  uint uVar18;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar19;
  TArray<FOptimusPinPairInfo,TSizedDefaultAllocator<32>_> *pTVar21;
  UOptimusNodePin *pUVar22;
  FOptimusParameterBindingArray *pFVar23;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar24;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *pTVar25;
  ForAnyElementType FVar26;
  FScriptContainerElement *pFVar27;
  UOptimusNodePin *pUVar28;
  uint local_res10 [2];
  undefined1 local_res18 [8];
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *local_res20;
  ForAnyElementType local_138;
  uint local_130;
  uint local_12c;
  TArray<FName,TSizedDefaultAllocator<32>_> local_128;
  TArray<FName,TSizedDefaultAllocator<32>_> local_118;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_108;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *local_e0;
  uint local_d8;
  FName local_d0;
  FName local_c8;
  FOptimusPinPairInfo local_c0;
  FOptimusPinPairInfo local_a0;
  UOptimusNodePin *local_80;
  UOptimusNodePin *pUStack_78;
  FOptimusPinPairInfo local_70;
  UOptimusNodePin *pUVar20;
  
  pUVar22 = (UOptimusNodePin *)0x0;
  local_res10[0] = 0;
  if (this->TerminalType == Entry) {
    pFVar23 = &(this->LoopInfo).Bindings;
  }
  else {
    pUVar11 = GetOtherTerminal(this);
    pFVar23 = &(pUVar11->LoopInfo).Bindings;
    if (pUVar11 == (UOptimusNode_LoopTerminal *)0x0) {
      pFVar23 = (FOptimusParameterBindingArray *)&DAT_00000008;
    }
  }
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 0;
  local_118.ArrayMax = 0;
  iVar10 = (pFVar23->InnerArray).ArrayNum;
  pFVar15 = (pFVar23->InnerArray).AllocatorInstance.Data;
  pFVar27 = pFVar15 + (longlong)iVar10 * 0x80;
  pUVar17 = pUVar22;
  while( true ) {
    uVar6 = (uint)pUVar17;
    if ((pFVar23->InnerArray).ArrayNum != iVar10) {
      local_res10[0] = local_res10[0] & 0xffffff00;
      `TCheckedPointerIterator<FOptimusParameterBinding,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
      uVar6 = local_118.ArrayNum;
    }
    if (pFVar15 == pFVar27) break;
    local_f0 = *(undefined8 *)pFVar15;
    if (((local_118.AllocatorInstance.Data <= (FScriptContainerElement *)&local_f0) &&
        ((FScriptContainerElement *)&local_f0 <
         local_118.AllocatorInstance.Data + (longlong)local_118.ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), uVar6 = local_118.ArrayNum, bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar6 == local_118.ArrayMax) {
      uVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&local_118.AllocatorInstance,&local_118.ArrayMax);
    }
    local_118.ArrayNum = uVar6 + 1;
    pFVar15 = pFVar15 + 0x80;
    *(undefined8 *)(local_118.AllocatorInstance.Data + (longlong)(int)uVar6 * 8) = local_f0;
    pUVar17 = (UOptimusNodePin *)(ulonglong)(uint)local_118.ArrayNum;
  }
  if (((this->PinPairInfos).ArrayNum != (pFVar23->InnerArray).ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PinPairInfos.Num() == Bindings.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_LoopTerminal.cpp"
                         ,0x1c2,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar10 = (this->PinPairInfos).ArrayNum;
  pTVar19 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(this->PinPairInfos).AllocatorInstance.Data
  ;
  pTVar24 = pTVar19 + (longlong)iVar10 * 2;
  local_138.Data = (FScriptContainerElement *)0x0;
  uVar6 = 0;
  local_130 = 0;
  local_12c = 0;
  pUVar17 = pUVar22;
  while( true ) {
    if ((this->PinPairInfos).ArrayNum != iVar10) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FOptimusPinPairInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
      pUVar17 = (UOptimusNodePin *)(ulonglong)local_130;
    }
    if (pTVar19 == pTVar24) break;
    local_80 = UOptimusNode::FindPinFromPath((UOptimusNode *)this,pTVar19);
    pUStack_78 = UOptimusNode::FindPinFromPath((UOptimusNode *)this,pTVar19 + 1);
    local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.ArrayNum = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,2,0,&local_108.AllocatorInstance,2,&local_108.ArrayMax);
    *(UOptimusNodePin **)local_108.AllocatorInstance.Data = local_80;
    *(UOptimusNodePin **)(local_108.AllocatorInstance.Data + 8) = pUStack_78;
    if (((local_138.Data <= &local_108) &&
        (&local_108 <
         (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)
         (local_138.Data + (longlong)(int)local_12c * 0x10))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_130 == local_12c) {
      local_130 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_138,(int *)&local_12c);
    }
    pFVar15 = local_138.Data + (longlong)(int)local_130 * 0x10;
    *(undefined8 *)&pFVar15->field_0x0 = 0;
    *(FScriptContainerElement **)&pFVar15->field_0x0 = local_108.AllocatorInstance.Data;
    local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar15 + 8) = local_108.ArrayNum;
    *(int *)(pFVar15 + 0xc) = local_108.ArrayMax;
    local_108.ArrayNum = 0;
    local_108.ArrayMax = 0;
    pUVar17 = (UOptimusNodePin *)(ulonglong)(local_130 + 1);
    pTVar19 = pTVar19 + 2;
    local_130 = local_130 + 1;
  }
  bVar5 = this->TerminalType == Return;
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar12 = (ulonglong)bVar5;
  local_128.ArrayNum = 0;
  local_128.ArrayMax = 0;
  uVar8 = (uint)bVar5;
  pUVar20 = pUVar22;
  pUVar28 = pUVar22;
  if (0 < (int)pUVar17) {
    do {
      uVar18 = (uint)pUVar20;
      uVar7 = uVar6;
      if ((int)uVar18 < (int)pUVar17) {
        uVar7 = ~uVar18 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar26.Data = local_138.Data;
      if ((*(int *)(local_138.Data + 8 + (longlong)pUVar28) <= (int)uVar8) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_e8 = *(undefined8 *)
                  (*(longlong *)(*(longlong *)(FVar26.Data + (longlong)pUVar28) + uVar12 * 8) + 0x18
                  );
      if (((local_128.AllocatorInstance.Data <= (FScriptContainerElement *)&local_e8) &&
          ((FScriptContainerElement *)&local_e8 <
           local_128.AllocatorInstance.Data + (longlong)local_128.ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_128.ArrayNum == local_128.ArrayMax) {
        local_128.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&local_128.AllocatorInstance,&local_128.ArrayMax);
      }
      lVar16 = (longlong)local_128.ArrayNum;
      local_128.ArrayNum = local_128.ArrayNum + 1;
      *(undefined8 *)(local_128.AllocatorInstance.Data + lVar16 * 8) = local_e8;
      pUVar17 = (UOptimusNodePin *)(ulonglong)local_130;
      pUVar20 = (UOptimusNodePin *)(ulonglong)(uVar18 + 1);
      pUVar28 = (UOptimusNodePin *)&pUVar28->_padding_;
    } while ((int)(uVar18 + 1) < (int)local_130);
  }
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  bVar5 = Optimus::FindMovedItemInNameArray(&local_128,&local_118,&local_d0,&local_c8);
  FVar4 = local_d0;
  if (bVar5) {
    pTVar25 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)
              (local_138.Data + (longlong)(int)local_130 * 0x10);
    local_res20 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)local_138.Data;
    if ((TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)local_138.Data != pTVar25) {
      FVar26.Data = local_138.Data;
      do {
        uVar7 = uVar6;
        if ((int)uVar8 <
            ((TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)FVar26.Data)->ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(FName *)(*(longlong *)
                        ((((TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)FVar26.Data)->
                         AllocatorInstance).Data + uVar12 * 8) + 0x18) == FVar4) {
          uVar7 = (uint)((longlong)FVar26.Data - (longlong)local_res20 >> 4);
          goto LAB_14e1f2b71;
        }
        FVar26.Data = FVar26.Data + 0x10;
      } while ((TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)FVar26.Data != pTVar25);
    }
    uVar7 = 0xffffffff;
LAB_14e1f2b71:
    FVar4 = local_c8;
    uVar18 = 0xffffffff;
    if (local_c8 != (FName)0x0) {
      pTVar25 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)
                (local_138.Data + (longlong)(int)local_130 * 0x10);
      local_e0 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)local_138.Data;
      if ((TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)local_138.Data != pTVar25) {
        local_res20 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(uVar12 * 8);
        FVar26.Data = local_138.Data;
        do {
          uVar18 = uVar6;
          if ((int)uVar8 <
              ((TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)FVar26.Data)->ArrayNum) {
            uVar18 = ~uVar8 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(FName *)(*(longlong *)
                          ((((TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)FVar26.Data)->
                           AllocatorInstance).Data +
                          (longlong)&(local_res20->AllocatorInstance).Data) + 0x18) == FVar4) {
            uVar18 = (uint)((longlong)FVar26.Data - (longlong)local_e0 >> 4);
            goto LAB_14e1f2c27;
          }
          FVar26.Data = FVar26.Data + 0x10;
        } while ((TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)FVar26.Data != pTVar25);
      }
      uVar18 = 0xffffffff;
    }
LAB_14e1f2c27:
    pUVar17 = pUVar22;
    if (uVar18 != 0xffffffff) {
      uVar8 = uVar6;
      if ((int)uVar18 < (int)local_130) {
        uVar8 = ~uVar18 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar15 = local_138.Data + (longlong)(int)uVar18 * 0x10;
      if ((*(int *)(pFVar15 + 8) < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar17 = (UOptimusNodePin *)**(undefined8 **)&pFVar15->field_0x0;
    }
    local_d8 = ~uVar7;
    local_res20 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)
                  CONCAT44(local_res20._4_4_,local_d8 >> 0x1f);
    uVar8 = uVar6;
    if ((int)uVar7 < (int)local_130) {
      uVar8 = local_d8 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_f8 = (longlong)(int)uVar7;
    pFVar15 = local_138.Data + local_f8 * 0x10;
    if ((*(int *)(pFVar15 + 8) < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UOptimusNode::MovePin
              ((UOptimusNode *)this,(UOptimusNodePin *)**(undefined8 **)&pFVar15->field_0x0,pUVar17)
    ;
    if (uVar18 == 0xffffffff) {
      pUVar17 = (this->IndexPin).field0_0x0.DebugPtr;
    }
    else {
      uVar8 = 0;
      if ((int)uVar18 < (int)local_130) {
        uVar8 = ~uVar18 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar15 = local_138.Data + (longlong)(int)uVar18 * 0x10;
      if ((*(int *)(pFVar15 + 8) < 2) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar17 = *(UOptimusNodePin **)(*(longlong *)&pFVar15->field_0x0 + 8);
    }
    lVar16 = local_f8;
    uVar8 = 0;
    if ((int)uVar7 < (int)local_130) {
      uVar8 = (uint)local_res20;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar15 = local_138.Data + lVar16 * 0x10;
    if ((*(int *)(pFVar15 + 8) < 2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UOptimusNode::MovePin
              ((UOptimusNode *)this,*(UOptimusNodePin **)(*(longlong *)&pFVar15->field_0x0 + 8),
               pUVar17);
    uVar8 = uVar6;
    if ((int)uVar7 < (this->PinPairInfos).ArrayNum) {
      uVar8 = (uint)local_res20;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FOptimusPinPairInfo::FOptimusPinPairInfo
              (&local_c0,
               (FOptimusPinPairInfo *)
               ((this->PinPairInfos).AllocatorInstance.Data + local_f8 * 0x20));
    if (uVar18 == 0xffffffff) {
      local_a0.InputPinPath.ArrayNum = 0;
      pFVar13 = &local_a0;
      local_a0.OutputPinPath.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      bVar3 = false;
      bVar5 = true;
      local_a0.OutputPinPath.ArrayNum = 0;
      local_a0.OutputPinPath.ArrayMax = 0;
    }
    else {
      uVar8 = uVar6;
      if ((int)uVar18 < (this->PinPairInfos).ArrayNum) {
        uVar8 = ~uVar18 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar13 = FOptimusPinPairInfo::FOptimusPinPairInfo
                          (&local_70,
                           (FOptimusPinPairInfo *)
                           ((this->PinPairInfos).AllocatorInstance.Data +
                           (longlong)(int)uVar18 * 0x20));
      bVar3 = true;
      bVar5 = false;
      pUVar22 = (UOptimusNodePin *)(pFVar13->InputPinPath).AllocatorInstance.Data;
    }
    (pFVar13->InputPinPath).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar10 = (pFVar13->InputPinPath).ArrayNum;
    (pFVar13->InputPinPath).ArrayNum = 0;
    (pFVar13->InputPinPath).ArrayMax = 0;
    local_e0 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)
               (pFVar13->OutputPinPath).AllocatorInstance.Data;
    (pFVar13->OutputPinPath).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar9 = (pFVar13->OutputPinPath).ArrayNum;
    (pFVar13->OutputPinPath).ArrayNum = 0;
    (pFVar13->OutputPinPath).ArrayMax = 0;
    if (bVar5) {
      if (local_a0.OutputPinPath.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.OutputPinPath.AllocatorInstance.Data);
      }
      if (local_a0.InputPinPath.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.InputPinPath.AllocatorInstance.Data);
      }
    }
    if (bVar3) {
      if (local_70.OutputPinPath.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.OutputPinPath.AllocatorInstance.Data);
      }
      if (local_70.InputPinPath.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.InputPinPath.AllocatorInstance.Data);
      }
    }
    if ((int)uVar7 < (this->PinPairInfos).ArrayNum) {
      uVar6 = (uint)local_res20;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar15 = (this->PinPairInfos).AllocatorInstance.Data + local_f8 * 0x20;
    if (*(void **)(pFVar15 + 0x10) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar15 + 0x10));
    }
    if (*(void **)pFVar15 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar15);
    }
    iVar14 = local_d8 + (this->PinPairInfos).ArrayNum;
    if (iVar14 != 0) {
      memmove(pFVar15,pFVar15 + 0x20,(longlong)iVar14 << 5);
    }
    piVar1 = &(this->PinPairInfos).ArrayMax;
    iVar14 = (this->PinPairInfos).ArrayNum + -1;
    (this->PinPairInfos).ArrayNum = iVar14;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,&(this->PinPairInfos).AllocatorInstance,iVar14,piVar1);
    pTVar25 = local_e0;
    pTVar21 = &this->PinPairInfos;
    if (uVar18 == 0xffffffff) {
      pFVar13 = (FOptimusPinPairInfo *)(pTVar21->AllocatorInstance).Data;
      if (((pFVar13 <= &local_c0) && (&local_c0 < pFVar13 + *piVar1)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar10 = (this->PinPairInfos).ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&pTVar21->AllocatorInstance,piVar1);
      }
      pFVar13 = (FOptimusPinPairInfo *)((pTVar21->AllocatorInstance).Data + (longlong)iVar10 * 0x20)
      ;
      (this->PinPairInfos).ArrayNum = iVar10 + 1;
    }
    else {
      pFVar15 = (pTVar21->AllocatorInstance).Data;
      iVar14 = (this->PinPairInfos).ArrayNum;
      for (pFVar27 = pFVar15; pFVar27 != pFVar15 + (longlong)iVar14 * 0x20; pFVar27 = pFVar27 + 0x20
          ) {
        if (((iVar10 == *(int *)(pFVar27 + 8)) &&
            (bVar5 = CompareItems<FName,int>((FName *)pUVar22,*(FName **)pFVar27,iVar10), bVar5)) &&
           ((iVar9 == *(int *)(pFVar27 + 0x18) &&
            (bVar5 = CompareItems<FName,int>((FName *)pTVar25,*(FName **)(pFVar27 + 0x10),iVar9),
            bVar5)))) {
          iVar10 = (int)((longlong)pFVar27 - (longlong)pFVar15 >> 5);
          goto LAB_14e1f3173;
        }
      }
      iVar10 = -1;
LAB_14e1f3173:
      pTVar21 = &this->PinPairInfos;
      pFVar13 = (FOptimusPinPairInfo *)(pTVar21->AllocatorInstance).Data;
      if (((pFVar13 <= &local_c0) && (&local_c0 < pFVar13 + (this->PinPairInfos).ArrayMax)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar9 = (this->PinPairInfos).ArrayNum;
      if (iVar9 == (this->PinPairInfos).ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&pTVar21->AllocatorInstance,&(this->PinPairInfos).ArrayMax);
      }
      pFVar15 = (pTVar21->AllocatorInstance).Data;
      (this->PinPairInfos).ArrayNum = iVar9 + 1;
      pFVar15 = pFVar15 + (longlong)iVar10 * 0x20;
      memmove(pFVar15 + 0x20,pFVar15,(longlong)(iVar9 - iVar10) << 5);
      pFVar13 = (FOptimusPinPairInfo *)((pTVar21->AllocatorInstance).Data + (longlong)iVar10 * 0x20)
      ;
    }
    FOptimusPinPairInfo::FOptimusPinPairInfo(pFVar13,&local_c0);
    if (local_e0 != (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_e0);
    }
    if (pUVar22 != (UOptimusNodePin *)0x0) {
      FMemory::Free(pUVar22);
    }
    if (local_c0.OutputPinPath.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.OutputPinPath.AllocatorInstance.Data);
    }
    if (local_c0.InputPinPath.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.InputPinPath.AllocatorInstance.Data);
    }
  }
  if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  DestructItems<TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)local_138.Data,local_130);
  if ((TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)local_138.Data !=
      (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_138.Data);
  }
  if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  return;
}

// PairToCounterpartNode @ 14e1f5d10

void __thiscall
UOptimusNode_LoopTerminal::PairToCounterpartNode
          (UOptimusNode_LoopTerminal *this,IOptimusNodePairProvider *param_1)

{
  longlong *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UOptimusNode_LoopTerminal *pUVar4;
  FOptimusParameterBinding *pFVar5;
  FOptimusParameterBinding *pFVar6;
  undefined1 local_res8 [8];
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_28;
  
  this_00 = &this[-1]._padding_;
  pUVar4 = (UOptimusNode_LoopTerminal *)this_00;
  if ((((int)this->_padding_ == 1) ||
      (pUVar4 = GetOtherTerminal((UOptimusNode_LoopTerminal *)this_00),
      pUVar4 != (UOptimusNode_LoopTerminal *)0x0)) &&
     (pUVar4 != (UOptimusNode_LoopTerminal *)0xfffffffffffffec8)) {
    pFVar5 = (FOptimusParameterBinding *)
             (pUVar4->LoopInfo).Bindings.InnerArray.AllocatorInstance.Data;
    iVar1 = (pUVar4->LoopInfo).Bindings.InnerArray.ArrayNum;
    pFVar6 = pFVar5 + iVar1;
    while( true ) {
      if ((pUVar4->LoopInfo).Bindings.InnerArray.ArrayNum != iVar1) {
        `TCheckedPointerIterator<FOptimusParameterBinding,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar5 == pFVar6) break;
      AddPinPairsDirect((UOptimusNode_LoopTerminal *)this_00,&local_28,pFVar5);
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      pFVar5 = pFVar5 + 1;
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4855340561101487896>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_LoopTerminal.cpp"
                       ,0xe8,"LoopInfoPtr");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// RemoveAddedPins @ 14e211eb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UOptimusNode_LoopTerminal::RemoveAddedPins
          (UOptimusNode_LoopTerminal *this,TArrayView<UOptimusNodePin_*_const,int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  char *pcVar5;
  UOptimusNodePin **ppUVar6;
  UOptimusNode_LoopTerminal *pUVar7;
  atomic<unsigned_char> *paVar8;
  TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *this_00;
  longlong *this_01;
  
  if (param_1->ArrayNum == 0) {
    pcVar5 = "!InAddedPinsToRemove.IsEmpty()";
    iVar4 = 0xac;
    paVar8 = &bGEnsureHasExecuted<_4855340561101487956>;
  }
  else {
    ppUVar6 = TArrayView<UOptimusNodePin_*_const,int>::operator[](param_1,0);
    iVar4 = GetPairIndex(*ppUVar6);
    if (iVar4 != -1) {
      this_01 = &this[-1]._padding_;
      pUVar7 = (UOptimusNode_LoopTerminal *)this_01;
      if ((int)this->_padding_ != 1) {
        pUVar7 = GetOtherTerminal((UOptimusNode_LoopTerminal *)this_01);
      }
      RemovePinPairDirect(pUVar7,iVar4);
      pUVar7 = (UOptimusNode_LoopTerminal *)this_01;
      if ((int)this->_padding_ != 2) {
        pUVar7 = GetOtherTerminal((UOptimusNode_LoopTerminal *)this_01);
      }
      RemovePinPairDirect(pUVar7,iVar4);
      pUVar7 = (UOptimusNode_LoopTerminal *)this_01;
      if (((((int)this->_padding_ != 1) &&
           (pUVar7 = GetOtherTerminal((UOptimusNode_LoopTerminal *)this_01),
           pUVar7 == (UOptimusNode_LoopTerminal *)0x0)) ||
          (pUVar7 == (UOptimusNode_LoopTerminal *)0xfffffffffffffec8)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("GetLoopInfo()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_LoopTerminal.cpp"
                             ,0xba,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if ((int)this->_padding_ == 1) {
        this_00 = (TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *)&this->_padding_;
      }
      else {
        pUVar7 = GetOtherTerminal((UOptimusNode_LoopTerminal *)this_01);
        this_00 = &(pUVar7->LoopInfo).Bindings.InnerArray;
        if (pUVar7 == (UOptimusNode_LoopTerminal *)0x0) {
          this_00 = (TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *)&DAT_00000008;
        }
      }
      TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_>::RemoveAt(this_00,iVar4,Default);
      return true;
    }
    pcVar5 = "PairIndex != INDEX_NONE";
    iVar4 = 0xb3;
    paVar8 = &bGEnsureHasExecuted<_4855340561101487949>;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar8,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_LoopTerminal.cpp"
                     ,iVar4,pcVar5);
  if (!bVar2) {
    return false;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return (bool)uVar3;
}

// RemovePinPair @ 14e215f40

void __thiscall
UOptimusNode_LoopTerminal::RemovePinPair(UOptimusNode_LoopTerminal *this,int param_1)

{
  TArray<FOptimusPinPairInfo,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar1;
  FOptimusPinPairInfo *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  FOptimusPinPairInfo *local_res8;
  undefined1 local_res10 [8];
  ForAnyElementType local_68;
  uint local_60;
  int local_5c;
  UOptimusNodePin *local_58;
  UOptimusNodePin *pUStack_50;
  FOptimusPinPairInfo local_48;
  
  if ((param_1 < 0) || ((this->PinPairInfos).ArrayNum <= param_1)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4855340561101487730>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_LoopTerminal.cpp"
                       ,0x18e,"PinPairInfos.IsValidIndex(InPairIndex)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    this_00 = &this->PinPairInfos;
    uVar5 = 0;
    if (param_1 < (this->PinPairInfos).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FOptimusPinPairInfo::FOptimusPinPairInfo
              (&local_48,
               (FOptimusPinPairInfo *)((this_00->AllocatorInstance).Data + (longlong)param_1 * 0x20)
              );
    local_58 = UOptimusNode::FindPinFromPath((UOptimusNode *)this,&local_48.InputPinPath);
    pUStack_50 = UOptimusNode::FindPinFromPath((UOptimusNode *)this,&local_48.OutputPinPath);
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60 = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,2,0,&local_68,2,&local_5c);
    uVar5 = local_60;
    *(UOptimusNodePin **)local_68.Data = local_58;
    *(UOptimusNodePin **)(local_68.Data + 8) = pUStack_50;
    uVar6 = (ulonglong)(int)local_60;
    pFVar1 = local_68.Data + uVar6 * 8;
    FVar7.Data = local_68.Data;
    while( true ) {
      if ((uint)uVar6 != uVar5) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<UOptimusNodePin_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (FVar7.Data == pFVar1) break;
      UOptimusNode::RemovePin((UOptimusNode *)this,*(UOptimusNodePin **)FVar7.Data);
      uVar6 = (ulonglong)local_60;
      FVar7.Data = FVar7.Data + 8;
    }
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    pFVar2 = (FOptimusPinPairInfo *)(this_00->AllocatorInstance).Data;
    if ((pFVar2 <= &local_48) && (&local_48 < pFVar2 + (this->PinPairInfos).ArrayMax)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_res8 = &local_48;
    TArray<FOptimusPinPairInfo,TSizedDefaultAllocator<32>_>::
    RemoveAll<_TArray<FOptimusPinPairInfo,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
              (this_00,(<lambda_1> *)&local_res8);
    if (local_48.OutputPinPath.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.OutputPinPath.AllocatorInstance.Data);
    }
    if (local_48.InputPinPath.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.InputPinPath.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// RemovePinPairDirect @ 14e216190

void __thiscall
UOptimusNode_LoopTerminal::RemovePinPairDirect(UOptimusNode_LoopTerminal *this,int param_1)

{
  TArray<FOptimusPinPairInfo,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar1;
  FOptimusPinPairInfo *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  FOptimusPinPairInfo *local_res8;
  undefined1 local_res10 [8];
  ForAnyElementType local_68;
  uint local_60;
  int local_5c;
  UOptimusNodePin *local_58;
  UOptimusNodePin *pUStack_50;
  FOptimusPinPairInfo local_48;
  
  if ((param_1 < 0) || ((this->PinPairInfos).ArrayNum <= param_1)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4855340561101487715>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_LoopTerminal.cpp"
                       ,0x19d,"PinPairInfos.IsValidIndex(InPairIndex)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    this_00 = &this->PinPairInfos;
    uVar5 = 0;
    if (param_1 < (this->PinPairInfos).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FOptimusPinPairInfo::FOptimusPinPairInfo
              (&local_48,
               (FOptimusPinPairInfo *)((this_00->AllocatorInstance).Data + (longlong)param_1 * 0x20)
              );
    local_58 = UOptimusNode::FindPinFromPath((UOptimusNode *)this,&local_48.InputPinPath);
    pUStack_50 = UOptimusNode::FindPinFromPath((UOptimusNode *)this,&local_48.OutputPinPath);
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60 = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,2,0,&local_68,2,&local_5c);
    uVar5 = local_60;
    *(UOptimusNodePin **)local_68.Data = local_58;
    *(UOptimusNodePin **)(local_68.Data + 8) = pUStack_50;
    uVar6 = (ulonglong)(int)local_60;
    pFVar1 = local_68.Data + uVar6 * 8;
    FVar7.Data = local_68.Data;
    while( true ) {
      if ((uint)uVar6 != uVar5) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<UOptimusNodePin_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (FVar7.Data == pFVar1) break;
      UOptimusNode::RemovePinDirect((UOptimusNode *)this,*(UOptimusNodePin **)FVar7.Data);
      uVar6 = (ulonglong)local_60;
      FVar7.Data = FVar7.Data + 8;
    }
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    pFVar2 = (FOptimusPinPairInfo *)(this_00->AllocatorInstance).Data;
    if ((pFVar2 <= &local_48) && (&local_48 < pFVar2 + (this->PinPairInfos).ArrayMax)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_res8 = &local_48;
    TArray<FOptimusPinPairInfo,TSizedDefaultAllocator<32>_>::
    RemoveAll<_TArray<FOptimusPinPairInfo,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
              (this_00,(<lambda_1> *)&local_res8);
    if (local_48.OutputPinPath.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.OutputPinPath.AllocatorInstance.Data);
    }
    if (local_48.InputPinPath.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.InputPinPath.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// SanitizeBinding @ 14e21b070

void __thiscall
UOptimusNode_LoopTerminal::SanitizeBinding
          (UOptimusNode_LoopTerminal *this,FOptimusParameterBinding *param_1,FName param_2)

{
  FOptimusDataType *pFVar1;
  FName FVar2;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar3;
  FOptimusDataTypeRegistry *this_00;
  FFieldClass *pFVar4;
  FOptimusDataDomain *pFVar5;
  FName local_res10;
  undefined1 local_78 [12];
  int iStack_6c;
  TSharedPtr<FOptimusDataType_const_,1> local_68;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 local_40;
  FUtf8String local_38;
  ForAnyElementType local_28;
  
  if ((param_1->Name).Name == (FName)0x0) {
    ::FName::FName(&local_res10,L"EmptyName");
  }
  FVar2 = Optimus::GetSanitizedNameForHlsl((FName)&local_res10);
  FVar2 = *(FName *)FVar2;
  if (FVar2 != param_2) {
    FVar2 = UOptimusNode::GetAvailablePinNameStable((UObject *)&local_res10,(FName)this);
    FVar2 = *(FName *)FVar2;
  }
  (param_1->Name).Name = FVar2;
  pTVar3 = FOptimusDataTypeRef::Resolve
                     (&param_1->DataType,(TSharedPtr<FOptimusDataType_const_,1> *)local_78);
  pFVar1 = pTVar3->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (stack0xffffffffffffff90);
  if (pFVar1 == (FOptimusDataType *)0x0) {
    this_00 = FOptimusDataTypeRegistry::Get();
    pFVar4 = FFloatProperty::StaticClass();
    pTVar3 = FOptimusDataTypeRegistry::FindType(this_00,&local_68,pFVar4);
    local_58._0_4_ = 0;
    local_58._4_4_ = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_58._8_8_ = (FScriptContainerElement *)0x0;
    local_40 = 0;
    local_48 = 0;
    FUtf8String::Reset(&local_38,0);
    unique0x00023d00 = (pTVar3->SharedReferenceCount).ReferenceController;
    local_78._0_8_ = pTVar3->Object;
    if (unique0x00023d00 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      unique0x00023d00->SharedReferenceCount =
           (atomic<int>)((int)unique0x00023d00->SharedReferenceCount + 1);
      UNLOCK();
    }
    FOptimusDataTypeRef::Set
              ((FOptimusDataTypeRef *)local_58,(TSharedPtr<FOptimusDataType_const_,1> *)local_78);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar3->SharedReferenceCount).ReferenceController);
    (param_1->DataType).TypeName.ComparisonIndex = (FNameEntryId)local_58._0_4_;
    (param_1->DataType).TypeName.Number = local_58._4_4_;
    TPersistentObjectPtr<FSoftObjectPath>::operator=
              ((TPersistentObjectPtr<FSoftObjectPath> *)&(param_1->DataType).TypeObject,
               (TPersistentObjectPtr<FSoftObjectPath> *)(local_58 + 8));
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  FVar2 = UOptimusSkinnedMeshComponentSource::Domains::Vertex;
  if (((param_1->DataDomain).Type == Dimensional) &&
     ((param_1->DataDomain).DimensionNames.ArrayNum == 0)) {
    local_78._0_8_ = (FOptimusDataType *)0x0;
    local_78._8_4_ = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,1,0,(ForAnyElementType *)local_78,1,&iStack_6c);
    *(FName *)local_78._0_8_ = FVar2;
    pFVar5 = FOptimusDataDomain::FOptimusDataDomain
                       ((FOptimusDataDomain *)local_58,
                        (TArray<FName,TSizedDefaultAllocator<32>_> *)local_78);
    FOptimusDataDomain::operator=(&param_1->DataDomain,pFVar5);
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_58._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_58._8_8_);
    }
  }
  return;
}

// StaticRegisterNativesUOptimusNode_LoopTerminal @ 14e225d00

void __cdecl UOptimusNode_LoopTerminal::StaticRegisterNativesUOptimusNode_LoopTerminal(void)

{
  return;
}

// TryAddPinFromPin @ 14e2287d0

TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusNode_LoopTerminal::TryAddPinFromPin
          (UOptimusNode_LoopTerminal *this,
          TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FAdderPinAction *param_1,UOptimusNodePin *param_2,FName param_3)

{
  int *piVar1;
  FName *pFVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  int iVar5;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *pTVar6;
  UOptimusNode_LoopTerminal *pUVar7;
  UOptimusNode_LoopTerminal *this_00;
  undefined8 uVar8;
  FScriptContainerElement *pFVar9;
  FOptimusParameterBindingArray *pFVar10;
  FName *pFVar11;
  size_t _Size;
  undefined1 local_118 [8];
  FName local_110;
  FName local_108;
  FName FStack_100;
  FUtf8String local_f8;
  undefined1 local_e8 [16];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  FName FStack_c8;
  FUtf8String local_c0;
  FOptimusDataDomain local_b0;
  undefined2 local_70;
  TSharedPtr<FOptimusDataType_const_,1> local_68;
  TSharedPtr<FOptimusDataType_const_,1> local_58;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_48;
  
  local_e8._0_4_ = 0;
  local_e8._4_4_ = 0;
  local_e8._8_4_ = 0;
  local_e8._12_4_ = 0;
  local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.Data.ArrayNum = 0;
  local_c0.Data.ArrayMax = 0;
  local_d8 = (undefined1  [8])0x0;
  FStack_c8.ComparisonIndex.Value = 0;
  FStack_c8.Number = 0;
  local_d0 = (FName)0x0;
  FUtf8String::Reset(&local_c0,0);
  local_e8._8_4_ = 0;
  local_e8._12_4_ = 0;
  local_d8 = (undefined1  [8])0x0;
  FStack_c8.ComparisonIndex.Value = 0;
  FStack_c8.Number = 0;
  local_d0 = (FName)0x0;
  FUtf8String::Reset(&local_c0,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FOptimusDataDomain::FOptimusDataDomain(&local_b0);
  local_e8._0_8_ = param_3;
  local_70._0_1_ = false;
  local_70._1_1_ = false;
  FOptimusDataTypeRef::Resolve(&param_2->DataType,&local_68);
  local_118._0_4_ = 0;
  local_118._4_4_ = 0;
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  local_110.ComparisonIndex.Value = 0;
  local_110.Number = 0;
  FStack_100.ComparisonIndex.Value = 0;
  FStack_100.Number = 0;
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  FUtf8String::Reset(&local_f8,0);
  local_58.Object = local_68.Object;
  local_58.SharedReferenceCount.ReferenceController =
       local_68.SharedReferenceCount.ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FOptimusDataTypeRef::Set((FOptimusDataTypeRef *)local_118,&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  local_e8._8_8_ = local_118;
  local_d8._0_4_ = local_110.ComparisonIndex.Value;
  local_d8._4_4_ = local_110.Number;
  local_d0 = local_108;
  FStack_c8 = FStack_100;
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  local_c0.Data.AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
  local_c0.Data.ArrayNum = local_f8.Data.ArrayNum;
  local_c0.Data.ArrayMax = local_f8.Data.ArrayMax;
  local_b0.Type = (param_2->DataDomain).Type;
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&local_b0.DimensionNames,&(param_2->DataDomain).DimensionNames);
  local_b0.Multiplier = (param_2->DataDomain).Multiplier;
  ::FString::operator=(&local_b0.Expression,&(param_2->DataDomain).Expression);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&local_b0.LevelNames_DEPRECATED,&(param_2->DataDomain).LevelNames_DEPRECATED);
  this_00 = (UOptimusNode_LoopTerminal *)&this[-1]._padding_;
  SanitizeBinding(this_00,(FOptimusParameterBinding *)local_e8,(FName)0x0);
  pUVar7 = this_00;
  if (((((int)this->_padding_ != 1) &&
       (pUVar7 = GetOtherTerminal(this_00), pUVar7 == (UOptimusNode_LoopTerminal *)0x0)) ||
      (pUVar7 == (UOptimusNode_LoopTerminal *)0xfffffffffffffec8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetLoopInfo()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_LoopTerminal.cpp"
                         ,0x8d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar6;
  }
  if ((int)this->_padding_ == 1) {
    pFVar10 = (FOptimusParameterBindingArray *)&this->_padding_;
  }
  else {
    pUVar7 = GetOtherTerminal(this_00);
    pFVar10 = &(pUVar7->LoopInfo).Bindings;
    if (pUVar7 == (UOptimusNode_LoopTerminal *)0x0) {
      pFVar10 = (FOptimusParameterBindingArray *)&DAT_00000008;
    }
  }
  pFVar9 = (pFVar10->InnerArray).AllocatorInstance.Data;
  if (((pFVar9 <= (FScriptContainerElement *)local_e8) &&
      ((FScriptContainerElement *)local_e8 <
       pFVar9 + (longlong)(pFVar10->InnerArray).ArrayMax * 0x80)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar6;
  }
  iVar5 = (pFVar10->InnerArray).ArrayNum;
  piVar1 = &(pFVar10->InnerArray).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x880,(ForAnyElementType *)pFVar10,piVar1);
  }
  _Src.Data = local_c0.Data.AllocatorInstance.Data;
  (pFVar10->InnerArray).ArrayNum = iVar5 + 1;
  pFVar11 = (FName *)((pFVar10->InnerArray).AllocatorInstance.Data + (longlong)iVar5 * 0x80);
  pFVar2 = pFVar11 + 5;
  pFVar11->ComparisonIndex = (FNameEntryId)local_e8._0_4_;
  pFVar11->Number = local_e8._4_4_;
  pFVar11[1].ComparisonIndex = (FNameEntryId)local_e8._8_4_;
  pFVar11[1].Number = local_e8._12_4_;
  pFVar11[2].ComparisonIndex = (FNameEntryId)local_d8._0_4_;
  pFVar11[2].Number = local_d8._4_4_;
  pFVar11[3] = local_d0;
  pFVar11[4] = FStack_c8;
  pFVar2->ComparisonIndex = 0;
  pFVar2->Number = 0;
  _Size = (size_t)local_c0.Data.ArrayNum;
  pFVar11[6].ComparisonIndex.Value = local_c0.Data.ArrayNum;
  if (local_c0.Data.ArrayNum == 0) {
    pFVar11[6].Number = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_c0.Data.ArrayNum,0,(ForAnyElementType *)pFVar2,local_c0.Data.ArrayNum,
               (int *)&pFVar11[6].Number);
    memcpy((void *)*pFVar2,_Src.Data,_Size);
  }
  FOptimusDataDomain::FOptimusDataDomain((FOptimusDataDomain *)(pFVar11 + 7),&local_b0);
  *(bool *)&pFVar11[0xf].ComparisonIndex.Value = local_70._0_1_;
  *(bool *)((longlong)&pFVar11[0xf].ComparisonIndex.Value + 1) = local_70._1_1_;
  pUVar7 = this_00;
  if ((int)this->_padding_ != 1) {
    pUVar7 = GetOtherTerminal(this_00);
  }
  AddPinPairsDirect(pUVar7,__return_storage_ptr__,(FOptimusParameterBinding *)local_e8);
  if ((int)this->_padding_ != 2) {
    this_00 = GetOtherTerminal(this_00);
  }
  pTVar6 = AddPinPairsDirect(this_00,&local_48,(FOptimusParameterBinding *)local_e8);
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>::
  Append<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>(__return_storage_ptr__,pTVar6);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if ((int)this->_padding_ == 1) {
    if (param_1->NewPinDirection == Input) {
      if ((__return_storage_ptr__->ArrayNum < 4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0xce7,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar6;
      }
      pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
      uVar8 = *(undefined8 *)pFVar9;
      *(undefined8 *)pFVar9 = *(undefined8 *)(pFVar9 + 0x18);
    }
    else {
      if ((__return_storage_ptr__->ArrayNum < 4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0xce7,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar6;
      }
      pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
      uVar8 = *(undefined8 *)(pFVar9 + 8);
      *(undefined8 *)(pFVar9 + 8) = *(undefined8 *)(pFVar9 + 0x18);
    }
  }
  else {
    if (param_1->NewPinDirection != Input) goto LAB_14e228c4c;
    if (((__return_storage_ptr__->ArrayNum < 3) || (__return_storage_ptr__->ArrayNum < 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0xce7,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar6;
    }
    pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
    uVar8 = *(undefined8 *)(pFVar9 + 0x10);
    *(undefined8 *)(pFVar9 + 0x10) = *(undefined8 *)(pFVar9 + 0x18);
  }
  *(undefined8 *)(pFVar9 + 0x18) = uVar8;
LAB_14e228c4c:
  if (local_b0.LevelNames_DEPRECATED.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.LevelNames_DEPRECATED.AllocatorInstance.Data);
  }
  if (local_b0.Expression.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Expression.Data.AllocatorInstance.Data);
  }
  if (local_b0.DimensionNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.DimensionNames.AllocatorInstance.Data);
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// UpdatePinPairs @ 14e22cb80

/* WARNING: Removing unreachable block (ram,0x00014e22cdea) */

void __thiscall UOptimusNode_LoopTerminal::UpdatePinPairs(UOptimusNode_LoopTerminal *this)

{
  FName FVar1;
  FOptimusDataType *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  UOptimusNode_LoopTerminal *pUVar8;
  FString *pFVar9;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar14;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  FOptimusParameterBindingArray *pFVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined1 local_res10 [8];
  uint local_res18;
  uint local_res20;
  ForAnyElementType local_178;
  undefined8 local_170;
  FOptimusParameterBindingArray *local_168;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_160;
  ulonglong local_150;
  TArray<FName,TSizedDefaultAllocator<32>_> local_148;
  TArray<FName,TSizedDefaultAllocator<32>_> local_138;
  ulonglong local_128;
  longlong local_120;
  longlong local_118;
  FName local_110;
  FName local_108;
  FString local_100;
  UOptimusNodePin *local_f0;
  UOptimusNodePin *pUStack_e8;
  TSharedPtr<FOptimusDataType_const_,1> local_e0;
  FString local_d0;
  TSharedPtr<FOptimusDataType_const_,1> local_c0;
  undefined1 local_b0 [48];
  undefined1 local_80 [64];
  
  uVar18 = 0;
  local_178.Data = (FScriptContainerElement *)0x0;
  local_170 = 0;
  pUVar8 = this;
  if ((((this->TerminalType != Entry) &&
       (pUVar8 = GetOtherTerminal(this), pUVar8 == (UOptimusNode_LoopTerminal *)0x0)) ||
      (pUVar8 == (UOptimusNode_LoopTerminal *)0xfffffffffffffec8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetLoopInfo()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_LoopTerminal.cpp"
                         ,0x206,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (this->TerminalType == Entry) {
    pFVar19 = &(this->LoopInfo).Bindings;
  }
  else {
    pUVar8 = GetOtherTerminal(this);
    pFVar19 = &(pUVar8->LoopInfo).Bindings;
    if (pUVar8 == (UOptimusNode_LoopTerminal *)0x0) {
      pFVar19 = (FOptimusParameterBindingArray *)&DAT_00000008;
    }
  }
  local_168 = pFVar19;
  if (((pFVar19->InnerArray).ArrayNum != (this->PinPairInfos).ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.Num() == PinPairInfos.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_LoopTerminal.cpp"
                         ,0x209,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar11 = (this->PinPairInfos).ArrayNum;
  pTVar14 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(this->PinPairInfos).AllocatorInstance.Data
  ;
  pTVar15 = pTVar14 + (longlong)iVar11 * 2;
  while( true ) {
    if ((this->PinPairInfos).ArrayNum != iVar11) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FOptimusPinPairInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pTVar14 == pTVar15) break;
    local_f0 = UOptimusNode::FindPinFromPath((UOptimusNode *)this,pTVar14);
    pUStack_e8 = UOptimusNode::FindPinFromPath((UOptimusNode *)this,pTVar14 + 1);
    local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_160.ArrayNum = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,2,0,&local_160.AllocatorInstance,2,&local_160.ArrayMax);
    *(UOptimusNodePin **)local_160.AllocatorInstance.Data = local_f0;
    *(UOptimusNodePin **)(local_160.AllocatorInstance.Data + 8) = pUStack_e8;
    if (((local_178.Data <= &local_160) &&
        (&local_160 <
         (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)
         (local_178.Data + (longlong)local_170._4_4_ * 0x10))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = (int)local_170;
    if ((int)local_170 == local_170._4_4_) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_178,(int *)((longlong)&local_170 + 4));
    }
    local_170 = CONCAT44(local_170._4_4_,iVar6 + 1);
    pFVar12 = local_178.Data + (longlong)iVar6 * 0x10;
    *(undefined8 *)&pFVar12->field_0x0 = 0;
    *(FScriptContainerElement **)&pFVar12->field_0x0 = local_160.AllocatorInstance.Data;
    local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar12 + 8) = local_160.ArrayNum;
    *(int *)(pFVar12 + 0xc) = local_160.ArrayMax;
    local_160.ArrayNum = 0;
    local_160.ArrayMax = 0;
    pTVar14 = pTVar14 + 2;
  }
  bVar5 = this->TerminalType == Return;
  iVar11 = (pFVar19->InnerArray).ArrayNum;
  local_res20 = (uint)!bVar5;
  local_res18 = (uint)bVar5;
  if (0 < iVar11) {
    local_120 = 0;
    local_118 = 0;
    uVar21 = uVar18;
    local_150 = (ulonglong)bVar5;
    local_128 = (ulonglong)!bVar5;
    do {
      lVar4 = local_118;
      lVar16 = local_120;
      uVar20 = (uint)uVar21;
      uVar17 = ~uVar20 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar20 < iVar11) {
        uVar7 = uVar17;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar12 = (pFVar19->InnerArray).AllocatorInstance.Data;
      uVar7 = 0;
      if ((int)uVar20 < (int)local_170) {
        uVar7 = uVar17;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar13.Data = local_178.Data;
      if ((*(int *)(local_178.Data + lVar4 + 8) <= (int)local_res18) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(longlong *)(pFVar12 + lVar16) !=
          *(longlong *)(*(longlong *)(*(longlong *)(FVar13.Data + lVar4) + local_150 * 8) + 0x18)) {
        uVar7 = 0;
        if ((int)uVar20 < (pFVar19->InnerArray).ArrayNum) {
          uVar7 = uVar17;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar7 = 0;
        if ((int)uVar20 < (int)local_170) {
          uVar7 = uVar17;
        }
        FVar1 = *(FName *)((pFVar19->InnerArray).AllocatorInstance.Data + uVar18 * 0x80);
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar13.Data = local_178.Data;
        if ((*(int *)(local_178.Data + uVar18 * 0x10 + 8) <= (int)local_res18) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        UOptimusNode::SetPinName
                  ((UOptimusNode *)this,
                   *(UOptimusNodePin **)
                    (*(longlong *)&FVar13.Data[uVar18 * 0x10].field_0x0 + local_150 * 8),FVar1);
        pFVar19 = local_168;
        uVar7 = 0;
        if ((int)uVar20 < (local_168->InnerArray).ArrayNum) {
          uVar7 = uVar17;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_110 = *(FName *)((pFVar19->InnerArray).AllocatorInstance.Data + uVar18 * 0x80);
        pFVar9 = ::FName::ToString(&local_110,&local_d0);
        ::FString::ConcatCF(&local_100,L"(Hidden)",pFVar9);
        FVar13.Data = (FScriptContainerElement *)L"";
        if (local_100.Data.ArrayNum != 0) {
          FVar13.Data = local_100.Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_108,(wchar_t *)FVar13.Data);
        if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Data.AllocatorInstance.Data);
        }
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
        FVar1 = local_108;
        uVar7 = 0;
        if ((int)uVar20 < (int)local_170) {
          uVar7 = uVar17;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar13.Data = local_178.Data;
        if ((*(int *)(local_178.Data + uVar18 * 0x10 + 8) <= (int)local_res20) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        UOptimusNode::SetPinName
                  ((UOptimusNode *)this,
                   *(UOptimusNodePin **)
                    (*(longlong *)&FVar13.Data[uVar18 * 0x10].field_0x0 + local_128 * 8),FVar1);
        uVar7 = 0;
        if ((int)uVar20 < (int)local_170) {
          uVar7 = uVar17;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar13.Data = local_178.Data;
        if ((*(int *)(local_178.Data + uVar18 * 0x10 + 8) < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        UOptimusNodePin::GetPinNamePath
                  ((UOptimusNodePin *)**(undefined8 **)&FVar13.Data[uVar18 * 0x10].field_0x0,
                   &local_148);
        uVar7 = 0;
        if ((int)uVar20 < (int)local_170) {
          uVar7 = uVar17;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar13.Data = local_178.Data;
        if ((*(int *)(local_178.Data + uVar18 * 0x10 + 8) < 2) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        UOptimusNodePin::GetPinNamePath
                  (*(UOptimusNodePin **)(*(longlong *)&FVar13.Data[uVar18 * 0x10].field_0x0 + 8),
                   &local_138);
        uVar7 = 0;
        if ((int)uVar20 < (this->PinPairInfos).ArrayNum) {
          uVar7 = uVar17;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar14 = (TArray<FName,TSizedDefaultAllocator<32>_> *)
                  ((this->PinPairInfos).AllocatorInstance.Data + uVar18 * 0x20);
        if (pTVar14 != &local_148) {
          pFVar12 = (pTVar14->AllocatorInstance).Data;
          if (pFVar12 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar12);
          }
          (pTVar14->AllocatorInstance).Data = local_148.AllocatorInstance.Data;
          local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pTVar14->ArrayNum = local_148.ArrayNum;
          pTVar14->ArrayMax = local_148.ArrayMax;
          local_148.ArrayNum = 0;
          local_148.ArrayMax = 0;
        }
        pTVar15 = pTVar14 + 1;
        if (pTVar15 != &local_138) {
          pFVar12 = (pTVar15->AllocatorInstance).Data;
          if (pFVar12 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar12);
          }
          (pTVar15->AllocatorInstance).Data = local_138.AllocatorInstance.Data;
          local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pTVar14[1].ArrayNum = local_138.ArrayNum;
          pTVar14[1].ArrayMax = local_138.ArrayMax;
          local_138.ArrayNum = 0;
          local_138.ArrayMax = 0;
        }
        if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.AllocatorInstance.Data);
        }
        if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.AllocatorInstance.Data);
        }
      }
      uVar7 = 0;
      if ((int)uVar20 < (int)local_170) {
        uVar7 = uVar17;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar13.Data = local_178.Data;
      if ((*(int *)(local_178.Data + uVar18 * 0x10 + 8) < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FOptimusDataTypeRef::Resolve
                ((FOptimusDataTypeRef *)
                 (**(longlong **)&FVar13.Data[uVar18 * 0x10].field_0x0 + 0x70),&local_e0);
      pFVar19 = local_168;
      uVar7 = 0;
      if ((int)uVar20 < (local_168->InnerArray).ArrayNum) {
        uVar7 = uVar17;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar16 = uVar18 * 0x80;
      pTVar10 = FOptimusDataTypeRef::Resolve
                          ((FOptimusDataTypeRef *)
                           ((pFVar19->InnerArray).AllocatorInstance.Data + lVar16 + 8),&local_c0);
      pFVar2 = pTVar10->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c0.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e0.SharedReferenceCount.ReferenceController);
      if (pFVar2 != local_e0.Object) {
        uVar7 = 0;
        if ((int)uVar20 < (pFVar19->InnerArray).ArrayNum) {
          uVar7 = uVar17;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar12 = (pFVar19->InnerArray).AllocatorInstance.Data;
        local_b0._0_8_ = *(FName *)(pFVar12 + lVar16 + 8);
        local_b0._8_8_ = *(undefined8 *)(pFVar12 + lVar16 + 0x10);
        FSoftObjectPath::FSoftObjectPath
                  ((FSoftObjectPath *)(local_b0 + 0x10),(FSoftObjectPath *)(pFVar12 + lVar16 + 0x18)
                  );
        uVar7 = 0;
        if ((int)uVar20 < (int)local_170) {
          uVar7 = uVar17;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar13.Data = local_178.Data;
        if ((*(int *)(local_178.Data + uVar18 * 0x10 + 8) < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        UOptimusNode::SetPinDataType
                  ((UOptimusNode *)this,
                   (UOptimusNodePin *)**(undefined8 **)&FVar13.Data[uVar18 * 0x10].field_0x0,
                   (FOptimusDataTypeRef *)local_b0);
        uVar7 = 0;
        if ((int)uVar20 < (pFVar19->InnerArray).ArrayNum) {
          uVar7 = uVar17;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar12 = (pFVar19->InnerArray).AllocatorInstance.Data;
        local_80._0_8_ = *(FName *)(pFVar12 + lVar16 + 8);
        local_80._8_8_ = *(undefined8 *)(pFVar12 + lVar16 + 0x10);
        FSoftObjectPath::FSoftObjectPath
                  ((FSoftObjectPath *)(local_80 + 0x10),(FSoftObjectPath *)(pFVar12 + lVar16 + 0x18)
                  );
        uVar7 = 0;
        if ((int)uVar20 < (int)local_170) {
          uVar7 = uVar17;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar13.Data = local_178.Data;
        if ((*(int *)(local_178.Data + uVar18 * 0x10 + 8) < 2) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        UOptimusNode::SetPinDataType
                  ((UOptimusNode *)this,
                   *(UOptimusNodePin **)(*(longlong *)&FVar13.Data[uVar18 * 0x10].field_0x0 + 8),
                   (FOptimusDataTypeRef *)local_80);
      }
      uVar7 = 0;
      if ((int)uVar20 < (pFVar19->InnerArray).ArrayNum) {
        uVar7 = uVar17;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar12 = (pFVar19->InnerArray).AllocatorInstance.Data;
      uVar7 = 0;
      if ((int)uVar20 < (int)local_170) {
        uVar7 = uVar17;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar13.Data = local_178.Data;
      if ((*(int *)(local_178.Data + uVar18 * 0x10 + 8) < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar5 = FOptimusDataDomain::operator==
                        ((FOptimusDataDomain *)(pFVar12 + lVar16 + 0x38),
                         (FOptimusDataDomain *)
                         (**(longlong **)&FVar13.Data[uVar18 * 0x10].field_0x0 + 0x30));
      pFVar19 = local_168;
      if (!bVar5) {
        uVar7 = 0;
        if ((int)uVar20 < (local_168->InnerArray).ArrayNum) {
          uVar7 = uVar17;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar12 = (pFVar19->InnerArray).AllocatorInstance.Data;
        uVar7 = 0;
        if ((int)uVar20 < (int)local_170) {
          uVar7 = uVar17;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar13.Data = local_178.Data;
        if ((*(int *)(local_178.Data + uVar18 * 0x10 + 8) < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        UOptimusNode::SetPinDataDomain
                  ((UOptimusNode *)this,
                   (UOptimusNodePin *)**(undefined8 **)&FVar13.Data[uVar18 * 0x10].field_0x0,
                   (FOptimusDataDomain *)(pFVar12 + lVar16 + 0x38));
        pFVar19 = local_168;
        uVar7 = 0;
        if ((int)uVar20 < (local_168->InnerArray).ArrayNum) {
          uVar7 = uVar17;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar12 = (pFVar19->InnerArray).AllocatorInstance.Data;
        uVar7 = 0;
        if ((int)uVar20 < (int)local_170) {
          uVar7 = uVar17;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar13.Data = local_178.Data;
        if ((*(int *)(local_178.Data + uVar18 * 0x10 + 8) < 2) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        UOptimusNode::SetPinDataDomain
                  ((UOptimusNode *)this,
                   *(UOptimusNodePin **)(*(longlong *)&FVar13.Data[uVar18 * 0x10].field_0x0 + 8),
                   (FOptimusDataDomain *)(pFVar12 + lVar16 + 0x38));
      }
      uVar21 = (ulonglong)(uVar20 + 1);
      local_120 = local_120 + 0x80;
      local_118 = local_118 + 0x10;
      uVar18 = uVar18 + 1;
      iVar11 = (local_168->InnerArray).ArrayNum;
      pFVar19 = local_168;
    } while ((int)(uVar20 + 1) < iVar11);
  }
  DestructItems<TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)local_178.Data,(int)local_170)
  ;
  if ((TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)local_178.Data !=
      (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_178.Data);
  }
  return;
}

// ValidateConnection @ 14e22f380

bool __thiscall
UOptimusNode_LoopTerminal::ValidateConnection
          (UOptimusNode_LoopTerminal *this,UOptimusNodePin *param_1,UOptimusNodePin *param_2,
          FString *param_3)

{
  UOptimusNode_LoopTerminal *pUVar1;
  UOptimusNode_LoopTerminal *pUVar2;
  
  if ((param_1->Direction == Input) && (this->TerminalType == Entry)) {
    pUVar1 = (UOptimusNode_LoopTerminal *)UOptimusNodePin::GetOwningNode(param_2);
    pUVar2 = GetOtherTerminal(this);
    if (pUVar1 == pUVar2) {
      if (param_3 != (FString *)0x0) {
        ::FString::operator=
                  (param_3,L"Cannot connect output of return terminal to input of entry terminal");
      }
      return false;
    }
  }
  return true;
}

// _getUObject @ 14e238f90

UObject * __thiscall UOptimusNode_LoopTerminal::_getUObject(UOptimusNode_LoopTerminal *this)

{
  return (UObject *)&this[-1]._padding_;
}

// _getUObject`adjustor{8}' @ 14e238fa0

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UOptimusNode_LoopTerminal::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall
UOptimusNode_LoopTerminal::_getUObject_adjustor_8__(UOptimusNode_LoopTerminal *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UOptimusNode_LoopTerminal *)&this[-1].PinPairInfos.ArrayNum);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{16}' @ 14e238fb0

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UOptimusNode_LoopTerminal::_getUObject`adjustor{16}' (void)const __ptr64 */

UObject * __thiscall
UOptimusNode_LoopTerminal::_getUObject_adjustor_16__(UOptimusNode_LoopTerminal *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UOptimusNode_LoopTerminal *)&this[-1].PinPairInfos);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{24}' @ 14e238fc0

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UOptimusNode_LoopTerminal::_getUObject`adjustor{24}' (void)const __ptr64 */

UObject * __thiscall
UOptimusNode_LoopTerminal::_getUObject_adjustor_24__(UOptimusNode_LoopTerminal *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UOptimusNode_LoopTerminal *)&this[-1].CountPin);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{32}' @ 14e238fd0

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UOptimusNode_LoopTerminal::_getUObject`adjustor{32}' (void)const __ptr64 */

UObject * __thiscall
UOptimusNode_LoopTerminal::_getUObject_adjustor_32__(UOptimusNode_LoopTerminal *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UOptimusNode_LoopTerminal *)&this[-1].IndexPin);
  return (UObject *)pUVar1;
}

