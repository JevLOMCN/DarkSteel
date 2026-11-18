// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 4

// GetContent @ 1433203a0

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
BuildPatchServices::FFakeHttpResponse::GetContent(FFakeHttpResponse *this)

{
  return &this->Data;
}

// GetContentAsString @ 1433204d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
BuildPatchServices::FFakeHttpResponse::GetContentAsString
          (FFakeHttpResponse *this,FString *__return_storage_ptr__)

{
  uint uVar1;
  void *_Src;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  undefined8 *puVar5;
  FString *pFVar6;
  size_t sVar7;
  uint uVar8;
  undefined1 auStackY_1b8 [32];
  FScriptContainerElement local_168 [8];
  ForAnyElementType local_160;
  int local_158;
  int local_154 [3];
  FScriptContainerElement local_148 [256];
  ForAnyElementType local_48;
  FScriptContainerElement *local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  puVar5 = (undefined8 *)(**(code **)(this->_padding_ + 0x48))();
  local_160.Data = (FScriptContainerElement *)0x0;
  local_158 = *(int *)(puVar5 + 1);
  sVar7 = (size_t)local_158;
  _Src = (void *)*puVar5;
  if (local_158 == 0) {
    local_154[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_158,0,&local_160,local_158,local_154);
    memcpy(local_160.Data,_Src,sVar7);
  }
  local_168[0] = (FScriptContainerElement)0x0;
  if (((local_160.Data <= local_168) && (local_168 < local_160.Data + local_154[0])) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar2)();
    return pFVar6;
  }
  if (local_158 == local_154[0]) {
    local_158 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&local_160,local_154);
  }
  FVar3.Data = local_160.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_160.Data[local_158] = local_168[0];
  if (local_160.Data == (FScriptContainerElement *)0x0) {
    local_40 = (FScriptContainerElement *)0x0;
    local_38 = 0;
    local_158 = local_158 + 1;
    goto LAB_14332069c;
  }
  local_158 = local_158 + 1;
  sVar7 = strlen((char *)local_160.Data);
  local_38 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)FVar3.Data,(int)sVar7);
  uVar1 = local_38 + 1;
  uVar8 = uVar1;
  if (uVar1 < 0x81) {
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      uVar8 = 0;
      goto LAB_143320659;
    }
  }
  else {
LAB_143320659:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar8,2);
  }
  local_40 = local_148;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    local_40 = local_48.Data;
  }
  UE::Core::Private::Convert((wchar_t *)local_40,uVar1,(uchar *)FVar3.Data,(int)sVar7 + 1);
LAB_14332069c:
  ::FString::FString(__return_storage_ptr__,(wchar_t *)local_40);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  if (local_160.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data);
  }
  return __return_storage_ptr__;
}

// GetContentLength @ 143320780

ulong64 __thiscall BuildPatchServices::FFakeHttpResponse::GetContentLength(FFakeHttpResponse *this)

{
  return (longlong)(this->Data).ArrayNum;
}

// GetResponseCode @ 143321060

int __thiscall BuildPatchServices::FFakeHttpResponse::GetResponseCode(FFakeHttpResponse *this)

{
  return this->Code;
}

