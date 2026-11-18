// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 38

// operator() @ 1425c3980

void __thiscall
`FSlateAttributeMetaData::RegisterAttribute'::__l2::<lambda_1>::operator()
          (void *this,FSlateAttributeMetaData *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar7;
  undefined8 *puVar8;
  
  if (**(char **)this == '\0') {
    FSlateAttributeMetaData::RegisterMemberAttributeImpl
              (param_1,*(SWidget **)((longlong)this + 8),
               *(FSlateAttributeBase **)((longlong)this + 0x10),
               *(TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
                 **)((longlong)this + 0x18));
    return;
  }
  if (**(char **)this != '\x01') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttributeType == ESlateAttributeType::Managed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeMetaData.cpp"
                       ,0x73,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (param_1->Attributes).ArrayNum;
  piVar1 = &(param_1->Attributes).ArrayMax;
  puVar2 = *(undefined8 **)((longlong)this + 0x18);
  uVar3 = *(undefined8 *)((longlong)this + 0x10);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateAttributeMetaData::FGetterItem>_>
                      (0x820,&(param_1->Attributes).AllocatorInstance,piVar1);
  }
  (param_1->Attributes).ArrayNum = iVar6 + 1;
  FVar7 = (param_1->Attributes).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
    FVar7 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)&param_1->Attributes;
  }
  puVar8 = (undefined8 *)((longlong)iVar6 * 0x20 + (longlong)FVar7);
  *puVar8 = uVar3;
  puVar8[1] = *puVar2;
  *puVar2 = 0;
  puVar8[2] = 0;
  *(undefined4 *)(puVar8 + 3) = 0xffffffff;
  *(undefined4 *)((longlong)puVar8 + 0x1c) = 0;
  return;
}

// ApplyDelayedInvalidation @ 1425cb040

void __cdecl FSlateAttributeMetaData::ApplyDelayedInvalidation(SWidget *param_1)

{
  FSlateAttributeMetaData *pFVar1;
  
  pFVar1 = FindMetaData(param_1);
  if ((pFVar1 != (FSlateAttributeMetaData *)0x0) && (pFVar1->CachedInvalidationReason != None)) {
    SWidget::Invalidate(param_1,pFVar1->CachedInvalidationReason);
    return;
  }
  return;
}

// FindMetaData @ 1425dc6c0

FSlateAttributeMetaData * __cdecl FSlateAttributeMetaData::FindMetaData(SWidget *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  FSlateAttributeMetaData *pFVar7;
  FName *pFVar8;
  SWidget *local_res8;
  
  iVar1 = (param_1->MetaData).ArrayNum;
  if (param_1->bHasRegisteredSlateAttribute == 0) {
    if (0 < iVar1) {
      pFVar2 = (param_1->MetaData).AllocatorInstance.Data;
      plVar3 = *(longlong **)pFVar2;
      pcVar4 = *(code **)(*plVar3 + 8);
      pFVar8 = GetTypeId();
      cVar6 = (*pcVar4)(plVar3,pFVar8);
      if (cVar6 != '\0') {
        local_res8 = param_1;
        `FSlateAttributeMetaData::FindMetaData'::__l14::<lambda_1>::operator()(&local_res8);
        return *(FSlateAttributeMetaData **)pFVar2;
      }
    }
    return (FSlateAttributeMetaData *)0x0;
  }
  if (iVar1 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSlateAttributeMetaData *)(*pcVar4)();
      return pFVar7;
    }
  }
  return *(FSlateAttributeMetaData **)(param_1->MetaData).AllocatorInstance.Data;
}

// GetAttributeGetter @ 1425ddf00

ISlateAttributeGetter * __cdecl
FSlateAttributeMetaData::GetAttributeGetter(SWidget *param_1,FSlateAttributeBase *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FSlateAttributeMetaData *pFVar5;
  ISlateAttributeGetter *pIVar6;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar7;
  uint uVar8;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar9;
  
  pFVar5 = FindMetaData(param_1);
  if (pFVar5 != (FSlateAttributeMetaData *)0x0) {
    FVar7 = (pFVar5->Attributes).AllocatorInstance.SecondaryData;
    iVar1 = (pFVar5->Attributes).ArrayNum;
    if (FVar7 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
      FVar7 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)&pFVar5->Attributes;
    }
    for (FVar9 = FVar7;
        FVar9 != (ForElementType<FSlateAttributeMetaData::FGetterItem>)
                 ((longlong)iVar1 * 0x20 + (longlong)FVar7);
        FVar9 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)((longlong)FVar9 + 0x20)) {
      if (*(FSlateAttributeBase **)FVar9 == param_2) {
        uVar8 = (uint)((longlong)FVar9 - (longlong)FVar7 >> 5);
        if (uVar8 == 0xffffffff) {
          return (ISlateAttributeGetter *)0x0;
        }
        uVar4 = 0;
        if ((int)uVar8 < iVar1) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pIVar6 = (ISlateAttributeGetter *)(*pcVar2)();
          return pIVar6;
        }
        FVar7 = (pFVar5->Attributes).AllocatorInstance.SecondaryData;
        if (FVar7 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
          FVar7 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)&pFVar5->Attributes;
        }
        return *(ISlateAttributeGetter **)
                ((uchar *)((longlong)FVar7 + 8) + (longlong)(int)uVar8 * 0x20);
      }
    }
  }
  return (ISlateAttributeGetter *)0x0;
}

// GetAttributeGetterHandle @ 1425ddff0

FDelegateHandle __cdecl
FSlateAttributeMetaData::GetAttributeGetterHandle(SWidget *param_1,FSlateAttributeBase *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FSlateAttributeMetaData *pFVar4;
  FDelegateHandle FVar5;
  uint uVar6;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar7;
  uint uVar8;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar9;
  longlong in_R8;
  
  pFVar4 = FindMetaData((SWidget *)param_2);
  if (pFVar4 != (FSlateAttributeMetaData *)0x0) {
    FVar7 = (pFVar4->Attributes).AllocatorInstance.SecondaryData;
    iVar1 = (pFVar4->Attributes).ArrayNum;
    if (FVar7 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
      FVar7 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)&pFVar4->Attributes;
    }
    for (FVar9 = FVar7;
        FVar9 != (ForElementType<FSlateAttributeMetaData::FGetterItem>)
                 ((longlong)iVar1 * 0x20 + (longlong)FVar7);
        FVar9 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)((longlong)FVar9 + 0x20)) {
      if (*(longlong *)FVar9 == in_R8) {
        uVar8 = (uint)((longlong)FVar9 - (longlong)FVar7 >> 5);
        if (uVar8 != 0xffffffff) {
          uVar6 = 0;
          if ((int)uVar8 < iVar1) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            FVar5.ID = (*pcVar2)();
            return (FDelegateHandle)FVar5.ID;
          }
          FVar7 = (pFVar4->Attributes).AllocatorInstance.SecondaryData;
          if (FVar7 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
            FVar7 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)&pFVar4->Attributes;
          }
          (**(code **)(**(longlong **)((uchar *)((longlong)FVar7 + 8) + (longlong)(int)uVar8 * 0x20)
                      + 0x18))
                    (*(longlong **)((uchar *)((longlong)FVar7 + 8) + (longlong)(int)uVar8 * 0x20),
                     param_1);
          return (FDelegateHandle)(ulong64)param_1;
        }
        break;
      }
    }
  }
  param_1->_padding_ = 0;
  return (FDelegateHandle)(ulong64)param_1;
}

// GetAttributeNames @ 1425de130

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
FSlateAttributeMetaData::GetAttributeNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,SWidget *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FSlateAttributeMetaData *pFVar8;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar9;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar10;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar11;
  undefined1 local_res8 [8];
  undefined8 local_28 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  pFVar8 = FindMetaData(param_1);
  if (pFVar8 != (FSlateAttributeMetaData *)0x0) {
    uVar2 = (pFVar8->Attributes).ArrayNum;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if (*piVar1 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar2,&__return_storage_ptr__->AllocatorInstance,
                 __return_storage_ptr__->ArrayNum,piVar1);
    }
    FVar11 = (pFVar8->Attributes).AllocatorInstance.SecondaryData;
    iVar3 = (pFVar8->Attributes).ArrayNum;
    if (FVar11 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
      FVar11 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)&pFVar8->Attributes;
    }
    FVar10 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)
             ((longlong)iVar3 * 0x20 + (longlong)FVar11);
    while( true ) {
      if ((pFVar8->Attributes).ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FSlateAttributeMetaData::FGetterItem,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (FVar11 == FVar10) break;
      local_28[0] = 0;
      if (*(undefined8 **)((longlong)FVar11 + 0x10) != (undefined8 *)0x0) {
        local_28[0] = **(undefined8 **)((longlong)FVar11 + 0x10);
      }
      bVar6 = ::FName::IsWithinBounds((FNameEntryId)(uint)local_28[0]);
      if (bVar6) {
        pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar4 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar4 + (longlong)*piVar1 * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar9;
        }
        iVar7 = __return_storage_ptr__->ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&__return_storage_ptr__->AllocatorInstance,piVar1);
        }
        __return_storage_ptr__->ArrayNum = iVar7 + 1;
        *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) =
             local_28[0];
      }
      FVar11 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)((longlong)FVar11 + 0x20);
    }
  }
  return __return_storage_ptr__;
}

// GetTypeId @ 1425e4040

FName * __cdecl FSlateAttributeMetaData::GetTypeId(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_FSlateAttributeMetaData::GetTypeId(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_FSlateAttributeMetaData::GetTypeId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_FSlateAttributeMetaData::GetTypeId(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName_const&___ptr64___cdecl_FSlateAttributeMetaData::GetTypeId(void)'
                      ::__l2::Type,L"FSlateAttributeMetaData");
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_FSlateAttributeMetaData::GetTypeId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FName_const&___ptr64___cdecl_FSlateAttributeMetaData::GetTypeId(void)'
              ::__l2::Type;
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_FSlateAttributeMetaData::GetTypeId(void)'
          ::__l2::Type;
}

// InvalidateWidget @ 1425e8a80

void __cdecl
FSlateAttributeMetaData::InvalidateWidget
          (ISlateAttributeContainer *param_1,FSlateAttributeBase *param_2,
          ESlateAttributeType param_3,EInvalidateWidgetReason param_4)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  SWidget *this;
  FSlateAttributeMetaData *pFVar6;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar7;
  uint uVar8;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar9;
  longlong lVar10;
  EInvalidateWidgetReason *local_res8;
  undefined1 local_res18 [8];
  EInvalidateWidgetReason local_res20 [8];
  
  local_res20[0] = param_4;
  if ((param_3 != Contained) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeType == SlateAttributePrivate::ESlateAttributeType::Contained",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeMetaData.cpp"
                         ,0x17c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this = (SWidget *)(**(code **)*param_1)(param_1);
  if (this->bIsDeclarativeSyntaxConstructionCompleted != '\0') {
    pFVar6 = FindMetaData(this);
    if (pFVar6 == (FSlateAttributeMetaData *)0x0) {
      local_res20[0] = UE::Private::InvalidateForContained(param_1,this,param_2,local_res20[0]);
    }
    else {
      FVar7 = (pFVar6->Attributes).AllocatorInstance.SecondaryData;
      iVar1 = (pFVar6->Attributes).ArrayNum;
      if (FVar7 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
        FVar7 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)&pFVar6->Attributes;
      }
      for (FVar9 = FVar7;
          FVar9 != (ForElementType<FSlateAttributeMetaData::FGetterItem>)
                   ((longlong)iVar1 * 0x20 + (longlong)FVar7);
          FVar9 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)((longlong)FVar9 + 0x20)) {
        if (*(FSlateAttributeBase **)FVar9 == param_2) {
          uVar8 = (uint)((longlong)FVar9 - (longlong)FVar7 >> 5);
          if (uVar8 != 0xffffffff) {
            uVar5 = 0;
            if ((int)uVar8 < iVar1) {
              uVar5 = ~uVar8 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FVar7 = (pFVar6->Attributes).AllocatorInstance.SecondaryData;
            if (FVar7 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
              FVar7 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)&pFVar6->Attributes;
            }
            lVar10 = (longlong)(int)uVar8 * 0x20 + (longlong)FVar7;
            if (*(longlong *)(lVar10 + 0x10) != 0) {
              if (local_res20[0] != None) {
                `FSlateAttributeMetaData::InvalidateWidget'::__l21::<lambda_1>::operator()
                          (local_res18);
              }
              if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x48) != 0) &&
                 (plVar2 = *(longlong **)(*(longlong *)(lVar10 + 0x10) + 0x40),
                 plVar2 != (longlong *)0x0)) {
                (**(code **)(*plVar2 + 0x68))(plVar2,this);
              }
              local_res20[0] =
                   FSlateAttributeDescriptor::FAttribute::GetInvalidationReason
                             (*(FAttribute **)(lVar10 + 0x10),this);
            }
            goto LAB_1425e8b48;
          }
          break;
        }
      }
      local_res20[0] = UE::Private::InvalidateForContained(param_1,this,param_2,local_res20[0]);
LAB_1425e8b48:
      local_res20[0] = local_res20[0] | pFVar6->CachedInvalidationReason;
      pFVar6->CachedInvalidationReason = None;
    }
    if ((local_res20[0] & (AttributeRegistration|ChildOrder)) != None) {
      local_res8 = local_res20;
      `FSlateAttributeMetaData::InvalidateWidget'::__l2::<lambda_2>::operator()(&local_res8);
    }
    SWidget::Invalidate(this,local_res20[0]);
  }
  return;
}

// InvalidateWidget @ 1425e8c80

void __cdecl
FSlateAttributeMetaData::InvalidateWidget
          (SWidget *param_1,FSlateAttributeBase *param_2,ESlateAttributeType param_3,
          EInvalidateWidgetReason param_4)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FSlateAttributeMetaData *pFVar6;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar7;
  uint uVar8;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  EInvalidateWidgetReason local_res20 [8];
  EInvalidateWidgetReason *local_38 [2];
  
  if (param_1->bIsDeclarativeSyntaxConstructionCompleted != '\0') {
    local_res20[0] = param_4;
    pFVar6 = FindMetaData(param_1);
    if (pFVar6 == (FSlateAttributeMetaData *)0x0) {
      if (param_3 == Member) {
        local_res20[0] = UE::Private::InvalidateForMember(param_1,param_2,local_res20[0]);
      }
    }
    else {
      FVar7 = (pFVar6->Attributes).AllocatorInstance.SecondaryData;
      iVar1 = (pFVar6->Attributes).ArrayNum;
      if (FVar7 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
        FVar7 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)&pFVar6->Attributes;
      }
      for (FVar9 = FVar7;
          FVar9 != (ForElementType<FSlateAttributeMetaData::FGetterItem>)
                   ((longlong)iVar1 * 0x20 + (longlong)FVar7);
          FVar9 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)((longlong)FVar9 + 0x20)) {
        if (*(FSlateAttributeBase **)FVar9 == param_2) {
          uVar8 = (uint)((longlong)FVar9 - (longlong)FVar7 >> 5);
          if (uVar8 != 0xffffffff) {
            uVar5 = 0;
            if ((int)uVar8 < iVar1) {
              uVar5 = ~uVar8 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FVar7 = (pFVar6->Attributes).AllocatorInstance.SecondaryData;
            if (FVar7 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
              FVar7 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)&pFVar6->Attributes;
            }
            lVar10 = (longlong)(int)uVar8 * 0x20 + (longlong)FVar7;
            if (*(longlong *)(lVar10 + 0x10) != 0) {
              if (local_res20[0] != None) {
                `FSlateAttributeMetaData::InvalidateWidget'::__l14::<lambda_1>::operator()
                          (local_res8);
              }
              if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x48) != 0) &&
                 (plVar2 = *(longlong **)(*(longlong *)(lVar10 + 0x10) + 0x40),
                 plVar2 != (longlong *)0x0)) {
                (**(code **)(*plVar2 + 0x68))(plVar2,param_1);
              }
              local_res20[0] =
                   FSlateAttributeDescriptor::FAttribute::GetInvalidationReason
                             (*(FAttribute **)(lVar10 + 0x10),param_1);
            }
            goto LAB_1425e8de4;
          }
          break;
        }
      }
      if (param_3 == Member) {
        local_res20[0] = UE::Private::InvalidateForMember(param_1,param_2,local_res20[0]);
      }
LAB_1425e8de4:
      local_res20[0] = local_res20[0] | pFVar6->CachedInvalidationReason;
      pFVar6->CachedInvalidationReason = None;
    }
    if ((local_res20[0] & (AttributeRegistration|ChildOrder)) != None) {
      local_38[0] = local_res20;
      `FSlateAttributeMetaData::InvalidateWidget'::__l2::<lambda_2>::operator()(local_38);
    }
    SWidget::Invalidate(param_1,local_res20[0]);
  }
  return;
}

// IsAttributeBound @ 1425e8fe0

bool __cdecl
FSlateAttributeMetaData::IsAttributeBound(SWidget *param_1,FSlateAttributeBase *param_2)

{
  FSlateAttributeMetaData *pFVar1;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar2;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar3;
  
  pFVar1 = FindMetaData(param_1);
  if (pFVar1 == (FSlateAttributeMetaData *)0x0) {
    return false;
  }
  FVar3 = (pFVar1->Attributes).AllocatorInstance.SecondaryData;
  if (FVar3 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
    FVar3 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)&pFVar1->Attributes;
  }
  FVar2 = FVar3;
  while( true ) {
    if (FVar2 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)
                 ((longlong)(pFVar1->Attributes).ArrayNum * 0x20 + (longlong)FVar3)) {
      return false;
    }
    if (*(FSlateAttributeBase **)FVar2 == param_2) break;
    FVar2 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)((longlong)FVar2 + 0x20);
  }
  return (int)((longlong)FVar2 - (longlong)FVar3 >> 5) != -1;
}

// IsOfTypeImpl @ 1425e9880

bool __thiscall FSlateAttributeMetaData::IsOfTypeImpl(FSlateAttributeMetaData *this,FName *param_1)

{
  FName *pFVar1;
  
  pFVar1 = GetTypeId();
  return *pFVar1 == *param_1;
}

// MoveAttribute @ 1425eb340

void __cdecl
FSlateAttributeMetaData::MoveAttribute
          (SWidget *param_1,FSlateAttributeBase *param_2,ESlateAttributeType param_3,
          FSlateAttributeBase *param_4)

{
  TArray<FSlateAttributeMetaData::FGetterItem,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FSlateAttributeMetaData *pFVar6;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar7;
  uint uVar8;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar9;
  
  if ((param_3 != Managed) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeType == ESlateAttributeType::Managed",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeMetaData.cpp"
                         ,0x265,
                         L"TSlateAttribute cannot be moved. This should be already prevented in SlateAttribute.h"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6 = FindMetaData(param_1);
  if (pFVar6 != (FSlateAttributeMetaData *)0x0) {
    FVar7 = (pFVar6->Attributes).AllocatorInstance.SecondaryData;
    pTVar1 = &pFVar6->Attributes;
    iVar2 = (pFVar6->Attributes).ArrayNum;
    if (FVar7 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
      FVar7 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)pTVar1;
    }
    for (FVar9 = FVar7;
        FVar9 != (ForElementType<FSlateAttributeMetaData::FGetterItem>)
                 ((longlong)iVar2 * 0x20 + (longlong)FVar7);
        FVar9 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)((longlong)FVar9 + 0x20)) {
      if (*(FSlateAttributeBase **)FVar9 == param_4) {
        uVar8 = (uint)((longlong)FVar9 - (longlong)FVar7 >> 5);
        if (uVar8 == 0xffffffff) {
          return;
        }
        uVar5 = 0;
        if ((int)uVar8 < iVar2) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar7 = (pFVar6->Attributes).AllocatorInstance.SecondaryData;
        if (FVar7 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
          FVar7 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)pTVar1;
        }
        *(FSlateAttributeBase **)((longlong)FVar7 + (longlong)(int)uVar8 * 0x20) = param_2;
        uVar5 = 0;
        if ((int)uVar8 < (pFVar6->Attributes).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar7 = (pFVar6->Attributes).AllocatorInstance.SecondaryData;
        if (FVar7 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
          FVar7 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)pTVar1;
        }
        (**(code **)(**(longlong **)((uchar *)((longlong)FVar7 + 8) + (longlong)(int)uVar8 * 0x20) +
                    0x10))(*(longlong **)
                            ((uchar *)((longlong)FVar7 + 8) + (longlong)(int)uVar8 * 0x20),param_2);
        return;
      }
    }
  }
  return;
}

// RegisterAttribute @ 1425f6450

void __cdecl
FSlateAttributeMetaData::RegisterAttribute
          (ISlateAttributeContainer *param_1,FSlateAttributeBase *param_2,
          ESlateAttributeType param_3,
          TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
          *param_4)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  SWidget *this;
  FSlateAttributeMetaData *pFVar6;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar7;
  uchar *puVar8;
  uint uVar9;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar10;
  undefined7 in_register_00000081;
  TSharedRef<FSlateAttributeMetaData,1> local_38;
  TSharedRef<ISlateMetaData,1> local_28;
  
  this = (SWidget *)(**(code **)*param_1)(param_1,param_2,CONCAT71(in_register_00000081,param_3));
  pFVar6 = FindMetaData(this);
  if (pFVar6 == (FSlateAttributeMetaData *)0x0) {
    MakeShared<FSlateAttributeMetaData,1>(&local_38);
    pFVar6 = local_38.Object;
    RegisterContainAttributeImpl(local_38.Object,param_1,this,param_2,param_4);
    if ((pFVar6->Attributes).ArrayNum != 0) {
      this->bHasRegisteredSlateAttribute = '\x01';
      local_28.Object = (ISlateMetaData *)local_38.Object;
      local_28.SharedReferenceCount.ReferenceController =
           local_38.SharedReferenceCount.ReferenceController;
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      TArray<TSharedRef<ISlateMetaData,1>,TSizedDefaultAllocator<32>_>::Insert
                (&this->MetaData,&local_28,0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      if (this->bEnabledAttributesUpdate == '\x01' &&
          this->bIsDeclarativeSyntaxConstructionCompleted == '\x01') {
        SWidget::Invalidate(this,AttributeRegistration);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  else {
    FVar7 = (pFVar6->Attributes).AllocatorInstance.SecondaryData;
    iVar1 = (pFVar6->Attributes).ArrayNum;
    if (FVar7 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
      FVar7 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)&pFVar6->Attributes;
    }
    for (FVar10 = FVar7;
        FVar10 != (ForElementType<FSlateAttributeMetaData::FGetterItem>)
                  ((longlong)iVar1 * 0x20 + (longlong)FVar7);
        FVar10 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)((longlong)FVar10 + 0x20)) {
      if (*(FSlateAttributeBase **)FVar10 == param_2) {
        uVar9 = (uint)((longlong)FVar10 - (longlong)FVar7 >> 5);
        if (uVar9 != 0xffffffff) {
          uVar5 = 0;
          if ((int)uVar9 < iVar1) {
            uVar5 = ~uVar9 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FVar7 = (pFVar6->Attributes).AllocatorInstance.SecondaryData;
          if (FVar7 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
            FVar7 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)&pFVar6->Attributes;
          }
          puVar8 = (uchar *)((longlong)FVar7 + 8) + (longlong)(int)uVar9 * 0x20;
          if ((TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
               *)puVar8 == param_4) {
            return;
          }
          plVar2 = *(longlong **)puVar8;
          *(ISlateAttributeGetter **)puVar8 = param_4->Ptr;
          param_4->Ptr = (ISlateAttributeGetter *)0x0;
          if (plVar2 == (longlong *)0x0) {
            return;
          }
          (**(code **)(*plVar2 + 0x20))(plVar2,1);
          return;
        }
        break;
      }
    }
    RegisterContainAttributeImpl(pFVar6,param_1,this,param_2,param_4);
  }
  return;
}

// RegisterAttribute @ 1425f6640

void __cdecl
FSlateAttributeMetaData::RegisterAttribute
          (SWidget *param_1,FSlateAttributeBase *param_2,ESlateAttributeType param_3,
          TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
          *param_4)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FSlateAttributeMetaData *pFVar6;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar7;
  uchar *puVar8;
  uint uVar9;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar10;
  ESlateAttributeType local_res18 [16];
  TSharedRef<FSlateAttributeMetaData,1> local_58;
  TSharedRef<ISlateMetaData,1> local_48;
  ESlateAttributeType *local_38;
  SWidget *local_30;
  FSlateAttributeBase *local_28;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  *local_20;
  
  local_38 = local_res18;
  local_res18[0] = param_3;
  local_30 = param_1;
  local_28 = param_2;
  local_20 = param_4;
  pFVar6 = FindMetaData(param_1);
  if (pFVar6 == (FSlateAttributeMetaData *)0x0) {
    MakeShared<FSlateAttributeMetaData,1>(&local_58);
    pFVar6 = local_58.Object;
    `FSlateAttributeMetaData::RegisterAttribute'::__l2::<lambda_1>::operator()
              (&local_38,local_58.Object);
    if ((pFVar6->Attributes).ArrayNum != 0) {
      param_1->bHasRegisteredSlateAttribute = '\x01';
      local_48.Object = (ISlateMetaData *)local_58.Object;
      local_48.SharedReferenceCount.ReferenceController =
           local_58.SharedReferenceCount.ReferenceController;
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      TArray<TSharedRef<ISlateMetaData,1>,TSizedDefaultAllocator<32>_>::Insert
                (&param_1->MetaData,&local_48,0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      if (param_1->bEnabledAttributesUpdate == '\x01' &&
          param_1->bIsDeclarativeSyntaxConstructionCompleted == '\x01') {
        SWidget::Invalidate(param_1,AttributeRegistration);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  else {
    FVar7 = (pFVar6->Attributes).AllocatorInstance.SecondaryData;
    iVar1 = (pFVar6->Attributes).ArrayNum;
    if (FVar7 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
      FVar7 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)&pFVar6->Attributes;
    }
    for (FVar10 = FVar7;
        FVar10 != (ForElementType<FSlateAttributeMetaData::FGetterItem>)
                  ((longlong)iVar1 * 0x20 + (longlong)FVar7);
        FVar10 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)((longlong)FVar10 + 0x20)) {
      if (*(FSlateAttributeBase **)FVar10 == param_2) {
        uVar9 = (uint)((longlong)FVar10 - (longlong)FVar7 >> 5);
        if (uVar9 != 0xffffffff) {
          uVar5 = 0;
          if ((int)uVar9 < iVar1) {
            uVar5 = ~uVar9 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FVar7 = (pFVar6->Attributes).AllocatorInstance.SecondaryData;
          if (FVar7 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
            FVar7 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)&pFVar6->Attributes;
          }
          puVar8 = (uchar *)((longlong)FVar7 + 8) + (longlong)(int)uVar9 * 0x20;
          if ((TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
               *)puVar8 == param_4) {
            return;
          }
          plVar2 = *(longlong **)puVar8;
          *(ISlateAttributeGetter **)puVar8 = param_4->Ptr;
          param_4->Ptr = (ISlateAttributeGetter *)0x0;
          if (plVar2 == (longlong *)0x0) {
            return;
          }
          (**(code **)(*plVar2 + 0x20))(plVar2,1);
          return;
        }
        break;
      }
    }
    `FSlateAttributeMetaData::RegisterAttribute'::__l2::<lambda_1>::operator()(&local_38,pFVar6);
  }
  return;
}

// RegisterContainAttributeImpl @ 1425f6b10

void __thiscall
FSlateAttributeMetaData::RegisterContainAttributeImpl
          (FSlateAttributeMetaData *this,ISlateAttributeContainer *param_1,SWidget *param_2,
          FSlateAttributeBase *param_3,
          TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
          *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  FSlateAttributeBase *pFVar7;
  FAttribute *pFVar8;
  uint uVar9;
  int iVar10;
  FName *pFVar11;
  int iVar12;
  FName *pFVar13;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar14;
  FSlateAttributeBase *pFVar15;
  uint local_res10 [2];
  FName local_res18;
  ForElementType<FSlateAttributeMetaData::FGetterItem> local_res20;
  uint *local_68;
  FGetterItem local_60;
  
  plVar6 = (longlong *)(**(code **)(param_2->_padding_ + 8))(param_2);
  (**(code **)((longlong)*param_1 + 8))(param_1);
  if ((0xffffffff < (ulonglong)((longlong)param_3 - (longlong)param_1)) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5758944101848317984>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeMetaData.cpp"
                         ,0x20,
                         "Offset <= std::numeric_limits<FSlateAttributeDescriptor::OffsetType>::max()"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res10[0] = (uint)((longlong)param_3 - (longlong)param_1);
  local_60.CachedAttributeDescriptor = (FAttribute *)*plVar6;
  pFVar8 = local_60.CachedAttributeDescriptor + (int)plVar6[1];
  do {
    if (local_60.CachedAttributeDescriptor == pFVar8) {
LAB_1425f6bbb:
      local_68 = local_res10;
      `FSlateAttributeMetaData::RegisterContainAttributeImpl'::__l2::<lambda_1>::operator()
                (&local_68);
      return;
    }
    if ((((local_60.CachedAttributeDescriptor)->Offset == local_res10[0]) &&
        ((local_60.CachedAttributeDescriptor)->AttributeType == Contained)) &&
       ((local_60.CachedAttributeDescriptor)->ContainerName == local_res18)) {
      if (local_60.CachedAttributeDescriptor != (FAttribute *)0x0) {
        pFVar11 = (FName *)plVar6[4];
        if ((FName *)plVar6[4] == (FName *)0x0) {
          pFVar11 = (FName *)(plVar6 + 2);
        }
        pFVar13 = pFVar11 + (longlong)(int)plVar6[5] * 2;
        while( true ) {
          if (pFVar11 == pFVar13) {
            local_res20 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)&local_res18;
            `FSlateAttributeMetaData::RegisterContainAttributeImpl'::__l5::<lambda_2>::operator()
                      (&local_res20);
            return;
          }
          if (*pFVar11 == local_res18) break;
          pFVar11 = pFVar11 + 2;
        }
        local_60.SortOrder = (local_60.CachedAttributeDescriptor)->SortOrder;
        local_60.AttributeContainerOffset = (int)param_3 - (int)param_1;
        local_60.Getter =
             (TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
              )param_4->Ptr;
        param_4->Ptr = (ISlateAttributeGetter *)0x0;
        local_res20 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)&this->Attributes;
        FVar14 = (this->Attributes).AllocatorInstance.SecondaryData;
        uVar9 = (this->Attributes).ArrayNum;
        if (FVar14 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
          FVar14 = local_res20;
        }
        iVar10 = 0;
        local_60.Attribute = param_3;
        uVar4 = local_60.SortOrder;
        iVar12 = local_60.AttributeContainerOffset;
        if ((int)uVar9 < 1) goto LAB_1425f6d34;
        do {
          iVar1 = (uVar9 >> 1) + iVar10;
          plVar6 = (longlong *)((longlong)iVar1 * 0x20 + (longlong)FVar14);
          if ((*(int *)((longlong)plVar6 + 0x1c) == 0) || (iVar12 == 0)) {
LAB_1425f6d0c:
            bVar3 = *(uint *)(plVar6 + 3) < uVar4;
          }
          else {
            pFVar7 = (FSlateAttributeBase *)(*plVar6 - (longlong)*(int *)((longlong)plVar6 + 0x1c));
            pFVar15 = param_3 + -(longlong)iVar12;
            if (pFVar7 == pFVar15) goto LAB_1425f6d0c;
            uVar4 = (**(code **)(*(longlong *)pFVar7 + 0x10))();
            uVar5 = (**(code **)(*(longlong *)pFVar15 + 0x10))(pFVar15);
            bVar3 = uVar4 < uVar5;
            param_3 = local_60.Attribute;
            uVar4 = local_60.SortOrder;
            iVar12 = local_60.AttributeContainerOffset;
          }
          if (bVar3) {
            iVar10 = iVar1 + (uVar9 & 1);
          }
          uVar5 = uVar9 >> 1;
          uVar9 = uVar9 >> 1;
          if (uVar5 == 0) {
LAB_1425f6d34:
            TArray<FSlateAttributeMetaData::FGetterItem,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            ::Insert((TArray<FSlateAttributeMetaData::FGetterItem,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)local_res20,&local_60,iVar10);
            if (local_60.Getter.Ptr == (ISlateAttributeGetter *)0x0) {
              return;
            }
            (**(code **)((longlong)*local_60.Getter.Ptr + 0x20))(local_60.Getter.Ptr,1);
            return;
          }
        } while( true );
      }
      goto LAB_1425f6bbb;
    }
    local_60.CachedAttributeDescriptor = local_60.CachedAttributeDescriptor + 1;
  } while( true );
}

// RegisterManagedAttributeImpl @ 1425f6d80

void __thiscall
FSlateAttributeMetaData::RegisterManagedAttributeImpl
          (FSlateAttributeMetaData *this,SWidget *param_1,FSlateAttributeBase *param_2,
          TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
          *param_3)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar3;
  undefined8 *puVar4;
  
  iVar2 = (this->Attributes).ArrayNum;
  piVar1 = &(this->Attributes).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateAttributeMetaData::FGetterItem>_>
                      (0x820,&(this->Attributes).AllocatorInstance,piVar1);
  }
  (this->Attributes).ArrayNum = iVar2 + 1;
  FVar3 = (this->Attributes).AllocatorInstance.SecondaryData;
  if (FVar3 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
    FVar3 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)&this->Attributes;
  }
  puVar4 = (undefined8 *)((longlong)iVar2 * 0x20 + (longlong)FVar3);
  *puVar4 = param_2;
  puVar4[1] = param_3->Ptr;
  param_3->Ptr = (ISlateAttributeGetter *)0x0;
  puVar4[2] = 0;
  *(undefined4 *)(puVar4 + 3) = 0xffffffff;
  *(undefined4 *)((longlong)puVar4 + 0x1c) = 0;
  return;
}

// RegisterMemberAttributeImpl @ 1425f6e20

/* WARNING: Removing unreachable block (ram,0x0001425f7140) */

void __thiscall
FSlateAttributeMetaData::RegisterMemberAttributeImpl
          (FSlateAttributeMetaData *this,SWidget *param_1,FSlateAttributeBase *param_2,
          TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
          *param_3)

{
  TArray<FSlateAttributeMetaData::FGetterItem,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  void *_Src;
  undefined8 *puVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  FSlateAttributeBase *local_68;
  ISlateAttributeGetter *local_60;
  longlong local_58;
  uint local_50;
  undefined4 local_4c;
  FGetterItem local_48;
  
  if ((0xffffffff < (ulonglong)((longlong)param_2 - (longlong)param_1)) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5758944101848317977>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeMetaData.cpp"
                         ,0x19,
                         "Offset <= std::numeric_limits<FSlateAttributeDescriptor::OffsetType>::max()"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  plVar8 = (longlong *)(**(code **)(param_1->_padding_ + 8))(param_1);
  lVar11 = *plVar8;
  lVar10 = (longlong)(int)plVar8[1] * 0x58 + lVar11;
  iVar13 = (int)((longlong)param_2 - (longlong)param_1);
  do {
    if (lVar11 == lVar10) {
LAB_1425f6ecf:
      FVar9 = (this->Attributes).AllocatorInstance.SecondaryData;
      uVar12 = (this->Attributes).ArrayNum;
      local_48.SortOrder = iVar13 * 100;
      if (FVar9 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
        FVar9 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)&this->Attributes;
      }
      iVar13 = 0;
      if (0 < (int)uVar12) {
        do {
          iVar7 = (uVar12 >> 1) + iVar13;
          if (*(uint *)((longlong)iVar7 * 0x20 + 0x18 + (longlong)FVar9) < local_48.SortOrder) {
            iVar13 = iVar7 + (uVar12 & 1);
          }
          uVar5 = uVar12 >> 1;
          uVar12 = uVar12 >> 1;
        } while (uVar5 != 0);
      }
      local_48.Getter =
           (TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
            )param_3->Ptr;
      param_3->Ptr = (ISlateAttributeGetter *)0x0;
      local_48.CachedAttributeDescriptor = (FAttribute *)0x0;
      local_48.AttributeContainerOffset = 0;
      local_48.Attribute = param_2;
      TArray<FSlateAttributeMetaData::FGetterItem,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
      ::Insert(&this->Attributes,&local_48,iVar13);
      if (local_48.Getter.Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_48.Getter.Ptr + 0x20))(local_48.Getter.Ptr,1);
      }
      return;
    }
    if ((*(int *)(lVar11 + 8) == iVar13) && (*(char *)(lVar11 + 0x50) == '\0')) {
      pTVar1 = &this->Attributes;
      if (lVar11 != 0) {
        FVar9 = (this->Attributes).AllocatorInstance.SecondaryData;
        uVar12 = (this->Attributes).ArrayNum;
        local_50 = *(uint *)(lVar11 + 0x1c);
        if (FVar9 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
          FVar9 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)pTVar1;
        }
        iVar13 = 0;
        if (0 < (int)uVar12) {
          do {
            iVar7 = (uVar12 >> 1) + iVar13;
            if (*(uint *)((longlong)iVar7 * 0x20 + 0x18 + (longlong)FVar9) < local_50) {
              iVar13 = iVar7 + (uVar12 & 1);
            }
            uVar5 = uVar12 >> 1;
            uVar12 = uVar12 >> 1;
          } while (uVar5 != 0);
        }
        local_60 = param_3->Ptr;
        param_3->Ptr = (ISlateAttributeGetter *)0x0;
        FVar9 = (this->Attributes).AllocatorInstance.SecondaryData;
        if (FVar9 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
          FVar9 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)pTVar1;
        }
        local_4c = 0;
        local_68 = param_2;
        local_58 = lVar11;
        if ((((ulonglong)FVar9 <= &local_68) &&
            (&local_68 <
             (FSlateAttributeBase **)
             ((longlong)(this->Attributes).ArrayMax * 0x20 + (longlong)FVar9))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = (this->Attributes).ArrayNum;
        piVar2 = &(this->Attributes).ArrayMax;
        if (iVar7 == *piVar2) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateAttributeMetaData::FGetterItem>_>
                            (0x820,&pTVar1->AllocatorInstance,piVar2);
        }
        (this->Attributes).ArrayNum = iVar7 + 1;
        FVar9 = (this->Attributes).AllocatorInstance.SecondaryData;
        if (FVar9 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
          FVar9 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)pTVar1;
        }
        _Src = (void *)((longlong)FVar9 + (longlong)iVar13 * 0x20);
        memmove((void *)((longlong)_Src + 0x20),_Src,(longlong)(iVar7 - iVar13) << 5);
        FVar9 = (this->Attributes).AllocatorInstance.SecondaryData;
        if (FVar9 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
          FVar9 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)pTVar1;
        }
        puVar3 = (undefined8 *)((longlong)FVar9 + (longlong)iVar13 * 0x20);
        *puVar3 = local_68;
        puVar3[1] = local_60;
        puVar3[2] = local_58;
        *(uint *)(puVar3 + 3) = local_50;
        *(undefined4 *)((longlong)puVar3 + 0x1c) = local_4c;
        if (*(char *)(lVar11 + 0x51) == '\0') {
          return;
        }
        this->AffectVisibilityCounter = this->AffectVisibilityCounter + '\x01';
        return;
      }
      goto LAB_1425f6ecf;
    }
    lVar11 = lVar11 + 0x58;
  } while( true );
}

// RemoveContainerWidget @ 1425f82a0

void __cdecl
FSlateAttributeMetaData::RemoveContainerWidget(SWidget *param_1,ISlateAttributeContainer *param_2)

{
  FSlateAttributeMetaData *this;
  longlong *plVar1;
  ISlateAttributeContainer *pIVar2;
  longlong lVar3;
  ISlateAttributeContainer *pIVar4;
  int iVar5;
  int iVar6;
  ISlateAttributeContainer *pIVar7;
  int iVar8;
  ISlateAttributeContainer *pIVar9;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar10;
  int iVar11;
  ISlateAttributeContainer *pIVar12;
  bool bVar13;
  
  this = FindMetaData(param_1);
  if (this != (FSlateAttributeMetaData *)0x0) {
    iVar6 = (this->Attributes).ArrayNum;
    lVar3 = (longlong)iVar6;
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      FVar10 = (this->Attributes).AllocatorInstance.SecondaryData;
      if (FVar10 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
        FVar10 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)&this->Attributes;
      }
      pIVar7 = (ISlateAttributeContainer *)0x0;
      pIVar2 = pIVar7;
      if (*(int *)((longlong)FVar10 + 0x1c) != 0) {
        pIVar2 = (ISlateAttributeContainer *)
                 (*(longlong *)FVar10 - (longlong)*(int *)((longlong)FVar10 + 0x1c));
      }
      bVar13 = pIVar2 != param_2;
      pIVar2 = pIVar7;
      pIVar9 = pIVar7;
      pIVar12 = pIVar7;
      do {
        iVar8 = (int)pIVar9;
        pIVar2 = (ISlateAttributeContainer *)&pIVar2->field_0x1;
        pIVar9 = (ISlateAttributeContainer *)(ulonglong)(iVar8 + 1);
        if ((longlong)pIVar2 < lVar3) {
          plVar1 = (longlong *)((longlong)pIVar2 * 0x20 + (longlong)FVar10);
          do {
            pIVar4 = pIVar7;
            if (*(int *)((longlong)plVar1 + 0x1c) != 0) {
              pIVar4 = (ISlateAttributeContainer *)
                       (*plVar1 - (longlong)*(int *)((longlong)plVar1 + 0x1c));
            }
            if (bVar13 != (pIVar4 != param_2)) break;
            pIVar9 = (ISlateAttributeContainer *)(ulonglong)((int)pIVar9 + 1);
            pIVar2 = (ISlateAttributeContainer *)&pIVar2->field_0x1;
            plVar1 = plVar1 + 4;
          } while ((longlong)pIVar2 < lVar3);
        }
        iVar5 = (int)pIVar9 - iVar8;
        if (bVar13 == false) {
          DestructItems<FSlateAttributeMetaData::FGetterItem,int>
                    ((FGetterItem *)((longlong)iVar8 * 0x20 + (longlong)FVar10),iVar5);
        }
        else {
          iVar11 = (int)pIVar12;
          if (iVar11 != iVar8) {
            memmove((longlong *)((longlong)iVar11 * 0x20 + (longlong)FVar10),
                    (longlong *)((longlong)iVar8 * 0x20 + (longlong)FVar10),(longlong)iVar5 << 5);
          }
          pIVar12 = (ISlateAttributeContainer *)(ulonglong)(uint)(iVar11 + iVar5);
        }
        bVar13 = (bool)(bVar13 ^ 1);
      } while ((longlong)pIVar2 < lVar3);
      iVar6 = iVar6 - (int)pIVar12;
      (this->Attributes).ArrayNum = (int)pIVar12;
    }
    RemoveMetaDataIfNeeded(this,param_1,0 < iVar6);
  }
  return;
}

// RemoveMetaDataIfNeeded @ 1425f86c0

void __thiscall
FSlateAttributeMetaData::RemoveMetaDataIfNeeded
          (FSlateAttributeMetaData *this,SWidget *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Attributes).ArrayNum == 0) {
    if (!param_2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bRemoved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeMetaData.cpp"
                         ,0xf8,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    param_1->bHasRegisteredSlateAttribute = '\0';
    if ((param_1->MetaData).ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    TArray<TSharedRef<ISlateMetaData,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
              (&param_1->MetaData,0);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&(param_1->MetaData).AllocatorInstance,(param_1->MetaData).ArrayNum,
               &(param_1->MetaData).ArrayMax);
    if (param_1->bEnabledAttributesUpdate == '\x01' &&
        param_1->bIsDeclarativeSyntaxConstructionCompleted == '\x01') {
      SWidget::Invalidate(param_1,AttributeRegistration);
      return;
    }
  }
  return;
}

// UnregisterAttribute @ 142603060

bool __cdecl
FSlateAttributeMetaData::UnregisterAttribute
          (ISlateAttributeContainer *param_1,FSlateAttributeBase *param_2)

{
  bool bVar1;
  SWidget *pSVar2;
  
  pSVar2 = (SWidget *)(**(code **)*param_1)();
  bVar1 = UnregisterAttribute(pSVar2,param_2);
  return bVar1;
}

// UnregisterAttribute @ 142603090

bool __cdecl
FSlateAttributeMetaData::UnregisterAttribute(SWidget *param_1,FSlateAttributeBase *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FSlateAttributeMetaData *this;
  
  this = FindMetaData(param_1);
  if (this == (FSlateAttributeMetaData *)0x0) {
    return false;
  }
  if ((this->Attributes).ArrayNum == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttributeMetaData->Attributes.Num() != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeMetaData.cpp"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = UnregisterAttributeImpl(this,param_2);
  RemoveMetaDataIfNeeded(this,param_1,bVar2);
  return bVar2;
}

// UnregisterAttributeImpl @ 142603130

bool __thiscall
FSlateAttributeMetaData::UnregisterAttributeImpl
          (FSlateAttributeMetaData *this,FSlateAttributeBase *param_1)

{
  TArray<FSlateAttributeMetaData::FGetterItem,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar8;
  int iVar9;
  uint uVar10;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  
  pTVar1 = &this->Attributes;
  FVar8 = (this->Attributes).AllocatorInstance.SecondaryData;
  iVar9 = (this->Attributes).ArrayNum;
  if (FVar8 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
    FVar8 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)pTVar1;
  }
  FVar11 = FVar8;
  while( true ) {
    if (FVar11 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)
                  ((longlong)iVar9 * 0x20 + (longlong)FVar8)) {
      return false;
    }
    if (*(FSlateAttributeBase **)FVar11 == param_1) break;
    FVar11 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)((longlong)FVar11 + 0x20);
  }
  uVar10 = (uint)((longlong)FVar11 - (longlong)FVar8 >> 5);
  if (uVar10 == 0xffffffff) {
    return false;
  }
  uVar13 = 0;
  uVar14 = ~uVar10 >> 0x1f;
  uVar7 = uVar13;
  if ((int)uVar10 < iVar9) {
    uVar7 = uVar14;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  FVar8 = (this->Attributes).AllocatorInstance.SecondaryData;
  lVar12 = (longlong)(int)uVar10 * 0x20;
  if (FVar8 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
    FVar8 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)pTVar1;
  }
  if (*(longlong *)((uchar *)((longlong)FVar8 + 0x10) + lVar12) != 0) {
    uVar7 = uVar13;
    if ((int)uVar10 < (this->Attributes).ArrayNum) {
      uVar7 = uVar14;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    FVar8 = (this->Attributes).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
      FVar8 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)pTVar1;
    }
    if (*(char *)(*(longlong *)((uchar *)((longlong)FVar8 + 0x10) + lVar12) + 0x51) != '\0') {
      if ((this->AffectVisibilityCounter == '\0') &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("AffectVisibilityCounter > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeMetaData.cpp"
                             ,0x111,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      this->AffectVisibilityCounter = this->AffectVisibilityCounter + 0xff;
    }
  }
  if ((int)uVar10 < (this->Attributes).ArrayNum) {
    uVar13 = uVar14;
  }
  if ((uVar13 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  FVar8 = (this->Attributes).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
    FVar8 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)pTVar1;
  }
  plVar3 = *(longlong **)((uchar *)((longlong)FVar8 + 8) + lVar12);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3,1);
  }
  iVar9 = (this->Attributes).ArrayNum + ~uVar10;
  if (iVar9 != 0) {
    memmove((void *)((longlong)FVar8 + lVar12),(void *)((longlong)FVar8 + lVar12 + 0x20),
            (longlong)iVar9 << 5);
  }
  piVar2 = &(this->Attributes).ArrayNum;
  *piVar2 = *piVar2 + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateAttributeMetaData::FGetterItem>_>
            (0x20,8,&pTVar1->AllocatorInstance,(this->Attributes).ArrayNum,
             &(this->Attributes).ArrayMax);
  return true;
}

// UpdateAllAttributes @ 142603390

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateAttributeMetaData::UpdateAllAttributes(SWidget *param_1,EInvalidationPermission param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_Slate_UpdateAllAttributes> FVar6;
  FSlateAttributeMetaData *this;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_38;
  
  FVar10.Value = 0;
  FVar6 = StatPtr_STAT_Slate_UpdateAllAttributes;
  if (StatPtr_STAT_Slate_UpdateAllAttributes ==
      (FThreadSafeStaticStat<FStat_STAT_Slate_UpdateAllAttributes>)0x0) {
    pFVar5 = ::FName::FName(&local_res20,"STAT_Slate_UpdateAllAttributes");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_Slate_UpdateAllAttributes>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Slate_UpdateAllAttributes,*pFVar5,
                       L"UpdateAllAttributes","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,
                       true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.s.LowPart = FVar8.Value;
        local_res18.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeMetaData.cpp"
                   ,0x1ac);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar8.Value;
      local_res18.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = FVar8.Value;
      goto LAB_1426034f0;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_1426034f0:
  this = FindMetaData(param_1);
  if (this != (FSlateAttributeMetaData *)0x0) {
    UpdateAttributesImpl(this,param_1,param_2,0,(this->Attributes).ArrayNum);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// UpdateAttribute @ 142604030

void __cdecl FSlateAttributeMetaData::UpdateAttribute(SWidget *param_1,FSlateAttributeBase *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FSlateAttributeMetaData *pFVar7;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar8;
  EInvalidateWidgetReason EVar9;
  uint uVar10;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar11;
  longlong lVar12;
  EInvalidateWidgetReason local_res18 [8];
  undefined2 local_res20;
  EInvalidateWidgetReason *local_28 [2];
  
  pFVar7 = FindMetaData(param_1);
  if (pFVar7 != (FSlateAttributeMetaData *)0x0) {
    FVar8 = (pFVar7->Attributes).AllocatorInstance.SecondaryData;
    iVar1 = (pFVar7->Attributes).ArrayNum;
    if (FVar8 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
      FVar8 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)&pFVar7->Attributes;
    }
    for (FVar11 = FVar8;
        FVar11 != (ForElementType<FSlateAttributeMetaData::FGetterItem>)
                  ((longlong)iVar1 * 0x20 + (longlong)FVar8);
        FVar11 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)((longlong)FVar11 + 0x20)) {
      if (*(FSlateAttributeBase **)FVar11 == param_2) {
        uVar10 = (uint)((longlong)FVar11 - (longlong)FVar8 >> 5);
        if (uVar10 == 0xffffffff) {
          return;
        }
        uVar6 = 0;
        if ((int)uVar10 < iVar1) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar8 = (pFVar7->Attributes).AllocatorInstance.SecondaryData;
        if (FVar8 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
          FVar8 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)&pFVar7->Attributes;
        }
        lVar12 = (longlong)(int)uVar10 * 0x20 + (longlong)FVar8;
        (**(code **)**(undefined8 **)(lVar12 + 8))
                  (*(undefined8 **)(lVar12 + 8),&local_res20,param_1);
        if (local_res20._1_1_ == '\0') {
          return;
        }
        if (param_1->bIsDeclarativeSyntaxConstructionCompleted == '\0') {
          return;
        }
        lVar2 = *(longlong *)(lVar12 + 0x10);
        local_res18[0] = (EInvalidateWidgetReason)local_res20;
        if (lVar2 != 0) {
          if ((*(int *)(lVar2 + 0x48) != 0) &&
             (plVar3 = *(longlong **)(lVar2 + 0x40), plVar3 != (longlong *)0x0)) {
            (**(code **)(*plVar3 + 0x68))(plVar3,param_1);
          }
          local_res18[0] =
               FSlateAttributeDescriptor::FAttribute::GetInvalidationReason
                         (*(FAttribute **)(lVar12 + 0x10),param_1);
          local_res20 = (ushort)local_res18[0];
        }
        EVar9 = (EInvalidateWidgetReason)local_res20;
        if ((local_res18[0] & (AttributeRegistration|ChildOrder)) != None) {
          local_28[0] = local_res18;
          `FSlateAttributeMetaData::UpdateAttribute'::__l12::<lambda_1>::operator()(local_28);
          EVar9 = local_res18[0];
        }
        SWidget::Invalidate(param_1,EVar9 | pFVar7->CachedInvalidationReason);
        pFVar7->CachedInvalidationReason = None;
        return;
      }
    }
  }
  return;
}

// UpdateAttributesImpl @ 1426041b0

void __thiscall
FSlateAttributeMetaData::UpdateAttributesImpl
          (FSlateAttributeMetaData *this,SWidget *param_1,EInvalidationPermission param_2,
          int param_3,int param_4)

{
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  EInvalidateWidgetReason EVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar13;
  longlong lVar14;
  EInvalidateWidgetReason local_res20 [8];
  EInvalidateWidgetReason local_44;
  char local_43;
  EInvalidateWidgetReason *local_40;
  
  uVar12 = (ulonglong)param_3;
  if ((param_2 == AllowInvalidation) ||
     ((param_2 == AllowInvalidationIfConstructed &&
      (param_1->bIsDeclarativeSyntaxConstructionCompleted != '\0')))) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
    if (param_2 != DelayInvalidation) {
      bVar6 = false;
      goto LAB_142604201;
    }
  }
  bVar6 = true;
LAB_142604201:
  local_res20[0] = None;
  if (param_3 < param_4) {
    lVar14 = uVar12 << 5;
    do {
      uVar11 = (uint)uVar12;
      uVar10 = 0;
      if ((int)uVar11 < (this->Attributes).ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar1 = (this->Attributes).AllocatorInstance.SecondaryData;
      FVar13 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)&this->Attributes;
      if (FVar1 != (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
        FVar13 = FVar1;
      }
      puVar2 = *(undefined8 **)((longlong)FVar13 + 8 + lVar14);
      (**(code **)*puVar2)(puVar2,&local_44,param_1);
      if (local_43 != '\0') {
        lVar3 = *(longlong *)((longlong)FVar13 + 0x10 + lVar14);
        if (lVar3 == 0) {
          if (bVar6) {
            local_res20[0] = local_res20[0] | local_44;
          }
        }
        else {
          if ((*(int *)(lVar3 + 0x48) != 0) &&
             (plVar4 = *(longlong **)(lVar3 + 0x40), plVar4 != (longlong *)0x0)) {
            (**(code **)(*plVar4 + 0x68))(plVar4,param_1);
          }
          if (bVar6) {
            EVar9 = FSlateAttributeDescriptor::FAttribute::GetInvalidationReason
                              (*(FAttribute **)((longlong)FVar13 + 0x10 + lVar14),param_1);
            local_res20[0] = local_res20[0] | EVar9;
          }
        }
      }
      uVar12 = (ulonglong)(uVar11 + 1);
      lVar14 = lVar14 + 0x20;
    } while ((int)(uVar11 + 1) < param_4);
  }
  if ((local_res20[0] & (AttributeRegistration|ChildOrder)) != None) {
    local_40 = local_res20;
    `FSlateAttributeMetaData::UpdateAttributesImpl'::__l2::<lambda_1>::operator()(&local_40);
  }
  if (!bVar7) {
    if (param_2 != DelayInvalidation) {
      if (param_2 == DenyAndClearDelayedInvalidation) {
        this->CachedInvalidationReason = None;
      }
      return;
    }
    this->CachedInvalidationReason = this->CachedInvalidationReason | local_res20[0];
    return;
  }
  SWidget::Invalidate(param_1,local_res20[0] | this->CachedInvalidationReason);
  this->CachedInvalidationReason = None;
  return;
}

// UpdateChildrenOnlyVisibilityAttributes @ 1426043e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateAttributeMetaData::UpdateChildrenOnlyVisibilityAttributes
          (SWidget *param_1,EInvalidationPermission param_2,bool param_3)

{
  int *piVar1;
  FName FVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  SWidget *pSVar7;
  int iVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_Slate_UpdateChildrenOnlyVisibilityAttributes> FVar10;
  longlong *plVar11;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar12;
  FNameEntryId FVar13;
  int iVar14;
  LARGE_INTEGER local_res8;
  FColor_u_0 local_res10 [2];
  FName local_res20;
  FName local_68;
  FStatMessage local_58;
  SWidget *local_48;
  
  iVar14 = 0;
  FVar10 = StatPtr_STAT_Slate_UpdateChildrenOnlyVisibilityAttributes;
  if (StatPtr_STAT_Slate_UpdateChildrenOnlyVisibilityAttributes ==
      (FThreadSafeStaticStat<FStat_STAT_Slate_UpdateChildrenOnlyVisibilityAttributes>)0x0) {
    pFVar9 = ::FName::FName(&local_res20,"STAT_Slate_UpdateChildrenOnlyVisibilityAttributes");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_Slate_UpdateChildrenOnlyVisibilityAttributes>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_Slate_UpdateChildrenOnlyVisibilityAttributes,*pFVar9,
                        L"UpdateChildrenOnlyVisibilityAttributes","STATGROUP_Slate",
                        "STATCAT_Advanced",L"Slate",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar10;
  bVar3 = false;
  bVar5 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  FVar13 = FVar2.ComparisonIndex.Value;
  uVar12 = FVar2.Number;
  if ((FVar13.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar13.Value;
        local_res8.s.HighPart = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeMetaData.cpp"
                   ,0x1d7);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar13.Value;
      local_res8.s.HighPart = uVar12;
      FThreadStats::AddMessage(FVar2,CycleScopeStart);
      bVar4 = true;
      local_68 = FVar2;
      goto LAB_142604549;
    }
  }
  bVar4 = false;
LAB_142604549:
  plVar11 = (longlong *)(**(code **)(param_1->_padding_ + 0x180))(param_1);
  if (*(char *)((longlong)plVar11 + 0x19) != -0x24) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  lVar6 = plVar11[3];
  *(undefined1 *)(plVar11 + 3) = 1;
  local_res10[0]._s_0.B = (char)lVar6;
  iVar8 = (**(code **)*plVar11)(plVar11);
  if (0 < iVar8) {
    do {
      (**(code **)(*plVar11 + 0x38))(plVar11,&local_58);
      pSVar7 = local_48;
      UpdateOnlyVisibilityAttributes(local_48,param_2);
      if (param_3) {
        UpdateChildrenOnlyVisibilityAttributes(pSVar7,param_2,true);
      }
      if (local_58.StatData.Pad != (uchar  [8])0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)
                   CONCAT44(local_58.NameAndInfo.Number,local_58.NameAndInfo.Index.Value));
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar8);
  }
  *(undefined1 *)(plVar11 + 3) = local_res10[0]._s_0.B;
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (local_68 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_58.NameAndInfo.Index.Value = local_68.ComparisonIndex.Value;
      local_58.NameAndInfo.Number = local_68.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_58);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return;
}

// UpdateContainerSortOrder @ 142604730

void __cdecl
FSlateAttributeMetaData::UpdateContainerSortOrder
          (SWidget *param_1,ISlateAttributeContainer *param_2)

{
  FSlateAttributeMetaData *pFVar1;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar2;
  FIdentityFunctor local_res18 [16];
  
  pFVar1 = FindMetaData(param_1);
  if (pFVar1 != (FSlateAttributeMetaData *)0x0) {
    FVar2 = (pFVar1->Attributes).AllocatorInstance.SecondaryData;
    if (FVar2 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
      FVar2 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)&pFVar1->Attributes;
    }
    AlgoImpl::
    IntroSortInternal<FSlateAttributeMetaData::FGetterItem,int,FIdentityFunctor,TDereferenceWrapper<FSlateAttributeMetaData::FGetterItem,TLess<void>_>_>
              ((FGetterItem *)FVar2,(pFVar1->Attributes).ArrayNum,local_res18[0],
               (TLess<void> *)local_res18);
  }
  return;
}

// UpdateExceptVisibilityAttributes @ 1426047d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateAttributeMetaData::UpdateExceptVisibilityAttributes
          (SWidget *param_1,EInvalidationPermission param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_Slate_UpdateExceptVisibilityAttributes> FVar7;
  FSlateAttributeMetaData *this;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_38;
  
  FVar11.Value = 0;
  FVar7 = StatPtr_STAT_Slate_UpdateExceptVisibilityAttributes;
  if (StatPtr_STAT_Slate_UpdateExceptVisibilityAttributes ==
      (FThreadSafeStaticStat<FStat_STAT_Slate_UpdateExceptVisibilityAttributes>)0x0) {
    pFVar6 = ::FName::FName(&local_res20,"STAT_Slate_UpdateExceptVisibilityAttributes");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_Slate_UpdateExceptVisibilityAttributes>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_Slate_UpdateExceptVisibilityAttributes,*pFVar6,
                       L"UpdateExceptVisibilityAttributes","STATGROUP_Slate","STATCAT_Advanced",
                       L"Slate",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.s.LowPart = FVar9.Value;
        local_res18.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeMetaData.cpp"
                   ,0x1c7);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar9.Value;
      local_res18.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar4 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_142604930;
    }
  }
  bVar4 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_142604930:
  this = FindMetaData(param_1);
  if (this != (FSlateAttributeMetaData *)0x0) {
    iVar2 = (this->Attributes).ArrayNum;
    if ((int)(uint)this->AffectVisibilityCounter < iVar2) {
      UpdateAttributesImpl(this,param_1,param_2,(uint)this->AffectVisibilityCounter,iVar2);
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// UpdateOnlyVisibilityAttributes @ 142605050

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateAttributeMetaData::UpdateOnlyVisibilityAttributes
          (SWidget *param_1,EInvalidationPermission param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_Slate_UpdateVisibilityAttributes> FVar6;
  FSlateAttributeMetaData *this;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_38;
  
  FVar10.Value = 0;
  FVar6 = StatPtr_STAT_Slate_UpdateVisibilityAttributes;
  if (StatPtr_STAT_Slate_UpdateVisibilityAttributes ==
      (FThreadSafeStaticStat<FStat_STAT_Slate_UpdateVisibilityAttributes>)0x0) {
    pFVar5 = ::FName::FName(&local_res20,"STAT_Slate_UpdateVisibilityAttributes");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_Slate_UpdateVisibilityAttributes>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Slate_UpdateVisibilityAttributes,
                       *pFVar5,L"UpdateVisibilityAttributes","STATGROUP_Slate","STATCAT_Advanced",
                       L"Slate",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.s.LowPart = FVar8.Value;
        local_res18.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeMetaData.cpp"
                   ,0x1b7);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar8.Value;
      local_res18.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = FVar8.Value;
      goto LAB_1426051b0;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_1426051b0:
  this = FindMetaData(param_1);
  if ((this != (FSlateAttributeMetaData *)0x0) && (this->AffectVisibilityCounter != 0)) {
    UpdateAttributesImpl(this,param_1,param_2,0,(uint)this->AffectVisibilityCounter);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// operator() @ 1504905c0

bool __thiscall
`FSlateAttributeMetaData::RegisterContainAttributeImpl'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<5758944101848318167>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5758944101848318167>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504906d0

bool __thiscall
`FSlateAttributeMetaData::UpdateAttributesImpl'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<5758944101848318476>);
  if (bVar2) {
    ::LexToString(&local_18,**(EInvalidateWidgetReason **)this);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5758944101848318476>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15049073a;
    }
  }
  bVar2 = false;
LAB_15049073a:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150490e90

bool __thiscall
`FSlateAttributeMetaData::InvalidateWidget'::__l21::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5758944101848318350>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5758944101848318350>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504910b0

bool __thiscall
`FSlateAttributeMetaData::UpdateAttribute'::__l12::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<5758944101848318515>);
  if (bVar2) {
    ::LexToString(&local_18,**(EInvalidateWidgetReason **)this);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5758944101848318515>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15049111a;
    }
  }
  bVar2 = false;
LAB_15049111a:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150491200

bool __thiscall `FSlateAttributeMetaData::FindMetaData'::__l14::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5758944101848318048>);
  if (bVar2) {
    FReflectionMetaData::GetWidgetDebugInfo(&local_18,*(SWidget **)this);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5758944101848318048>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150491267;
    }
  }
  bVar2 = false;
LAB_150491267:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504912a0

bool __thiscall
`FSlateAttributeMetaData::InvalidateWidget'::__l14::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5758944101848318303>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5758944101848318303>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150491320

bool __thiscall
`FSlateAttributeMetaData::InvalidateWidget'::__l2::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<5758944101848318371>);
  if (bVar2) {
    ::LexToString(&local_18,**(EInvalidateWidgetReason **)this);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5758944101848318371>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15049138a;
    }
  }
  bVar2 = false;
LAB_15049138a:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504913c0

bool __thiscall
`FSlateAttributeMetaData::InvalidateWidget'::__l2::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<5758944101848318323>);
  if (bVar2) {
    ::LexToString(&local_18,**(EInvalidateWidgetReason **)this);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5758944101848318323>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15049142a;
    }
  }
  bVar2 = false;
LAB_15049142a:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150491460

bool __thiscall
`FSlateAttributeMetaData::RegisterContainAttributeImpl'::__l5::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<5758944101848318171>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5758944101848318171>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504914c7;
    }
  }
  bVar2 = false;
LAB_1504914c7:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

