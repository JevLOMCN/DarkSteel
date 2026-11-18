// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 15

// FModulationMatrix @ 1444f11d0

FModulationMatrix * __thiscall Audio::FModulationMatrix::FModulationMatrix(FModulationMatrix *this)

{
  this->_padding_ = (longlong)&___7FModulationMatrix_Audio__6B_;
  this->NumVoices = 0;
  (this->Patches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Patches).ArrayNum = 0;
  (this->Patches).ArrayMax = 0;
  (this->Sources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sources).ArrayNum = 0;
  (this->Sources).ArrayMax = 0;
  (this->Destinations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Destinations).ArrayNum = 0;
  (this->Destinations).ArrayMax = 0;
  return this;
}

// ~FModulationMatrix @ 1444f4070

void __thiscall Audio::FModulationMatrix::~FModulationMatrix(FModulationMatrix *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FModulationMatrix_Audio__6B_;
  DestructItems<TArray<Audio::FModulationMatrix::FDestData,TSizedDefaultAllocator<32>_>,int>
            ((TArray<Audio::FModulationMatrix::FDestData,TSizedDefaultAllocator<32>_> *)
             (this->Destinations).AllocatorInstance.Data,(this->Destinations).ArrayNum);
  pFVar1 = (this->Destinations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
            ((TArray<float,TSizedDefaultAllocator<32>_> *)(this->Sources).AllocatorInstance.Data,
             (this->Sources).ArrayNum);
  pFVar1 = (this->Sources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<Audio::FPatch_*,TSizedDefaultAllocator<32>_>,int>
            ((TArray<Audio::FPatch_*,TSizedDefaultAllocator<32>_> *)
             (this->Patches).AllocatorInstance.Data,(this->Patches).ArrayNum);
  pFVar1 = (this->Patches).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddPatch @ 1444f67b0

bool __thiscall
Audio::FModulationMatrix::AddPatch(FModulationMatrix *this,int param_1,FPatch *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FPatch *local_res18 [2];
  
  local_res18[0] = param_2;
  if (this->NumVoices <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("VoiceId < NumVoices",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ModulationMatrix.cpp"
                       ,0x49,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = ValidatePatch(this,param_1,local_res18[0]);
  if (!bVar2) {
    return false;
  }
  uVar4 = 0;
  if (param_1 < (this->Patches).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pFVar6 = (this->Patches).AllocatorInstance.Data + (longlong)param_1 * 0x10;
  if ((*(FPatch ***)&pFVar6->field_0x0 <= local_res18) &&
     (local_res18 < *(FPatch ***)&pFVar6->field_0x0 + *(int *)(pFVar6 + 0xc))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  iVar5 = *(int *)&pFVar6[8].field_0x0;
  if (iVar5 == *(int *)(pFVar6 + 0xc)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar6,(int *)(pFVar6 + 0xc));
  }
  *(int *)&pFVar6[8].field_0x0 = iVar5 + 1;
  *(FPatch **)(*(longlong *)&pFVar6->field_0x0 + (longlong)iVar5 * 8) = local_res18[0];
  return true;
}

// ClearPatches @ 1444f7ea0

void __thiscall Audio::FModulationMatrix::ClearPatches(FModulationMatrix *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  
  if (this->NumVoices <= param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("VoiceId < NumVoices",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ModulationMatrix.cpp"
                       ,0x74,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = 0;
  if (param_1 < (this->Destinations).ArrayNum) {
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
  pFVar8 = (this->Destinations).AllocatorInstance.Data;
  lVar7 = (longlong)param_1 * 0x10;
  puVar6 = *(undefined4 **)(pFVar8 + lVar7);
  iVar2 = *(int *)(pFVar8 + lVar7 + 8);
  puVar1 = puVar6 + (longlong)iVar2 * 2;
  while( true ) {
    if (*(int *)(pFVar8 + lVar7 + 8) != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<Audio::FModulationMatrix::FDestData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (puVar6 == puVar1) break;
    *(undefined1 *)(puVar6 + 1) = 0;
    *puVar6 = 0;
    puVar6 = puVar6 + 2;
  }
  uVar5 = 0;
  if (param_1 < (this->Patches).ArrayNum) {
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
  pFVar8 = (this->Patches).AllocatorInstance.Data + lVar7;
  iVar2 = *(int *)(pFVar8 + 0xc);
  *(undefined4 *)&pFVar8[8].field_0x0 = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)pFVar8,0,(int *)(pFVar8 + 0xc));
  }
  return;
}

// CreatePatchDestination @ 1444f97c0

FPatchDestination * __thiscall
Audio::FModulationMatrix::CreatePatchDestination
          (FModulationMatrix *this,FPatchDestination *__return_storage_ptr__,int param_1,int param_2
          ,float param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FPatchDestination *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined4 local_28;
  uint uStack_24;
  
  if (this->NumVoices <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("VoiceId < NumVoices",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ModulationMatrix.cpp"
                       ,0x2b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FPatchDestination *)(*pcVar1)();
      return pFVar5;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->Destinations).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FPatchDestination *)(*pcVar1)();
      return pFVar5;
    }
  }
  uVar3 = *(uint *)((this->Destinations).AllocatorInstance.Data + (longlong)param_1 * 0x10 + 8);
  (__return_storage_ptr__->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Name).Data.ArrayNum = 0;
  (__return_storage_ptr__->Name).Data.ArrayMax = 0;
  __return_storage_ptr__->Depth = param_3;
  __return_storage_ptr__->Id = uVar3;
  __return_storage_ptr__->Stage = param_2;
  uVar3 = 0;
  if (param_1 < (this->Destinations).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FPatchDestination *)(*pcVar1)();
      return pFVar5;
    }
  }
  pFVar6 = (this->Destinations).AllocatorInstance.Data + (longlong)param_1 * 0x10;
  local_28 = 0;
  uStack_24 = uStack_24 & 0xffffff00;
  if ((*(undefined4 **)&pFVar6->field_0x0 <= &local_28) &&
     (&local_28 < *(undefined4 **)&pFVar6->field_0x0 + (longlong)*(int *)(pFVar6 + 0xc) * 2)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FPatchDestination *)(*pcVar1)();
      return pFVar5;
    }
  }
  iVar4 = *(int *)&pFVar6[8].field_0x0;
  if (iVar4 == *(int *)(pFVar6 + 0xc)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)pFVar6,(int *)(pFVar6 + 0xc));
  }
  *(int *)&pFVar6[8].field_0x0 = iVar4 + 1;
  *(ulonglong *)(*(longlong *)&pFVar6->field_0x0 + (longlong)iVar4 * 8) =
       CONCAT44(uStack_24,local_28);
  return __return_storage_ptr__;
}

// CreatePatchSource @ 1444f99a0

FPatchSource * __thiscall
Audio::FModulationMatrix::CreatePatchSource
          (FModulationMatrix *this,FPatchSource *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FPatchSource *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined4 local_28 [4];
  
  if (this->NumVoices <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("VoiceId < NumVoices",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ModulationMatrix.cpp"
                       ,0x23,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FPatchSource *)(*pcVar1)();
      return pFVar5;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->Sources).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FPatchSource *)(*pcVar1)();
      return pFVar5;
    }
  }
  uVar3 = *(uint *)((this->Sources).AllocatorInstance.Data + (longlong)param_1 * 0x10 + 8);
  (__return_storage_ptr__->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Name).Data.ArrayNum = 0;
  (__return_storage_ptr__->Name).Data.ArrayMax = 0;
  __return_storage_ptr__->Id = uVar3;
  uVar3 = 0;
  if (param_1 < (this->Sources).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FPatchSource *)(*pcVar1)();
      return pFVar5;
    }
  }
  pFVar6 = (this->Sources).AllocatorInstance.Data + (longlong)param_1 * 0x10;
  local_28[0] = 0;
  if ((*(undefined4 **)&pFVar6->field_0x0 <= local_28) &&
     (local_28 < *(undefined4 **)&pFVar6->field_0x0 + *(int *)(pFVar6 + 0xc))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FPatchSource *)(*pcVar1)();
      return pFVar5;
    }
  }
  iVar4 = *(int *)&pFVar6[8].field_0x0;
  if (iVar4 == *(int *)(pFVar6 + 0xc)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)pFVar6,(int *)(pFVar6 + 0xc));
  }
  *(int *)&pFVar6[8].field_0x0 = iVar4 + 1;
  *(undefined4 *)(*(longlong *)&pFVar6->field_0x0 + (longlong)iVar4 * 4) = local_28[0];
  return __return_storage_ptr__;
}

// GetDestinationValue @ 144503800

bool __thiscall
Audio::FModulationMatrix::GetDestinationValue
          (FModulationMatrix *this,int param_1,FPatchDestination *param_2,float *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  lVar6 = (longlong)param_1;
  if ((this->NumVoices <= param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("VoiceId < NumVoices",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ModulationMatrix.cpp"
                         ,0x8d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  uVar5 = 0;
  if (param_1 < (this->Destinations).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (param_2->Id < *(uint *)((this->Destinations).AllocatorInstance.Data + lVar6 * 0x10 + 8)) {
    uVar5 = 0;
    if (param_1 < (this->Destinations).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    uVar5 = param_2->Id;
    pFVar1 = (this->Destinations).AllocatorInstance.Data;
    uVar7 = 0;
    if ((int)uVar5 < *(int *)(pFVar1 + lVar6 * 0x10 + 8)) {
      uVar7 = ~uVar5 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    lVar6 = *(longlong *)(pFVar1 + lVar6 * 0x10);
    if (*(char *)(lVar6 + 4 + (longlong)(int)uVar5 * 8) != '\0') {
      *param_3 = *(float *)(lVar6 + (longlong)(int)uVar5 * 8);
      return true;
    }
  }
  return false;
}

// GetNumPatches @ 1445044c0

int __thiscall Audio::FModulationMatrix::GetNumPatches(FModulationMatrix *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  if (this->NumVoices <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("VoiceId < NumVoices",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ModulationMatrix.cpp"
                       ,0x1d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  uVar4 = 0;
  if (param_1 < (this->Patches).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return *(int *)((this->Patches).AllocatorInstance.Data + (longlong)param_1 * 0x10 + 8);
}

// Init @ 144506ba0

/* WARNING: Removing unreachable block (ram,0x000144506d92) */
/* WARNING: Removing unreachable block (ram,0x000144506cbd) */
/* WARNING: Removing unreachable block (ram,0x000144506e67) */

void __thiscall Audio::FModulationMatrix::Init(FModulationMatrix *this,int param_1)

{
  TArray<TArray<Audio::FPatch_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<TArray<Audio::FModulationMatrix::FDestData,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  iVar8 = 0;
  this->NumVoices = param_1;
  if (0 < param_1) {
    pTVar1 = &this->Patches;
    pTVar2 = &this->Destinations;
    pTVar3 = &this->Sources;
    do {
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      local_58 = 0;
      local_50 = 0;
      if (((pFVar7 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 < pFVar7 + (longlong)(this->Patches).ArrayMax * 0x10
          )) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (this->Patches).ArrayNum;
      if (iVar6 == (this->Patches).ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar1->AllocatorInstance,&(this->Patches).ArrayMax);
      }
      (this->Patches).ArrayNum = iVar6 + 1;
      pFVar7 = (pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(undefined8 *)pFVar7 = 0;
      *(undefined8 *)pFVar7 = local_58;
      *(undefined4 *)(pFVar7 + 8) = (undefined4)local_50;
      *(undefined4 *)(pFVar7 + 0xc) = local_50._4_4_;
      local_50 = 0;
      local_58 = 0;
      pFVar7 = (pTVar3->AllocatorInstance).Data;
      local_48 = 0;
      local_40 = 0;
      if (((pFVar7 <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 < pFVar7 + (longlong)(this->Sources).ArrayMax * 0x10
          )) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (this->Sources).ArrayNum;
      if (iVar6 == (this->Sources).ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar3->AllocatorInstance,&(this->Sources).ArrayMax);
      }
      (this->Sources).ArrayNum = iVar6 + 1;
      pFVar7 = (pTVar3->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(undefined8 *)pFVar7 = 0;
      *(undefined8 *)pFVar7 = local_48;
      *(undefined4 *)(pFVar7 + 8) = (undefined4)local_40;
      *(undefined4 *)(pFVar7 + 0xc) = local_40._4_4_;
      local_40 = 0;
      local_48 = 0;
      pFVar7 = (pTVar2->AllocatorInstance).Data;
      local_38 = 0;
      local_30 = 0;
      if (((pFVar7 <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 <
           pFVar7 + (longlong)(this->Destinations).ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (this->Destinations).ArrayNum;
      if (iVar6 == (this->Destinations).ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar2->AllocatorInstance,&(this->Destinations).ArrayMax);
      }
      (this->Destinations).ArrayNum = iVar6 + 1;
      pFVar7 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(undefined8 *)pFVar7 = 0;
      *(undefined8 *)pFVar7 = local_38;
      local_38 = 0;
      *(undefined4 *)(pFVar7 + 8) = (undefined4)local_30;
      *(undefined4 *)(pFVar7 + 0xc) = local_30._4_4_;
      local_30 = 0;
      iVar8 = iVar8 + 1;
    } while (iVar8 < this->NumVoices);
  }
  return;
}

// RemovePatch @ 144516910

bool __thiscall
Audio::FModulationMatrix::RemovePatch(FModulationMatrix *this,int param_1,FPatch *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  FPatch *pFVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  longlong local_res8;
  FPatch *local_res18;
  FScriptContainerElement *local_res20;
  
  lVar16 = (longlong)param_1;
  local_res18 = param_2;
  if ((this->NumVoices <= param_1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("VoiceId < NumVoices",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ModulationMatrix.cpp"
                         ,0x55,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  bVar6 = ValidatePatch(this,param_1,local_res18);
  if (!bVar6) {
    return false;
  }
  uVar11 = 0;
  uVar15 = (uint)~param_1 >> 0x1f;
  if (0 < (local_res18->Destinations).ArrayNum) {
    local_res8 = 0;
    do {
      pFVar10 = local_res18;
      uVar8 = 0;
      if ((int)uVar11 < (local_res18->Destinations).ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar2 = (pFVar10->Destinations).AllocatorInstance.Data;
      uVar8 = 0;
      if (param_1 < (this->Destinations).ArrayNum) {
        uVar8 = uVar15;
      }
      local_res20 = pFVar2;
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar3 = (this->Destinations).AllocatorInstance.Data;
      uVar8 = *(uint *)(pFVar2 + local_res8);
      uVar9 = 0;
      if ((int)uVar8 < *(int *)(pFVar3 + lVar16 * 0x10 + 8)) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      *(undefined1 *)(*(longlong *)(pFVar3 + lVar16 * 0x10) + 4 + (longlong)(int)uVar8 * 8) = 0;
      uVar8 = 0;
      if (param_1 < (this->Destinations).ArrayNum) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar2 = (this->Destinations).AllocatorInstance.Data;
      uVar8 = *(uint *)(local_res20 + local_res8);
      uVar9 = 0;
      if ((int)uVar8 < *(int *)(pFVar2 + lVar16 * 0x10 + 8)) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      uVar11 = uVar11 + 1;
      local_res8 = local_res8 + 0x20;
      *(undefined4 *)(*(longlong *)(pFVar2 + lVar16 * 0x10) + (longlong)(int)uVar8 * 8) = 0;
    } while ((int)uVar11 < (local_res18->Destinations).ArrayNum);
  }
  uVar11 = 0;
  if (param_1 < (this->Patches).ArrayNum) {
    uVar11 = uVar15;
  }
  if ((uVar11 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pFVar2 = (this->Patches).AllocatorInstance.Data;
  lVar16 = lVar16 * 0x10;
  local_res20 = (FScriptContainerElement *)lVar16;
  if (((*(FPatch ***)(pFVar2 + lVar16) <= &local_res18) &&
      (&local_res18 < *(FPatch ***)(pFVar2 + lVar16) + *(int *)(pFVar2 + lVar16 + 0xc))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  iVar1 = *(int *)(pFVar2 + lVar16 + 8);
  if (iVar1 != 0) {
    plVar4 = *(longlong **)(pFVar2 + lVar16);
    iVar14 = 0;
    bVar6 = (FPatch *)*plVar4 != local_res18;
    lVar16 = 0;
    pFVar10 = local_res18;
    iVar12 = 0;
    do {
      iVar13 = iVar12;
      do {
        lVar16 = lVar16 + 1;
        iVar13 = iVar13 + 1;
        if (iVar1 <= lVar16) break;
      } while (bVar6 == ((FPatch *)plVar4[lVar16] != pFVar10));
      if (bVar6 != false) {
        if (iVar14 != iVar12) {
          memmove(plVar4 + iVar14,plVar4 + iVar12,(longlong)(iVar13 - iVar12) << 3);
          pFVar10 = local_res18;
        }
        iVar14 = iVar14 + (iVar13 - iVar12);
      }
      bVar6 = (bool)(bVar6 ^ 1);
      iVar12 = iVar13;
    } while (lVar16 < iVar1);
    *(int *)(pFVar2 + (longlong)local_res20 + 8) = iVar14;
  }
  return true;
}

// ResetDestinations @ 144517e40

void __thiscall Audio::FModulationMatrix::ResetDestinations(FModulationMatrix *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  
  uVar9 = (ulonglong)param_1;
  if ((this->NumVoices <= param_1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("VoiceId < NumVoices",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ModulationMatrix.cpp"
                         ,0x9c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar8 = (uint)~param_1 >> 0x1f;
  uVar12 = 0;
  lVar14 = 0;
  uVar10 = uVar9;
  do {
    uVar11 = 0;
    if ((int)uVar10 < (this->Patches).ArrayNum) {
      uVar11 = uVar8;
    }
    if ((uVar11 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(int *)((this->Patches).AllocatorInstance.Data + uVar9 * 0x10 + 8) <= (int)uVar12) {
      return;
    }
    uVar11 = 0;
    if ((int)uVar10 < (this->Patches).ArrayNum) {
      uVar11 = uVar8;
    }
    if ((uVar11 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar1 = (this->Patches).AllocatorInstance.Data;
    uVar11 = 0;
    if ((int)uVar12 < *(int *)(pFVar1 + uVar9 * 0x10 + 8)) {
      uVar11 = ~uVar12 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar11 = 0;
    lVar2 = *(longlong *)(lVar14 + *(longlong *)(pFVar1 + uVar9 * 0x10));
    if (0 < *(int *)(lVar2 + 0x20)) {
      lVar13 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar11 < *(int *)(lVar2 + 0x20)) {
          uVar6 = ~uVar11 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar3 = *(longlong *)(lVar2 + 0x18);
        uVar6 = 0;
        if ((int)uVar10 < (this->Destinations).ArrayNum) {
          uVar6 = uVar8;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar6 = *(uint *)(lVar13 + lVar3);
        pFVar1 = (this->Destinations).AllocatorInstance.Data;
        uVar7 = 0;
        if ((int)uVar6 < *(int *)(pFVar1 + uVar9 * 0x10 + 8)) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined1 *)(*(longlong *)(pFVar1 + uVar9 * 0x10) + 4 + (longlong)(int)uVar6 * 8) = 0;
        uVar6 = 0;
        if (param_1 < (this->Destinations).ArrayNum) {
          uVar6 = uVar8;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar6 = *(uint *)(lVar13 + lVar3);
        pFVar1 = (this->Destinations).AllocatorInstance.Data;
        uVar7 = 0;
        if ((int)uVar6 < *(int *)(pFVar1 + uVar9 * 0x10 + 8)) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar11 = uVar11 + 1;
        uVar10 = (ulonglong)(uint)param_1;
        lVar13 = lVar13 + 0x20;
        *(undefined4 *)(*(longlong *)(pFVar1 + uVar9 * 0x10) + (longlong)(int)uVar6 * 8) = 0;
      } while ((int)uVar11 < *(int *)(lVar2 + 0x20));
    }
    uVar12 = uVar12 + 1;
    lVar14 = lVar14 + 8;
  } while( true );
}

// ResetPatchSourceState @ 1445181a0

void __thiscall Audio::FModulationMatrix::ResetPatchSourceState(FModulationMatrix *this)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Sources).ArrayNum;
  pFVar5 = (this->Sources).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->Sources).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TArray<float,TSizedDefaultAllocator<32>_>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    puVar4 = *(undefined4 **)pFVar5;
    iVar3 = *(int *)(pFVar5 + 8);
    puVar1 = puVar4 + iVar3;
    while( true ) {
      if (*(int *)(pFVar5 + 8) != iVar3) {
        `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
        ;
      }
      if (puVar4 == puVar1) break;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    pFVar5 = pFVar5 + 0x10;
  }
  return;
}

// SetSourceValue @ 14451cde0

bool __thiscall
Audio::FModulationMatrix::SetSourceValue
          (FModulationMatrix *this,int param_1,FPatchSource *param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  lVar6 = (longlong)param_1;
  if (this->NumVoices <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("VoiceId < NumVoices",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ModulationMatrix.cpp"
                       ,0x82,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  uVar5 = 0;
  if (param_1 < (this->Sources).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (param_2->Id < *(uint *)((this->Sources).AllocatorInstance.Data + lVar6 * 0x10 + 8)) {
    uVar5 = 0;
    if (param_1 < (this->Sources).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    uVar5 = param_2->Id;
    pFVar1 = (this->Sources).AllocatorInstance.Data;
    uVar7 = 0;
    if ((int)uVar5 < *(int *)(pFVar1 + lVar6 * 0x10 + 8)) {
      uVar7 = ~uVar5 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    *(float *)(*(longlong *)(pFVar1 + lVar6 * 0x10) + (longlong)(int)uVar5 * 4) = param_3;
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

// Update @ 14451f680

void __thiscall Audio::FModulationMatrix::Update(FModulationMatrix *this,int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  uint *puVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  
  lVar16 = (longlong)param_1;
  ResetDestinations(this,param_1);
  uVar13 = 0;
  uVar12 = (uint)~param_1 >> 0x1f;
  lVar15 = 0;
  do {
    uVar11 = 0;
    if (param_1 < (this->Patches).ArrayNum) {
      uVar11 = uVar12;
    }
    if ((uVar11 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (*(int *)((this->Patches).AllocatorInstance.Data + lVar16 * 0x10 + 8) <= (int)uVar13) {
      return;
    }
    uVar11 = 0;
    if (param_1 < (this->Patches).ArrayNum) {
      uVar11 = uVar12;
    }
    if ((uVar11 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar3 = (this->Patches).AllocatorInstance.Data;
    uVar11 = 0;
    if ((int)uVar13 < *(int *)(pFVar3 + lVar16 * 0x10 + 8)) {
      uVar11 = ~uVar13 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    puVar4 = *(uint **)(lVar15 + *(longlong *)(pFVar3 + lVar16 * 0x10));
    if (((char)puVar4[0xe] != '\0') && (param_2 != -1)) {
      uVar11 = 0;
      if (param_1 < (this->Sources).ArrayNum) {
        uVar11 = uVar12;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar11 = *puVar4;
      pFVar3 = (this->Sources).AllocatorInstance.Data;
      uVar9 = 0;
      if ((int)uVar11 < *(int *)(pFVar3 + lVar16 * 0x10 + 8)) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      fVar1 = *(float *)(*(longlong *)(pFVar3 + lVar16 * 0x10) + (longlong)(int)uVar11 * 4);
      uVar11 = 0;
      if (0 < (int)puVar4[8]) {
        lVar14 = 0;
        do {
          uVar9 = 0;
          if ((int)uVar11 < (int)puVar4[8]) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar5 = *(longlong *)(puVar4 + 6);
          if (*(int *)(lVar14 + 4 + lVar5) == param_2) {
            fVar2 = *(float *)(lVar14 + 8 + lVar5);
            uVar9 = 0;
            if (param_1 < (this->Destinations).ArrayNum) {
              uVar9 = uVar12;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar9 = *(uint *)(lVar14 + lVar5);
            pFVar3 = (this->Destinations).AllocatorInstance.Data;
            uVar10 = 0;
            if ((int)uVar9 < *(int *)(pFVar3 + lVar16 * 0x10 + 8)) {
              uVar10 = ~uVar9 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar6 = *(longlong *)(pFVar3 + lVar16 * 0x10);
            *(float *)(lVar6 + (longlong)(int)uVar9 * 8) =
                 fVar1 * fVar2 + *(float *)(lVar6 + (longlong)(int)uVar9 * 8);
            uVar9 = 0;
            if (param_1 < (this->Destinations).ArrayNum) {
              uVar9 = uVar12;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar9 = *(uint *)(lVar14 + lVar5);
            pFVar3 = (this->Destinations).AllocatorInstance.Data;
            uVar10 = 0;
            if ((int)uVar9 < *(int *)(pFVar3 + lVar16 * 0x10 + 8)) {
              uVar10 = ~uVar9 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            *(undefined1 *)(*(longlong *)(pFVar3 + lVar16 * 0x10) + 4 + (longlong)(int)uVar9 * 8) =
                 1;
          }
          uVar11 = uVar11 + 1;
          lVar14 = lVar14 + 0x20;
        } while ((int)uVar11 < (int)puVar4[8]);
      }
    }
    uVar13 = uVar13 + 1;
    lVar15 = lVar15 + 8;
  } while( true );
}

// ValidatePatch @ 1445203e0

bool __thiscall
Audio::FModulationMatrix::ValidatePatch(FModulationMatrix *this,int param_1,FPatch *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  if (param_1 < (this->Sources).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((param_2->Source).Id <
      *(uint *)((this->Sources).AllocatorInstance.Data + (longlong)param_1 * 0x10 + 8)) {
    uVar6 = 0;
    if (0 < (param_2->Destinations).ArrayNum) {
      lVar7 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar6 < (param_2->Destinations).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pFVar1 = (param_2->Destinations).AllocatorInstance.Data;
        uVar5 = 0;
        if (param_1 < (this->Destinations).ArrayNum) {
          uVar5 = (uint)~param_1 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        if (*(uint *)((this->Destinations).AllocatorInstance.Data + (longlong)param_1 * 0x10 + 8) <=
            *(uint *)(pFVar1 + lVar7)) goto LAB_144520536;
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x20;
      } while ((int)uVar6 < (param_2->Destinations).ArrayNum);
    }
    bVar3 = true;
  }
  else {
LAB_144520536:
    bVar3 = false;
  }
  return bVar3;
}

