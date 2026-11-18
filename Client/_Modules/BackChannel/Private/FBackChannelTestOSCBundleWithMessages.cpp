// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BackChannel
// Functions: 8

// GetTestFlags @ 14e7f1af0

EAutomationTestFlags __thiscall
FBackChannelTestOSCBundleWithMessages::GetTestFlags(FBackChannelTestOSCBundleWithMessages *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 14e7f1b00

bool __thiscall
FBackChannelTestOSCBundleWithMessages::IsStressTest(FBackChannelTestOSCBundleWithMessages *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14e7f1b10

uint __thiscall
FBackChannelTestOSCBundleWithMessages::GetRequiredDeviceNum
          (FBackChannelTestOSCBundleWithMessages *this)

{
  return 1;
}

// GetTestSourceFileName @ 14e7f1b20

FString * __thiscall
FBackChannelTestOSCBundleWithMessages::GetTestSourceFileName
          (FBackChannelTestOSCBundleWithMessages *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\TestBackChannelOSC.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14e7f1b50

int __thiscall
FBackChannelTestOSCBundleWithMessages::GetTestSourceFileLine
          (FBackChannelTestOSCBundleWithMessages *this)

{
  return 0x18;
}

// GetTests @ 14e7f1b60

/* WARNING: Removing unreachable block (ram,0x00014e7f1c4d) */
/* WARNING: Removing unreachable block (ram,0x00014e7f1d18) */

void __thiscall
FBackChannelTestOSCBundleWithMessages::GetTests
          (FBackChannelTestOSCBundleWithMessages *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"BackChannel.TestOSCBundleWithMessages");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 14e7f1d40

bool __thiscall
FBackChannelTestOSCBundleWithMessages::RunTest
          (FBackChannelTestOSCBundleWithMessages *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FBackChannelOSCMessage *pFVar7;
  FBackChannelOSCMessage *pFVar8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar10;
  ForAnyElementType FVar11;
  TRawPtrProxy<FBackChannelOSCMessage> local_res18;
  TRawPtrProxy<FBackChannelOSCMessage> local_res20;
  wchar_t *local_108;
  undefined8 local_100;
  wchar_t *local_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  TSharedPtr<FBackChannelOSCPacket,1> local_b8;
  TSharedPtr<FBackChannelOSCBundle,1> local_a8;
  FString local_98;
  FString local_88;
  TSharedPtr<FBackChannelOSCMessage,1> local_78;
  TSharedPtr<FBackChannelOSCMessage,1> local_68;
  TSharedPtr<FBackChannelOSCMessage,1> local_58;
  TSharedPtr<FBackChannelOSCMessage,1> local_48;
  TRawPtrProxy<FBackChannelOSCBundle> local_38 [2];
  
  pFVar7 = ::operator_new(0x50);
  pFVar8 = (FBackChannelOSCMessage *)0x0;
  local_res18.Object = pFVar8;
  if (pFVar7 != (FBackChannelOSCMessage *)0x0) {
    pFVar7->_padding_ = (longlong)&FBackChannelOSCMessage::_vftable__for__FBackChannelOSCPacket__;
    pFVar7->_padding_ = (longlong)&FBackChannelOSCMessage::_vftable__for__IBackChannelPacket__;
    (pFVar7->Address).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->Address).Data.ArrayNum = 0;
    (pFVar7->Address).Data.ArrayMax = 0;
    (pFVar7->TagString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->TagString).Data.ArrayNum = 0;
    (pFVar7->TagString).Data.ArrayMax = 0;
    (pFVar7->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->Buffer).ArrayNum = 0;
    (pFVar7->Buffer).ArrayMax = 0;
    pFVar7->Mode = Write;
    pFVar7->TagIndex = 0;
    pFVar7->BufferIndex = 0;
    local_res18.Object = pFVar7;
  }
  TSharedPtr<FBackChannelOSCMessage,1>::TSharedPtr<FBackChannelOSCMessage,1><FBackChannelOSCMessage>
            (&local_68,&local_res18);
  pFVar7 = ::operator_new(0x50);
  local_res20.Object = pFVar8;
  if (pFVar7 != (FBackChannelOSCMessage *)0x0) {
    pFVar7->_padding_ = (longlong)&FBackChannelOSCMessage::_vftable__for__FBackChannelOSCPacket__;
    pFVar7->_padding_ = (longlong)&FBackChannelOSCMessage::_vftable__for__IBackChannelPacket__;
    (pFVar7->Address).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->Address).Data.ArrayNum = 0;
    (pFVar7->Address).Data.ArrayMax = 0;
    (pFVar7->TagString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->TagString).Data.ArrayNum = 0;
    (pFVar7->TagString).Data.ArrayMax = 0;
    (pFVar7->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->Buffer).ArrayNum = 0;
    (pFVar7->Buffer).ArrayMax = 0;
    pFVar7->Mode = Write;
    pFVar7->TagIndex = 0;
    pFVar7->BufferIndex = 0;
    local_res20.Object = pFVar7;
  }
  TSharedPtr<FBackChannelOSCMessage,1>::TSharedPtr<FBackChannelOSCMessage,1><FBackChannelOSCMessage>
            (&local_78,&local_res20);
  ::FString::FString(&local_88,L"This is Message 1");
  ::FString::FString(&local_98,L"This is Message 2");
  if ((local_68.Object == (FBackChannelOSCMessage *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_88.Data.ArrayNum != 0) {
    FVar11.Data = local_88.Data.AllocatorInstance.Data;
  }
  (**(code **)((local_68.Object)->_padding_ + 0x48))
            (&(local_68.Object)->_padding_,L"String",FVar11.Data);
  if ((local_78.Object == (FBackChannelOSCMessage *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_98.Data.ArrayNum != 0) {
    FVar11.Data = local_98.Data.AllocatorInstance.Data;
  }
  (**(code **)((local_78.Object)->_padding_ + 0x48))
            (&(local_78.Object)->_padding_,L"String",FVar11.Data);
  pFVar7 = ::operator_new(0x28);
  if (pFVar7 != (FBackChannelOSCMessage *)0x0) {
    (pFVar7->Address).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar7->_padding_ = (longlong)&___7FBackChannelOSCBundle__6B_;
    (pFVar7->Address).Data.ArrayNum = 0;
    (pFVar7->Address).Data.ArrayMax = 0;
    *(undefined4 *)&pFVar7->_padding_ = 1;
    pFVar8 = pFVar7;
  }
  local_38[0].Object = (FBackChannelOSCBundle *)pFVar8;
  TSharedPtr<FBackChannelOSCBundle,1>::TSharedPtr<FBackChannelOSCBundle,1><FBackChannelOSCBundle>
            (&local_a8,local_38);
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  if ((local_68.Object == (FBackChannelOSCMessage *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  (**(code **)((local_68.Object)->_padding_ + 0x18))(local_68.Object,&local_c8);
  if ((local_78.Object == (FBackChannelOSCMessage *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  (**(code **)((local_78.Object)->_padding_ + 0x18))(local_78.Object,&local_d8);
  if ((local_a8.Object == (FBackChannelOSCBundle *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  FBackChannelOSCBundle::AddElement(local_a8.Object,local_c8,(int)local_c0);
  if ((local_a8.Object == (FBackChannelOSCBundle *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  FBackChannelOSCBundle::AddElement(local_a8.Object,local_d8,(int)local_d0);
  local_e8 = (void *)0x0;
  local_e0 = 0;
  if ((local_a8.Object == (FBackChannelOSCBundle *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  (**(code **)((local_a8.Object)->_padding_ + 0x18))(local_a8.Object,&local_e8);
  FBackChannelOSCPacket::CreateFromBuffer(&local_b8,local_e8,(int)local_e0);
  if (((FBackChannelOSCBundle *)local_b8.Object == (FBackChannelOSCBundle *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  iVar6 = (**(code **)(*(longlong *)&(local_b8.Object)->field_0x0 + 0x10))(local_b8.Object);
  if ((iVar6 != 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RecreatedPacket->GetType() == OSCPacketType::Bundle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\TestBackChannelOSC.cpp"
                         ,0xb4,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  FVar3.ReferenceController = local_b8.SharedReferenceCount.ReferenceController;
  if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((FBackChannelOSCBundle *)local_b8.Object == (FBackChannelOSCBundle *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if ((((TArray<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
       ((longlong)local_b8.Object + 0x18))->ArrayNum != 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RecreatedBuffer->GetElementCount() == 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\TestBackChannelOSC.cpp"
                         ,0xb8,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  pTVar9 = FBackChannelOSCBundle::GetElement((FBackChannelOSCBundle *)local_b8.Object,0);
  pTVar10 = FBackChannelOSCBundle::GetElement((FBackChannelOSCBundle *)local_b8.Object,1);
  pFVar1 = (pTVar9->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
LAB_14e7f21c5:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("FBackChannelOSCPacket::GetType(Element1.GetData(), Element1.Num()) == OSCPacketType::Message"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\TestBackChannelOSC.cpp"
                       ,0xbd,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  else {
    if (pTVar9->ArrayNum < 7) {
      if (-1 < pTVar9->ArrayNum) goto LAB_14e7f21af;
      goto LAB_14e7f21c5;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp((char *)pFVar1,"#bundle");
    if (iVar6 == 0) goto LAB_14e7f21c5;
LAB_14e7f21af:
    iVar6 = FGenericPlatformStricmp::Strnicmp((char *)pFVar1,"",0);
    if (iVar6 != 0) goto LAB_14e7f21c5;
  }
  pFVar1 = (pTVar10->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
LAB_14e7f222a:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("FBackChannelOSCPacket::GetType(Element2.GetData(), Element2.Num()) == OSCPacketType::Message"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\TestBackChannelOSC.cpp"
                       ,0xbe,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  else {
    if (pTVar10->ArrayNum < 7) {
      if (-1 < pTVar10->ArrayNum) goto LAB_14e7f2214;
      goto LAB_14e7f222a;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp((char *)pFVar1,"#bundle");
    if (iVar6 == 0) goto LAB_14e7f222a;
LAB_14e7f2214:
    iVar6 = FGenericPlatformStricmp::Strnicmp((char *)pFVar1,"",0);
    if (iVar6 != 0) goto LAB_14e7f222a;
  }
  FBackChannelOSCMessage::CreateFromBuffer
            (&local_48,(pTVar9->AllocatorInstance).Data,pTVar9->ArrayNum);
  FBackChannelOSCMessage::CreateFromBuffer
            (&local_58,(pTVar10->AllocatorInstance).Data,pTVar10->ArrayNum);
  if ((local_48.Object == (FBackChannelOSCMessage *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RecreatedMsg1.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\TestBackChannelOSC.cpp"
                         ,0xc3,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if ((local_58.Object == (FBackChannelOSCMessage *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RecreatedMsg2.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\TestBackChannelOSC.cpp"
                         ,0xc4,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_f8 = (wchar_t *)0x0;
  local_f0 = 0;
  local_108 = (wchar_t *)0x0;
  local_100 = 0;
  if ((local_48.Object == (FBackChannelOSCMessage *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  (**(code **)((local_48.Object)->_padding_ + 0x80))
            (&(local_48.Object)->_padding_,L"String",&local_f8);
  if ((local_58.Object == (FBackChannelOSCMessage *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  (**(code **)((local_58.Object)->_padding_ + 0x80))
            (&(local_58.Object)->_padding_,L"String",&local_108);
  if ((int)local_f0 == local_88.Data.ArrayNum) {
    if (1 < (int)local_f0) {
      iVar6 = FGenericPlatformStricmp::Stricmp
                        (local_f8,(wchar_t *)local_88.Data.AllocatorInstance.Data);
      bVar4 = iVar6 == 0;
      goto LAB_14e7f23a2;
    }
  }
  else {
    bVar4 = (int)local_f0 + local_88.Data.ArrayNum == 1;
LAB_14e7f23a2:
    if ((!bVar4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("OutMsg1Text == Msg1Test",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\TestBackChannelOSC.cpp"
                           ,0xce,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  if ((int)local_100 == local_98.Data.ArrayNum) {
    if ((int)local_100 < 2) goto LAB_14e7f2424;
    iVar6 = FGenericPlatformStricmp::Stricmp
                      (local_108,(wchar_t *)local_98.Data.AllocatorInstance.Data);
    bVar4 = iVar6 == 0;
  }
  else {
    bVar4 = (int)local_100 + local_98.Data.ArrayNum == 1;
  }
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutMsg2Text == Msg2Test",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\TestBackChannelOSC.cpp"
                         ,0xcf,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
LAB_14e7f2424:
  if (local_108 != (wchar_t *)0x0) {
    FMemory::Free(local_108);
  }
  if (local_f8 != (wchar_t *)0x0) {
    FMemory::Free(local_f8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  if (local_e8 != (void *)0x0) {
    FMemory::Free(local_e8);
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return true;
}

// GetBeautifiedTestName @ 14e7f24f0

FString * __thiscall
FBackChannelTestOSCBundleWithMessages::GetBeautifiedTestName
          (FBackChannelTestOSCBundleWithMessages *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"BackChannel.TestOSCBundleWithMessages");
  return __return_storage_ptr__;
}

