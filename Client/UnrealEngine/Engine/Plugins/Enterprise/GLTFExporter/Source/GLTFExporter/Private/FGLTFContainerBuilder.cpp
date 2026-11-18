// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 13

// FGLTFContainerBuilder @ 14e5d0170

FGLTFContainerBuilder * __thiscall
FGLTFContainerBuilder::FGLTFContainerBuilder
          (FGLTFContainerBuilder *this,FString *param_1,UGLTFExportOptions *param_2,
          TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *param_3)

{
  FGLTFConvertBuilder::FGLTFConvertBuilder((FGLTFConvertBuilder *)this,param_1,param_2,param_3);
  return this;
}

// GetAllFiles @ 14e5f3c90

/* WARNING: Removing unreachable block (ram,0x00014e5f3dbb) */

void __thiscall
FGLTFContainerBuilder::GetAllFiles
          (FGLTFContainerBuilder *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FString local_38;
  TStringView<wchar_t> local_28;
  undefined8 local_18;
  int local_10;
  
  local_28.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  iVar3 = (param_2->Data).ArrayNum;
  local_18 = *(undefined8 *)this;
  local_28.Size = iVar3 + -1;
  if (iVar3 == 0) {
    local_28.Size = 0;
  }
  local_10 = *(int *)&this->field_0x8 + -1;
  if (*(int *)&this->field_0x8 == 0) {
    local_10 = 0;
  }
  FPaths::CombineInternal(&local_38,&local_28,2);
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
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
  *(FScriptContainerElement **)pFVar4 = local_38.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_38.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_38.Data.ArrayMax;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FGLTFFileBuilder::GetExternalFiles((FGLTFFileBuilder *)this,param_1,param_2);
  return;
}

// GetChunkPaddingLength @ 14e5f5b70

uint __cdecl FGLTFContainerBuilder::GetChunkPaddingLength(ulong64 param_1)

{
  return -(int)param_1 & 3;
}

// WriteAllFiles @ 14e6179e0

/* WARNING: Removing unreachable block (ram,0x00014e617b27) */

bool __thiscall
FGLTFContainerBuilder::WriteAllFiles
          (FGLTFContainerBuilder *this,FString *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FString local_38;
  TStringView<wchar_t> local_28;
  undefined8 local_18;
  int local_10;
  
  bVar2 = WriteAllFiles(this,param_1,param_3);
  bVar3 = false;
  if (bVar2) {
    local_28.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar5 = (param_1->Data).ArrayNum;
    local_18 = *(undefined8 *)this;
    local_28.Size = iVar5 + -1;
    if (iVar5 == 0) {
      local_28.Size = 0;
    }
    local_10 = *(int *)&this->field_0x8 + -1;
    if (*(int *)&this->field_0x8 == 0) {
      local_10 = 0;
    }
    FPaths::CombineInternal(&local_38,&local_28,2);
    pFVar6 = (param_2->AllocatorInstance).Data;
    if (((pFVar6 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar6 + (longlong)param_2->ArrayMax * 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    pFVar6 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar6 = 0;
    *(FScriptContainerElement **)pFVar6 = local_38.Data.AllocatorInstance.Data;
    *(int *)(pFVar6 + 8) = local_38.Data.ArrayNum;
    *(int *)(pFVar6 + 0xc) = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FGLTFFileBuilder::GetExternalFiles((FGLTFFileBuilder *)this,param_2,param_1);
    bVar3 = true;
  }
  return bVar3;
}

// WriteAllFiles @ 14e617b60

bool __thiscall
FGLTFContainerBuilder::WriteAllFiles(FGLTFContainerBuilder *this,FString *param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  FString local_e8;
  TStringView<wchar_t> local_d8;
  undefined8 local_c8;
  int local_c0;
  FArchiveState local_b8;
  undefined8 local_28;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> TStack_20;
  
  local_b8._padding_ = 0;
  local_b8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_b8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_b8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_b8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_b8._40_8_ = 0;
  local_b8.ArSerializingDefaults = 0;
  local_b8.ArPortFlags = 0;
  local_b8.ArMaxSerializeSize = 0;
  local_b8.ArUEVer.FileVersionUE4 = 0;
  local_b8.ArUEVer.FileVersionUE5 = 0;
  local_b8.ArLicenseeUEVer = 0;
  local_b8.ArEngineVer.Major = 0;
  local_b8.ArEngineVer.Minor = 0;
  local_b8.ArEngineVer.Patch = 0;
  local_b8.ArEngineVer._6_2_ = 0;
  local_b8.ArEngineVer.Changelist = 0;
  local_b8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_b8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_b8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_b8.SerializedProperty = (FProperty *)0x0;
  local_b8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_b8.bCustomVersionsAreReset = false;
  local_b8._129_7_ = 0;
  local_b8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_b8);
  local_28 = 0;
  TStack_20.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_20.ArrayNum = 0;
  TStack_20.ArrayMax = 0;
  local_b8._padding_ = (longlong)&___7FGLTFMemoryArchive__6B_;
  FArchiveState::SetIsSaving(&local_b8,true);
  FGLTFTaskBuilder::ProcessSlowTasks((FGLTFTaskBuilder *)this,(FFeedbackContext *)0x0);
  if (this->field_0x10 == '\0') {
    bVar2 = FGLTFJsonBuilder::WriteJsonArchive((FGLTFJsonBuilder *)this,(FArchive *)&local_b8);
  }
  else {
    bVar2 = WriteGlbArchive(this,(FArchive *)&local_b8);
  }
  if (bVar2 == false) {
    bVar2 = false;
  }
  else {
    local_d8.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar1 = (param_1->Data).ArrayNum;
    local_c8 = *(undefined8 *)this;
    local_d8.Size = iVar1 + -1;
    if (iVar1 == 0) {
      local_d8.Size = 0;
    }
    local_c0 = *(int *)&this->field_0x8 + -1;
    if (*(int *)&this->field_0x8 == 0) {
      local_c0 = 0;
    }
    FPaths::CombineInternal(&local_e8,&local_d8,2);
    bVar2 = FGLTFFileBuilder::SaveToFile((FGLTFFileBuilder *)this,&local_e8,&TStack_20,param_2);
    if (bVar2) {
      bVar2 = FGLTFFileBuilder::WriteExternalFiles((FGLTFFileBuilder *)this,param_1,param_2);
    }
    else {
      bVar2 = false;
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  if (TStack_20.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_20.AllocatorInstance.Data);
  }
  FArchive::~FArchive((FArchive *)&local_b8);
  return bVar2;
}

// WriteChunk @ 14e618fb0

void __cdecl
FGLTFContainerBuilder::WriteChunk
          (FArchive *param_1,uint param_2,TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_3
          ,uchar param_4)

{
  int iVar1;
  uint uVar2;
  uint local_res20 [2];
  
  iVar1 = (int)param_3->ArrayNum;
  uVar2 = -iVar1 & 3;
  local_res20[0] = iVar1 + uVar2;
  (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_res20,0xffffffff);
  local_res20[0] = param_2;
  (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_res20,0xffffffff);
  (**(code **)(*(longlong *)param_1 + 0x188))
            (param_1,(param_3->AllocatorInstance).Data,param_3->ArrayNum);
  local_res20[0] = CONCAT31(local_res20[0]._1_3_,param_4);
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,1);
  }
  return;
}

// WriteData @ 14e619070

void __cdecl
FGLTFContainerBuilder::WriteData
          (FArchive *param_1,TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014e61907a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))
            (param_1,(param_2->AllocatorInstance).Data,param_2->ArrayNum);
  return;
}

// WriteFill @ 14e6193e0

void __cdecl FGLTFContainerBuilder::WriteFill(FArchive *param_1,uint param_2,uchar param_3)

{
  uchar local_res18 [16];
  
  local_res18[0] = param_3;
  for (; param_2 != 0; param_2 = param_2 - 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,1);
  }
  return;
}

// WriteGlb @ 14e6194b0

bool __thiscall
FGLTFContainerBuilder::WriteGlb
          (FGLTFContainerBuilder *this,FArchive *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_2,
          TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_3)

{
  bool bVar1;
  ulonglong uVar2;
  undefined4 local_res18 [2];
  FString local_28;
  
  uVar2 = param_2->ArrayNum + 0x14 + (ulonglong)(-(int)param_2->ArrayNum & 3);
  if (param_3 != (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)0x0) {
    uVar2 = uVar2 + 8 + (ulonglong)(-(int)param_3->ArrayNum & 3) + param_3->ArrayNum;
  }
  if (uVar2 < 0x100000000) {
    local_res18[0] = 0x46546c67;
    (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_res18,0xffffffff);
    local_res18[0] = 2;
    (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_res18,0xffffffff);
    local_res18[0] = (undefined4)uVar2;
    (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_res18,0xffffffff);
    WriteChunk(param_1,0x4e4f534a,param_2,' ');
    if (param_3 != (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)0x0) {
      WriteChunk(param_1,0x4e4942,param_3,'\0');
    }
    bVar1 = true;
  }
  else {
    ::FString::PrintfImpl
              (&local_28,
               L"Final file size (%lld) exceedes maximum supported size (%d) in glTF binary container format (.glb)"
              );
    FGLTFLogBuilder::LogError((FGLTFLogBuilder *)this,&local_28);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    bVar1 = false;
  }
  return bVar1;
}

// WriteGlbArchive @ 14e6195f0

bool __thiscall
FGLTFContainerBuilder::WriteGlbArchive(FGLTFContainerBuilder *this,FArchive *param_1)

{
  bool bVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *pTVar2;
  ulonglong uVar3;
  undefined4 local_res18 [2];
  FString local_d8;
  FArchiveState local_c8;
  undefined8 local_38;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> TStack_30;
  
  local_c8._padding_ = 0;
  local_c8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_c8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_c8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_c8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_c8._40_8_ = 0;
  local_c8.ArSerializingDefaults = 0;
  local_c8.ArPortFlags = 0;
  local_c8.ArMaxSerializeSize = 0;
  local_c8.ArUEVer.FileVersionUE4 = 0;
  local_c8.ArUEVer.FileVersionUE5 = 0;
  local_c8.ArLicenseeUEVer = 0;
  local_c8.ArEngineVer.Major = 0;
  local_c8.ArEngineVer.Minor = 0;
  local_c8.ArEngineVer.Patch = 0;
  local_c8.ArEngineVer._6_2_ = 0;
  local_c8.ArEngineVer.Changelist = 0;
  local_c8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_c8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_c8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_c8.SerializedProperty = (FProperty *)0x0;
  local_c8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_c8.bCustomVersionsAreReset = false;
  local_c8._129_7_ = 0;
  local_c8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_c8);
  local_38 = 0;
  TStack_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_30.ArrayNum = 0;
  TStack_30.ArrayMax = 0;
  local_c8._padding_ = (longlong)&___7FGLTFMemoryArchive__6B_;
  FArchiveState::SetIsSaving(&local_c8,true);
  bVar1 = FGLTFJsonBuilder::WriteJsonArchive((FGLTFJsonBuilder *)this,(FArchive *)&local_c8);
  if (bVar1) {
    pTVar2 = (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)
             (*(longlong *)&this->field_0x3b8 + 0x98);
    if (*(longlong *)&this->field_0x3b8 == 0) {
      pTVar2 = (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)0x0;
    }
    uVar3 = TStack_30.ArrayNum + 0x14 + (ulonglong)(-(int)TStack_30.ArrayNum & 3);
    if (pTVar2 != (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)0x0) {
      uVar3 = uVar3 + 8 + (ulonglong)(-(int)pTVar2->ArrayNum & 3) + pTVar2->ArrayNum;
    }
    if (uVar3 < 0x100000000) {
      local_res18[0] = 0x46546c67;
      (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_res18,0xffffffff);
      local_res18[0] = 2;
      (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_res18,0xffffffff);
      local_res18[0] = (undefined4)uVar3;
      (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_res18,0xffffffff);
      WriteChunk(param_1,0x4e4f534a,&TStack_30,' ');
      if (pTVar2 != (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)0x0) {
        WriteChunk(param_1,0x4e4942,pTVar2,'\0');
      }
      bVar1 = true;
    }
    else {
      ::FString::PrintfImpl
                (&local_d8,
                 L"Final file size (%lld) exceedes maximum supported size (%d) in glTF binary container format (.glb)"
                );
      FGLTFLogBuilder::LogError((FGLTFLogBuilder *)this,&local_d8);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      bVar1 = false;
    }
  }
  else {
    bVar1 = false;
  }
  if (TStack_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_30.AllocatorInstance.Data);
  }
  FArchive::~FArchive((FArchive *)&local_c8);
  return bVar1;
}

// WriteHeader @ 14e6197d0

void __cdecl FGLTFContainerBuilder::WriteHeader(FArchive *param_1,uint param_2)

{
  uint local_res10 [6];
  
  local_res10[0] = 0x46546c67;
  (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_res10,0xffffffff);
  local_res10[0] = 2;
  (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_res10,0xffffffff);
  local_res10[0] = param_2;
  (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_res10,0xffffffff);
  return;
}

// WriteInt @ 14e619a30

void __cdecl FGLTFContainerBuilder::WriteInt(FArchive *param_1,uint param_2)

{
  uint local_res10 [6];
  
  local_res10[0] = param_2;
  (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_res10,0xffffffff);
  return;
}

// WriteInternalArchive @ 14e619a60

bool __thiscall
FGLTFContainerBuilder::WriteInternalArchive(FGLTFContainerBuilder *this,FArchive *param_1)

{
  bool bVar1;
  
  FGLTFTaskBuilder::ProcessSlowTasks((FGLTFTaskBuilder *)this,(FFeedbackContext *)0x0);
  if (this->field_0x10 != '\0') {
    bVar1 = WriteGlbArchive(this,param_1);
    return bVar1;
  }
  bVar1 = FGLTFJsonBuilder::WriteJsonArchive((FGLTFJsonBuilder *)this,param_1);
  return bVar1;
}

