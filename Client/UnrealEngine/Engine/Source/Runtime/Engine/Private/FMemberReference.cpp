// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 20

// SetFromField<FProperty> @ 14776abc0

void __thiscall
FMemberReference::SetFromField<FProperty>
          (FMemberReference *this,FField *param_1,bool param_2,UClass *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  UPackage *pUVar4;
  FName FVar5;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  FName FVar8;
  undefined4 local_res18 [4];
  TArray<IBlueprintPropertyGuidProvider_*,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  
  FVar8.ComparisonIndex.Value = 0;
  FVar8.Number = 0;
  local_res18[0] = 0;
  if (param_3 == (UClass *)0x0) {
    param_3 = FField::GetOwnerClass(param_1);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  (this->MemberParent).field0_0x0.DebugPtr = (UObject *)param_3;
  if (param_2) {
    (this->MemberParent).field0_0x0.DebugPtr = (UObject *)0x0;
    goto LAB_14776acc9;
  }
  FVar5 = FVar8;
  if (param_3 == (UClass *)0x0) {
    bVar3 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar3) {
      ::FName::ToString(&param_1->NamePrivate,&local_38);
    }
    else {
      ::FString::FString(&local_38,L"None");
    }
    FVar5.ComparisonIndex.Value = 1;
    FVar5.Number = 0;
    bVar3 = ::FString::EndsWith(&local_38,L"__DelegateSignature",0x13,IgnoreCase);
    if (!bVar3) goto LAB_14776ac88;
    bVar3 = true;
  }
  else {
LAB_14776ac88:
    bVar3 = false;
  }
  if ((FVar5 != (FName)0x0) &&
     ((void *)CONCAT44(local_38.Data.AllocatorInstance.Data._4_4_,
                       (int)local_38.Data.AllocatorInstance.Data) != (void *)0x0)) {
    FMemory::Free((void *)CONCAT44(local_38.Data.AllocatorInstance.Data._4_4_,
                                   (int)local_38.Data.AllocatorInstance.Data));
  }
  if (bVar3) {
    pUVar4 = FField::GetOutermost(param_1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UPackage *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->MemberParent).field0_0x0.DebugPtr = (UObject *)pUVar4;
  }
LAB_14776acc9:
  bVar3 = IsThisNotNull(param_1,"FField::GetFName");
  FVar5 = FVar8;
  if (bVar3) {
    FVar5 = param_1->NamePrivate;
  }
  this->MemberName = FVar5;
  this->bSelfContext = param_2;
  (this->MemberGuid).C = 0;
  (this->MemberGuid).D = 0;
  (this->MemberGuid).A = 0;
  (this->MemberGuid).B = 0;
  this->bWasDeprecated = false;
  if (param_3 != (UClass *)0x0) {
    bVar3 = IsThisNotNull(param_1,"FField::GetFName");
    if (bVar3) {
      FVar8 = param_1->NamePrivate;
    }
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    UBlueprint::GetBlueprintHierarchyFromClass(param_3,&local_48);
    iVar2 = local_48.ArrayNum;
    uVar6 = (ulonglong)local_48.ArrayNum;
    pFVar1 = local_48.AllocatorInstance.Data + uVar6 * 8;
    FVar7.Data = local_48.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar6 != iVar2) {
        `TCheckedPointerIterator<IBlueprintPropertyGuidProvider_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (FVar7.Data == pFVar1) goto LAB_14776ad9c;
      (**(code **)(**(longlong **)FVar7.Data + 0x10))(*(longlong **)FVar7.Data,&local_38,FVar8);
      if (((local_38.Data.ArrayMax != 0 || local_38.Data.ArrayNum != 0) ||
          local_38.Data.AllocatorInstance.Data._4_4_ != 0) ||
          (int)local_38.Data.AllocatorInstance.Data != 0) break;
      uVar6 = local_48._8_8_ & 0xffffffff;
      FVar7.Data = FVar7.Data + 8;
    }
    (this->MemberGuid).A = (int)local_38.Data.AllocatorInstance.Data;
    (this->MemberGuid).B = local_38.Data.AllocatorInstance.Data._4_4_;
    (this->MemberGuid).C = local_38.Data.ArrayNum;
    (this->MemberGuid).D = local_38.Data.ArrayMax;
LAB_14776ad9c:
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  return;
}

// StaticStruct @ 147f90fb0

UScriptStruct * __cdecl FMemberReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMemberReference.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FMemberReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMemberReference,(UObject *)pUVar1,
                         L"MemberReference");
  }
  return Z_Registration_Info_UScriptStruct_FMemberReference.OuterSingleton;
}

// ResolveMemberImpl<UFunction,UClass> @ 147f9fda0

/* WARNING: Removing unreachable block (ram,0x000147fa0195) */
/* WARNING: Enum "Type": Some values do not have unique names */

UFunction * __thiscall
FMemberReference::ResolveMemberImpl<UFunction,UClass>
          (FMemberReference *this,UClass *param_1,UClass *param_2,bool param_3,bool param_4)

{
  int iVar1;
  FName FVar2;
  FName FVar3;
  UObject *pUVar4;
  bool bVar5;
  UClass *pUVar6;
  UPackage *pUVar7;
  TObjectPtr<UField>_u_0 TVar8;
  FProperty *pFVar9;
  FString *pFVar10;
  size_t sVar11;
  FFieldClass *pFVar12;
  TObjectPtr<UField>_u_0 TVar13;
  wchar_t *pwVar14;
  undefined4 uVar15;
  TObjectPtr<UField>_u_0 TVar16;
  FName local_res8;
  undefined1 local_68 [16];
  TObjectPtr<UField>_u_0 local_58;
  TObjectPtr<UField>_u_0 local_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  
  pwVar14 = L"";
  TVar16.DebugPtr = (UField *)0x0;
  uVar15 = 0;
  if (((this->bSelfContext != false) && (param_1 == (UClass *)0x0)) &&
     (2 < (byte)LogBlueprint._0_1_)) {
    ::FName::ToString(&this->MemberName,(FString *)local_68);
    UE::Logging::Private::BasicLog<3>
              (&`public:_class_UFunction*___ptr64___cdecl_FMemberReference::ResolveMemberImpl<UFunction,UClass>(UClass*___ptr64,UClass*___ptr64,bool,bool)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
    if ((FMemberReference *)local_68._0_8_ != (FMemberReference *)0x0) {
      FMemory::Free((void *)local_68._0_8_);
    }
  }
  TVar8.DebugPtr = TVar16.DebugPtr;
  if ((this->MemberScope).Data.ArrayNum < 2) {
    TVar13 = (TObjectPtr<UField>_u_0)param_1;
    if (this->bSelfContext == false) {
      if ((this->MemberParent).field0_0x0.DebugPtr != (UObject *)0x0) {
        pUVar6 = Z_Construct_UClass_UClass_NoRegister();
        bVar5 = FObjectPtr::IsA((FObjectPtr *)this,pUVar6);
        if (bVar5) {
          TVar13.ObjectPtr.field0_0x0 =
               (FObjectPtr)(FObjectPtr)(this->MemberParent).field0_0x0.DebugPtr;
          goto LAB_147f9ff8d;
        }
      }
      TVar13.DebugPtr = (UField *)0x0;
    }
LAB_147f9ff8d:
    if (param_3) {
      if ((UClass *)TVar13.DebugPtr != (UClass *)0x0) {
        FVar2 = this->MemberName;
        FVar3 = (FName)param_2->_padding_;
        pUVar7 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_2);
        TVar8.DebugPtr =
             FindRemappedFieldImpl<UField>
                       ((FName)pUVar7->_padding_,FVar3,TVar13.DebugPtr,FVar2,true);
        if ((UClass *)TVar8.DebugPtr == (UClass *)0x0) goto LAB_147fa00b9;
        uVar15 = *(undefined4 *)((longlong)((longlong)TVar8 + 0x18) + 4);
        (this->MemberName).ComparisonIndex = (FNameEntryId)*(undefined4 *)((longlong)TVar8 + 0x18);
        (this->MemberName).Number = uVar15;
        TVar13 = (TObjectPtr<UField>_u_0)(TVar8.DebugPtr)->_padding_;
        if ((UClass *)TVar13.DebugPtr == (UClass *)0x0) {
LAB_147fa0009:
          TVar13.DebugPtr = TVar16.DebugPtr;
        }
        else {
          pUVar6 = Z_Construct_UClass_UClass_NoRegister();
          iVar1 = (int)pUVar6->_padding_;
          if ((*(int *)((TVar13.DebugPtr)->_padding_ + 0x38) < iVar1) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)((TVar13.DebugPtr)->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar6->_padding_)) goto LAB_147fa0009;
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UClass *)TVar13.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar13.DebugPtr);
        }
        (this->MemberParent).field0_0x0.DebugPtr = (UObject *)TVar13;
        (this->MemberGuid).C = 0;
        (this->MemberGuid).D = 0;
        (this->MemberGuid).A = 0;
        (this->MemberGuid).B = 0;
        if ((this->MemberParent).field0_0x0.DebugPtr != (UObject *)0x0) {
          pUVar6 = Z_Construct_UClass_UClass_NoRegister();
          bVar5 = FObjectPtr::IsA((FObjectPtr *)this,pUVar6);
          if ((bVar5) &&
             (pUVar4 = (this->MemberParent).field0_0x0.DebugPtr, pUVar4 != (UObject *)0x0)) {
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar4);
            }
            (this->MemberParent).field0_0x0.DebugPtr = pUVar4;
            if ((param_1 != (UClass *)0x0) && ((this->bSelfContext != false || (!param_4)))) {
              if (((int)param_1->_padding_ < *(int *)&pUVar4[1].field_0x10) ||
                 (*(undefined1 **)(param_1->_padding_ + (longlong)*(int *)&pUVar4[1].field_0x10 * 8)
                  != &pUVar4[1].field_0x8)) {
                this->bSelfContext = false;
              }
              else {
                this->bSelfContext = true;
                (this->MemberParent).field0_0x0.DebugPtr = (UObject *)0x0;
              }
            }
          }
        }
        goto LAB_147fa037a;
      }
    }
    else {
LAB_147fa00b9:
      if ((UClass *)TVar13.DebugPtr != (UClass *)0x0) {
        FVar2 = this->MemberName;
        local_68._0_8_ = this;
        local_68._8_8_ = TVar13;
        if (FVar2 != (FName)0x0) {
          local_50 = (TObjectPtr<UField>_u_0)TVar13.DebugPtr[1]._padding_;
          local_48 = 0xffffffff;
          local_44 = 0x101;
          local_58 = TVar13;
          pUVar6 = Z_Construct_UClass_UClass_NoRegister();
          iVar1 = (int)pUVar6->_padding_;
          if ((*(int *)((TVar13.DebugPtr)->_padding_ + 0x38) < iVar1) ||
             (local_42 = 1,
             (longlong *)
             *(undefined1 **)
              (*(longlong *)((TVar13.DebugPtr)->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
             &pUVar6->_padding_)) {
            local_42 = 0;
          }
          TFieldIterator<UFunction>::IterateToNext((TFieldIterator<UFunction> *)&local_58.ObjectPtr)
          ;
          TVar16 = local_50;
          while (local_50 = TVar16, (UClass *)TVar16.DebugPtr != (UClass *)0x0) {
            if ((FName)(TVar16.DebugPtr)->_padding_ == FVar2) {
              if ((UClass *)TVar16.DebugPtr != (UClass *)0x0) {
                local_res8 = (FName)((ulonglong)TVar16.DebugPtr | 1);
                if (((UObject *)((ulonglong)TVar16.DebugPtr & 0xfffffffffffffffe) != (UObject *)0x0)
                   && (UE::GC::GIsIncrementalReachabilityPending != false)) {
                  UE::GC::MarkAsReachable
                            ((UObject *)((ulonglong)TVar16.DebugPtr & 0xfffffffffffffffe));
                }
                pFVar9 = FFieldVariant::Get<FProperty>((FFieldVariant *)&local_res8);
                if (((pFVar9 == (FProperty *)0x0) ||
                    (((uint)(int)pFVar9->PropertyFlags >> 0x1d & 1) == 0)) ||
                   (TVar8.DebugPtr =
                         (UField *)
                         `FMemberReference::ResolveMemberImpl<UFunction,UClass>'::__l39::<lambda_1>
                         ::operator()(local_68), (UClass *)TVar8.DebugPtr == (UClass *)0x0)) {
                  TVar8 = TVar16;
                }
                goto LAB_147fa015c;
              }
              break;
            }
            local_50 = (TObjectPtr<UField>_u_0)((TVar16.DebugPtr)->Next).field0_0x0.DebugPtr;
            TFieldIterator<UFunction>::IterateToNext
                      ((TFieldIterator<UFunction> *)&local_58.ObjectPtr);
            TVar16 = local_50;
          }
        }
        TVar8.DebugPtr =
             (UField *)
             `FMemberReference::ResolveMemberImpl<UFunction,UClass>'::__l39::<lambda_1>::operator()
                       (local_68);
LAB_147fa015c:
        if (((param_3) && ((UClass *)TVar8.DebugPtr == (UClass *)0x0)) &&
           ((((this->MemberGuid).D != 0 || (this->MemberGuid).C != 0) || (this->MemberGuid).B != 0)
            || (this->MemberGuid).A != 0)) {
          local_68._0_8_ = (FMemberReference *)0x0;
        }
        goto LAB_147fa037a;
      }
    }
    pUVar7 = GetMemberParentPackage(this);
    if (pUVar7 == (UPackage *)0x0) {
      pFVar10 = ::FName::ToString(&this->MemberName,(FString *)&local_58.ObjectPtr);
      bVar5 = ::FString::EndsWith(pFVar10,L"__DelegateSignature",0x13,IgnoreCase);
      if ((UClass *)local_58.DebugPtr != (UClass *)0x0) {
        FMemory::Free(local_58.DebugPtr);
      }
      if ((bVar5) &&
         (TVar8.DebugPtr = (UField *)ResolveUFunctionImpl<UFunction>(this->MemberName),
         (UClass *)TVar8.DebugPtr != (UClass *)0x0)) {
        if (3 < (byte)LogBlueprint._0_1_) {
          UObjectBaseUtility::GetPathName
                    ((UObjectBaseUtility *)TVar8.DebugPtr,(FString *)local_68,(UObject *)0x0);
          ::FName::ToString(&this->MemberName,(FString *)&local_58.ObjectPtr);
          UE::Logging::Private::BasicLog<4>
                    (&`public:_class_UFunction*___ptr64___cdecl_FMemberReference::ResolveMemberImpl<UFunction,UClass>(UClass*___ptr64,UClass*___ptr64,bool,bool)const___ptr64'
                      ::__l76::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
          if ((UClass *)local_58.DebugPtr != (UClass *)0x0) {
            FMemory::Free(local_58.DebugPtr);
          }
          if ((FMemberReference *)local_68._0_8_ != (FMemberReference *)0x0) {
            FMemory::Free((void *)local_68._0_8_);
          }
        }
        pUVar7 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)TVar8.DebugPtr);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UPackage *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
        }
        (this->MemberParent).field0_0x0.DebugPtr = (UObject *)pUVar7;
      }
      goto LAB_147fa037a;
    }
    local_res8 = this->MemberName;
    pFVar10 = ::FName::ToString(&local_res8,(FString *)&local_58.ObjectPtr);
    if ((pFVar10->Data).ArrayNum == 0) {
      local_68._0_8_ = L"";
LAB_147fa0243:
      sVar11 = wcslen((wchar_t *)local_68._0_8_);
      uVar15 = (undefined4)sVar11;
    }
    else {
      local_68._0_8_ = (pFVar10->Data).AllocatorInstance.Data;
      if ((FMemberReference *)local_68._0_8_ != (FMemberReference *)0x0) goto LAB_147fa0243;
    }
    local_68._8_4_ = uVar15;
    pUVar6 = Z_Construct_UClass_UFunction_NoRegister();
    TVar8.DebugPtr =
         (UField *)StaticFindObject(pUVar6,(UObject *)pUVar7,(TStringView<wchar_t> *)local_68,None);
    if ((UClass *)local_58.DebugPtr != (UClass *)0x0) {
      FMemory::Free(local_58.DebugPtr);
    }
    goto LAB_147fa037a;
  }
  if ((this->MemberScope).Data.ArrayNum != 0) {
    pwVar14 = (wchar_t *)(this->MemberScope).Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar14,FNAME_Find);
  TVar13.DebugPtr = TVar16.DebugPtr;
  if (local_res8 != (FName)0x0) {
    if (param_1 == (UClass *)0x0) {
      local_50.DebugPtr = (UField *)0x0;
    }
    else {
      local_50 = (TObjectPtr<UField>_u_0)param_1->_padding_;
    }
    local_48 = 0xffffffff;
    local_44 = 0x101;
    local_42 = 0;
    local_58 = (TObjectPtr<UField>_u_0)param_1;
    TFieldIterator<UStruct>::IterateToNext((TFieldIterator<UStruct> *)&local_58.ObjectPtr);
    while ((UClass *)local_50.DebugPtr != (UClass *)0x0) {
      TVar13 = local_50;
      if ((FName)(local_50.DebugPtr)->_padding_ == local_res8) goto LAB_147f9feb7;
      local_50 = (TObjectPtr<UField>_u_0)((local_50.DebugPtr)->Next).field0_0x0.DebugPtr;
      TFieldIterator<UStruct>::IterateToNext((TFieldIterator<UStruct> *)&local_58.ObjectPtr);
    }
    TVar13.DebugPtr = (UField *)0x0;
  }
LAB_147f9feb7:
  FVar2 = this->MemberName;
  if (FVar2 == (FName)0x0) goto LAB_147fa037a;
  local_48 = 0xffffffff;
  local_44 = 0x101;
  local_58 = TVar13;
  if ((UClass *)TVar13.DebugPtr == (UClass *)0x0) {
    local_50.DebugPtr = (UField *)0x0;
LAB_147f9ff13:
    local_42 = 0;
  }
  else {
    local_50 = (TObjectPtr<UField>_u_0)TVar13.DebugPtr[1]._padding_;
    pUVar6 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)((TVar13.DebugPtr)->_padding_ + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)((TVar13.DebugPtr)->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar6->_padding_)) goto LAB_147f9ff13;
    local_42 = 1;
  }
  TFieldIterator<UFunction>::IterateToNext((TFieldIterator<UFunction> *)&local_58.ObjectPtr);
  while ((TVar8.DebugPtr = TVar16.DebugPtr, (UClass *)local_50.DebugPtr != (UClass *)0x0 &&
         (TVar8 = local_50, (FName)(local_50.DebugPtr)->_padding_ != FVar2))) {
    local_50 = (TObjectPtr<UField>_u_0)((local_50.DebugPtr)->Next).field0_0x0.DebugPtr;
    TFieldIterator<UFunction>::IterateToNext((TFieldIterator<UFunction> *)&local_58.ObjectPtr);
  }
LAB_147fa037a:
  local_res8 = (FName)((ulonglong)TVar8.DebugPtr | 1);
  if (((UObject *)((ulonglong)TVar8.DebugPtr & 0xfffffffffffffffe) != (UObject *)0x0) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)TVar8.DebugPtr & 0xfffffffffffffffe));
  }
  pFVar12 = FProperty::StaticClass();
  bVar5 = FFieldVariant::IsA((FFieldVariant *)&local_res8,pFVar12);
  if ((bVar5) && (local_res8 != (FName)0x0)) {
    this->bWasDeprecated =
         (bool)((byte)((uint)*(undefined4 *)((longlong)local_res8 + 0x38) >> 0x1d) & 1);
  }
  return (UFunction *)TVar8.DebugPtr;
}

// operator() @ 147fae280

UFunction * __thiscall
`FMemberReference::ResolveMemberImpl<UFunction,UClass>'::__l39::<lambda_1>::operator()(void *this)

{
  int iVar1;
  longlong lVar2;
  UScriptStruct *pUVar3;
  UClass *pUVar4;
  TFieldIterator<UFunction> local_28;
  
  pUVar3 = UClass::GetSparseClassDataStruct(*(UClass **)((longlong)this + 8));
  if ((pUVar3 != (UScriptStruct *)0x0) &&
     (lVar2 = *(longlong *)(*(longlong *)this + 0x18), lVar2 != 0)) {
    local_28.Field = (UField *)pUVar3->_padding_;
    local_28.InterfaceIndex = -1;
    local_28.bIncludeSuper = true;
    local_28.bIncludeDeprecated = true;
    local_28.Struct = (UStruct *)pUVar3;
    pUVar4 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
       (local_28.bIncludeInterface = true,
       (longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
       != &pUVar4->_padding_)) {
      local_28.bIncludeInterface = false;
    }
    TFieldIterator<UFunction>::IterateToNext(&local_28);
    while ((UFunction *)local_28.Field != (UFunction *)0x0) {
      if (((UFunction *)local_28.Field)->_padding_ == lVar2) {
        return (UFunction *)local_28.Field;
      }
      local_28.Field = (UField *)((UFunction *)local_28.Field)->_padding_;
      TFieldIterator<UFunction>::IterateToNext(&local_28);
    }
  }
  return (UFunction *)0x0;
}

// FindRemappedField @ 147fcce30

FField * __cdecl
FMemberReference::FindRemappedField(FFieldClass *param_1,UClass *param_2,FName param_3,bool param_4)

{
  FName FVar1;
  FField *pFVar2;
  FName local_res8;
  
  FVar1 = param_1->Name;
  FLazyName::Resolve(&GLongCoreUObjectPackageName);
  pFVar2 = FindRemappedFieldImpl<FField>(local_res8,FVar1,param_2,param_3,param_4);
  return pFVar2;
}

// FindRemappedField @ 147fccea0

UField * __cdecl
FMemberReference::FindRemappedField(UClass *param_1,UClass *param_2,FName param_3,bool param_4)

{
  FName FVar1;
  UPackage *pUVar2;
  UField *pUVar3;
  
  FVar1 = (FName)param_1->_padding_;
  pUVar2 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
  pUVar3 = FindRemappedFieldImpl<UField>((FName)pUVar2->_padding_,FVar1,param_2,param_3,param_4);
  return pUVar3;
}

// GetMemberParentPackage @ 147fd37b0

UPackage * __thiscall FMemberReference::GetMemberParentPackage(FMemberReference *this)

{
  UObjectBaseUtility *this_00;
  bool bVar1;
  UClass *pUVar2;
  UPackage *pUVar3;
  
  if ((this->MemberParent).field0_0x0.DebugPtr != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UPackage_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this,pUVar2);
    if ((bVar1) &&
       (pUVar3 = (UPackage *)(this->MemberParent).field0_0x0.DebugPtr, pUVar3 != (UPackage *)0x0)) {
      return pUVar3;
    }
  }
  this_00 = (UObjectBaseUtility *)(this->MemberParent).field0_0x0.DebugPtr;
  if (this_00 == (UObjectBaseUtility *)0x0) {
    return (UPackage *)0x0;
  }
  pUVar3 = UObjectBaseUtility::GetOutermost(this_00);
  return pUVar3;
}

// InvalidateScope @ 147fe2210

void __thiscall FMemberReference::InvalidateScope(FMemberReference *this)

{
  if (this->bSelfContext != false) {
    (this->MemberParent).field0_0x0.DebugPtr = (UObject *)0x0;
    return;
  }
  if (1 < (this->MemberScope).Data.ArrayNum) {
    ::FString::Empty(&this->MemberScope);
    this->bSelfContext = true;
  }
  return;
}

// IsSparseClassData @ 147fe32d0

bool __thiscall FMemberReference::IsSparseClassData(FMemberReference *this,UClass *param_1)

{
  UScriptStruct *pUVar1;
  FProperty *pFVar2;
  
  if (param_1 != (UClass *)0x0) {
    pUVar1 = UClass::GetSparseClassDataStruct(param_1);
    if (pUVar1 != (UScriptStruct *)0x0) {
      pFVar2 = FindFProperty<FProperty>((UStruct *)pUVar1,this->MemberName,Default);
      return pFVar2 != (FProperty *)0x0;
    }
  }
  return false;
}

// ResolveMemberFunction @ 147fee9c0

UFunction * __thiscall
FMemberReference::ResolveMemberFunction(FMemberReference *this,UClass *param_1,bool param_2)

{
  UClass *pUVar1;
  UFunction *pUVar2;
  
  pUVar1 = Z_Construct_UClass_UFunction_NoRegister();
  pUVar2 = ResolveMemberImpl<UFunction,UClass>(this,param_1,pUVar1,param_2,true);
  return pUVar2;
}

// ResolveMemberProperty @ 147feea10

FProperty * __thiscall
FMemberReference::ResolveMemberProperty
          (FMemberReference *this,UClass *param_1,bool param_2,FFieldClass *param_3)

{
  FFieldClass *pFVar1;
  FProperty *pFVar2;
  
  pFVar1 = FMulticastDelegateProperty::StaticClass();
  pFVar2 = ResolveMemberImpl<FProperty,FFieldClass>(this,param_1,param_3,param_2,param_3 == pFVar1);
  return pFVar2;
}

// SetDirect @ 147ff5370

void __thiscall
FMemberReference::SetDirect
          (FMemberReference *this,FName param_1,FGuid *param_2,TSubclassOf<UObject> param_3,
          bool param_4)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  
  uVar4 = param_2->A;
  uVar5 = param_2->B;
  uVar6 = param_2->C;
  uVar7 = param_2->D;
  this->MemberName = param_1;
  (this->MemberGuid).A = uVar4;
  (this->MemberGuid).B = uVar5;
  (this->MemberGuid).C = uVar6;
  (this->MemberGuid).D = uVar7;
  this->bSelfContext = param_4;
  this->bWasDeprecated = false;
  lVar2 = *(longlong *)param_3.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar8 = Z_Construct_UClass_UObject_NoRegister();
    if (pUVar8 != (UClass *)0x0) {
      iVar1 = (int)pUVar8->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar8->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar9 = *(UObject **)param_3.Class.field0_0x0;
        goto LAB_147ff53da;
      }
    }
  }
  pUVar9 = (UObject *)0x0;
LAB_147ff53da:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  (this->MemberParent).field0_0x0.DebugPtr = pUVar9;
  ::FString::Empty(&this->MemberScope);
  return;
}

// SetExternalDelegateMember @ 147ff5930

void __thiscall FMemberReference::SetExternalDelegateMember(FMemberReference *this,FName param_1)

{
  this->MemberName = param_1;
  (this->MemberParent).field0_0x0.DebugPtr = (UObject *)0x0;
  ::FString::Empty(&this->MemberScope);
  this->bSelfContext = false;
  this->bWasDeprecated = false;
  return;
}

// SetExternalMember @ 147ff5960

void __thiscall
FMemberReference::SetExternalMember
          (FMemberReference *this,FName param_1,TSubclassOf<UObject> param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  
  this->MemberName = param_1;
  lVar2 = *(longlong *)param_2.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar4 = Z_Construct_UClass_UObject_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar5 = *(UObject **)param_2.Class.field0_0x0;
        goto LAB_147ff59b6;
      }
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_147ff59b6:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  (this->MemberParent).field0_0x0.DebugPtr = pUVar5;
  ::FString::Empty(&this->MemberScope);
  this->bSelfContext = false;
  this->bWasDeprecated = false;
  return;
}

// SetExternalMember @ 147ff5a00

void __thiscall
FMemberReference::SetExternalMember
          (FMemberReference *this,FName param_1,TSubclassOf<UObject> param_2,FGuid *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  UObject *local_res8;
  
  local_res8 = *(UObject **)param_2.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  SetExternalMember(this,param_1,(TSubclassOf<UObject>)&local_res8);
  uVar1 = param_3->B;
  uVar2 = param_3->C;
  uVar3 = param_3->D;
  (this->MemberGuid).A = param_3->A;
  (this->MemberGuid).B = uVar1;
  (this->MemberGuid).C = uVar2;
  (this->MemberGuid).D = uVar3;
  return;
}

// SetGlobalField @ 147ff5b40

void __thiscall
FMemberReference::SetGlobalField(FMemberReference *this,FName param_1,UPackage *param_2)

{
  this->MemberName = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UPackage *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->MemberParent).field0_0x0.DebugPtr = (UObject *)param_2;
  ::FString::Empty(&this->MemberScope);
  this->bSelfContext = false;
  this->bWasDeprecated = false;
  return;
}

// SetLocalMember @ 147ff5fb0

void __thiscall
FMemberReference::SetLocalMember
          (FMemberReference *this,FName param_1,UStruct *param_2,FGuid *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  FName local_res8;
  FString local_18;
  
  local_res8 = (FName)param_2->_padding_;
  ::FName::ToString(&local_res8,&local_18);
  this->MemberName = param_1;
  iVar5 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AssignRange(&this->MemberScope,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar5);
  uVar1 = param_3->A;
  uVar2 = param_3->B;
  uVar3 = param_3->C;
  uVar4 = param_3->D;
  this->bSelfContext = false;
  (this->MemberGuid).A = uVar1;
  (this->MemberGuid).B = uVar2;
  (this->MemberGuid).C = uVar3;
  (this->MemberGuid).D = uVar4;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetLocalMember @ 147ff6040

void __thiscall
FMemberReference::SetLocalMember
          (FMemberReference *this,FName param_1,FString *param_2,FGuid *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  this->MemberName = param_1;
  iVar1 = (param_2->Data).ArrayNum;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = 0;
  }
  ::FString::AssignRange(&this->MemberScope,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar7)
  ;
  uVar3 = param_3->A;
  uVar4 = param_3->B;
  uVar5 = param_3->C;
  uVar6 = param_3->D;
  this->bSelfContext = false;
  (this->MemberGuid).A = uVar3;
  (this->MemberGuid).B = uVar4;
  (this->MemberGuid).C = uVar5;
  (this->MemberGuid).D = uVar6;
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// SetSelfMember @ 147ff6ca0

void __thiscall FMemberReference::SetSelfMember(FMemberReference *this,FName param_1)

{
  this->MemberName = param_1;
  (this->MemberParent).field0_0x0.DebugPtr = (UObject *)0x0;
  ::FString::Empty(&this->MemberScope);
  this->bSelfContext = true;
  this->bWasDeprecated = false;
  return;
}

// SetSelfMember @ 147ff6cd0

void __thiscall FMemberReference::SetSelfMember(FMemberReference *this,FName param_1,FGuid *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  this->MemberName = param_1;
  (this->MemberParent).field0_0x0.DebugPtr = (UObject *)0x0;
  ::FString::Empty(&this->MemberScope);
  this->bSelfContext = true;
  this->bWasDeprecated = false;
  uVar1 = param_2->B;
  uVar2 = param_2->C;
  uVar3 = param_2->D;
  (this->MemberGuid).A = param_2->A;
  (this->MemberGuid).B = uVar1;
  (this->MemberGuid).C = uVar2;
  (this->MemberGuid).D = uVar3;
  return;
}

