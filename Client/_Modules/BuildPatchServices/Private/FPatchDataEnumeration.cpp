// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 6

// FPatchDataEnumeration @ 143224cd0

FPatchDataEnumeration * __thiscall
BuildPatchServices::FPatchDataEnumeration::FPatchDataEnumeration
          (FPatchDataEnumeration *this,FPatchDataEnumerationConfiguration *param_1)

{
  IFileSystem *pIVar1;
  IFileSystem IVar2;
  
  this->_padding_ = (longlong)&___7FPatchDataEnumeration_BuildPatchServices__6B_;
  ::FString::FString(&(this->Configuration).InputFile,&param_1->InputFile);
  ::FString::FString(&(this->Configuration).OutputFile,&param_1->OutputFile);
  (this->Configuration).bIncludeSizes = param_1->bIncludeSizes;
  FPaths::GetPath(&this->CloudDir,&(this->Configuration).InputFile);
  pIVar1 = ::operator_new(0x18);
  if (pIVar1 != (IFileSystem *)0x0) {
    *pIVar1 = (IFileSystem)&___7FFileSystem_BuildPatchServices__6B_;
    IVar2 = (IFileSystem)IFileManager::Get();
    pIVar1[1] = IVar2;
    IVar2 = (IFileSystem)IPlatformFile::GetPlatformPhysical();
    pIVar1[2] = IVar2;
    (this->FileSystem).Ptr = pIVar1;
    return this;
  }
  (this->FileSystem).Ptr = (IFileSystem *)0x0;
  return this;
}

// ~FPatchDataEnumeration @ 143228c80

void __thiscall
BuildPatchServices::FPatchDataEnumeration::~FPatchDataEnumeration(FPatchDataEnumeration *this)

{
  IFileSystem *pIVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FPatchDataEnumeration_BuildPatchServices__6B_;
  pIVar1 = (this->FileSystem).Ptr;
  if (pIVar1 != (IFileSystem *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  pFVar2 = (this->CloudDir).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Configuration).OutputFile.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Configuration).InputFile.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IPatchDataEnumeration_BuildPatchServices__6B_;
  return;
}

// EnumerateChunkDbData @ 14324b1e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FPatchDataEnumeration::EnumerateChunkDbData
          (FPatchDataEnumeration *this,FArchive *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  ForAnyElementType FVar8;
  int iVar9;
  FGuid *pFVar10;
  ForAnyElementType this_00;
  bool bVar11;
  undefined1 auStack_188 [32];
  FScriptContainerElement *local_168;
  FScriptContainerElement *local_160;
  longlong local_158;
  longlong local_150;
  undefined8 local_148;
  undefined1 local_138 [8];
  FString local_130;
  uint local_120;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FChunkDatabaseHeader local_d8;
  FPatchDataEnumeration *local_b8;
  FString local_b0;
  FChunkHeader local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_188;
  bVar11 = false;
  local_d8.Version = 1;
  local_d8.HeaderSize = 0x18;
  local_d8.Contents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Contents.ArrayNum = 0;
  local_d8.Contents.ArrayMax = 0;
  local_b8 = this;
  BuildPatchServices::operator<<(param_1,&local_d8);
  if ((param_1->field_0x29 & 2) == 0) {
    bVar11 = true;
    if (5 < (byte)LogDataEnumeration._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogDataEnumeration);
    }
    uVar5 = (ulonglong)local_d8.Contents.ArrayNum;
    pFVar10 = (FGuid *)(local_d8.Contents.AllocatorInstance.Data + uVar5 * 0x20);
    local_120 = local_d8.Contents.ArrayNum;
    uVar6 = uVar5;
    this_00.Data = local_d8.Contents.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar5 != (int)uVar6) {
        local_138[0] = 0;
        `TCheckedPointerIterator<BuildPatchServices::FChunkLocation,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_138);
      }
      if ((FGuid *)this_00.Data == pFVar10) goto LAB_14324b601;
      uVar1._0_4_ = ((FGuid *)((longlong)this_00.Data + 0x10))->A;
      uVar1._4_4_ = ((FGuid *)((longlong)this_00.Data + 0x10))->B;
      local_98.SHAHash.Hash[0x10] = '\0';
      local_98.SHAHash.Hash[0x11] = '\0';
      local_98.SHAHash.Hash[0x12] = '\0';
      local_98.SHAHash.Hash[0x13] = '\0';
      local_98.Version = 3;
      local_98.HeaderSize = 0x42;
      local_98.Guid.A = 0;
      local_98.Guid.B = 0;
      local_98.Guid.C = 0;
      local_98.Guid.D = 0;
      local_98.DataSizeCompressed = 0;
      local_98.DataSizeUncompressed = 0x100000;
      local_98.StoredAs = None;
      local_98.HashType = RollingPoly64;
      local_98.RollingHash = 0;
      local_98.SHAHash.Hash[0] = '\0';
      local_98.SHAHash.Hash[1] = '\0';
      local_98.SHAHash.Hash[2] = '\0';
      local_98.SHAHash.Hash[3] = '\0';
      local_98.SHAHash.Hash[4] = '\0';
      local_98.SHAHash.Hash[5] = '\0';
      local_98.SHAHash.Hash[6] = '\0';
      local_98.SHAHash.Hash[7] = '\0';
      local_98.SHAHash.Hash[8] = '\0';
      local_98.SHAHash.Hash[9] = '\0';
      local_98.SHAHash.Hash[10] = '\0';
      local_98.SHAHash.Hash[0xb] = '\0';
      local_98.SHAHash.Hash[0xc] = '\0';
      local_98.SHAHash.Hash[0xd] = '\0';
      local_98.SHAHash.Hash[0xe] = '\0';
      local_98.SHAHash.Hash[0xf] = '\0';
      (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,uVar1);
      BuildPatchServices::operator<<(param_1,&local_98);
      local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.Data.ArrayNum = 0;
      local_f8.Data.ArrayMax = 0;
      BytesToHex(local_98.SHAHash.Hash,0x14,&local_f8);
      local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_f8.Data.ArrayNum != 0) {
        FVar8.Data = local_f8.Data.AllocatorInstance.Data;
      }
      local_108.Data.ArrayNum = 0;
      local_108.Data.ArrayMax = 0;
      BytesToHex((uchar *)&local_98.RollingHash,8,&local_108);
      local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.Data.ArrayNum = 0;
      local_118.Data.ArrayMax = 0;
      FGuid::AppendString((FGuid *)this_00.Data,&local_118,Digits);
      local_168 = FVar8.Data;
      ::FString::PrintfImpl(&local_130,L"%s\t%s\t%s");
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      if ((local_b8->Configuration).bIncludeSizes != false) {
        ::FString::PrintfImpl(&local_b0,L"\t%u");
        iVar9 = local_b0.Data.ArrayNum + -1;
        if (local_b0.Data.ArrayNum == 0) {
          iVar9 = 0;
        }
        ::FString::AppendChars(&local_130,(wchar_t *)local_b0.Data.AllocatorInstance.Data,iVar9);
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
      }
      if (5 < (byte)LogDataEnumeration._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogDataEnumeration);
      }
      pFVar7 = (param_2->AllocatorInstance).Data;
      if ((pFVar7 <= (FScriptContainerElement *)&local_130) &&
         ((FScriptContainerElement *)&local_130 < pFVar7 + (longlong)param_2->ArrayMax * 0x10)) {
        local_150 = (longlong)param_2->ArrayNum;
        local_148 = 0x10;
        local_168 = (FScriptContainerElement *)&local_130;
        local_160 = pFVar7;
        local_158 = (longlong)param_2->ArrayMax;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      iVar9 = param_2->ArrayNum;
      if (iVar9 == param_2->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar9 + 1;
      pFVar7 = (param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
      *(undefined8 *)pFVar7 = 0;
      *(FScriptContainerElement **)pFVar7 = local_130.Data.AllocatorInstance.Data;
      local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar7 + 8) = local_130.Data.ArrayNum;
      *(int *)(pFVar7 + 0xc) = local_130.Data.ArrayMax;
      local_130.Data.ArrayNum = 0;
      local_130.Data.ArrayMax = 0;
      if (((local_98.Guid.D == 0 && local_98.Guid.C == 0) && local_98.Guid.B == 0) &&
          local_98.Guid.A == 0) {
        if (1 < (byte)LogDataEnumeration._0_1_) {
          local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_e8.Data.ArrayNum = 0;
          local_e8.Data.ArrayMax = 0;
          FGuid::AppendString((FGuid *)this_00.Data,&local_e8,Digits);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDataEnumeration);
          if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
        }
        bVar11 = false;
      }
      if ((param_1->field_0x29 & 2) != 0) break;
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      uVar5 = local_d8.Contents._8_8_ & 0xffffffff;
      this_00.Data = this_00.Data + 0x20;
      uVar6 = (ulonglong)local_120;
    }
    if (1 < (byte)LogDataEnumeration._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDataEnumeration);
    }
    bVar11 = false;
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
  }
LAB_14324b601:
  if ((FGuid *)local_d8.Contents.AllocatorInstance.Data != (FGuid *)0x0) {
    FMemory::Free(local_d8.Contents.AllocatorInstance.Data);
  }
  return bVar11;
}

// Run @ 143264c10

bool __thiscall
BuildPatchServices::FPatchDataEnumeration::Run
          (FPatchDataEnumeration *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  IFileSystem *pIVar1;
  FArchive *pFVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  bool bVar5;
  FArchive *local_res8;
  FChunkDatabaseHeader local_38;
  
  bVar5 = false;
  pIVar1 = (this->FileSystem).Ptr;
  if ((this->Configuration).InputFile.Data.ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(this->Configuration).InputFile.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar1 + 0x48))(pIVar1,&local_res8,pwVar4,0);
  pFVar2 = local_res8;
  if (local_res8 != (FArchive *)0x0) {
    uVar3 = (**(code **)(*(longlong *)local_res8 + 0x28))(local_res8);
    local_38.Version = 1;
    local_38.HeaderSize = 0x18;
    local_38.Contents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Contents.ArrayNum = 0;
    local_38.Contents.ArrayMax = 0;
    BuildPatchServices::operator<<(pFVar2,&local_38);
    bVar5 = local_38.Version == 0;
    (**(code **)(*(longlong *)pFVar2 + 0x1b8))(pFVar2,uVar3);
    if (local_38.Contents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Contents.AllocatorInstance.Data);
    }
    if (bVar5) {
      bVar5 = EnumerateManifestData(this,pFVar2,param_1);
    }
    else {
      bVar5 = EnumerateChunkDbData(this,pFVar2,param_1);
    }
  }
  if (local_res8 != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)local_res8)(local_res8,1);
  }
  return bVar5;
}

// Run @ 143264d20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall BuildPatchServices::FPatchDataEnumeration::Run(FPatchDataEnumeration *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulonglong uVar5;
  IFileManager *pIVar6;
  wchar_t *pwVar7;
  FString *pFVar8;
  FString *pFVar9;
  int iVar10;
  undefined1 local_res8 [8];
  FString *local_48;
  ulonglong local_40;
  FString local_38;
  TStringView<wchar_t> local_28;
  
  local_48 = (FString *)0x0;
  local_40 = 0;
  cVar3 = (**(code **)(this->_padding_ + 8))(this,&local_48);
  bVar4 = false;
  if (cVar3 != '\0') {
    iVar2 = (int)local_40;
    uVar5 = (ulonglong)(int)local_40;
    bVar4 = true;
    pFVar9 = local_48 + uVar5;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    pFVar8 = local_48;
    while( true ) {
      if ((int)uVar5 != iVar2) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar8 == pFVar9) break;
      if (bVar4) {
        bVar4 = false;
      }
      else {
        ::FString::AppendChars(&local_38,L"\r\n",2);
      }
      iVar1 = (pFVar8->Data).ArrayNum;
      iVar10 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar10 = 0;
      }
      ::FString::AppendChars(&local_38,(wchar_t *)(pFVar8->Data).AllocatorInstance.Data,iVar10);
      uVar5 = local_40 & 0xffffffff;
      pFVar8 = pFVar8 + 1;
    }
    pIVar6 = IFileManager::Get();
    if ((this->Configuration).OutputFile.Data.ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(this->Configuration).OutputFile.Data.AllocatorInstance.Data;
    }
    local_28.Size = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      local_28.Size = 0;
    }
    local_28.DataPtr = (wchar_t *)local_38.Data.AllocatorInstance.Data;
    bVar4 = FFileHelper::SaveStringToFile(&local_28,pwVar7,AutoDetect,pIVar6,0);
    if (bVar4) {
      if (4 < (byte)LogDataEnumeration._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDataEnumeration);
      }
      bVar4 = true;
    }
    else {
      if (1 < (byte)LogDataEnumeration._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDataEnumeration);
      }
      bVar4 = false;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<FString,int>(local_48,(int)local_40);
  if (local_48 != (FString *)0x0) {
    FMemory::Free(local_48);
  }
  return bVar4;
}

// RunInternal @ 143264f00

bool __thiscall
BuildPatchServices::FPatchDataEnumeration::RunInternal
          (FPatchDataEnumeration *this,FArchive *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  FChunkDatabaseHeader local_28;
  
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
  local_28.Version = 1;
  local_28.HeaderSize = 0x18;
  local_28.Contents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Contents.ArrayNum = 0;
  local_28.Contents.ArrayMax = 0;
  BuildPatchServices::operator<<(param_1,&local_28);
  bVar2 = local_28.Version == 0;
  (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,uVar1);
  if (local_28.Contents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Contents.AllocatorInstance.Data);
  }
  if (bVar2) {
    bVar2 = EnumerateManifestData(this,param_1,param_2);
  }
  else {
    bVar2 = EnumerateChunkDbData(this,param_1,param_2);
  }
  return bVar2;
}

