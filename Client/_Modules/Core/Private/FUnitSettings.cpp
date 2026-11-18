// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// FUnitSettings @ 1417a5010

FUnitSettings * __thiscall FUnitSettings::FUnitSettings(FUnitSettings *this)

{
  int *piVar1;
  TArray<EUnit,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<EUnit,TSizedDefaultAllocator<32>_> *pTVar7;
  FUnitSettings *pFVar8;
  longlong lVar9;
  FScriptContainerElement local_28;
  FScriptContainerElement local_27;
  FScriptContainerElement local_26;
  FScriptContainerElement local_25;
  FScriptContainerElement local_24;
  FScriptContainerElement local_23;
  FScriptContainerElement local_22;
  FScriptContainerElement local_21;
  FScriptContainerElement local_20;
  FScriptContainerElement local_1f;
  FScriptContainerElement local_1e;
  FScriptContainerElement local_1d;
  FScriptContainerElement local_1c;
  FScriptContainerElement local_1b;
  FScriptContainerElement local_1a;
  FScriptContainerElement local_19;
  FScriptContainerElement local_18;
  FScriptContainerElement local_17 [15];
  
  this->bGlobalUnitDisplay = true;
  pTVar7 = this->DisplayUnits;
  lVar9 = 0x18;
  do {
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar7->ArrayNum = 0;
    pTVar7->ArrayMax = 0;
    pTVar7 = pTVar7 + 1;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  *(undefined8 *)&this->SettingChangedEvent = 0;
  *(undefined8 *)&(this->SettingChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->SettingChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->SettingChangedEvent).field_0x18 = 2;
  pFVar3 = this->DisplayUnits[0].AllocatorInstance.Data;
  local_28 = (FScriptContainerElement)0x2;
  if ((pFVar3 <= &local_28) && (&local_28 < pFVar3 + this->DisplayUnits[0].ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FUnitSettings *)(*pcVar4)();
      return pFVar8;
    }
  }
  iVar6 = this->DisplayUnits[0].ArrayNum;
  piVar1 = &this->DisplayUnits[0].ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&this->DisplayUnits[0].AllocatorInstance,piVar1);
  }
  this->DisplayUnits[0].ArrayNum = iVar6 + 1;
  local_27 = (FScriptContainerElement)0xa;
  this->DisplayUnits[0].AllocatorInstance.Data[iVar6] = local_28;
  pFVar3 = this->DisplayUnits[1].AllocatorInstance.Data;
  if ((pFVar3 <= &local_27) && (&local_27 < pFVar3 + this->DisplayUnits[1].ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FUnitSettings *)(*pcVar4)();
      return pFVar8;
    }
  }
  iVar6 = this->DisplayUnits[1].ArrayNum;
  piVar1 = &this->DisplayUnits[1].ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&this->DisplayUnits[1].AllocatorInstance,piVar1);
  }
  this->DisplayUnits[1].ArrayNum = iVar6 + 1;
  local_26 = (FScriptContainerElement)0xd;
  this->DisplayUnits[1].AllocatorInstance.Data[iVar6] = local_27;
  pFVar3 = this->DisplayUnits[2].AllocatorInstance.Data;
  if ((pFVar3 <= &local_26) && (&local_26 < pFVar3 + this->DisplayUnits[2].ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FUnitSettings *)(*pcVar4)();
      return pFVar8;
    }
  }
  iVar6 = this->DisplayUnits[2].ArrayNum;
  piVar1 = &this->DisplayUnits[2].ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&this->DisplayUnits[2].AllocatorInstance,piVar1);
  }
  this->DisplayUnits[2].ArrayNum = iVar6 + 1;
  local_25 = (FScriptContainerElement)0x10;
  this->DisplayUnits[2].AllocatorInstance.Data[iVar6] = local_26;
  pFVar3 = this->DisplayUnits[3].AllocatorInstance.Data;
  if ((pFVar3 <= &local_25) && (&local_25 < pFVar3 + this->DisplayUnits[3].ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FUnitSettings *)(*pcVar4)();
      return pFVar8;
    }
  }
  iVar6 = this->DisplayUnits[3].ArrayNum;
  piVar1 = &this->DisplayUnits[3].ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&this->DisplayUnits[3].AllocatorInstance,piVar1);
  }
  this->DisplayUnits[3].ArrayNum = iVar6 + 1;
  local_24 = (FScriptContainerElement)0x12;
  this->DisplayUnits[3].AllocatorInstance.Data[iVar6] = local_25;
  pFVar3 = this->DisplayUnits[4].AllocatorInstance.Data;
  if ((pFVar3 <= &local_24) && (&local_24 < pFVar3 + this->DisplayUnits[4].ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FUnitSettings *)(*pcVar4)();
      return pFVar8;
    }
  }
  iVar6 = this->DisplayUnits[4].ArrayNum;
  piVar1 = &this->DisplayUnits[4].ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&this->DisplayUnits[4].AllocatorInstance,piVar1);
  }
  this->DisplayUnits[4].ArrayNum = iVar6 + 1;
  local_23 = (FScriptContainerElement)0x14;
  this->DisplayUnits[4].AllocatorInstance.Data[iVar6] = local_24;
  pFVar3 = this->DisplayUnits[5].AllocatorInstance.Data;
  if ((pFVar3 <= &local_23) && (&local_23 < pFVar3 + this->DisplayUnits[5].ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FUnitSettings *)(*pcVar4)();
      return pFVar8;
    }
  }
  iVar6 = this->DisplayUnits[5].ArrayNum;
  piVar1 = &this->DisplayUnits[5].ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&this->DisplayUnits[5].AllocatorInstance,piVar1);
  }
  this->DisplayUnits[5].ArrayNum = iVar6 + 1;
  local_22 = (FScriptContainerElement)0x1a;
  this->DisplayUnits[5].AllocatorInstance.Data[iVar6] = local_23;
  pFVar3 = this->DisplayUnits[6].AllocatorInstance.Data;
  if ((pFVar3 <= &local_22) && (&local_22 < pFVar3 + this->DisplayUnits[6].ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FUnitSettings *)(*pcVar4)();
      return pFVar8;
    }
  }
  iVar6 = this->DisplayUnits[6].ArrayNum;
  piVar1 = &this->DisplayUnits[6].ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&this->DisplayUnits[6].AllocatorInstance,piVar1);
  }
  this->DisplayUnits[6].ArrayNum = iVar6 + 1;
  local_21 = (FScriptContainerElement)0x1f;
  this->DisplayUnits[6].AllocatorInstance.Data[iVar6] = local_22;
  pFVar3 = this->DisplayUnits[7].AllocatorInstance.Data;
  if ((pFVar3 <= &local_21) && (&local_21 < pFVar3 + this->DisplayUnits[7].ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FUnitSettings *)(*pcVar4)();
      return pFVar8;
    }
  }
  iVar6 = this->DisplayUnits[7].ArrayNum;
  piVar1 = &this->DisplayUnits[7].ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&this->DisplayUnits[7].AllocatorInstance,piVar1);
  }
  pTVar7 = this->DisplayUnits + 8;
  this->DisplayUnits[7].ArrayNum = iVar6 + 1;
  local_20 = (FScriptContainerElement)0x23;
  this->DisplayUnits[7].AllocatorInstance.Data[iVar6] = local_21;
  pFVar3 = (pTVar7->AllocatorInstance).Data;
  if ((pFVar3 <= &local_20) && (&local_20 < pFVar3 + this->DisplayUnits[8].ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FUnitSettings *)(*pcVar4)();
      return pFVar8;
    }
  }
  iVar6 = this->DisplayUnits[8].ArrayNum;
  piVar1 = &this->DisplayUnits[8].ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&pTVar7->AllocatorInstance,piVar1);
  }
  this->DisplayUnits[8].ArrayNum = iVar6 + 1;
  pTVar2 = this->DisplayUnits + 9;
  local_1f = (FScriptContainerElement)0x27;
  (pTVar7->AllocatorInstance).Data[iVar6] = local_20;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= &local_1f) && (&local_1f < pFVar3 + this->DisplayUnits[9].ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FUnitSettings *)(*pcVar4)();
      return pFVar8;
    }
  }
  iVar6 = this->DisplayUnits[9].ArrayNum;
  piVar1 = &this->DisplayUnits[9].ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&pTVar2->AllocatorInstance,piVar1);
  }
  this->DisplayUnits[9].ArrayNum = iVar6 + 1;
  pTVar7 = this->DisplayUnits + 10;
  local_1e = (FScriptContainerElement)0x29;
  (pTVar2->AllocatorInstance).Data[iVar6] = local_1f;
  pFVar3 = (pTVar7->AllocatorInstance).Data;
  if ((pFVar3 <= &local_1e) && (&local_1e < pFVar3 + this->DisplayUnits[10].ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FUnitSettings *)(*pcVar4)();
      return pFVar8;
    }
  }
  iVar6 = this->DisplayUnits[10].ArrayNum;
  piVar1 = &this->DisplayUnits[10].ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&pTVar7->AllocatorInstance,piVar1);
  }
  this->DisplayUnits[10].ArrayNum = iVar6 + 1;
  pTVar2 = this->DisplayUnits + 0xb;
  local_1d = (FScriptContainerElement)0x2a;
  (pTVar7->AllocatorInstance).Data[iVar6] = local_1e;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= &local_1d) && (&local_1d < pFVar3 + this->DisplayUnits[0xb].ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FUnitSettings *)(*pcVar4)();
      return pFVar8;
    }
  }
  iVar6 = this->DisplayUnits[0xb].ArrayNum;
  piVar1 = &this->DisplayUnits[0xb].ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&pTVar2->AllocatorInstance,piVar1);
  }
  this->DisplayUnits[0xb].ArrayNum = iVar6 + 1;
  pTVar7 = this->DisplayUnits + 0xc;
  local_1c = (FScriptContainerElement)0x2c;
  (pTVar2->AllocatorInstance).Data[iVar6] = local_1d;
  pFVar3 = (pTVar7->AllocatorInstance).Data;
  if ((pFVar3 <= &local_1c) && (&local_1c < pFVar3 + this->DisplayUnits[0xc].ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FUnitSettings *)(*pcVar4)();
      return pFVar8;
    }
  }
  iVar6 = this->DisplayUnits[0xc].ArrayNum;
  piVar1 = &this->DisplayUnits[0xc].ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&pTVar7->AllocatorInstance,piVar1);
  }
  this->DisplayUnits[0xc].ArrayNum = iVar6 + 1;
  pTVar2 = this->DisplayUnits + 0xd;
  local_1b = (FScriptContainerElement)0x33;
  (pTVar7->AllocatorInstance).Data[iVar6] = local_1c;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= &local_1b) && (&local_1b < pFVar3 + this->DisplayUnits[0xd].ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FUnitSettings *)(*pcVar4)();
      return pFVar8;
    }
  }
  iVar6 = this->DisplayUnits[0xd].ArrayNum;
  piVar1 = &this->DisplayUnits[0xd].ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&pTVar2->AllocatorInstance,piVar1);
  }
  this->DisplayUnits[0xd].ArrayNum = iVar6 + 1;
  pTVar7 = this->DisplayUnits + 0xe;
  local_1a = (FScriptContainerElement)0x36;
  (pTVar2->AllocatorInstance).Data[iVar6] = local_1b;
  pFVar3 = (pTVar7->AllocatorInstance).Data;
  if ((pFVar3 <= &local_1a) && (&local_1a < pFVar3 + this->DisplayUnits[0xe].ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FUnitSettings *)(*pcVar4)();
      return pFVar8;
    }
  }
  iVar6 = this->DisplayUnits[0xe].ArrayNum;
  piVar1 = &this->DisplayUnits[0xe].ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&pTVar7->AllocatorInstance,piVar1);
  }
  this->DisplayUnits[0xe].ArrayNum = iVar6 + 1;
  pTVar2 = this->DisplayUnits + 0x15;
  local_19 = (FScriptContainerElement)0x3b;
  (pTVar7->AllocatorInstance).Data[iVar6] = local_1a;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= &local_19) && (&local_19 < pFVar3 + this->DisplayUnits[0x15].ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FUnitSettings *)(*pcVar4)();
      return pFVar8;
    }
  }
  iVar6 = this->DisplayUnits[0x15].ArrayNum;
  piVar1 = &this->DisplayUnits[0x15].ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&pTVar2->AllocatorInstance,piVar1);
  }
  this->DisplayUnits[0x15].ArrayNum = iVar6 + 1;
  pTVar7 = this->DisplayUnits + 0x12;
  local_18 = (FScriptContainerElement)0x3f;
  (pTVar2->AllocatorInstance).Data[iVar6] = local_19;
  pFVar3 = (pTVar7->AllocatorInstance).Data;
  if ((pFVar3 <= &local_18) && (&local_18 < pFVar3 + this->DisplayUnits[0x12].ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FUnitSettings *)(*pcVar4)();
      return pFVar8;
    }
  }
  iVar6 = this->DisplayUnits[0x12].ArrayNum;
  piVar1 = &this->DisplayUnits[0x12].ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&pTVar7->AllocatorInstance,piVar1);
  }
  this->DisplayUnits[0x12].ArrayNum = iVar6 + 1;
  pTVar2 = this->DisplayUnits + 0x16;
  local_17[0] = (FScriptContainerElement)0x4a;
  (pTVar7->AllocatorInstance).Data[iVar6] = local_18;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (pFVar3 <= local_17) {
    if (local_17 < pFVar3 + this->DisplayUnits[0x16].ArrayMax) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FUnitSettings *)(*pcVar4)();
        return pFVar8;
      }
    }
  }
  iVar6 = this->DisplayUnits[0x16].ArrayNum;
  piVar1 = &this->DisplayUnits[0x16].ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&pTVar2->AllocatorInstance,piVar1);
  }
  this->DisplayUnits[0x16].ArrayNum = iVar6 + 1;
  (pTVar2->AllocatorInstance).Data[iVar6] = local_17[0];
  return this;
}

// GetDisplayUnits @ 1417d3060

TArray<EUnit,TSizedDefaultAllocator<32>_> * __thiscall
FUnitSettings::GetDisplayUnits(FUnitSettings *this,EUnitType param_1)

{
  return this->DisplayUnits + (param_1 & 0xff);
}

// SetDisplayUnits @ 1417fcae0

void __thiscall
FUnitSettings::SetDisplayUnits
          (FUnitSettings *this,EUnitType param_1,TArray<EUnit,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  EUnitType EVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  FScriptContainerElement local_48 [16];
  
  if (param_1 != NumberOf) {
    EVar8 = param_1 & 0xff;
    iVar3 = this->DisplayUnits[EVar8].ArrayMax;
    piVar1 = &this->DisplayUnits[EVar8].ArrayMax;
    this->DisplayUnits[EVar8].ArrayNum = 0;
    if (iVar3 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&this->DisplayUnits[EVar8].AllocatorInstance,0,piVar1);
    }
    pFVar9 = (param_2->AllocatorInstance).Data;
    iVar3 = param_2->ArrayNum;
    pFVar2 = pFVar9 + iVar3;
    while( true ) {
      if (param_2->ArrayNum != iVar3) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<enum_EUnit_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar9 == pFVar2) break;
      local_48[0] = *pFVar9;
      if ((local_48[0] != (FScriptContainerElement)0x4c) &&
         (UnitTypes[(byte)local_48[0]] == param_1)) {
        pFVar4 = this->DisplayUnits[EVar8].AllocatorInstance.Data;
        if ((pFVar4 <= local_48) && (local_48 < pFVar4 + *piVar1)) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar7 = this->DisplayUnits[EVar8].ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x101,&this->DisplayUnits[EVar8].AllocatorInstance,piVar1);
        }
        this->DisplayUnits[EVar8].ArrayNum = iVar7 + 1;
        this->DisplayUnits[EVar8].AllocatorInstance.Data[iVar7] = local_48[0];
      }
      pFVar9 = pFVar9 + 1;
    }
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->SettingChangedEvent);
  }
  return;
}

// SetDisplayUnits @ 1417fcc90

void __thiscall FUnitSettings::SetDisplayUnits(FUnitSettings *this,EUnitType param_1,EUnit param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  EUnitType EVar6;
  FScriptContainerElement local_res18 [8];
  
  if (param_1 != NumberOf) {
    EVar6 = param_1 & 0xff;
    piVar1 = &this->DisplayUnits[EVar6].ArrayMax;
    this->DisplayUnits[EVar6].ArrayNum = 0;
    local_res18[0] = (FScriptContainerElement)param_2;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&this->DisplayUnits[EVar6].AllocatorInstance,0,piVar1);
    }
    if ((local_res18[0] != (FScriptContainerElement)0x4c) &&
       (UnitTypes[(byte)local_res18[0]] == param_1)) {
      pFVar2 = this->DisplayUnits[EVar6].AllocatorInstance.Data;
      if ((pFVar2 <= local_res18) && (local_res18 < pFVar2 + *piVar1)) {
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
      iVar5 = this->DisplayUnits[EVar6].ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&this->DisplayUnits[EVar6].AllocatorInstance,piVar1);
      }
      this->DisplayUnits[EVar6].ArrayNum = iVar5 + 1;
      this->DisplayUnits[EVar6].AllocatorInstance.Data[iVar5] = local_res18[0];
    }
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->SettingChangedEvent);
  }
  return;
}

// SetShouldDisplayUnits @ 1417fdd80

void __thiscall FUnitSettings::SetShouldDisplayUnits(FUnitSettings *this,bool param_1)

{
  this->bGlobalUnitDisplay = param_1;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->SettingChangedEvent);
  return;
}

// ShouldDisplayUnits @ 1417fe620

bool __thiscall FUnitSettings::ShouldDisplayUnits(FUnitSettings *this)

{
  return this->bGlobalUnitDisplay;
}

