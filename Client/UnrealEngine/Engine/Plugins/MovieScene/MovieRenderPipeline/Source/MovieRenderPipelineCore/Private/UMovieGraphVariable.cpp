// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 14

// StaticClass @ 14dc66530

UClass * __cdecl UMovieGraphVariable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphVariable",
               &Z_Registration_Info_UClass_UMovieGraphVariable.InnerSingleton,
               StaticRegisterNativesUMovieGraphVariable,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphVariable>,
               InternalVTableHelperCtorCaller<UMovieGraphVariable>,local_res8,
               UMovieGraphMember::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphVariable.InnerSingleton;
}

// UMovieGraphVariable @ 14dc738c0

UMovieGraphVariable * __thiscall
UMovieGraphVariable::UMovieGraphVariable(UMovieGraphVariable *this,FVTableHelper *param_1)

{
  UMovieGraphValueContainer::UMovieGraphValueContainer((UMovieGraphValueContainer *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMovieGraphVariable__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Category).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Category).Data.ArrayNum = 0;
  (this->Category).Data.ArrayMax = 0;
  return this;
}

// ~UMovieGraphVariable @ 14dc74910

void __thiscall UMovieGraphVariable::~UMovieGraphVariable(UMovieGraphVariable *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphVariable__6B_;
  pFVar1 = (this->Category).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMovieGraphMember__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UMovieGraphValueContainer::~UMovieGraphValueContainer((UMovieGraphValueContainer *)this);
  return;
}

// CanRename @ 14dc78aa0

bool __thiscall
UMovieGraphVariable::CanRename(UMovieGraphVariable *this,FText *param_1,FText *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  UMovieGraphConfig *this_00;
  TArray<UMovieGraphVariable_*,TSizedDefaultAllocator<32>_> *pTVar5;
  FString *pFVar6;
  FText *pFVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  ForAnyElementType *local_res20;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  TArray<UMovieGraphVariable_*,TSizedDefaultAllocator<32>_> local_28;
  
  bVar2 = UMovieGraphMember::CanRename((UMovieGraphMember *)this,param_1,param_2);
  if (!bVar2) {
    return false;
  }
  pUVar4 = UMovieGraphConfig::StaticClass();
  this_00 = (UMovieGraphConfig *)
            UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
  if (this_00 != (UMovieGraphConfig *)0x0) {
    pTVar5 = UMovieGraphConfig::GetVariables(this_00,&local_28,true);
    pFVar6 = FText::ToString(param_1);
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30 = (pFVar6->Data).ArrayNum;
    lVar8 = (longlong)local_30;
    pFVar1 = (pFVar6->Data).AllocatorInstance.Data;
    if (local_30 == 0) {
      local_2c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_30,0,&local_38,local_30,&local_2c);
      memcpy(local_38.Data,pFVar1,lVar8 * 2);
    }
    pFVar9 = (pTVar5->AllocatorInstance).Data;
    local_res20 = &local_38;
    pFVar1 = pFVar9 + (longlong)pTVar5->ArrayNum * 8;
    for (; pFVar9 != pFVar1; pFVar9 = pFVar9 + 8) {
      bVar2 = `UMovieGraphMember::IsUniqueNameInMemberArray<UMovieGraphVariable>'::__l2::<lambda_1>
              ::operator()(&local_res20,*(UMovieGraphVariable **)pFVar9);
      if (bVar2) {
        iVar3 = (int)this->_padding_;
        if (local_30 == iVar3) {
          if (local_30 < 2) break;
          iVar3 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)local_38.Data,(wchar_t *)this->_padding_);
          bVar2 = iVar3 == 0;
        }
        else {
          bVar2 = local_30 + iVar3 == 1;
        }
        if (!bVar2) {
          bVar2 = true;
          goto LAB_14dc78ba3;
        }
        break;
      }
    }
    bVar2 = false;
LAB_14dc78ba3:
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    if (bVar2) {
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)&local_28,L"MovieGraphConfig",L"InvalidVariableRename_Exists",
                          L"A variable with this name already exists.");
      FText::operator=(param_2,pFVar7);
      if (local_28.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return false;
      }
      (**(code **)(*(longlong *)local_28.AllocatorInstance.Data + 0x10))();
      return false;
    }
  }
  return true;
}

// GetCategory @ 14dc7f3c0

FString * __thiscall UMovieGraphVariable::GetCategory(UMovieGraphVariable *this)

{
  return &this->Category;
}

// GetPrivateStaticClass @ 14dc824e0

UClass * __cdecl UMovieGraphVariable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphVariable",
               &Z_Registration_Info_UClass_UMovieGraphVariable.InnerSingleton,
               StaticRegisterNativesUMovieGraphVariable,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphVariable>,
               InternalVTableHelperCtorCaller<UMovieGraphVariable>,local_res8,
               UMovieGraphMember::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphVariable.InnerSingleton;
}

// IsDeletable @ 14dc84310

bool __thiscall UMovieGraphVariable::IsDeletable(UMovieGraphVariable *this)

{
  return true;
}

// IsGlobal @ 14dc84390

bool __thiscall UMovieGraphVariable::IsGlobal(UMovieGraphVariable *this)

{
  int iVar1;
  UClass *pUVar2;
  
  pUVar2 = UMovieGraphGlobalVariable::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return true;
  }
  return false;
}

// SetCategory @ 14dc88d30

/* WARNING: Removing unreachable block (ram,0x00014dc8916e) */

void __thiscall UMovieGraphVariable::SetCategory(UMovieGraphVariable *this,FString *param_1)

{
  FString *this_00;
  FScriptContainerElement *pFVar1;
  int iVar2;
  void *pvVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  int iVar6;
  uint uVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  UMovieGraphConfig *pUVar10;
  FString *pFVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  bool bVar18;
  <lambda_2> local_res8;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  TArray<UMovieGraphVariable_*,TSizedDefaultAllocator<32>_> local_a8;
  FString local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  TArray<FString,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  FString local_48;
  
  iVar6 = (param_1->Data).ArrayNum;
  this_00 = &this->Category;
  iVar2 = (this->Category).Data.ArrayNum;
  if (iVar2 == iVar6) {
    if (iVar2 < 2) {
      return;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this_00->Data).AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar18 = iVar6 == 0;
  }
  else {
    bVar18 = iVar2 + iVar6 == 1;
  }
  if (!bVar18) {
    pUVar8 = UMovieGraphConfig::StaticClass();
    pUVar9 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar8);
    uVar15 = 0;
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ArrayNum = *(int *)(pUVar9 + 2);
    lVar13 = (longlong)local_a8.ArrayNum;
    pvVar3 = *(void **)&pUVar9[1].field_0x20;
    if (local_a8.ArrayNum == 0) {
      local_a8.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_a8.ArrayNum,0,&local_a8.AllocatorInstance,local_a8.ArrayNum,
                 &local_a8.ArrayMax);
      memcpy(local_a8.AllocatorInstance.Data,pvVar3,lVar13 << 3);
    }
    local_res8 = SUB81(this,0);
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 0;
    Algo::
    Transform<TArray<UMovieGraphVariable_*,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,_UMovieGraphVariable::SetCategory_::__l2::<lambda_2>_>
              (&local_a8,&local_68,local_res8);
    pFVar16 = local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 0x10;
    for (FVar14.Data = local_68.AllocatorInstance.Data; FVar14.Data != pFVar16;
        FVar14.Data = FVar14.Data + 0x10) {
      iVar6 = *(int *)(FVar14.Data + 8);
      iVar2 = (param_1->Data).ArrayNum;
      if (iVar6 == iVar2) {
        if (1 < iVar6) {
          iVar6 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)FVar14.Data,
                             (wchar_t *)(param_1->Data).AllocatorInstance.Data);
          bVar18 = iVar6 == 0;
          goto LAB_14dc88e69;
        }
LAB_14dc88f93:
        iVar6 = TArray<UMovieGraphVariable_*,TSizedDefaultAllocator<32>_>::
                FindLastByPredicate<_UMovieGraphVariable::SetCategory_::__l8::<lambda_3>_>
                          (&local_a8,(<lambda_3>)param_1,local_a8.ArrayNum);
        if (iVar6 != -1) {
          pUVar8 = UMovieGraphConfig::StaticClass();
          pUVar10 = (UMovieGraphConfig *)
                    UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar8);
          UMovieGraphConfig::MoveVariableToIndex(pUVar10,this,iVar6 + 1);
        }
        goto LAB_14dc893bf;
      }
      bVar18 = iVar6 + iVar2 == 1;
LAB_14dc88e69:
      if (bVar18) goto LAB_14dc88f93;
    }
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    ::FString::ParseIntoArray(param_1,&local_88,L"|",true);
    local_b8.Data = (FScriptContainerElement *)0x0;
    local_b0 = 0;
    if (0 < local_88.ArrayNum) {
      do {
        if (uVar15 == 0) {
          if ((local_88.ArrayNum < 1) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar14.Data = local_88.AllocatorInstance.Data;
          if (((local_b8.Data <= local_88.AllocatorInstance.Data) &&
              (local_88.AllocatorInstance.Data < local_b8.Data + (longlong)local_b0._4_4_ * 0x10))
             && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar18)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((int)local_b0 == local_b0._4_4_) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_b8,(int *)((longlong)&local_b0 + 4));
            local_b0 = CONCAT44(local_b0._4_4_,iVar6);
          }
          lVar13 = (longlong)(int)local_b0;
          local_b0 = CONCAT44(local_b0._4_4_,(int)local_b0 + 1);
          ::FString::FString((FString *)(local_b8.Data + lVar13 * 0x10),(FString *)FVar14.Data);
        }
        else {
          uVar7 = 0;
          if ((int)uVar15 < local_88.ArrayNum) {
            uVar7 = ~uVar15 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar16 = local_88.AllocatorInstance.Data + (longlong)(int)uVar15 * 0x10;
          uVar7 = 0;
          if ((int)((int)local_b0 - 1U) < (int)local_b0) {
            uVar7 = ~((int)local_b0 - 1U) >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          ::FString::ConcatFC(&local_58,
                              (FString *)(local_b8.Data + (longlong)((int)local_b0 + -1) * 0x10),
                              L"|");
          ::FString::ConcatFF(&local_98,&local_58,(FString *)pFVar16);
          if (((local_b8.Data <= (FScriptContainerElement *)&local_98) &&
              ((FScriptContainerElement *)&local_98 <
               local_b8.Data + (longlong)local_b0._4_4_ * 0x10)) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar18)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar6 = (int)local_b0;
          if ((int)local_b0 == local_b0._4_4_) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_b8,(int *)((longlong)&local_b0 + 4));
          }
          local_b0 = CONCAT44(local_b0._4_4_,iVar6 + 1);
          pFVar16 = local_b8.Data + (longlong)iVar6 * 0x10;
          *(undefined8 *)pFVar16 = 0;
          *(FScriptContainerElement **)pFVar16 = local_98.Data.AllocatorInstance.Data;
          *(int *)(pFVar16 + 8) = local_98.Data.ArrayNum;
          *(int *)(pFVar16 + 0xc) = local_98.Data.ArrayMax;
          local_98.Data.ArrayNum = 0;
          local_98.Data.ArrayMax = 0;
          local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < local_88.ArrayNum);
    }
    uVar15 = (int)local_b0 - 1;
    if (-1 < (int)uVar15) {
      lVar13 = (longlong)(int)uVar15 << 4;
      do {
        uVar7 = 0;
        if ((int)uVar15 < (int)local_b0) {
          uVar7 = ~uVar15 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_78.Data = (FScriptContainerElement *)0x0;
        local_70 = *(int *)(local_b8.Data + lVar13 + 8);
        lVar17 = (longlong)local_70;
        pvVar3 = *(void **)(local_b8.Data + lVar13);
        if (local_70 == 0) {
          local_6c = 0;
          iVar6 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_70,0,&local_78,local_70,&local_6c);
          memcpy(local_78.Data,pvVar3,lVar17 * 2);
          iVar6 = local_70;
        }
        FVar5.Data = local_a8.AllocatorInstance.Data;
        pFVar16 = local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayNum * 8;
        FVar12.Data = local_78.Data;
        for (FVar14.Data = local_a8.AllocatorInstance.Data; FVar14.Data != pFVar16;
            FVar14.Data = FVar14.Data + 8) {
          iVar2 = *(int *)(*(longlong *)FVar14.Data + 0x80);
          if (iVar2 == iVar6) {
            if (1 < iVar2) {
              iVar6 = FGenericPlatformStricmp::Stricmp
                                (*(wchar_t **)(*(longlong *)FVar14.Data + 0x78),
                                 (wchar_t *)FVar12.Data);
              bVar18 = iVar6 == 0;
              FVar12.Data = local_78.Data;
              iVar6 = local_70;
              goto LAB_14dc8929d;
            }
LAB_14dc892af:
            iVar6 = (int)((longlong)FVar14.Data - (longlong)FVar5.Data >> 3);
            if (iVar6 != -1) {
              if (FVar12.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar12.Data);
              }
              pUVar8 = UMovieGraphConfig::StaticClass();
              pUVar10 = (UMovieGraphConfig *)
                        UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar8);
              goto LAB_14dc8936e;
            }
            break;
          }
          bVar18 = iVar2 + iVar6 == 1;
LAB_14dc8929d:
          if (bVar18) goto LAB_14dc892af;
        }
        if (FVar12.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar12.Data);
        }
        lVar13 = lVar13 + -0x10;
        uVar15 = uVar15 - 1;
      } while (-1 < (int)uVar15);
    }
    lVar13 = (longlong)local_a8.ArrayNum;
    if ((local_a8.ArrayNum < 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Count >= 0 && Count <= this->Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x55b,L""), bVar18)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar16 = local_a8.AllocatorInstance.Data + lVar13 * 8;
    do {
      if (pFVar16 == local_a8.AllocatorInstance.Data) goto LAB_14dc8935b;
      pFVar1 = pFVar16 + -8;
      pFVar16 = pFVar16 + -8;
    } while (*(int *)(*(longlong *)pFVar1 + 0x80) < 2);
    iVar6 = (int)((longlong)pFVar16 - (longlong)local_a8.AllocatorInstance.Data >> 3);
    if (iVar6 == -1) {
LAB_14dc8935b:
      pUVar8 = UMovieGraphConfig::StaticClass();
      pUVar10 = (UMovieGraphConfig *)
                UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar8);
      iVar6 = 0;
    }
    else if (iVar6 == local_a8.ArrayNum + -1) {
      pUVar8 = UMovieGraphConfig::StaticClass();
      pUVar10 = (UMovieGraphConfig *)
                UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar8);
      iVar6 = local_a8.ArrayNum;
    }
    else {
      pUVar8 = UMovieGraphConfig::StaticClass();
      pUVar10 = (UMovieGraphConfig *)
                UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar8);
      iVar6 = iVar6 + 1;
    }
LAB_14dc8936e:
    UMovieGraphConfig::MoveVariableToIndex(pUVar10,this,iVar6);
    DestructItems<FString,int>((FString *)local_b8.Data,(int)local_b0);
    if (local_b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data);
    }
    DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
    if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
LAB_14dc893bf:
    pFVar11 = ::FName::NameToDisplayString(&local_48,param_1,false);
    if (this_00 != pFVar11) {
      pFVar16 = (this_00->Data).AllocatorInstance.Data;
      if (pFVar16 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar16);
      }
      (this_00->Data).AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
      (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->Category).Data.ArrayNum = (pFVar11->Data).ArrayNum;
      (this->Category).Data.ArrayMax = (pFVar11->Data).ArrayMax;
      (pFVar11->Data).ArrayNum = 0;
      (pFVar11->Data).ArrayMax = 0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    ::FString::ReplaceInline(this_00,L"| ",L"|",CaseSensitive);
    DestructItems<FString,int>((FString *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
    if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
  }
  return;
}

// SetMemberName @ 14dc895a0

bool __thiscall UMovieGraphVariable::SetMemberName(UMovieGraphVariable *this,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  FText *pFVar3;
  FText FStack_28;
  FText FStack_18;
  
  FText::FText(&FStack_28);
  pcVar1 = *(code **)(this->_padding_ + 0x2b8);
  pFVar3 = FText::FromString(&FStack_18,param_1);
  cVar2 = (*pcVar1)(this,pFVar3,&FStack_28);
  if (FStack_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_18.TextData.Reference + 0x10))();
  }
  if (cVar2 != '\0') {
    ::FString::operator=((FString *)&this->_padding_,param_1);
  }
  if (FStack_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_28.TextData.Reference + 0x10))();
  }
  return cVar2 != '\0';
}

// StaticRegisterNativesUMovieGraphVariable @ 14dc89cb0

void __cdecl UMovieGraphVariable::StaticRegisterNativesUMovieGraphVariable(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UMovieGraphVariable_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCategory @ 14dc91210

void __cdecl UMovieGraphVariable::execGetCategory(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::operator=(param_3,(FString *)(param_1 + 3));
  return;
}

// execIsGlobal @ 14dc95bf0

void __cdecl UMovieGraphVariable::execIsGlobal(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  UClass *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = UMovieGraphGlobalVariable::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    *(undefined1 *)param_3 = 1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execSetCategory @ 14dc978d0

void __cdecl UMovieGraphVariable::execSetCategory(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetCategory((UMovieGraphVariable *)param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

