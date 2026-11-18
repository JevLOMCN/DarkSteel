// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 7

// StaticStruct @ 149481d70

UScriptStruct * __cdecl FWN_PakVersionList::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWN_PakVersionList.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_Common();
    Z_Registration_Info_UScriptStruct_FWN_PakVersionList.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWN_PakVersionList,(UObject *)pUVar1,
                         L"WN_PakVersionList");
  }
  return Z_Registration_Info_UScriptStruct_FWN_PakVersionList.OuterSingleton;
}

// Diff @ 14949c970

bool __thiscall
FWN_PakVersionList::Diff
          (FWN_PakVersionList *this,FWN_PakVersionList *param_1,FString *param_2,
          TArray<FWN_PakVersion,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FWN_PakVersion,TSizedDefaultAllocator<32>_> *param_4,
          TArray<FWN_PakVersion,TSizedDefaultAllocator<32>_> *param_5)

{
  FWN_PakVersion *pFVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  FWN_PakVersion *pFVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  IFileManager *pIVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  FWN_PakVersion *pFVar18;
  undefined1 local_168;
  undefined1 local_167;
  undefined1 local_166;
  undefined1 local_165 [5];
  IFileManager *local_160;
  ForAnyElementType local_158;
  uint local_150;
  int local_14c;
  IFileManager *local_148;
  FString local_140;
  uint local_130;
  FScriptContainerElement local_128;
  FScriptContainerElement local_127;
  FScriptContainerElement local_126;
  FString local_120;
  FString local_110;
  FString local_100;
  undefined4 local_f0;
  undefined4 local_ec;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  local_160 = IFileManager::Get();
  DestructItems<FWN_PakVersion,int>
            ((FWN_PakVersion *)(param_3->AllocatorInstance).Data,param_3->ArrayNum);
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  DestructItems<FWN_PakVersion,int>
            ((FWN_PakVersion *)(param_4->AllocatorInstance).Data,param_4->ArrayNum);
  param_4->ArrayNum = 0;
  if (param_4->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
  }
  DestructItems<FWN_PakVersion,int>
            ((FWN_PakVersion *)(param_5->AllocatorInstance).Data,param_5->ArrayNum);
  param_5->ArrayNum = 0;
  if (param_5->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,&param_5->AllocatorInstance,0,&param_5->ArrayMax);
  }
  uVar2 = (param_1->PakVersions).ArrayNum;
  pFVar18 = (FWN_PakVersion *)(param_1->PakVersions).AllocatorInstance.Data;
  local_158.Data = (FScriptContainerElement *)0x0;
  local_150 = uVar2;
  if (uVar2 == 0) {
    local_14c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,uVar2,0,&local_158,uVar2,&local_14c);
    ConstructItems<FWN_PakVersion,FWN_PakVersion,int>(local_158.Data,pFVar18,uVar2);
  }
  uVar2 = local_150;
  pFVar18 = (FWN_PakVersion *)(local_158.Data + (longlong)(int)local_150 * 0x40);
  pFVar17 = local_158.Data + 8;
  while( true ) {
    if (local_150 != uVar2) {
      local_168 = 0;
      `TCheckedPointerIterator<FWN_PakVersion_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_168);
    }
    pFVar1 = (FWN_PakVersion *)(pFVar17 + -8);
    if (pFVar1 == pFVar18) break;
    if (pFVar1->bIsPrerequisites == false) {
      ::FString::FString(&local_a8,(FString *)pFVar17);
      ::FString::FString(&local_78,&local_a8);
      pFVar10 = TArray<FWN_PakVersion,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FWN_PakVersionList::FindVersionByGuid_::__l2::<lambda_1>_>
                          (&this->PakVersions,(<lambda_1> *)&local_78);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (pFVar10 == (FWN_PakVersion *)0x0) {
        pFVar10 = (FWN_PakVersion *)(param_3->AllocatorInstance).Data;
        if (((pFVar10 <= pFVar1) && (pFVar1 < pFVar10 + param_3->ArrayMax)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        iVar8 = param_3->ArrayNum;
        if (iVar8 == param_3->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x840,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar8 + 1;
        pFVar13 = (param_3->AllocatorInstance).Data + (longlong)iVar8 * 0x40;
        *pFVar13 = (FScriptContainerElement)pFVar1->bIsPrerequisites;
        pFVar13[1] = pFVar17[-7];
        pFVar13[2] = pFVar17[-6];
        ::FString::FString((FString *)(pFVar13 + 8),(FString *)pFVar17);
        ::FString::FString((FString *)(pFVar13 + 0x18),(FString *)(pFVar17 + 0x10));
        ::FString::FString((FString *)(pFVar13 + 0x28),(FString *)(pFVar17 + 0x20));
        *(uint *)(pFVar13 + 0x38) = *(uint *)(pFVar17 + 0x30);
        *(uint *)(pFVar13 + 0x3c) = *(uint *)(pFVar17 + 0x34);
      }
    }
    pFVar17 = pFVar17 + 0x40;
  }
  local_148 = local_160;
  ::FString::FString(&local_140,param_2);
  uVar11 = (ulonglong)(int)local_150;
  pIVar14 = (IFileManager *)(local_158.Data + uVar11 * 0x40);
  local_130 = local_150;
  pFVar17 = local_158.Data + 0x20;
  local_160 = pIVar14;
  while( true ) {
    if (local_150 != (uint)uVar11) {
      local_167 = 0;
      `TCheckedPointerIterator<FWN_PakVersion_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_167);
    }
    pFVar13 = pFVar17 + -0x20;
    if ((IFileManager *)pFVar13 == pIVar14) break;
    if (pFVar13->field_0x0 == '\0') {
      ::FString::FString(&local_98,(FString *)(pFVar17 + -0x18));
      ::FString::FString(&local_68,&local_98);
      pFVar18 = TArray<FWN_PakVersion,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FWN_PakVersionList::FindVersionByGuid_::__l2::<lambda_1>_>
                          (&this->PakVersions,(<lambda_1> *)&local_68);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      pIVar14 = local_160;
      if (pFVar18 != (FWN_PakVersion *)0x0) {
        if (pFVar18->Hash == *(uint *)(pFVar17 + 0x1c)) {
          bVar5 = true;
          if (this->bUseIoStore == false) {
            ::FString::PrintfImpl(&local_b8,L"%s%s.%s");
            FVar12.Data = (FScriptContainerElement *)L"";
            if (local_b8.Data.ArrayNum != 0) {
              FVar12.Data = local_b8.Data.AllocatorInstance.Data;
            }
            cVar7 = (**(code **)((longlong)*local_148 + 0x50))(local_148,FVar12.Data);
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
            }
            pIVar14 = local_160;
            if (cVar7 == '\0') goto LAB_14949cf77;
          }
          else {
            if (pFVar17[-0x1e] != (FScriptContainerElement)0x0) {
              ::FString::PrintfImpl(&local_e8,L"%s%s.%s");
              FVar12.Data = (FScriptContainerElement *)L"";
              if (local_e8.Data.ArrayNum != 0) {
                FVar12.Data = local_e8.Data.AllocatorInstance.Data;
              }
              cVar7 = (**(code **)((longlong)*local_148 + 0x50))(local_148,FVar12.Data);
              if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e8.Data.AllocatorInstance.Data);
              }
              bVar5 = cVar7 != '\0';
            }
            ::FString::PrintfImpl(&local_d8,L"%s%s.%s");
            FVar12.Data = (FScriptContainerElement *)L"";
            if (local_d8.Data.ArrayNum != 0) {
              FVar12.Data = local_d8.Data.AllocatorInstance.Data;
            }
            cVar7 = (**(code **)((longlong)*local_148 + 0x50))(local_148,FVar12.Data);
            if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d8.Data.AllocatorInstance.Data);
            }
            bVar4 = false;
            if (cVar7 != '\0') {
              bVar4 = bVar5;
            }
            ::FString::PrintfImpl(&local_c8,L"%s%s.%s");
            cVar7 = (**(code **)((longlong)*local_148 + 0x50))();
            if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.Data.AllocatorInstance.Data);
            }
            bVar5 = false;
            if (cVar7 != '\0') {
              bVar5 = bVar4;
            }
            pIVar14 = local_160;
            if (!bVar5) {
LAB_14949cf77:
              pFVar15 = (param_3->AllocatorInstance).Data;
              if (((pFVar15 <= pFVar13) && (pFVar13 < pFVar15 + (longlong)param_3->ArrayMax * 0x40))
                 && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar5)) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
              iVar8 = param_3->ArrayNum;
              if (iVar8 == param_3->ArrayMax) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x840,&param_3->AllocatorInstance,&param_3->ArrayMax);
              }
              pFVar15 = (param_3->AllocatorInstance).Data + (longlong)iVar8 * 0x40;
              param_3->ArrayNum = iVar8 + 1;
              goto LAB_14949d007;
            }
          }
        }
        else {
          pFVar15 = (param_4->AllocatorInstance).Data;
          if (((pFVar15 <= pFVar13) && (pFVar13 < pFVar15 + (longlong)param_4->ArrayMax * 0x40)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          iVar8 = param_4->ArrayNum;
          if (iVar8 == param_4->ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x840,&param_4->AllocatorInstance,&param_4->ArrayMax);
          }
          pFVar15 = (param_4->AllocatorInstance).Data + (longlong)iVar8 * 0x40;
          param_4->ArrayNum = iVar8 + 1;
LAB_14949d007:
          *pFVar15 = (FScriptContainerElement)pFVar13->field_0x0;
          pFVar15[1] = pFVar17[-0x1f];
          pFVar15[2] = pFVar17[-0x1e];
          ::FString::FString((FString *)(pFVar15 + 8),(FString *)(pFVar17 + -0x18));
          ::FString::FString((FString *)(pFVar15 + 0x18),(FString *)(pFVar17 + -8));
          ::FString::FString((FString *)(pFVar15 + 0x28),(FString *)(pFVar17 + 8));
          *(undefined4 *)(pFVar15 + 0x38) = *(undefined4 *)(pFVar17 + 0x18);
          *(undefined4 *)(pFVar15 + 0x3c) = *(undefined4 *)(pFVar17 + 0x1c);
          pIVar14 = local_160;
        }
      }
    }
    uVar11 = (ulonglong)local_130;
    pFVar17 = pFVar17 + 0x40;
  }
  pFVar13 = (this->PakVersions).AllocatorInstance.Data;
  iVar8 = (this->PakVersions).ArrayNum;
  pFVar15 = pFVar13 + (longlong)iVar8 * 0x40;
  pFVar17 = pFVar13 + 8;
  while( true ) {
    if ((this->PakVersions).ArrayNum != iVar8) {
      local_166 = 0;
      `TCheckedPointerIterator<FWN_PakVersion_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_166);
    }
    if (pFVar13 == pFVar15) break;
    if (*pFVar13 == (FScriptContainerElement)0x0) {
      ::FString::FString(&local_88,(FString *)pFVar17);
      ::FString::FString(&local_58,&local_88);
      pFVar18 = TArray<FWN_PakVersion,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FWN_PakVersionList::FindVersionByGuid_::__l2::<lambda_1>_>
                          (&this->PakVersions,(<lambda_1> *)&local_58);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (pFVar18 == (FWN_PakVersion *)0x0) {
        pFVar16 = (param_5->AllocatorInstance).Data;
        if (((pFVar16 <= pFVar13) && (pFVar13 < pFVar16 + (longlong)param_5->ArrayMax * 0x40)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        iVar9 = param_5->ArrayNum;
        if (iVar9 == param_5->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x840,&param_5->AllocatorInstance,&param_5->ArrayMax);
        }
        param_5->ArrayNum = iVar9 + 1;
        pFVar16 = (param_5->AllocatorInstance).Data + (longlong)iVar9 * 0x40;
        *pFVar16 = *pFVar13;
        pFVar16[1] = pFVar17[-7];
        pFVar16[2] = pFVar17[-6];
        ::FString::FString((FString *)(pFVar16 + 8),(FString *)pFVar17);
        ::FString::FString((FString *)(pFVar16 + 0x18),(FString *)(pFVar17 + 0x10));
        ::FString::FString((FString *)(pFVar16 + 0x28),(FString *)(pFVar17 + 0x20));
        *(undefined4 *)(pFVar16 + 0x38) = *(undefined4 *)&pFVar17[0x30].field_0x0;
        *(undefined4 *)(pFVar16 + 0x3c) = *(undefined4 *)(pFVar17 + 0x34);
      }
    }
    pFVar13 = pFVar13 + 0x40;
    pFVar17 = pFVar17 + 0x40;
  }
  if (((param_3->ArrayNum == 0) && (param_4->ArrayNum == 0)) && (param_5->ArrayNum == 0)) {
    if (param_1->Hash == this->Hash) {
      bVar5 = false;
      goto LAB_14949d3b9;
    }
    iVar8 = (this->PakVersions).ArrayNum;
    pFVar17 = (this->PakVersions).AllocatorInstance.Data;
    pFVar13 = pFVar17 + (longlong)iVar8 * 0x40;
    while( true ) {
      if ((this->PakVersions).ArrayNum != iVar8) {
        local_165[0] = 0;
        `TCheckedPointerIterator<FWN_PakVersion_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_165);
      }
      if (pFVar17 == pFVar13) break;
      local_128 = *pFVar17;
      local_127 = pFVar17[1];
      local_126 = pFVar17[2];
      ::FString::FString(&local_120,(FString *)(pFVar17 + 8));
      ::FString::FString(&local_110,(FString *)(pFVar17 + 0x18));
      ::FString::FString(&local_100,(FString *)(pFVar17 + 0x28));
      local_f0 = *(undefined4 *)(pFVar17 + 0x38);
      local_ec = *(undefined4 *)(pFVar17 + 0x3c);
      if (local_128 == (FScriptContainerElement)0x0) {
        pFVar15 = (param_4->AllocatorInstance).Data;
        if (((pFVar15 <= &local_128) && (&local_128 < pFVar15 + (longlong)param_4->ArrayMax * 0x40))
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        iVar9 = param_4->ArrayNum;
        if (iVar9 == param_4->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x840,&param_4->AllocatorInstance,&param_4->ArrayMax);
        }
        param_4->ArrayNum = iVar9 + 1;
        pFVar15 = (param_4->AllocatorInstance).Data + (longlong)iVar9 * 0x40;
        *pFVar15 = local_128;
        pFVar15[1] = local_127;
        pFVar15[2] = local_126;
        ::FString::FString((FString *)(pFVar15 + 8),&local_120);
        ::FString::FString((FString *)(pFVar15 + 0x18),&local_110);
        ::FString::FString((FString *)(pFVar15 + 0x28),&local_100);
        *(undefined4 *)(pFVar15 + 0x38) = local_f0;
        *(undefined4 *)(pFVar15 + 0x3c) = local_ec;
      }
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      pFVar17 = pFVar17 + 0x40;
    }
  }
  bVar5 = true;
LAB_14949d3b9:
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  DestructItems<FWN_PakVersion,int>((FWN_PakVersion *)local_158.Data,local_150);
  if ((FWN_PakVersion *)local_158.Data != (FWN_PakVersion *)0x0) {
    FMemory::Free(local_158.Data);
  }
  return bVar5;
}

// FindVersionByAlias @ 14949fd30

FWN_PakVersion * __thiscall
FWN_PakVersionList::FindVersionByAlias(FWN_PakVersionList *this,FString *param_1)

{
  FWN_PakVersion *pFVar1;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_28,param_1);
  ::FString::FString(&local_18,&local_28);
  pFVar1 = TArray<FWN_PakVersion,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FWN_PakVersionList::FindVersionByAlias_::__l2::<lambda_1>_>
                     (&this->PakVersions,(<lambda_1> *)&local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return pFVar1;
}

// FindVersionByGuid @ 14949fd90

FWN_PakVersion * __thiscall
FWN_PakVersionList::FindVersionByGuid(FWN_PakVersionList *this,FString *param_1)

{
  FWN_PakVersion *pFVar1;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_28,param_1);
  ::FString::FString(&local_18,&local_28);
  pFVar1 = TArray<FWN_PakVersion,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FWN_PakVersionList::FindVersionByGuid_::__l2::<lambda_1>_>
                     (&this->PakVersions,(<lambda_1> *)&local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return pFVar1;
}

// Load @ 1494a5d60

bool __thiscall FWN_PakVersionList::Load(FWN_PakVersionList *this,wchar_t *param_1)

{
  bool bVar1;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  bVar1 = FFileHelper::LoadFileToString(&local_18,param_1,None,0);
  if (bVar1) {
    bVar1 = LoadFromJsonText(this,&local_18);
  }
  else {
    bVar1 = true;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// LoadFromJsonText @ 1494a5dc0

bool __thiscall FWN_PakVersionList::LoadFromJsonText(FWN_PakVersionList *this,FString *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TJsonStringReader<wchar_t> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar6;
  UPackage *pUVar7;
  TSharedPtr<FJsonObject,1> local_78;
  TSharedRef<FJsonObject,1> local_68;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_58;
  StackState local_48;
  
  pTVar6 = TJsonStringReader<wchar_t>::Create(&local_58,param_1);
  pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar6->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  local_48.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Object = (FJsonObject *)0x0;
  local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_48.Identifier.Data.ArrayNum = 0;
  local_48.Identifier.Data.ArrayMax = 0;
  local_48.Object.Object = (FJsonObject *)0x0;
  local_48.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_48.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Array.ArrayNum = 0;
  local_48.Array.ArrayMax = 0;
  bVar4 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                    ((TJsonReader<wchar_t> *)pTVar2,&local_48,None);
  if (bVar4) {
    bVar4 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_48,&local_78);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data,
               local_48.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_48.Array.AllocatorInstance.Data);
    }
    if (local_48.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Identifier.Data.AllocatorInstance.Data);
    }
    if ((bVar4) && (local_78.Object != (FJsonObject *)0x0)) {
      if (local_78.Object == (FJsonObject *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      local_68.Object = local_78.Object;
      local_68.SharedReferenceCount.ReferenceController =
           local_78.SharedReferenceCount.ReferenceController;
      if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (local_78.Object == (FJsonObject *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      if (Z_Registration_Info_UScriptStruct_FWN_PakVersionList.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar7 = Z_Construct_UPackage__Script_WN_Common();
        Z_Registration_Info_UScriptStruct_FWN_PakVersionList.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FWN_PakVersionList,(UObject *)pUVar7,
                             L"WN_PakVersionList");
      }
      bVar4 = FJsonObjectConverter::JsonObjectToUStruct
                        (&local_68,
                         (UStruct *)
                         Z_Registration_Info_UScriptStruct_FWN_PakVersionList.OuterSingleton,this,0,
                         0,false,(FText *)0x0,
                         (TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
                          *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      goto LAB_1494a5e6c;
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data,
               local_48.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_48.Array.AllocatorInstance.Data);
    }
    if (local_48.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Identifier.Data.AllocatorInstance.Data);
    }
  }
  bVar4 = false;
LAB_1494a5e6c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar4;
}

// Save @ 1494acd40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FWN_PakVersionList::Save(FWN_PakVersionList *this,wchar_t *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UPackage *pUVar4;
  FArchiveState *pFVar5;
  FArchiveState *this_00;
  FArchiveState *pFVar6;
  IFileManager *pIVar7;
  FArchiveState *pFVar8;
  FArchiveState *pFVar9;
  FFastPathLoadBuffer *pFVar10;
  FFastPathLoadBuffer **ppFVar11;
  TRawPtrProxy<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>_> local_res20;
  wchar_t *local_b0;
  undefined8 local_a8;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_a0;
  TSharedRef<FJsonObject,1> local_90;
  TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1> local_80;
  TSharedPtr<FJsonObject,1> local_70;
  wchar_t *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  
  local_90.SharedReferenceCount.ReferenceController = ::operator_new(0x60);
  pFVar9 = (FArchiveState *)0x0;
  if ((FArchiveState *)local_90.SharedReferenceCount.ReferenceController == (FArchiveState *)0x0) {
    local_90.Object = (FJsonObject *)___xmm_00000000000000000000000000000010;
    local_90.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)_UNK_150651568;
    pFVar10 = (FFastPathLoadBuffer *)&DAT_00000010;
    ppFVar11 = (FFastPathLoadBuffer **)&DAT_00000008;
    pFVar8 = pFVar9;
  }
  else {
    *(undefined4 *)&((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->ActiveFPLB
         = 1;
    pFVar10 = &((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->InlineFPLB;
    *(undefined4 *)
     ((longlong)&((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->ActiveFPLB +
     4) = 1;
    ((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonObject___00_SharedPointerInternals__6B_;
    (((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->InlineFPLB).
    OriginalFastPathLoadBuffer = (uchar *)0x0;
    *(undefined8 *)&((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->field_0x28
         = 0;
    ((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->ArLicenseeUEVer = 0;
    (((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->ArEngineVer).Major = 0;
    (((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->ArEngineVer).Minor = 0;
    ((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->CustomVersionContainer =
         (FCustomVersionContainer *)0x0;
    (((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->InlineFPLB).
    StartFastPathLoadBuffer = (uchar *)0x0;
    (((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->InlineFPLB).
    EndFastPathLoadBuffer = (uchar *)0x0;
    ((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->ArSerializingDefaults = 0;
    ((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->ArPortFlags = 0;
    *(undefined4 *)
     &((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->ArMaxSerializeSize = 0;
    *(undefined4 *)
     ((longlong)
      &((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->ArMaxSerializeSize + 4)
         = 0x80;
    (((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->ArUEVer).FileVersionUE4 =
         -1;
    (((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->ArUEVer).FileVersionUE5 =
         0;
    (((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->ArEngineVer).Patch = 0;
    *(undefined2 *)
     &(((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->ArEngineVer).field_0x6
         = 0;
    (((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->ArEngineVer).Changelist =
         0;
    if ((pFVar10 == (FFastPathLoadBuffer *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    ppFVar11 = &((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->ActiveFPLB;
    LOCK();
    *(int *)ppFVar11 = *(int *)ppFVar11 + 1;
    UNLOCK();
    pFVar8 = (FArchiveState *)local_90.SharedReferenceCount.ReferenceController;
    local_90.Object = (FJsonObject *)pFVar10;
  }
  if (Z_Registration_Info_UScriptStruct_FWN_PakVersionList.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_WN_Common();
    Z_Registration_Info_UScriptStruct_FWN_PakVersionList.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWN_PakVersionList,(UObject *)pUVar4,
                         L"WN_PakVersionList");
  }
  bVar2 = FJsonObjectConverter::UStructToJsonObject
                    ((UStruct *)Z_Registration_Info_UScriptStruct_FWN_PakVersionList.OuterSingleton,
                     this,&local_90,0,0,
                     (TDelegate<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
                      *)0x0,None);
  if (bVar2) {
    if (pFVar8 != (FArchiveState *)0x0) {
      LOCK();
      *(int *)ppFVar11 = *(int *)ppFVar11 + 1;
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar8);
    if (pFVar10 != (FFastPathLoadBuffer *)0x0) {
      local_b0 = (wchar_t *)0x0;
      local_a8 = 0;
      pFVar5 = ::operator_new(0x40);
      local_res20.Object = (TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *)pFVar9;
      if (pFVar5 != (FArchiveState *)0x0) {
        this_00 = ::operator_new(0xa8);
        pFVar6 = pFVar9;
        if (this_00 != (FArchiveState *)0x0) {
          this_00->_padding_ = 0;
          this_00->ActiveFPLB = (FFastPathLoadBuffer *)0x0;
          (this_00->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
          (this_00->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
          (this_00->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
          *(undefined8 *)&this_00->field_0x28 = 0;
          this_00->ArSerializingDefaults = 0;
          this_00->ArPortFlags = 0;
          this_00->ArMaxSerializeSize = 0;
          (this_00->ArUEVer).FileVersionUE4 = 0;
          (this_00->ArUEVer).FileVersionUE5 = 0;
          this_00->ArLicenseeUEVer = 0;
          (this_00->ArEngineVer).Major = 0;
          (this_00->ArEngineVer).Minor = 0;
          (this_00->ArEngineVer).Patch = 0;
          *(undefined2 *)&(this_00->ArEngineVer).field_0x6 = 0;
          (this_00->ArEngineVer).Changelist = 0;
          this_00->CustomVersionContainer = (FCustomVersionContainer *)0x0;
          this_00->ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
          this_00->SavePackageData = (FArchiveSavePackageData *)0x0;
          this_00->SerializedProperty = (FProperty *)0x0;
          this_00->SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
          *(undefined8 *)&this_00->bCustomVersionsAreReset = 0;
          this_00->NextProxy = (FArchiveState *)0x0;
          FArchiveState::FArchiveState(this_00);
          this_00[1]._padding_ = 0;
          this_00->_padding_ =
               (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
          this_00[1].InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
          this_00[1].ActiveFPLB = (FFastPathLoadBuffer *)&pFVar5->field_0x28;
          FArchiveState::SetIsSaving(this_00,true);
          (**(code **)(this_00->_padding_ + 0x108))(this_00,0);
          this_00->_padding_ = (longlong)&___7FMemoryWriter__6B_;
          pFVar6 = this_00;
        }
        pFVar5->ActiveFPLB = (FFastPathLoadBuffer *)pFVar6;
        pFVar5->_padding_ = (longlong)&___7__TJsonStringWriter_U__TPrettyJsonPrintPolicy__W____6B_;
        pFVar5->ArMaxSerializeSize = (long64)&local_b0;
        (pFVar5->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
        (pFVar5->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
        (pFVar5->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
        *(undefined8 *)&pFVar5->field_0x28 = 0;
        pFVar5->ArSerializingDefaults = 0;
        pFVar5->ArPortFlags = 0;
        local_res20.Object = (TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *)pFVar5;
      }
      TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1>::
      TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1><TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>_>
                (&local_80,&local_res20);
      if (local_80.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_80.SharedReferenceCount.ReferenceController);
      if (pFVar8 != (FArchiveState *)0x0) {
        LOCK();
        *(int *)&pFVar8->ActiveFPLB = *(int *)&pFVar8->ActiveFPLB + 1;
        UNLOCK();
        LOCK();
        *(int *)&pFVar8->ActiveFPLB = *(int *)&pFVar8->ActiveFPLB + 1;
        UNLOCK();
      }
      pFVar5 = ::operator_new(0x38);
      if (pFVar5 == (FArchiveState *)0x0) {
        local_a0.Object = ___xmm_00000000000000000000000000000010;
        local_a0.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)_UNK_150651568;
      }
      else {
        *(undefined4 *)&pFVar5->ActiveFPLB = 1;
        *(undefined4 *)((longlong)&pFVar5->ActiveFPLB + 4) = 1;
        pFVar5->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFElement_FJsonSerializerPolicy_JsonObject___00_SharedPointerInternals__6B_
        ;
        (pFVar5->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
        (pFVar5->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
        pFVar6 = ::operator_new(0x30);
        if (pFVar6 == (FArchiveState *)0x0) {
          (pFVar5->InlineFPLB).OriginalFastPathLoadBuffer = &DAT_00000010;
          *(undefined8 *)&pFVar5->field_0x28 = 0;
        }
        else {
          *(undefined4 *)&pFVar6->ActiveFPLB = 1;
          *(undefined4 *)((longlong)&pFVar6->ActiveFPLB + 4) = 1;
          pFVar6->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFJsonValueObject___00_SharedPointerInternals__6B_
          ;
          if (pFVar8 != (FArchiveState *)0x0) {
            LOCK();
            *(int *)&pFVar8->ActiveFPLB = *(int *)&pFVar8->ActiveFPLB + 1;
            UNLOCK();
          }
          local_70.Object = (FJsonObject *)pFVar10;
          local_70.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
          FJsonValueObject::FJsonValueObject((FJsonValueObject *)&pFVar6->InlineFPLB,&local_70);
          if ((&pFVar6->InlineFPLB == (FFastPathLoadBuffer *)0x0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          (pFVar5->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)&pFVar6->InlineFPLB;
          *(FArchiveState **)&pFVar5->field_0x28 = pFVar6;
          LOCK();
          *(int *)&pFVar6->ActiveFPLB = *(int *)&pFVar6->ActiveFPLB + 1;
          UNLOCK();
          pFVar9 = pFVar6;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar9);
        local_a0.Object = (FElement *)&pFVar5->InlineFPLB;
        *(undefined2 *)&pFVar5->ArSerializingDefaults = 0;
        local_a0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
        if ((local_a0.Object == (FElement *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      bVar2 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
              Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>
                        (&local_a0,
                         (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)local_80.Object,
                         true);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a0.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar8);
      if (bVar2) {
        pIVar7 = IFileManager::Get();
        local_58 = local_b0;
        iStack_50 = (int)local_a8 + -1;
        if ((int)local_a8 == 0) {
          iStack_50 = 0;
        }
        local_48._12_4_ = uStack_4c;
        local_48.Size = iStack_50;
        local_48.DataPtr = local_b0;
        bVar2 = FFileHelper::SaveStringToFile(&local_48,param_1,ForceAnsi,pIVar7,0);
        if (bVar2) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_80.SharedReferenceCount.ReferenceController);
          if (local_b0 != (wchar_t *)0x0) {
            FMemory::Free(local_b0);
          }
          bVar2 = true;
          goto LAB_1494ad1b3;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_80.SharedReferenceCount.ReferenceController);
      if (local_b0 != (wchar_t *)0x0) {
        FMemory::Free(local_b0);
      }
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar8);
    pFVar8 = (FArchiveState *)0x0;
  }
  bVar2 = false;
LAB_1494ad1b3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar8);
  return bVar2;
}

