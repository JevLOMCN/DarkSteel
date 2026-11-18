// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// ConvertPathToProperties @ 142024b00

bool __cdecl
UE::GC::FPropertyStack::ConvertPathToProperties
          (UClass *param_1,TStringView<wchar_t> *param_2,
          TArray<FProperty_*,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  UStruct *this;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  FName *pFVar9;
  wchar_t *pwVar10;
  ulonglong uVar11;
  wchar_t *pwVar12;
  int iVar13;
  FName local_res10 [2];
  FName local_res20;
  FProperty *local_a8;
  FProperty *local_a0;
  wchar_t *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  wchar_t *local_88;
  ulonglong uStack_80;
  FName local_78;
  FName local_70;
  FName local_68 [2];
  wchar_t *local_58;
  undefined8 uStack_50;
  wchar_t *local_48;
  undefined8 uStack_40;
  
  pwVar12 = param_2->DataPtr;
  local_58 = param_2->DataPtr;
  uStack_50 = *(undefined8 *)&param_2->Size;
  bVar3 = true;
  pwVar10 = pwVar12;
  while ((pwVar10 != pwVar12 + (int)*(undefined8 *)&param_2->Size &&
         (((-(ulonglong)((ushort)*pwVar10 < 0x40) & 0x400000000000) >> ((byte)*pwVar10 & 0x3f) & 1)
          == 0))) {
    pwVar10 = pwVar10 + 1;
  }
  iVar6 = param_2->Size;
  iVar8 = (int)((longlong)pwVar10 - (longlong)pwVar12 >> 1);
  if (iVar8 == iVar6) {
    local_48 = local_58;
    uStack_40 = uStack_50;
    pFVar9 = ::FName::FName(&local_res20,(int)uStack_50,local_58,FNAME_Add);
    local_a0 = UStruct::FindPropertyByName((UStruct *)param_1,*pFVar9);
    if (local_a0 != (FProperty *)0x0) {
      pFVar1 = (param_3->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_a0) &&
          ((FScriptContainerElement *)&local_a0 < pFVar1 + (longlong)param_3->ArrayMax * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      iVar6 = param_3->ArrayNum;
      if (iVar6 == param_3->ArrayMax) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      pFVar1 = (param_3->AllocatorInstance).Data;
      param_3->ArrayNum = iVar6 + 1;
      *(FProperty **)(pFVar1 + (longlong)iVar6 * 8) = local_a0;
      return true;
    }
  }
  else {
    pFVar9 = ::FName::FName(&local_78,iVar8,pwVar12,FNAME_Add);
    local_a8 = UStruct::FindPropertyByName((UStruct *)param_1,*pFVar9);
    if (local_a8 != (FProperty *)0x0) {
      iVar13 = iVar6;
      if (iVar6 - iVar8 < iVar6) {
        iVar13 = iVar6 - iVar8;
      }
      iVar8 = 0;
      if (0 < iVar13) {
        iVar8 = iVar13;
      }
      pwVar12 = pwVar12 + ((longlong)iVar6 - (longlong)iVar8);
      pwVar10 = pwVar12 + iVar8;
      while ((pwVar12 != pwVar10 &&
             (((-(ulonglong)((ushort)*pwVar12 < 0x40) & 0x400000000000) >> ((byte)*pwVar12 & 0x3f) &
              1) != 0))) {
        pwVar12 = pwVar12 + 1;
      }
      pFVar1 = (param_3->AllocatorInstance).Data;
      uVar11 = (longlong)pwVar10 - (longlong)pwVar12 >> 1;
      if (((pFVar1 <= (FScriptContainerElement *)&local_a8) &&
          ((FScriptContainerElement *)&local_a8 < pFVar1 + (longlong)param_3->ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      iVar6 = param_3->ArrayNum;
      if (iVar6 == param_3->ArrayMax) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      param_3->ArrayNum = iVar6 + 1;
      *(FProperty **)((param_3->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_a8;
      local_88 = pwVar12;
      while( true ) {
        iVar6 = (int)uVar11;
        pwVar12 = local_88;
        while ((pwVar12 != local_88 + iVar6 &&
               (((-(ulonglong)((ushort)*pwVar12 < 0x40) & 0x400000000000) >> ((byte)*pwVar12 & 0x3f)
                & 1) == 0))) {
          pwVar12 = pwVar12 + 1;
        }
        iVar13 = (int)((longlong)pwVar12 - (longlong)local_88 >> 1);
        iVar8 = iVar6;
        if (iVar6 - iVar13 < iVar6) {
          iVar8 = iVar6 - iVar13;
        }
        iVar7 = 0;
        if (0 < iVar8) {
          iVar7 = iVar8;
        }
        local_98 = local_88 + ((longlong)iVar6 - (longlong)iVar7);
        pwVar12 = local_98 + iVar7;
        while ((local_98 != pwVar12 &&
               (((-(ulonglong)((ushort)*local_98 < 0x40) & 0x400000000000) >>
                 ((byte)*local_98 & 0x3f) & 1) != 0))) {
          local_98 = local_98 + 1;
        }
        iVar6 = (int)((longlong)pwVar12 - (longlong)local_98 >> 1);
        uStack_80 = CONCAT44(uStack_8c,iVar6);
        iStack_90 = iVar6;
        if ((local_a8 == (FProperty *)0x0) ||
           ((*(uint *)(local_a8->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
          pcVar2 = *(code **)(local_a8->_padding_ + 0x50);
          pwVar12 = local_88;
          local_88 = local_98;
          pFVar9 = ::FName::FName(local_68,iVar13,pwVar12,FNAME_Add);
          local_res10[0] = *pFVar9;
          local_a8 = (FProperty *)(*pcVar2)(local_a8,local_res10);
          if ((local_a8 == (FProperty *)0x0) ||
             ((*(uint *)(local_a8->_padding_ + 0x18) >> 0xf & 1) == 0)) {
            local_a8 = (FProperty *)0x0;
          }
        }
        else {
          this = (UStruct *)local_a8[1]._padding_;
          pwVar12 = local_88;
          local_88 = local_98;
          pFVar9 = ::FName::FName(&local_70,iVar13,pwVar12,FNAME_Add);
          local_a8 = UStruct::FindPropertyByName(this,*pFVar9);
        }
        if (local_a8 == (FProperty *)0x0) {
          bVar3 = false;
        }
        else {
          pFVar1 = (param_3->AllocatorInstance).Data;
          if (((pFVar1 <= (FScriptContainerElement *)&local_a8) &&
              ((FScriptContainerElement *)&local_a8 < pFVar1 + (longlong)param_3->ArrayMax * 8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          iVar8 = param_3->ArrayNum;
          if (iVar8 == param_3->ArrayMax) {
            iVar8 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          param_3->ArrayNum = iVar8 + 1;
          *(FProperty **)((param_3->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_a8;
        }
        if (iVar6 < 1) {
          return bVar3;
        }
        if (bVar3 == false) break;
        uVar11 = uStack_80 & 0xffffffff;
      }
      return false;
    }
  }
  return false;
}

// ConvertPathToProperties @ 142024f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::GC::FPropertyStack::ConvertPathToProperties
          (UClass *param_1,FName param_2,TArray<FProperty_*,TSizedDefaultAllocator<32>_> *param_3)

{
  bool bVar1;
  undefined1 auStack_888 [32];
  TStringView<wchar_t> local_868;
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1035];
  wchar_t local_22 [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_888;
  local_858.Base = local_838;
  local_858.CurPos = local_838;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  local_858.End = local_22;
  local_868.DataPtr = (wchar_t *)param_2;
  ::FName::AppendString((FName *)&local_868,&local_858);
  local_868.Size = (int)((longlong)local_858.CurPos - (longlong)local_858.Base >> 1);
  local_868.DataPtr = local_858.Base;
  bVar1 = ConvertPathToProperties(param_1,&local_868,param_3);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  return bVar1;
}

// GetPropertyPath @ 142055960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
UE::GC::FPropertyStack::GetPropertyPath(FPropertyStack *this,FString *__return_storage_ptr__)

{
  int iVar1;
  void *pvVar2;
  ForAnyElementType FVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  FFieldClass *pFVar6;
  ulonglong uVar7;
  void *pvVar8;
  ulonglong uVar9;
  ulong64 uVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [8];
  FString local_180;
  FScriptContainerElement *local_170;
  FString *local_168;
  TStringBuilderBase<wchar_t> local_158;
  wchar_t local_138 [128];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_1a8;
  pFVar11 = (this->Props).AllocatorInstance.Data;
  local_158.Base = local_138;
  iVar1 = (this->Props).ArrayNum;
  pvVar8 = (void *)0x0;
  local_158.CurPos = local_138;
  local_158.End = (wchar_t *)local_38;
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_170 = pFVar11 + (longlong)iVar1 * 8;
  local_168 = __return_storage_ptr__;
  do {
    pFVar4 = local_170;
    uVar12 = 0;
    if ((this->Props).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FProperty_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_188);
    }
    if (pFVar11 == pFVar4) {
      if (local_158.End < local_158.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_158,1);
      }
      *local_158.CurPos = L'\0';
      ::FString::FString(local_168,local_158.Base);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
      return local_168;
    }
    pvVar2 = *(void **)pFVar11;
    if (pvVar8 == (void *)0x0) {
LAB_142055a85:
      bVar5 = IsThisNotNull(pvVar2,"FField::GetName");
      if (bVar5) {
        ::FName::ToString((FName *)((longlong)pvVar2 + 0x20),&local_180);
      }
      else {
        ::FString::FString(&local_180,L"None");
      }
      FVar3.Data = local_180.Data.AllocatorInstance.Data;
      uVar9 = (ulonglong)(local_180.Data.ArrayNum - 1);
      if (local_180.Data.ArrayNum == 0) {
        uVar9 = uVar12;
      }
      uVar10 = (ulong64)(int)uVar9;
      if (local_158.End < local_158.CurPos + uVar10) {
        TStringBuilderBase<wchar_t>::Extend(&local_158,uVar10);
      }
      if ((int)uVar9 != 0) {
        pvVar8 = FGenericPlatformString::Memcpy(local_158.CurPos,FVar3.Data,uVar10 * 2);
        local_158.CurPos = (wchar_t *)((longlong)pvVar8 + uVar10 * 2);
      }
      pvVar8 = pvVar2;
      if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Data.AllocatorInstance.Data);
      }
    }
    else {
      pFVar6 = FProperty::StaticClass();
      bVar5 = FFieldVariant::IsA((FFieldVariant *)((longlong)pvVar2 + 0x10),pFVar6);
      if ((!bVar5) || (*(void **)((longlong)pvVar2 + 0x10) != pvVar8)) {
LAB_142055a56:
        if (local_158.End < local_158.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_158,1);
        }
        *local_158.CurPos = L'.';
        local_158.CurPos = local_158.CurPos + 1;
        goto LAB_142055a85;
      }
      bVar5 = IsThisNotNull(pvVar8,"FField::GetFName");
      uVar9 = uVar12;
      if (bVar5) {
        uVar9 = *(ulonglong *)((longlong)pvVar8 + 0x20);
      }
      bVar5 = IsThisNotNull(pvVar2,"FField::GetFName");
      uVar7 = uVar12;
      if (bVar5) {
        uVar7 = *(ulonglong *)((longlong)pvVar2 + 0x20);
      }
      if (uVar7 != uVar9) goto LAB_142055a56;
    }
    pFVar11 = pFVar11 + 8;
  } while( true );
}

