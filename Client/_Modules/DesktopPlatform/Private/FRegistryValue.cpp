// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DesktopPlatform
// Functions: 6

// FRegistryValue @ 142d1bff0

FRegistryValue * __thiscall FRegistryValue::FRegistryValue(FRegistryValue *this)

{
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).ArrayNum = 0;
  (this->Data).ArrayMax = 0;
  this->Type = 0;
  return this;
}

// IsUpToDate @ 142d2a0a0

bool __thiscall FRegistryValue::IsUpToDate(FRegistryValue *this,HKEY__ *param_1,FString *param_2)

{
  bool bVar1;
  int iVar2;
  FRegistryValue local_28;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_28.Type = 0;
  bVar1 = Read(&local_28,param_1,param_2);
  if ((bVar1) && (local_28.Type == this->Type)) {
    if (local_28.Data.ArrayNum == (this->Data).ArrayNum) {
      if (local_28.Data.ArrayNum != 0) {
        iVar2 = memcmp(local_28.Data.AllocatorInstance.Data,(this->Data).AllocatorInstance.Data,
                       (longlong)local_28.Data.ArrayNum);
        if (iVar2 != 0) goto LAB_142d2a0f6;
      }
      bVar1 = true;
      goto LAB_142d2a0f8;
    }
  }
LAB_142d2a0f6:
  bVar1 = false;
LAB_142d2a0f8:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// Read @ 142d2ded0

bool __thiscall FRegistryValue::Read(FRegistryValue *this,HKEY__ *param_1,FString *param_2)

{
  int *piVar1;
  code *pcVar2;
  DWORD DVar3;
  bool bVar4;
  undefined1 uVar5;
  LSTATUS LVar6;
  int iVar7;
  FScriptContainerElement *_Dst;
  wchar_t *lpValueName;
  int iVar8;
  longlong lVar9;
  wchar_t *lpValueName_00;
  uint uVar10;
  DWORD local_res18 [2];
  uint local_res20 [2];
  
  lpValueName_00 = L"";
  local_res18[0] = 0;
  if ((param_2->Data).ArrayNum == 0) {
    lpValueName = L"";
  }
  else {
    lpValueName = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  LVar6 = RegQueryValueExW((HKEY)param_1,lpValueName,(LPDWORD)0x0,local_res20,(LPBYTE)0x0,
                           local_res18);
  DVar3 = local_res18[0];
  if (LVar6 == 0) {
    piVar1 = &(this->Data).ArrayNum;
    lVar9 = (longlong)(int)local_res18[0];
    this->Type = local_res20[0];
    iVar8 = *piVar1;
    if (iVar8 < (int)local_res18[0]) {
      iVar8 = local_res18[0] - iVar8;
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,iVar8,&(this->Data).AllocatorInstance,piVar1,&(this->Data).ArrayMax);
      memset((this->Data).AllocatorInstance.Data + iVar7,0,(longlong)iVar8);
    }
    else {
      if ((int)local_res18[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res18[0]);
      }
      if ((int)local_res18[0] < iVar8) {
        uVar10 = iVar8 - local_res18[0];
        if (((int)(local_res18[0] | uVar10) < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        if (uVar10 != 0) {
          _Dst = (this->Data).AllocatorInstance.Data + lVar9;
          iVar8 = (*piVar1 - uVar10) - DVar3;
          if (iVar8 != 0) {
            memmove(_Dst,_Dst + (int)uVar10,(longlong)iVar8);
          }
          *piVar1 = *piVar1 - uVar10;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,&(this->Data).AllocatorInstance,*piVar1,&(this->Data).ArrayMax);
        }
      }
    }
    if ((param_2->Data).ArrayNum != 0) {
      lpValueName_00 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    LVar6 = RegQueryValueExW((HKEY)param_1,lpValueName_00,(LPDWORD)0x0,(LPDWORD)0x0,
                             (LPBYTE)(this->Data).AllocatorInstance.Data,local_res18);
    if (LVar6 == 0) {
      return local_res18[0] == (this->Data).ArrayNum;
    }
  }
  return false;
}

// Set @ 142d321c0

void __thiscall FRegistryValue::Set(FRegistryValue *this,FString *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  wchar_t *_Src;
  
  pTVar1 = &this->Data;
  this->Type = 1;
  piVar2 = &(this->Data).ArrayMax;
  piVar3 = &(this->Data).ArrayNum;
  *piVar3 = 0;
  if ((this->Data).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  iVar6 = (param_1->Data).ArrayNum;
  iVar7 = iVar6 * 2;
  if (iVar6 == 0) {
    iVar7 = 2;
    _Src = L"";
  }
  else {
    _Src = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    if ((((FScriptContainerElement *)_Src == (FScriptContainerElement *)0x0) && (iVar7 != 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar7,&pTVar1->AllocatorInstance,piVar3,piVar2);
  if (iVar7 != 0) {
    memcpy((pTVar1->AllocatorInstance).Data + iVar6,_Src,(longlong)iVar7);
  }
  return;
}

// Set @ 142d322e0

void __thiscall FRegistryValue::Set(FRegistryValue *this,uint param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  pTVar1 = &this->Data;
  this->Type = 4;
  piVar2 = &(this->Data).ArrayMax;
  piVar3 = &(this->Data).ArrayNum;
  *piVar3 = 0;
  if ((this->Data).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,4,&pTVar1->AllocatorInstance,piVar3,piVar2);
  *(uint *)((pTVar1->AllocatorInstance).Data + iVar4) = param_1;
  return;
}

// Write @ 142d36d60

bool __thiscall FRegistryValue::Write(FRegistryValue *this,HKEY__ *param_1,FString *param_2)

{
  LSTATUS LVar1;
  wchar_t *lpValueName;
  
  if ((param_2->Data).ArrayNum == 0) {
    lpValueName = L"";
  }
  else {
    lpValueName = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  LVar1 = RegSetValueExW((HKEY)param_1,lpValueName,0,this->Type,
                         (BYTE *)(this->Data).AllocatorInstance.Data,(this->Data).ArrayNum);
  return LVar1 == 0;
}

