// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// StaticStruct @ 148677f60

UScriptStruct * __cdecl FMorphTargetImportedSourceFileInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMorphTargetImportedSourceFileInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FMorphTargetImportedSourceFileInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMorphTargetImportedSourceFileInfo,
                         (UObject *)pUVar1,L"MorphTargetImportedSourceFileInfo");
  }
  return Z_Registration_Info_UScriptStruct_FMorphTargetImportedSourceFileInfo.OuterSingleton;
}

// GetSourceFilename @ 1486c8500

FString * __thiscall
FMorphTargetImportedSourceFileInfo::GetSourceFilename(FMorphTargetImportedSourceFileInfo *this)

{
  ForAnyElementType FVar1;
  bool bVar2;
  FString *pFVar3;
  int iVar4;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FMorphTargetImportedSourceFileInfo::GetSourceFilename'::__l2::
           _dynamic_atexit_destructor_for__EmptyString__);
    _Init_thread_footer(&::_TSS0);
  }
  iVar4 = GeneratedByEnginePrefix.Data.ArrayNum + -1;
  FVar1.Data = GeneratedByEnginePrefix.Data.AllocatorInstance.Data;
  if (GeneratedByEnginePrefix.Data.ArrayNum == 0) {
    iVar4 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  bVar2 = ::FString::StartsWith(&this->SourceFilename,(wchar_t *)FVar1.Data,iVar4,IgnoreCase);
  pFVar3 = &::EmptyString;
  if (!bVar2) {
    pFVar3 = &this->SourceFilename;
  }
  return &((FMorphTargetImportedSourceFileInfo *)pFVar3)->SourceFilename;
}

// IsGeneratedByEngine @ 1486d12c0

bool __thiscall
FMorphTargetImportedSourceFileInfo::IsGeneratedByEngine(FMorphTargetImportedSourceFileInfo *this)

{
  bool bVar1;
  wchar_t *pwVar2;
  int iVar3;
  
  iVar3 = GeneratedByEnginePrefix.Data.ArrayNum + -1;
  if (GeneratedByEnginePrefix.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  pwVar2 = L"";
  if (GeneratedByEnginePrefix.Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)GeneratedByEnginePrefix.Data.AllocatorInstance.Data;
  }
  bVar1 = ::FString::StartsWith(&this->SourceFilename,pwVar2,iVar3,IgnoreCase);
  return bVar1;
}

// SetGeneratedByEngine @ 1486ee7b0

void __thiscall
FMorphTargetImportedSourceFileInfo::SetGeneratedByEngine
          (FMorphTargetImportedSourceFileInfo *this,bool param_1)

{
  ForAnyElementType _Src;
  FGuid *this_00;
  longlong lVar1;
  int iVar2;
  FString local_38;
  FString local_28;
  FGuid local_18;
  
  _Src.Data = GeneratedByEnginePrefix.Data.AllocatorInstance.Data;
  lVar1 = (longlong)GeneratedByEnginePrefix.Data.ArrayNum;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = GeneratedByEnginePrefix.Data.ArrayNum;
  if (GeneratedByEnginePrefix.Data.ArrayNum == 0) {
    local_38.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,GeneratedByEnginePrefix.Data.ArrayNum,0,(ForAnyElementType *)&local_38,
               GeneratedByEnginePrefix.Data.ArrayNum,&local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,_Src.Data,lVar1 * 2);
  }
  this_00 = FGuid::NewGuid(&local_18);
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FGuid::AppendString(this_00,&local_28,Base36Encoded);
  iVar2 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(&local_38,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar2);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  SetSourceFilename(this,&local_38);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// SetSourceFilename @ 1486efcb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMorphTargetImportedSourceFileInfo::SetSourceFilename
          (FMorphTargetImportedSourceFileInfo *this,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  ForAnyElementType _Src_00;
  bool bVar2;
  IFileManager *pIVar3;
  FDateTime *this_00;
  FString *pFVar4;
  longlong lVar5;
  int iVar6;
  wchar_t *pwVar7;
  undefined1 auStackY_158 [32];
  FString local_118;
  ForAnyElementType local_108;
  int local_100;
  int local_fc;
  undefined1 local_f8 [8];
  FString local_f0;
  FSHA1 local_d8;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_118.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar5 = (longlong)local_118.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_118.Data.ArrayNum == 0) {
    local_118.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_118.Data.ArrayNum,0,(ForAnyElementType *)&local_118,local_118.Data.ArrayNum
               ,&local_118.Data.ArrayMax);
    memcpy(local_118.Data.AllocatorInstance.Data,_Src,lVar5 * 2);
  }
  bVar2 = FPaths::FileExists(param_1);
  if (bVar2) {
    pIVar3 = IFileManager::Get();
    if ((param_1->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    this_00 = (FDateTime *)(**(code **)((longlong)*pIVar3 + 0xd8))(pIVar3,local_f8,pwVar7);
    pFVar4 = FDateTime::ToString(this_00,&local_f0);
    iVar1 = (pFVar4->Data).ArrayNum;
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    ::FString::AppendChars(&local_118,(wchar_t *)(pFVar4->Data).AllocatorInstance.Data,iVar6);
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
  }
  _Src_00.Data = local_118.Data.AllocatorInstance.Data;
  lVar5 = (longlong)local_118.Data.ArrayNum;
  local_108.Data = (FScriptContainerElement *)0x0;
  local_100 = local_118.Data.ArrayNum;
  if (local_118.Data.ArrayNum == 0) {
    local_fc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_118.Data.ArrayNum,0,&local_108,local_118.Data.ArrayNum,&local_fc);
    memcpy(local_108.Data,_Src_00.Data,lVar5 * 2);
  }
  FSHA1::FSHA1(&local_d8);
  FSHA1::Update(&local_d8,(uchar *)local_108.Data,(ulonglong)(uint)(local_100 * 2));
  FSHA1::Final(&local_d8);
  FSHA1::GetHash(&local_d8,(uchar *)&local_48);
  (this->DerivedDataHash).A = local_48 ^ local_38;
  (this->DerivedDataHash).B = local_44;
  (this->DerivedDataHash).C = local_40;
  (this->DerivedDataHash).D = local_3c;
  ::FString::operator=(&this->SourceFilename,param_1);
  FSHA1::~FSHA1(&local_d8);
  if (local_108.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  return;
}

