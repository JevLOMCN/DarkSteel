// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// FGCObjectInfo @ 142010eb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FGCObjectInfo * __thiscall FGCObjectInfo::FGCObjectInfo(FGCObjectInfo *this,UObject *param_1)

{
  undefined4 uVar1;
  FUObjectItem *pFVar2;
  
  uVar1 = *(undefined4 *)&param_1->field_0x1c;
  (this->Name).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->field_0x18;
  (this->Name).Number = uVar1;
  this->Class = (FGCObjectInfo *)0x0;
  this->Outer = (FGCObjectInfo *)0x0;
  this->Flags = *(EObjectFlags *)&param_1->field_0x8;
  pFVar2 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc);
  this->InternalFlags =
       (EInternalObjectFlags)((ulonglong)(pFVar2->field0_0x0).FlagsAndRefCount >> 0x20);
  pFVar2 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc);
  this->ClusterRootIndex = pFVar2->ClusterRootIndex;
  this->bDisregardForGC = *(int *)&param_1->field_0xc <= GUObjectArray.ObjLastNonGCIndex;
  pFVar2 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc);
  this->RefCount = *(int *)&pFVar2->field0_0x0;
  return this;
}

// FindOrAddInfoHelper @ 14203fd30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FGCObjectInfo * __cdecl
FGCObjectInfo::FindOrAddInfoHelper
          (UObject *param_1,
          TMap<UObject_const_*,FGCObjectInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,FGCObjectInfo_*,0>_>
          *param_2)

{
  longlong lVar1;
  int iVar2;
  FGCObjectInfo *pFVar3;
  FGCObjectInfo *pFVar4;
  undefined1 *puVar5;
  uint uVar6;
  UObject *local_res8;
  TPairInitializer<UObject_const_*_const_&,FGCObjectInfo_*_const_&> local_res10;
  UObject **local_18;
  FGCObjectInfo ***local_10;
  
  pFVar4 = (FGCObjectInfo *)0x0;
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
    puVar5 = *(undefined1 **)&param_2->field_0x40;
    if (*(undefined1 **)&param_2->field_0x40 == (undefined1 *)0x0) {
      puVar5 = &param_2->field_0x38;
    }
    iVar2 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&param_2->field_0x48 - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)param_2 + (longlong)iVar2 * 0x18;
        if (*(UObject **)(*(longlong *)param_2 + (longlong)iVar2 * 0x18) == param_1) {
          pFVar3 = (FGCObjectInfo *)(lVar1 + 8);
          if (lVar1 == 0) {
            pFVar3 = pFVar4;
          }
          if (pFVar3 != (FGCObjectInfo *)0x0) {
            return (FGCObjectInfo *)pFVar3->Name;
          }
          break;
        }
        iVar2 = *(int *)(lVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res8 = param_1;
  pFVar3 = ::operator_new(0x30);
  local_res10.Value = (FGCObjectInfo **)pFVar4;
  if (pFVar3 != (FGCObjectInfo *)0x0) {
    local_res10.Value = (FGCObjectInfo **)FGCObjectInfo(pFVar3,local_res8);
  }
  local_18 = &local_res8;
  local_10 = &local_res10.Value;
  TSet<TTuple<UObject_const_*,FGCObjectInfo_*>,TDefaultMapHashableKeyFuncs<UObject_const_*,FGCObjectInfo_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UObject_const_*_const_&,FGCObjectInfo_*_const_&>_>
            ((TSet<TTuple<UObject_const_*,FGCObjectInfo_*>,TDefaultMapHashableKeyFuncs<UObject_const_*,FGCObjectInfo_*,0>,FDefaultSetAllocator>
              *)param_2,&local_res10,(bool *)&local_18);
  pFVar3 = FindOrAddInfoHelper(*(UObject **)&local_res8->field_0x10,param_2);
  *(FGCObjectInfo **)((longlong)local_res10.Value + 8) = pFVar3;
  if (*(UObject **)&local_res8->field_0x20 != (UObject *)0x0) {
    pFVar4 = FindOrAddInfoHelper(*(UObject **)&local_res8->field_0x20,param_2);
  }
  *(FGCObjectInfo **)((longlong)local_res10.Value + 0x10) = pFVar4;
  return (FGCObjectInfo *)local_res10.Value;
}

// GetFullName @ 142054d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FString * __thiscall FGCObjectInfo::GetFullName(FGCObjectInfo *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  undefined1 auStack_288 [32];
  FString local_268;
  FString local_258;
  TStringBuilderBase<wchar_t> local_248;
  wchar_t local_228 [256];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_288;
  local_248.Base = local_228;
  local_248.bIsDynamic = false;
  local_248.bIsExternal = false;
  local_248.CurPos = local_228;
  local_248.End = (wchar_t *)local_28;
  GetPathName(this,&local_248);
  if (local_248.End < local_248.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_248,1);
  }
  *local_248.CurPos = L'\0';
  ::FString::FString(&local_258,local_248.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_248);
  if ((this->Class == (FGCObjectInfo *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Class",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\GCObjectInfo.h"
                         ,0x7c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  ::FName::ToString(&this->Class->Name,&local_268);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s %s");
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPathName @ 1420556f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FString * __thiscall FGCObjectInfo::GetPathName(FGCObjectInfo *this,FString *__return_storage_ptr__)

{
  undefined1 auStack_258 [32];
  TStringBuilderBase<wchar_t> local_238;
  wchar_t local_218 [256];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_258;
  local_238.Base = local_218;
  local_238.bIsDynamic = false;
  local_238.bIsExternal = false;
  local_238.CurPos = local_218;
  local_238.End = (wchar_t *)local_18;
  GetPathName(this,&local_238);
  if (local_238.End < local_238.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_238,1);
  }
  *local_238.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_238.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
  return __return_storage_ptr__;
}

// GetPathName @ 1420557b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FGCObjectInfo::GetPathName(FGCObjectInfo *this,TStringBuilderBase<wchar_t> *param_1)

{
  FName FVar1;
  bool bVar2;
  FNameEntryId FVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FName FVar4;
  FName FVar5;
  undefined1 local_res18 [16];
  
  bVar2 = IsThisNotNull(this,"FGCObjectInfo::GetPathName");
  if (bVar2) {
    if (this->Outer != (FGCObjectInfo *)0x0) {
      GetPathName(this->Outer,param_1);
      FVar1 = this->Outer->Class->Name;
      FVar3 = FNameEntryId::FromValidEName((EName)local_res18);
      FVar4.Number = 0;
      FVar4.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar3.Value);
      if ((FVar1 == FVar4) ||
         (FVar1 = this->Outer->Outer->Class->Name,
         FVar3 = FNameEntryId::FromValidEName((EName)local_res18), FVar5.Number = 0,
         FVar5.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar3.Value),
         FVar1 != FVar5)) {
        if (param_1->End < param_1->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_1,1);
        }
        *param_1->CurPos = L'.';
        param_1->CurPos = param_1->CurPos + 1;
      }
      else {
        ::operator<<(param_1,L':');
      }
    }
    ::FName::AppendString(&this->Name,param_1);
    return;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L"None",4);
  return;
}

// TryResolveObject @ 142091df0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __thiscall FGCObjectInfo::TryResolveObject(FGCObjectInfo *this)

{
  int iVar1;
  FName FVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  
  if (this == this->Class) {
    pUVar3 = Z_Construct_UClass_UClass_NoRegister();
    return (UObject *)pUVar3;
  }
  if (this->Outer == (FGCObjectInfo *)0x0) {
    FVar2 = this->Name;
    pUVar3 = Z_Construct_UClass_UObject_NoRegister();
    pUVar4 = StaticFindObjectFast(pUVar3,(UObject *)0x0,FVar2,None,RF_NoFlags,Borrowed);
    return pUVar4;
  }
  pUVar3 = (UClass *)TryResolveObject(this->Class);
  if (pUVar3 != (UClass *)0x0) {
    pUVar5 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      pUVar4 = TryResolveObject(this->Outer);
      if (pUVar4 != (UObject *)0x0) {
        pUVar4 = StaticFindObjectFast(pUVar3,pUVar4,this->Name,ExactClass,RF_NoFlags,Borrowed);
        return pUVar4;
      }
    }
  }
  return (UObject *)0x0;
}

