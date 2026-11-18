// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BackChannel
// Functions: 8

// GetTestFlags @ 14e7f1330

EAutomationTestFlags __thiscall
FBackChannelTestOSCBundle::GetTestFlags(FBackChannelTestOSCBundle *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 14e7f1340

bool __thiscall FBackChannelTestOSCBundle::IsStressTest(FBackChannelTestOSCBundle *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14e7f1350

uint __thiscall FBackChannelTestOSCBundle::GetRequiredDeviceNum(FBackChannelTestOSCBundle *this)

{
  return 1;
}

// GetTestSourceFileName @ 14e7f1360

FString * __thiscall
FBackChannelTestOSCBundle::GetTestSourceFileName
          (FBackChannelTestOSCBundle *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\TestBackChannelOSC.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14e7f1390

int __thiscall FBackChannelTestOSCBundle::GetTestSourceFileLine(FBackChannelTestOSCBundle *this)

{
  return 0x16;
}

// GetTests @ 14e7f13a0

/* WARNING: Removing unreachable block (ram,0x00014e7f148d) */
/* WARNING: Removing unreachable block (ram,0x00014e7f1558) */

void __thiscall
FBackChannelTestOSCBundle::GetTests
          (FBackChannelTestOSCBundle *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"BackChannel.TestOSCBundle");
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

// RunTest @ 14e7f1580

bool __thiscall FBackChannelTestOSCBundle::RunTest(FBackChannelTestOSCBundle *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FBackChannelOSCPacket *pFVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FBackChannelOSCBundle *pFVar8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar9;
  ForAnyElementType FVar10;
  ForAnyElementType FVar11;
  longlong lVar12;
  TRawPtrProxy<FBackChannelOSCBundle> local_res18;
  TSharedPtr<FBackChannelOSCBundle,1> local_98;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_88;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_78;
  void *local_68;
  undefined8 local_60;
  FString local_58;
  FString local_48;
  TSharedPtr<FBackChannelOSCPacket,1> local_38;
  undefined8 local_28;
  FSharedReferencer<1> local_20;
  
  pFVar8 = ::operator_new(0x28);
  local_res18.Object = (FBackChannelOSCBundle *)0x0;
  if (pFVar8 != (FBackChannelOSCBundle *)0x0) {
    (pFVar8->Elements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8->_padding_ = (longlong)&___7FBackChannelOSCBundle__6B_;
    (pFVar8->Elements).ArrayNum = 0;
    (pFVar8->Elements).ArrayMax = 0;
    pFVar8->Mode = Write;
    local_res18.Object = pFVar8;
  }
  TSharedPtr<FBackChannelOSCBundle,1>::TSharedPtr<FBackChannelOSCBundle,1><FBackChannelOSCBundle>
            (&local_98,&local_res18);
  ::FString::FString(&local_48,L"Hello World!");
  ::FString::FString(&local_58,L"Hello World Again!");
  pFVar8 = local_98.Object;
  if ((local_98.Object == (FBackChannelOSCBundle *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  lVar12 = 2;
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar11.Data = local_48.Data.AllocatorInstance.Data;
  }
  iVar7 = local_48.Data.ArrayNum * 2;
  if (local_48.Data.ArrayNum == 0) {
    iVar7 = 2;
  }
  FBackChannelOSCBundle::AddElement(pFVar8,FVar11.Data,iVar7);
  if ((pFVar8 == (FBackChannelOSCBundle *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar11.Data = local_58.Data.AllocatorInstance.Data;
  }
  iVar7 = local_58.Data.ArrayNum * 2;
  if (local_58.Data.ArrayNum == 0) {
    iVar7 = 2;
  }
  FBackChannelOSCBundle::AddElement(pFVar8,FVar11.Data,iVar7);
  do {
    if ((pFVar8 == (FBackChannelOSCBundle *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    if (((pFVar8->Elements).ArrayNum != 2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Bundle->GetElementCount() == 2",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\TestBackChannelOSC.cpp"
                           ,0x7c,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    if ((pFVar8 == (FBackChannelOSCBundle *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    pTVar9 = FBackChannelOSCBundle::GetElement(pFVar8,0);
    if (&local_78 != pTVar9) {
      iVar7 = pTVar9->ArrayNum;
      pFVar1 = (pTVar9->AllocatorInstance).Data;
      local_78.ArrayNum = iVar7;
      if ((iVar7 == 0) && (local_78.ArrayMax == 0)) {
        local_78.ArrayNum = 0;
        local_78.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar7,local_78.ArrayMax,&local_78.AllocatorInstance,iVar7,&local_78.ArrayMax)
        ;
        if (iVar7 != 0) {
          memcpy(local_78.AllocatorInstance.Data,pFVar1,(longlong)iVar7);
        }
      }
    }
    if ((pFVar8 == (FBackChannelOSCBundle *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    pTVar9 = FBackChannelOSCBundle::GetElement(pFVar8,1);
    if (&local_88 != pTVar9) {
      iVar7 = pTVar9->ArrayNum;
      pFVar1 = (pTVar9->AllocatorInstance).Data;
      local_88.ArrayNum = iVar7;
      if ((iVar7 == 0) && (local_88.ArrayMax == 0)) {
        local_88.ArrayNum = 0;
        local_88.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar7,local_88.ArrayMax,&local_88.AllocatorInstance,iVar7,&local_88.ArrayMax)
        ;
        if (iVar7 != 0) {
          memcpy(local_88.AllocatorInstance.Data,pFVar1,(longlong)iVar7);
        }
      }
    }
    FVar11.Data = local_88.AllocatorInstance.Data;
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar10.Data = local_48.Data.AllocatorInstance.Data;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)FVar10.Data,(wchar_t *)local_78.AllocatorInstance.Data);
    if ((iVar7 != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TestString1 == pString1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\TestBackChannelOSC.cpp"
                           ,0x85,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar10.Data = local_58.Data.AllocatorInstance.Data;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar10.Data,(wchar_t *)FVar11.Data);
    if ((iVar7 != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TestString2 == pString2",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\TestBackChannelOSC.cpp"
                           ,0x86,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    local_68 = (void *)0x0;
    local_60 = 0;
    if ((pFVar8 == (FBackChannelOSCBundle *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    (**(code **)(pFVar8->_padding_ + 0x18))(pFVar8,&local_68);
    FBackChannelOSCPacket::CreateFromBuffer(&local_38,local_68,(int)local_60);
    pFVar3 = local_38.Object;
    if (((FBackChannelOSCBundle *)local_38.Object == (FBackChannelOSCBundle *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    iVar7 = (**(code **)(*(longlong *)&pFVar3->field_0x0 + 0x10))(pFVar3);
    if ((iVar7 != 2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Packet->GetType() == OSCPacketType::Bundle",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\TestBackChannelOSC.cpp"
                           ,0x8f,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    FVar4.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
    local_20.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_98.Object = (FBackChannelOSCBundle *)pFVar3;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_98.SharedReferenceCount,&local_20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar4.ReferenceController);
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
    lVar12 = lVar12 + -1;
    pFVar8 = local_98.Object;
  } while (lVar12 != 0);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  return true;
}

// GetBeautifiedTestName @ 14e7f1a80

FString * __thiscall
FBackChannelTestOSCBundle::GetBeautifiedTestName
          (FBackChannelTestOSCBundle *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"BackChannel.TestOSCBundle");
  return __return_storage_ptr__;
}

