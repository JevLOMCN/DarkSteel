// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BackChannel
// Functions: 8

// GetTestFlags @ 14e7f0650

EAutomationTestFlags __thiscall
FBackChannelTestOSCMessage::GetTestFlags(FBackChannelTestOSCMessage *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 14e7f0660

bool __thiscall FBackChannelTestOSCMessage::IsStressTest(FBackChannelTestOSCMessage *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14e7f0670

uint __thiscall FBackChannelTestOSCMessage::GetRequiredDeviceNum(FBackChannelTestOSCMessage *this)

{
  return 1;
}

// GetTestSourceFileName @ 14e7f0680

FString * __thiscall
FBackChannelTestOSCMessage::GetTestSourceFileName
          (FBackChannelTestOSCMessage *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\TestBackChannelOSC.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14e7f06b0

int __thiscall FBackChannelTestOSCMessage::GetTestSourceFileLine(FBackChannelTestOSCMessage *this)

{
  return 0x14;
}

// GetTests @ 14e7f06c0

/* WARNING: Removing unreachable block (ram,0x00014e7f07ad) */
/* WARNING: Removing unreachable block (ram,0x00014e7f0878) */

void __thiscall
FBackChannelTestOSCMessage::GetTests
          (FBackChannelTestOSCMessage *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"BackChannel.TestOSCMessage");
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

// RunTest @ 14e7f08a0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FBackChannelTestOSCMessage::RunTest(FBackChannelTestOSCMessage *this,FString *param_1)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ForAnyElementType FVar11;
  undefined4 uVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  char local_res18 [8];
  char local_res20 [8];
  FScriptContainerElement local_128 [8];
  ForAnyElementType local_120;
  uint local_118;
  uint uStack_114;
  TSharedPtr<FBackChannelOSCMessage,1> local_110;
  FBackChannelOSCMessage local_f8;
  int local_a8 [2];
  void *local_a0;
  undefined8 local_98;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_90;
  ForAnyElementType local_80;
  int local_78;
  int local_74;
  ForAnyElementType local_70;
  int local_68;
  int local_64 [3];
  wchar_t *local_58;
  undefined8 local_50;
  FString local_48;
  
  uVar15 = 0;
  local_f8.Mode = Write;
  local_f8.Address.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8._padding_ = (longlong)&FBackChannelOSCMessage::_vftable__for__IBackChannelPacket__;
  local_f8._padding_ = (longlong)&FBackChannelOSCMessage::_vftable__for__FBackChannelOSCPacket__;
  local_f8.Address.Data.ArrayNum = 0;
  local_f8.Address.Data.ArrayMax = 0;
  local_f8.TagString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.TagString.Data.ArrayNum = 0;
  local_f8.TagString.Data.ArrayMax = 0;
  local_f8.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Buffer.ArrayNum = 0;
  local_f8.Buffer.ArrayMax = 0;
  local_f8.TagIndex = 0;
  local_f8.BufferIndex = 0;
  ::FString::operator=(&local_f8.Address,L"/foo");
  ::FString::FString(&local_48,L"Hello!");
  local_118 = 0;
  uStack_114 = 0;
  local_120.Data = (FScriptContainerElement *)0x0;
  lVar14 = 0x21;
  uVar16 = uVar15;
  while( true ) {
    local_128[0] = (FScriptContainerElement)0x2a;
    uVar6 = (uint)uVar16;
    if (((local_120.Data <= local_128) && (local_128 < local_120.Data + (int)uStack_114)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), uVar6 = local_118, bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    if (uVar6 == uStack_114) {
      uVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&local_120,(int *)&uStack_114);
    }
    local_118 = uVar6 + 1;
    local_120.Data[(int)uVar6] = local_128[0];
    lVar14 = lVar14 + -1;
    if (lVar14 == 0) break;
    uVar16 = (ulonglong)local_118;
  }
  if ((local_f8.Mode != Write) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsWriting()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Public\\BackChannel\\Protocol\\OSC\\BackChannelOSCMessage.h"
                         ,0x68,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  uVar12 = 1;
  if (FBackChannelOSCMessage::bIsLegacyConnection == false) {
    uVar12 = 0x1000000;
  }
  ::FString::AppendChar(&local_f8.TagString,L'i');
  local_f8.TagIndex = local_f8.TagIndex + 1;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,4,&local_f8.Buffer.AllocatorInstance,&local_f8.Buffer.ArrayNum,
             &local_f8.Buffer.ArrayMax);
  *(undefined4 *)(local_f8.Buffer.AllocatorInstance.Data + local_f8.BufferIndex) = uVar12;
  local_f8.BufferIndex = local_f8.BufferIndex + 4;
  ::FString::AppendChar(&local_f8.TagString,L'T');
  local_f8.TagIndex = local_f8.TagIndex + 1;
  ::FString::AppendChar(&local_f8.TagString,L'F');
  local_f8.TagIndex = local_f8.TagIndex + 1;
  if ((local_f8.Mode != Write) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsWriting()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Public\\BackChannel\\Protocol\\OSC\\BackChannelOSCMessage.h"
                         ,0x71,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  uVar12 = 0x2040;
  if (FBackChannelOSCMessage::bIsLegacyConnection != false) {
    uVar12 = __real_40200000;
  }
  ::FString::AppendChar(&local_f8.TagString,L'f');
  local_f8.TagIndex = local_f8.TagIndex + 1;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,4,&local_f8.Buffer.AllocatorInstance,&local_f8.Buffer.ArrayNum,
             &local_f8.Buffer.ArrayMax);
  *(undefined4 *)(local_f8.Buffer.AllocatorInstance.Data + local_f8.BufferIndex) = uVar12;
  local_f8.BufferIndex = local_f8.BufferIndex + 4;
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar11.Data = local_48.Data.AllocatorInstance.Data;
  }
  (**(code **)(local_f8._padding_ + 0x48))(&local_f8._padding_,L"String",FVar11.Data);
  uVar6 = local_118;
  FVar11.Data = local_120.Data;
  if (((int)local_118 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  if (FBackChannelOSCMessage::bIsLegacyConnection == false) {
    (**(code **)(local_f8._padding_ + 0x30))(&local_f8._padding_,L"Array");
  }
  else {
    (**(code **)(local_f8._padding_ + 0x60))(&local_f8._padding_,L"Size",uVar6);
    ::FString::AppendChar(&local_f8.TagString,L'b');
    local_f8.TagIndex = local_f8.TagIndex + 1;
    FBackChannelOSCMessage::WriteData(&local_f8,FVar11.Data,uVar6);
  }
  FVar11.Data = local_f8.Address.Data.AllocatorInstance.Data;
  lVar14 = (longlong)local_f8.Address.Data.ArrayNum;
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68 = local_f8.Address.Data.ArrayNum;
  if (local_f8.Address.Data.ArrayNum == 0) {
    local_64[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_f8.Address.Data.ArrayNum,0,&local_70,local_f8.Address.Data.ArrayNum,
               local_64);
    memcpy(local_70.Data,FVar11.Data,lVar14 * 2);
  }
  FVar11.Data = local_f8.TagString.Data.AllocatorInstance.Data;
  lVar14 = (longlong)local_f8.TagString.Data.ArrayNum;
  local_80.Data = (FScriptContainerElement *)0x0;
  local_78 = local_f8.TagString.Data.ArrayNum;
  if (local_f8.TagString.Data.ArrayNum == 0) {
    local_74 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_f8.TagString.Data.ArrayNum,0,&local_80,local_f8.TagString.Data.ArrayNum,
               &local_74);
    memcpy(local_80.Data,FVar11.Data,lVar14 * 2);
  }
  iVar10 = local_f8.Buffer.ArrayNum;
  iVar7 = local_48.Data.ArrayNum + 3;
  if (local_48.Data.ArrayNum == 0) {
    iVar7 = 4;
  }
  iVar7 = ((int)(iVar7 + (iVar7 >> 0x1f & 3U)) >> 2) * 4 + 0x30;
  iVar2 = local_78 + 3;
  if (local_78 == 0) {
    iVar2 = 4;
  }
  iVar8 = local_68 + 3;
  if (local_68 == 0) {
    iVar8 = 4;
  }
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_68 != 0) {
    FVar11.Data = local_70.Data;
  }
  iVar9 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar11.Data,L"/foo");
  if ((iVar9 != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Address == L\"/foo\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\TestBackChannelOSC.cpp"
                         ,0x42,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_78 != 0) {
    FVar11.Data = local_80.Data;
  }
  iVar9 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar11.Data,L"iTFfsb");
  if ((iVar9 != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Tags == L\"iTFfsb\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\TestBackChannelOSC.cpp"
                         ,0x43,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  if ((iVar10 != iVar7) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArgSize == ExpectedArgSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\TestBackChannelOSC.cpp"
                         ,0x44,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  FBackChannelOSCMessage::WriteToBuffer(&local_f8,&local_90);
  if ((local_90.ArrayNum !=
       iVar7 + (((int)((iVar2 >> 0x1f & 3U) + iVar2) >> 2) +
               ((int)(iVar8 + (iVar8 >> 0x1f & 3U)) >> 2)) * 4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer.Num() == ExpectedBufferSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\TestBackChannelOSC.cpp"
                         ,0x4a,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  FVar11.Data = local_90.AllocatorInstance.Data;
  iVar10 = local_90.ArrayNum;
  if (((local_90.AllocatorInstance.Data == (FScriptContainerElement *)0x0) ||
      ((((6 < local_90.ArrayNum &&
         (iVar7 = FGenericPlatformStricmp::Stricmp
                            ((char *)local_90.AllocatorInstance.Data,"#bundle"), iVar7 == 0)) ||
        (iVar10 < 0)) ||
       (iVar10 = FGenericPlatformStricmp::Strnicmp((char *)FVar11.Data,"",0), iVar10 != 0)))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("FBackChannelOSCPacket::GetType(Buffer.GetData(), Buffer.Num()) == OSCPacketType::Message"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\TestBackChannelOSC.cpp"
                         ,0x4b,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  FBackChannelOSCMessage::CreateFromBuffer
            (&local_110,local_90.AllocatorInstance.Data,local_90.ArrayNum);
  local_a8[0] = 0;
  local_64[1] = 0;
  local_res18[0] = '\0';
  local_res20[0] = '\x01';
  local_58 = (wchar_t *)0x0;
  local_50 = 0;
  local_a0 = (void *)0x0;
  local_98 = 0;
  if ((local_110.Object == (FBackChannelOSCMessage *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  (**(code **)((local_110.Object)->_padding_ + 0x98))
            (&(local_110.Object)->_padding_,L"Int",local_a8);
  if ((local_110.Object == (FBackChannelOSCMessage *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  (**(code **)((local_110.Object)->_padding_ + 0x88))
            (&(local_110.Object)->_padding_,&u_true,local_res18);
  if ((local_110.Object == (FBackChannelOSCMessage *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  (**(code **)((local_110.Object)->_padding_ + 0x88))
            (&(local_110.Object)->_padding_,L"false",local_res20);
  if ((local_110.Object == (FBackChannelOSCMessage *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  (**(code **)((local_110.Object)->_padding_ + 0x90))
            (&(local_110.Object)->_padding_,L"Float",local_64 + 1);
  if ((local_110.Object == (FBackChannelOSCMessage *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  (**(code **)((local_110.Object)->_padding_ + 0x80))
            (&(local_110.Object)->_padding_,L"String",&local_58);
  if ((local_110.Object == (FBackChannelOSCMessage *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  (**(code **)((local_110.Object)->_padding_ + 0x78))
            (&(local_110.Object)->_padding_,L"Array",&local_a0);
  if ((local_a8[0] != 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutIntValue == IntValue",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\TestBackChannelOSC.cpp"
                         ,0x5e,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  if (((1 < (int)local_50) &&
      (iVar10 = FGenericPlatformStricmp::Stricmp(local_58,local_58), iVar10 != 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutStringValue == OutStringValue",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\TestBackChannelOSC.cpp"
                         ,0x60,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  if ((local_res18[0] != '\x01') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutTrueValue == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\TestBackChannelOSC.cpp"
                         ,0x61,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  if ((local_res20[0] != '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutFalseValue == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\TestBackChannelOSC.cpp"
                         ,0x62,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  if (((uint)local_98 != local_118) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutArray.Num() == AnswerArray.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\TestBackChannelOSC.cpp"
                         ,99,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  uVar16 = uVar15;
  if (0 < (int)(uint)local_98) {
    do {
      uVar13 = (uint)uVar15;
      uVar6 = 0;
      if ((int)uVar13 < (int)(uint)local_98) {
        uVar6 = ~uVar13 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      pvVar3 = local_a0;
      uVar6 = 0;
      if ((int)uVar13 < (int)local_118) {
        uVar6 = ~uVar13 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      if ((*(FScriptContainerElement *)((longlong)pvVar3 + uVar16) != local_120.Data[uVar16]) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("OutArray[i] == AnswerArray[i]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\TestBackChannelOSC.cpp"
                             ,0x67,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      uVar15 = (ulonglong)(uVar13 + 1);
      uVar16 = uVar16 + 1;
    } while ((int)(uVar13 + 1) < (int)(uint)local_98);
  }
  if (local_a0 != (void *)0x0) {
    FMemory::Free(local_a0);
  }
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free(local_58);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_110.SharedReferenceCount.ReferenceController);
  if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.AllocatorInstance.Data);
  }
  if (local_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data);
  }
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  if (local_120.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_f8._padding_ = (longlong)&FBackChannelOSCMessage::_vftable__for__FBackChannelOSCPacket__;
  local_f8._padding_ = (longlong)&FBackChannelOSCMessage::_vftable__for__IBackChannelPacket__;
  if (local_f8.Buffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Buffer.AllocatorInstance.Data);
  }
  if (local_f8.TagString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.TagString.Data.AllocatorInstance.Data);
  }
  if (local_f8.Address.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Address.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14e7f12c0

FString * __thiscall
FBackChannelTestOSCMessage::GetBeautifiedTestName
          (FBackChannelTestOSCMessage *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"BackChannel.TestOSCMessage");
  return __return_storage_ptr__;
}

