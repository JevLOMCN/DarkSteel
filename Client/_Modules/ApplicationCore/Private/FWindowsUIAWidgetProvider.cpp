// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 27

// FWindowsUIAWidgetProvider @ 1423c51e0

FWindowsUIAWidgetProvider * __thiscall
FWindowsUIAWidgetProvider::FWindowsUIAWidgetProvider
          (FWindowsUIAWidgetProvider *this,FWindowsUIAManager *param_1,
          TSharedRef<IAccessibleWidget,1> *param_2)

{
  TSharedRef<IAccessibleWidget,1> local_18;
  
  local_18.Object = param_2->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FWindowsUIABaseProvider::FWindowsUIABaseProvider
            ((FWindowsUIABaseProvider *)this,param_1,&local_18);
  *(undefined ***)this = &_vftable__for__FWindowsUIABaseProvider__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IRawElementProviderSimple__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IRawElementProviderFragment__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FWindowsUIAWidgetProvider @ 1423c7880

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FWindowsUIAWidgetProvider::~FWindowsUIAWidgetProvider(FWindowsUIAWidgetProvider *this)

{
  TSet<TTuple<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*>,TDefaultMapHashableKeyFuncs<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*,0>,FDefaultSetAllocator>
  *this_00;
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FGenericAccessibleMessageHandler *this_01;
  FInternationalization *pFVar3;
  uint uVar4;
  atomic<int> *paVar5;
  TSharedRef<IAccessibleWidget_const_,1> local_18;
  
  this_00 = *(TSet<TTuple<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*>,TDefaultMapHashableKeyFuncs<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*,0>,FDefaultSetAllocator>
              **)&this->field_0x8;
  *(undefined ***)this = &_vftable__for__FWindowsUIABaseProvider__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IRawElementProviderSimple__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IRawElementProviderFragment__;
  if (this_00 !=
      (TSet<TTuple<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*>,TDefaultMapHashableKeyFuncs<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*,0>,FDefaultSetAllocator>
       *)0x0) {
    local_18.Object = *(IAccessibleWidget **)&this->field_0x10;
    pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x18;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      paVar5 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar5 = &pTVar1->SharedReferenceCount;
      LOCK();
      *paVar5 = (atomic<int>)((int)*paVar5 + 1);
      UNLOCK();
      LOCK();
      *paVar5 = (atomic<int>)((int)*paVar5 + 1);
      UNLOCK();
      LOCK();
      *paVar5 = (atomic<int>)((int)*paVar5 + 1);
      UNLOCK();
    }
    local_18.SharedReferenceCount.ReferenceController = pTVar1;
    if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar5 = (atomic<int>)((int)*paVar5 + 1);
        UNLOCK();
      }
      uVar4 = ((uint)((ulonglong)local_18.Object >> 0x14) & 0xffff ^
              (uint)((ulonglong)local_18.Object >> 4)) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      TSet<TTuple<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*>,TDefaultMapHashableKeyFuncs<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<TSharedRef<IAccessibleWidget_const_,1>_>(this_00,uVar4 >> 0x10 ^ uVar4,&local_18)
      ;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (*(int *)&(this_00->Elements).field_0x8 == *(int *)&(this_00->Elements).field_0x34) {
      pTVar2 = *(TReferenceControllerBase<1> **)(*(longlong *)&this_00[2].Elements + 0x30);
      this_01 = *(FGenericAccessibleMessageHandler **)(*(longlong *)&this_00[2].Elements + 0x28);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      FGenericAccessibleMessageHandler::SetActive(this_01,false);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      *(undefined4 *)&this_00[2].Elements.field_0x10 = 0;
      if (*(longlong *)&this_00[2].Elements.field_0x8 != 0) {
        pFVar3 = FInternationalization::Get();
        TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
                  ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                   &pFVar3->CultureChangedEvent,
                   (FDelegateHandle)*(ulong64 *)&this_00[2].Elements.field_0x8);
        *(undefined8 *)&this_00[2].Elements.field_0x8 = 0;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  *(undefined ***)this = &___7FWindowsUIABaseProvider__6B_;
  if (*(longlong *)&this->field_0x8 != 0) {
    TSet<FWindowsUIABaseProvider_*,DefaultKeyFuncs<FWindowsUIABaseProvider_*,0>,FDefaultSetAllocator>
    ::Remove((TSet<FWindowsUIABaseProvider_*,DefaultKeyFuncs<FWindowsUIABaseProvider_*,0>,FDefaultSetAllocator>
              *)(*(longlong *)&this->field_0x8 + 0x50),(FWindowsUIABaseProvider *)this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x18);
  return;
}

// operator() @ 1423c8fd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FWindowsUIAWidgetProvider::GetPatternProvider'::__l2::<lambda_1>::operator()(void *this)

{
  char cVar1;
  bool bVar2;
  FWindowsUIAControlProvider *pFVar3;
  FWindowsUIAControlProvider *pFVar4;
  TSharedRef<IAccessibleWidget,1> local_18;
  
  if ((*(longlong *)(*(longlong *)this + 8) == 0) ||
     (cVar1 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))(), cVar1 == '\0')) {
    **(undefined4 **)((longlong)this + 8) = 0x80040201;
    return;
  }
  bVar2 = FWindowsUIAWidgetProvider::SupportsInterface
                    (*(FWindowsUIAWidgetProvider **)this,**(int **)((longlong)this + 0x10));
  if (bVar2) {
    pFVar3 = ::operator_new(0x70);
    pFVar4 = (FWindowsUIAControlProvider *)0x0;
    if (pFVar3 != (FWindowsUIAControlProvider *)0x0) {
      local_18.Object = *(IAccessibleWidget **)(*(longlong *)this + 0x10);
      local_18.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(*(longlong *)this + 0x18);
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar4 = FWindowsUIAControlProvider::FWindowsUIAControlProvider
                         (pFVar3,*(FWindowsUIAManager **)(*(longlong *)this + 8),&local_18);
    }
    switch(**(undefined4 **)((longlong)this + 0x10)) {
    case 10000:
      pFVar3 = (FWindowsUIAControlProvider *)&pFVar4->field_0x28;
      break;
    case 0x2711:
      pFVar3 = (FWindowsUIAControlProvider *)&pFVar4->field_0x60;
      break;
    case 0x2712:
      pFVar3 = (FWindowsUIAControlProvider *)&pFVar4->field_0x50;
      break;
    case 0x2713:
      pFVar3 = (FWindowsUIAControlProvider *)&pFVar4->field_0x30;
      break;
    default:
      if (1 < (byte)LogAccessibility._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAccessibility);
      }
      *(undefined8 *)**(undefined8 **)((longlong)this + 0x18) = 0;
      (**(code **)(*(longlong *)&pFVar4->field_0x28 + 0x10))();
      goto LAB_1423c90fc;
    case 0x271a:
      pFVar3 = (FWindowsUIAControlProvider *)&pFVar4->field_0x68;
      break;
    case 0x271e:
      pFVar3 = (FWindowsUIAControlProvider *)&pFVar4->field_0x38;
      break;
    case 0x271f:
      pFVar3 = (FWindowsUIAControlProvider *)&pFVar4->field_0x40;
    }
    if (pFVar4 == (FWindowsUIAControlProvider *)0x0) {
      pFVar3 = (FWindowsUIAControlProvider *)0x0;
    }
    *(FWindowsUIAControlProvider **)**(undefined8 **)((longlong)this + 0x18) = pFVar3;
  }
LAB_1423c90fc:
  **(undefined4 **)((longlong)this + 8) = 0;
  return;
}

// operator() @ 1423c9250

void __thiscall
`FWindowsUIAWidgetProvider::GetPropertyValue'::__l2::<lambda_1>::operator()(void *this)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FScriptContainerElement *_Src;
  char cVar3;
  byte bVar4;
  HRESULT HVar5;
  HRESULT HVar6;
  HRESULT HVar7;
  HRESULT HVar8;
  DWORD DVar9;
  SAFEARRAY *pSVar10;
  byte *pbVar11;
  FText *pFVar12;
  FString *pFVar13;
  BSTR pOVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong *plVar17;
  wchar_t *psz;
  byte *pbVar18;
  TRefCountPtr<ITextData> psz_00;
  undefined4 uVar19;
  LONG local_res8 [2];
  FText local_58;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [24];
  
  if ((*(longlong *)(*(longlong *)this + 8) == 0) ||
     (cVar3 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))(), cVar3 == '\0')) {
    **(undefined4 **)((longlong)this + 8) = 0x80040201;
    return;
  }
  switch(**(undefined4 **)((longlong)this + 0x10)) {
  case 0x7531:
    *(undefined2 *)**(undefined8 **)((longlong)this + 0x18) = 0x2005;
    pSVar10 = SafeArrayCreateVector(5,0,4);
    *(SAFEARRAY **)(**(longlong **)((longlong)this + 0x18) + 8) = pSVar10;
    if (*(longlong *)(**(longlong **)((longlong)this + 0x18) + 8) != 0) {
      (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x20))
                (*(longlong **)(*(longlong *)this + 0x10),local_48);
      local_res8[0] = 0;
      HVar5 = SafeArrayPutElement(*(SAFEARRAY **)(**(longlong **)((longlong)this + 0x18) + 8),
                                  local_res8,local_48);
      local_res8[0] = 1;
      HVar6 = SafeArrayPutElement(*(SAFEARRAY **)(**(longlong **)((longlong)this + 0x18) + 8),
                                  local_res8,local_38);
      local_res8[0] = 2;
      HVar7 = SafeArrayPutElement(*(SAFEARRAY **)(**(longlong **)((longlong)this + 0x18) + 8),
                                  local_res8,local_40);
      local_res8[0] = 3;
      HVar8 = SafeArrayPutElement(*(SAFEARRAY **)(**(longlong **)((longlong)this + 0x18) + 8),
                                  local_res8,local_30);
      if (HVar5 != 0 && (HVar6 != 0 && (HVar8 != 0 && HVar7 != 0))) {
        return;
      }
    }
    *(undefined2 *)**(undefined8 **)((longlong)this + 0x18) = 0;
    **(undefined4 **)((longlong)this + 8) = 0x80004005;
    break;
  case 0x7532:
    *(undefined2 *)**(undefined8 **)((longlong)this + 0x18) = 3;
    DVar9 = GetCurrentProcessId();
    *(DWORD *)(**(longlong **)((longlong)this + 0x18) + 8) = DVar9;
    break;
  case 0x7533:
    *(undefined2 *)**(undefined8 **)((longlong)this + 0x18) = 3;
    pTVar2 = *(TReferenceControllerBase<1> **)(*(longlong *)this + 0x18);
    plVar17 = *(longlong **)(*(longlong *)this + 0x10);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar4 = (**(code **)(*plVar17 + 0x60))();
    if (FWindowsUIAManager::WidgetTypeToWindowsTypeMap._8_4_ !=
        FWindowsUIAManager::WidgetTypeToWindowsTypeMap._52_4_) {
      lVar16 = 0x154ba5918;
      if (FWindowsUIAManager::WidgetTypeToWindowsTypeMap._64_8_ != 0) {
        lVar16 = FWindowsUIAManager::WidgetTypeToWindowsTypeMap._64_8_;
      }
      iVar1 = *(int *)(lVar16 + ((ulonglong)
                                 (FWindowsUIAManager::WidgetTypeToWindowsTypeMap._72_4_ - 1) &
                                (ulonglong)bVar4) * 4);
      while (iVar1 != -1) {
        pbVar18 = (byte *)((longlong)iVar1 * 0x10 +
                          FWindowsUIAManager::WidgetTypeToWindowsTypeMap._0_8_);
        if (*pbVar18 == bVar4) {
          pbVar11 = pbVar18 + 4;
          if (pbVar18 == (byte *)0x0) {
            pbVar11 = (byte *)0x0;
          }
          if (pbVar11 != (byte *)0x0) {
            uVar19 = *(undefined4 *)pbVar11;
            goto LAB_1423c94bc;
          }
          break;
        }
        iVar1 = *(int *)(pbVar18 + 8);
      }
    }
    uVar19 = 0xc369;
LAB_1423c94bc:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    *(undefined4 *)(**(longlong **)((longlong)this + 0x18) + 8) = uVar19;
    break;
  case 0x7534:
    *(undefined2 *)**(undefined8 **)((longlong)this + 0x18) = 8;
    pTVar2 = *(TReferenceControllerBase<1> **)(*(longlong *)this + 0x18);
    plVar17 = *(longlong **)(*(longlong *)this + 0x10);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar4 = (**(code **)(*plVar17 + 0x60))();
    if (FWindowsUIAManager::WidgetTypeToTextMap._8_4_ !=
        FWindowsUIAManager::WidgetTypeToTextMap._52_4_) {
      lVar16 = 0x154ba5968;
      if (FWindowsUIAManager::WidgetTypeToTextMap._64_8_ != 0) {
        lVar16 = FWindowsUIAManager::WidgetTypeToTextMap._64_8_;
      }
      iVar1 = *(int *)(lVar16 + ((ulonglong)(FWindowsUIAManager::WidgetTypeToTextMap._72_4_ - 1) &
                                (ulonglong)bVar4) * 4);
      while (iVar1 != -1) {
        pbVar18 = (byte *)((longlong)iVar1 * 0x20 + FWindowsUIAManager::WidgetTypeToTextMap._0_8_);
        if (*pbVar18 == bVar4) {
          pFVar12 = (FText *)(pbVar18 + 8);
          if (pbVar18 == (byte *)0x0) {
            pFVar12 = (FText *)0x0;
          }
          if (pFVar12 != (FText *)0x0) {
            pFVar13 = FText::ToString(pFVar12);
            local_58.Flags = (pFVar13->Data).ArrayNum;
            _Src = (pFVar13->Data).AllocatorInstance.Data;
            goto joined_r0x0001423c979a;
          }
          break;
        }
        iVar1 = *(int *)(pbVar18 + 0x18);
      }
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FText::AsLocalizable_Advanced_LocText
                (&CustomControlTypeName,L"SlateAccessibility",L"ControlTypeCustom",L"custom");
      atexit(`WidgetTypeToLocalizedString'::__l7::
             _dynamic_atexit_destructor_for__CustomControlTypeName__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar13 = FText::ToString(&CustomControlTypeName);
    local_58.Flags = (pFVar13->Data).ArrayNum;
    _Src = (pFVar13->Data).AllocatorInstance.Data;
joined_r0x0001423c979a:
    if (local_58.Flags == 0) {
      local_58.TextData.Reference = (ITextData *)0x0;
      local_58._12_4_ = 0;
    }
    else {
      local_58.TextData.Reference = (ITextData *)0x0;
      lVar16 = (longlong)(int)local_58.Flags;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_58.Flags,0,(ForAnyElementType *)&local_58,local_58.Flags,
                 (int *)&local_58.field_0xc);
      memcpy(local_58.TextData.Reference,_Src,lVar16 * 2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    psz_00.Reference = (ITextData *)L"";
    if (local_58.Flags != 0) {
      psz_00.Reference = local_58.TextData.Reference;
    }
    goto LAB_1423c981f;
  case 0x7535:
    *(undefined2 *)**(undefined8 **)((longlong)this + 0x18) = 8;
    puVar15 = (undefined8 *)
              (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x70))
                        (*(longlong **)(*(longlong *)this + 0x10),&local_58);
    if (*(int *)(puVar15 + 1) == 0) {
LAB_1423c9818:
      psz_00.Reference = (ITextData *)L"";
    }
    else {
      psz_00.Reference = (ITextData *)*puVar15;
    }
    goto LAB_1423c981f;
  default:
    *(undefined2 *)**(undefined8 **)((longlong)this + 0x18) = 0;
    break;
  case 0x7538:
    *(undefined2 *)**(undefined8 **)((longlong)this + 0x18) = 0xb;
    cVar3 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0xb0))();
    goto LAB_1423c968a;
  case 0x7539:
    *(undefined2 *)**(undefined8 **)((longlong)this + 0x18) = 0xb;
    cVar3 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x98))();
    goto LAB_1423c968a;
  case 0x753a:
    *(undefined2 *)**(undefined8 **)((longlong)this + 0x18) = 0xb;
    cVar3 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x88))();
    goto LAB_1423c968a;
  case 0x753c:
    *(undefined2 *)**(undefined8 **)((longlong)this + 0x18) = 8;
    puVar15 = (undefined8 *)
              (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x68))
                        (*(longlong **)(*(longlong *)this + 0x10),&local_58);
    if (*(int *)(puVar15 + 1) == 0) goto LAB_1423c9818;
    psz_00.Reference = (ITextData *)*puVar15;
    goto LAB_1423c981f;
  case 0x753d:
    *(undefined2 *)**(undefined8 **)((longlong)this + 0x18) = 8;
    puVar15 = (undefined8 *)
              (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x78))
                        (*(longlong **)(*(longlong *)this + 0x10),&local_58);
    if (*(int *)(puVar15 + 1) == 0) goto LAB_1423c9818;
    psz_00.Reference = (ITextData *)*puVar15;
LAB_1423c981f:
    pOVar14 = SysAllocString((OLECHAR *)psz_00.Reference);
    *(BSTR *)(**(longlong **)((longlong)this + 0x18) + 8) = pOVar14;
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_58.TextData.Reference);
    }
    break;
  case 0x753f:
    *(undefined2 *)**(undefined8 **)((longlong)this + 0x18) = 3;
    *(undefined4 *)(**(longlong **)((longlong)this + 0x18) + 8) =
         *(undefined4 *)(*(longlong *)(*(longlong *)this + 8) + 0xb0);
    break;
  case 0x7540:
  case 0x7541:
    *(undefined2 *)**(undefined8 **)((longlong)this + 0x18) = 0xb;
    *(undefined2 *)(**(longlong **)((longlong)this + 0x18) + 8) = 0xffff;
    break;
  case 0x7543:
    lVar16 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0xd0))();
    if (lVar16 == 0) {
      return;
    }
    *(undefined2 *)**(undefined8 **)((longlong)this + 0x18) = 0xb;
    plVar17 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0xd0))();
    cVar3 = (**(code **)(*plVar17 + 8))(plVar17);
    goto LAB_1423c968a;
  case 0x7546:
    *(undefined2 *)**(undefined8 **)((longlong)this + 0x18) = 0xb;
    cVar3 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x90))();
LAB_1423c968a:
    *(ushort *)(**(longlong **)((longlong)this + 0x18) + 8) = -(ushort)(cVar3 != '\0');
    break;
  case 0x7548:
    *(undefined2 *)**(undefined8 **)((longlong)this + 0x18) = 8;
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_58,L"SlateAccessibility",L"Slate",L"Slate");
    pFVar13 = FText::ToString(pFVar12);
    if ((pFVar13->Data).ArrayNum == 0) {
      psz = L"";
    }
    else {
      psz = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
    pOVar14 = SysAllocString(psz);
    *(BSTR *)(**(longlong **)((longlong)this + 0x18) + 8) = pOVar14;
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
  }
  return;
}

// operator() @ 1423c9950

void __thiscall `FWindowsUIAWidgetProvider::GetRuntimeId'::__l2::<lambda_1>::operator()(void *this)

{
  char cVar1;
  HRESULT HVar2;
  SAFEARRAY *pSVar3;
  LONG local_res8 [2];
  undefined4 local_res10 [6];
  
  if (*(longlong *)(*(longlong *)this + 8) != 0) {
    cVar1 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))();
    if (cVar1 != '\0') {
      local_res10[0] = 3;
      local_res10[1] = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 8))();
      pSVar3 = SafeArrayCreateVector(3,0,2);
      *(SAFEARRAY **)**(undefined8 **)((longlong)this + 0x10) = pSVar3;
      if (*(longlong *)**(undefined8 **)((longlong)this + 0x10) != 0) {
        local_res8[0] = 0;
        do {
          HVar2 = SafeArrayPutElement(*(SAFEARRAY **)**(undefined8 **)((longlong)this + 0x10),
                                      local_res8,local_res10 + local_res8[0]);
          if (HVar2 != 0) {
            **(undefined4 **)((longlong)this + 8) = 0x80004005;
            return;
          }
          local_res8[0] = local_res8[0] + 1;
        } while (local_res8[0] < 2);
      }
      **(undefined4 **)((longlong)this + 8) = 0;
      return;
    }
  }
  **(undefined4 **)((longlong)this + 8) = 0x80040201;
  return;
}

// operator() @ 1423c9d70

void __thiscall `FWindowsUIAWidgetProvider::Navigate'::__l2::<lambda_1>::operator()(void *this)

{
  FWindowsUIAManager *this_00;
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  IAccessibleWidget **ppIVar5;
  FWindowsUIAWidgetProvider *pFVar6;
  undefined1 *puVar7;
  FSharedReferencer<1> FVar8;
  IAccessibleWidget *local_78;
  FSharedReferencer<1> FStack_70;
  TSharedRef<IAccessibleWidget,1> local_68;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  if ((*(longlong *)(*(longlong *)this + 8) == 0) ||
     (cVar2 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))(), cVar2 == '\0')) {
    **(undefined4 **)((longlong)this + 8) = 0x80040201;
    return;
  }
  local_78 = (IAccessibleWidget *)0x0;
  FStack_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  iVar4 = **(int **)((longlong)this + 0x10);
  if (iVar4 == 0) {
    ppIVar5 = (IAccessibleWidget **)
              (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x28))
                        (*(longlong **)(*(longlong *)this + 0x10),local_18);
    if (&local_78 != ppIVar5) {
      local_78 = *ppIVar5;
      *ppIVar5 = (IAccessibleWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&FStack_70,(FSharedReferencer<1> *)(ppIVar5 + 1));
    }
  }
  else if (iVar4 == 1) {
    ppIVar5 = (IAccessibleWidget **)
              (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x30))
                        (*(longlong **)(*(longlong *)this + 0x10),local_28);
    local_10 = local_20;
    if (&local_78 != ppIVar5) {
      local_78 = *ppIVar5;
      *ppIVar5 = (IAccessibleWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&FStack_70,(FSharedReferencer<1> *)(ppIVar5 + 1));
      local_10 = local_20;
    }
  }
  else if (iVar4 == 2) {
    ppIVar5 = (IAccessibleWidget **)
              (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x38))
                        (*(longlong **)(*(longlong *)this + 0x10),local_38);
    local_10 = local_30;
    if (&local_78 != ppIVar5) {
      local_78 = *ppIVar5;
      *ppIVar5 = (IAccessibleWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&FStack_70,(FSharedReferencer<1> *)(ppIVar5 + 1));
      local_10 = local_30;
    }
  }
  else if (iVar4 == 3) {
    iVar4 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x58))();
    if (iVar4 < 1) goto LAB_1423c9f3b;
    ppIVar5 = (IAccessibleWidget **)
              (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x50))
                        (*(longlong **)(*(longlong *)this + 0x10),local_48,0);
    local_10 = local_40;
    if (&local_78 != ppIVar5) {
      local_78 = *ppIVar5;
      *ppIVar5 = (IAccessibleWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&FStack_70,(FSharedReferencer<1> *)(ppIVar5 + 1));
      local_10 = local_40;
    }
  }
  else {
    if ((iVar4 != 4) ||
       (iVar4 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x58))(), iVar4 < 1))
    goto LAB_1423c9f3b;
    ppIVar5 = (IAccessibleWidget **)
              (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x50))
                        (*(longlong **)(*(longlong *)this + 0x10),local_58,iVar4 + -1);
    local_10 = local_50;
    if (&local_78 != ppIVar5) {
      local_78 = *ppIVar5;
      *ppIVar5 = (IAccessibleWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&FStack_70,(FSharedReferencer<1> *)(ppIVar5 + 1));
      local_10 = local_50;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
LAB_1423c9f3b:
  if (local_78 == (IAccessibleWidget *)0x0) {
    *(undefined8 *)**(undefined8 **)((longlong)this + 0x18) = 0;
    FVar8.ReferenceController = FStack_70.ReferenceController;
  }
  else {
    this_00 = *(FWindowsUIAManager **)(*(longlong *)this + 8);
    if ((local_78 == (IAccessibleWidget *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar8.ReferenceController = FStack_70.ReferenceController;
    local_68.Object = local_78;
    local_68.SharedReferenceCount.ReferenceController = FStack_70.ReferenceController;
    if (FStack_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_70.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_70.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_78 == (IAccessibleWidget *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar6 = FWindowsUIAManager::GetWidgetProvider(this_00,&local_68);
    puVar7 = &pFVar6->field_0x30;
    if (pFVar6 == (FWindowsUIAWidgetProvider *)0x0) {
      puVar7 = (undefined1 *)0x0;
    }
    *(undefined1 **)**(undefined8 **)((longlong)this + 0x18) = puVar7;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  return;
}

// operator() @ 1423ca060

void __thiscall `FWindowsUIAWidgetProvider::SetFocus'::__l2::<lambda_1>::operator()(void *this)

{
  char cVar1;
  
  if (*(longlong *)(*(longlong *)this + 8) != 0) {
    cVar1 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x98))();
      if (cVar1 != '\0') {
        (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0xb8))
                  (*(longlong **)(*(longlong *)this + 0x10),0);
        **(undefined4 **)((longlong)this + 8) = 0;
        return;
      }
      **(undefined4 **)((longlong)this + 8) = 0x80040204;
      return;
    }
  }
  **(undefined4 **)((longlong)this + 8) = 0x80040201;
  return;
}

// operator() @ 1423ca2b0

void __thiscall
`FWindowsUIAWidgetProvider::SupportsInterface'::__l2::<lambda_1>::operator()(void *this)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  uint uVar5;
  
  switch(**(undefined4 **)((longlong)this + 8)) {
  case 10000:
    plVar3 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 200))();
    if ((plVar3 != (longlong *)0x0) && (cVar1 = (**(code **)(*plVar3 + 8))(), cVar1 == '\0')) {
      **(undefined1 **)((longlong)this + 0x10) = 1;
      return;
    }
    break;
  case 0x2711:
    lVar2 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0xe0))();
    *(bool *)*(undefined8 *)((longlong)this + 0x10) = lVar2 != 0;
    return;
  case 0x2712:
    plVar3 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0xd0))();
    if ((plVar3 != (longlong *)0x0) &&
       (uVar5 = (**(code **)(*plVar3 + 0x10))(),
       (float)(uVar5 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
      **(undefined1 **)((longlong)this + 0x10) = 1;
      return;
    }
    break;
  case 0x2713:
    plVar3 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0xd0))();
    if ((plVar3 != (longlong *)0x0) && (fVar4 = (float)(**(code **)(*plVar3 + 0x10))(), 0.0 < fVar4)
       ) {
      **(undefined1 **)((longlong)this + 0x10) = 1;
      return;
    }
    break;
  default:
    return;
  case 0x271a:
    lVar2 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0xe8))();
    *(bool *)*(undefined8 *)((longlong)this + 0x10) = lVar2 != 0;
    return;
  case 0x271e:
    lVar2 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0xd8))();
    *(bool *)*(undefined8 *)((longlong)this + 0x10) = lVar2 != 0;
    return;
  case 0x271f:
    plVar3 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 200))();
    if ((plVar3 != (longlong *)0x0) && (cVar1 = (**(code **)(*plVar3 + 8))(), cVar1 != '\0')) {
      **(undefined1 **)((longlong)this + 0x10) = 1;
      return;
    }
  }
  **(undefined1 **)((longlong)this + 0x10) = 0;
  return;
}

// operator() @ 1423ca600

void __thiscall
`FWindowsUIAWidgetProvider::get_BoundingRectangle'::__l2::<lambda_1>::operator()(void *this)

{
  char cVar1;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  
  if (*(longlong *)(*(longlong *)this + 8) != 0) {
    cVar1 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))();
    if (cVar1 != '\0') {
      (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x20))
                (*(longlong **)(*(longlong *)this + 0x10),&local_38);
      *(double *)**(undefined8 **)((longlong)this + 0x10) = local_38;
      *(double *)(**(longlong **)((longlong)this + 0x10) + 8) = local_30;
      *(double *)(**(longlong **)((longlong)this + 0x10) + 0x10) = local_28 - local_38;
      *(double *)(**(longlong **)((longlong)this + 0x10) + 0x18) = local_20 - local_30;
      **(undefined4 **)((longlong)this + 8) = 0;
      return;
    }
  }
  **(undefined4 **)((longlong)this + 8) = 0x80040201;
  return;
}

// operator() @ 1423caaa0

void __thiscall
`FWindowsUIAWidgetProvider::get_FragmentRoot'::__l2::<lambda_1>::operator()(void *this)

{
  FWindowsUIAManager *this_00;
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FWindowsUIAWidgetProvider *pFVar4;
  FWindowsUIAWidgetProvider *pFVar5;
  IAccessibleWidget *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  TSharedRef<IAccessibleWidget,1> local_18;
  
  if (*(longlong *)(*(longlong *)this + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x18))
                (*(longlong **)(*(longlong *)this + 0x10),&local_28);
      if (local_28 != (IAccessibleWidget *)0x0) {
        this_00 = *(FWindowsUIAManager **)(*(longlong *)this + 8);
        if (local_28 == (IAccessibleWidget *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        local_18.Object = local_28;
        local_18.SharedReferenceCount.ReferenceController = pTStack_20;
        if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_20->SharedReferenceCount =
               (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (local_28 == (IAccessibleWidget *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        pFVar4 = FWindowsUIAManager::GetWidgetProvider(this_00,&local_18);
        pFVar5 = pFVar4 + 1;
        if (pFVar4 == (FWindowsUIAWidgetProvider *)0x0) {
          pFVar5 = (FWindowsUIAWidgetProvider *)0x0;
        }
        *(FWindowsUIAWidgetProvider **)**(undefined8 **)((longlong)this + 0x10) = pFVar5;
        **(undefined4 **)((longlong)this + 8) = 0;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_20);
    }
  }
  return;
}

// AddRef @ 1423d0220

ulong __thiscall FWindowsUIAWidgetProvider::AddRef(FWindowsUIAWidgetProvider *this)

{
  *(int *)&this[-1].field_0x30 = *(int *)&this[-1].field_0x30 + 1;
  return *(ulong *)&this[-1].field_0x30;
}

// AddRef`adjustor{8}' @ 1423d0230

/* [thunk]:public: virtual unsigned long __cdecl FWindowsUIAWidgetProvider::AddRef`adjustor{8}'
   (void) __ptr64 */

ulong __thiscall FWindowsUIAWidgetProvider::AddRef_adjustor_8__(FWindowsUIAWidgetProvider *this)

{
  ulong uVar1;
  
  uVar1 = AddRef((FWindowsUIAWidgetProvider *)&this[-1].field_0x30);
  return uVar1;
}

// GetEmbeddedFragmentRoots @ 1423de480

undefined4 __thiscall
FWindowsUIAWidgetProvider::GetEmbeddedFragmentRoots
          (FWindowsUIAWidgetProvider *this,tagSAFEARRAY **param_1)

{
  *param_1 = (tagSAFEARRAY *)0x0;
  return 0;
}

// GetPatternProvider @ 1423e0ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIAWidgetProvider::GetPatternProvider
          (FWindowsUIAWidgetProvider *this,int param_1,IUnknown **param_2)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  int local_res10 [2];
  IUnknown **local_res18 [2];
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)&this[-1].field_0x18;
  local_58[0] = 0x80040201;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  local_20 = FMemory::Malloc(0x28,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIAWidgetProvider::GetPatternProvider'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = (longlong)&this[-1].field_0x10;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)local_res10;
  local_20[4] = (longlong)local_res18;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIAWidgetProvider::GetPatternProvider'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

// GetPropertyValue @ 1423e1800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall
FWindowsUIAWidgetProvider::GetPropertyValue
          (FWindowsUIAWidgetProvider *this,int param_1,tagVARIANT *param_2)

{
  int *piVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_AccessibilityWindowsGetProperty> FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  longlong *plVar11;
  FNameEntryId FVar12;
  FName FVar13;
  FNameEntryId FVar14;
  int local_res10 [2];
  tagVARIANT *local_res18;
  undefined1 auStackY_f8 [32];
  LARGE_INTEGER local_98;
  undefined4 local_90 [2];
  FName local_88;
  FStatMessage local_78;
  code *local_68 [2];
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  FVar14.Value = 0;
  FVar9 = StatPtr_STAT_AccessibilityWindowsGetProperty;
  local_res10[0] = param_1;
  local_res18 = param_2;
  if (StatPtr_STAT_AccessibilityWindowsGetProperty ==
      (FThreadSafeStaticStat<FStat_STAT_AccessibilityWindowsGetProperty>)0x0) {
    pFVar8 = ::FName::FName((FName *)&local_78,"STAT_AccessibilityWindowsGetProperty");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_AccessibilityWindowsGetProperty>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AccessibilityWindowsGetProperty,
                       *pFVar8,L"Windows Accessibility: GetProperty","STATGROUP_Accessibility",
                       "STATCAT_Advanced",L"Accessibility",true,true,ST_int64,true,false,MCR_Invalid
                      );
  }
  FVar13 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar10 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_98.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_98.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_98.s.LowPart = FVar12.Value;
        local_98.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_98.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\Accessibility\\WindowsUIAWidgetProvider.cpp"
                   ,0x1e3);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_98.s.LowPart = FVar12.Value;
      local_98.s.HighPart = uVar10;
      local_88 = FVar13;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar5 = true;
      FVar14.Value = local_88.ComparisonIndex.Value;
      goto LAB_1423e195e;
    }
  }
  bVar5 = false;
  FVar13 = local_88;
LAB_1423e195e:
  local_90[0] = 0;
  lVar2 = *(longlong *)&this[-1].field_0x18;
  local_68[0] = (code *)0x0;
  local_40 = FMemory::Malloc(0x28,8);
  *local_40 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIAWidgetProvider::GetPropertyValue'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_40[1] = (longlong)&this[-1].field_0x10;
  local_40[2] = (longlong)local_90;
  local_40[3] = (longlong)local_res10;
  local_40[4] = (longlong)&local_res18;
  if (local_40 + 1 != (longlong *)0x0) {
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIAWidgetProvider::GetPropertyValue'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar2 = *(longlong *)(lVar2 + 0xa0);
  pTVar3 = *(TReferenceControllerBase<1> **)(lVar2 + 0x30);
  plVar11 = *(longlong **)(lVar2 + 0x28);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar11 + 0x20))(plVar11,local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (local_68[0] != (code *)0x0) {
    plVar11 = local_58;
    if (local_40 != (longlong *)0x0) {
      plVar11 = local_40;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  uVar7 = local_90[0];
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_78.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      local_78.NameAndInfo.Index.Value = FVar14.Value;
      QueryPerformanceCounter(&local_98);
      local_78.StatData.Pad[4] = '\0';
      local_78.StatData.Pad[5] = '\0';
      local_78.StatData.Pad[6] = '\0';
      local_78.StatData.Pad[7] = '\0';
      local_78.StatData.Pad[0] = local_98.s.LowPart._0_1_;
      local_78.StatData.Pad[1] = local_98.s.LowPart._1_1_;
      local_78.StatData.Pad[2] = local_98.s.LowPart._2_1_;
      local_78.StatData.Pad[3] = local_98.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_78);
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
  return uVar7;
}

// GetRuntimeId @ 1423e2420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIAWidgetProvider::GetRuntimeId(FWindowsUIAWidgetProvider *this,tagSAFEARRAY **param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  tagSAFEARRAY **local_res10 [3];
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)&this[-1].field_0x10;
  local_58[0] = 0;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIAWidgetProvider::GetRuntimeId'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = (longlong)&this[-1].field_0x8;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)local_res10;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIAWidgetProvider::GetRuntimeId'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

// Navigate @ 1423ef700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall
FWindowsUIAWidgetProvider::Navigate
          (FWindowsUIAWidgetProvider *this,NavigateDirection param_1,
          IRawElementProviderFragment **param_2)

{
  int *piVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_AccessibilityWindowsNavigate> FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  longlong *plVar11;
  FNameEntryId FVar12;
  FName FVar13;
  FNameEntryId FVar14;
  NavigateDirection local_res10 [2];
  IRawElementProviderFragment **local_res18;
  undefined1 auStackY_f8 [32];
  LARGE_INTEGER local_98;
  undefined4 local_90 [2];
  FName local_88;
  FStatMessage local_78;
  code *local_68 [2];
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  FVar14.Value = 0;
  FVar9 = StatPtr_STAT_AccessibilityWindowsNavigate;
  local_res10[0] = param_1;
  local_res18 = param_2;
  if (StatPtr_STAT_AccessibilityWindowsNavigate ==
      (FThreadSafeStaticStat<FStat_STAT_AccessibilityWindowsNavigate>)0x0) {
    pFVar8 = ::FName::FName((FName *)&local_78,"STAT_AccessibilityWindowsNavigate");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_AccessibilityWindowsNavigate>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AccessibilityWindowsNavigate,
                       *pFVar8,L"Windows Accessibility: Navigate","STATGROUP_Accessibility",
                       "STATCAT_Advanced",L"Accessibility",true,true,ST_int64,true,false,MCR_Invalid
                      );
  }
  FVar13 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar10 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_98.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_98.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_98.s.LowPart = FVar12.Value;
        local_98.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_98.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\Accessibility\\WindowsUIAWidgetProvider.cpp"
                   ,0x2ae);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_98.s.LowPart = FVar12.Value;
      local_98.s.HighPart = uVar10;
      local_88 = FVar13;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar5 = true;
      FVar14.Value = local_88.ComparisonIndex.Value;
      goto LAB_1423ef85e;
    }
  }
  bVar5 = false;
  FVar13 = local_88;
LAB_1423ef85e:
  local_90[0] = 0;
  lVar2 = *(longlong *)&this[-1].field_0x10;
  local_68[0] = (code *)0x0;
  local_40 = FMemory::Malloc(0x28,8);
  *local_40 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIAWidgetProvider::Navigate'::`2'::<lambda_1>,0,1>::
               _vftable_;
  local_40[1] = (longlong)&this[-1].field_0x8;
  local_40[2] = (longlong)local_90;
  local_40[3] = (longlong)local_res10;
  local_40[4] = (longlong)&local_res18;
  if (local_40 + 1 != (longlong *)0x0) {
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIAWidgetProvider::Navigate'::__l2::<lambda_1>,void>::
                  Call;
  }
  lVar2 = *(longlong *)(lVar2 + 0xa0);
  pTVar3 = *(TReferenceControllerBase<1> **)(lVar2 + 0x30);
  plVar11 = *(longlong **)(lVar2 + 0x28);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar11 + 0x20))(plVar11,local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (local_68[0] != (code *)0x0) {
    plVar11 = local_58;
    if (local_40 != (longlong *)0x0) {
      plVar11 = local_40;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  uVar7 = local_90[0];
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_78.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      local_78.NameAndInfo.Index.Value = FVar14.Value;
      QueryPerformanceCounter(&local_98);
      local_78.StatData.Pad[4] = '\0';
      local_78.StatData.Pad[5] = '\0';
      local_78.StatData.Pad[6] = '\0';
      local_78.StatData.Pad[7] = '\0';
      local_78.StatData.Pad[0] = local_98.s.LowPart._0_1_;
      local_78.StatData.Pad[1] = local_98.s.LowPart._1_1_;
      local_78.StatData.Pad[2] = local_98.s.LowPart._2_1_;
      local_78.StatData.Pad[3] = local_98.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_78);
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
  return uVar7;
}

// QueryInterface @ 1423fd420

undefined4 __thiscall
FWindowsUIAWidgetProvider::QueryInterface
          (FWindowsUIAWidgetProvider *this,_GUID *param_1,void **param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  FWindowsUIAWidgetProvider *pFVar4;
  
  lVar1._0_4_ = param_1->Data1;
  lVar1._4_2_ = param_1->Data2;
  lVar1._6_2_ = param_1->Data3;
  pFVar4 = this;
  if (((lVar1 != _GUID_00000000_0000_0000_c000_000000000046._0_8_) ||
      (*(longlong *)param_1->Data4 != _GUID_00000000_0000_0000_c000_000000000046._8_8_)) &&
     ((lVar2._0_4_ = param_1->Data1, lVar2._4_2_ = param_1->Data2, lVar2._6_2_ = param_1->Data3,
      lVar2 != _GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c._0_8_ ||
      (*(longlong *)param_1->Data4 != _GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c._8_8_)))) {
    lVar3._0_4_ = param_1->Data1;
    lVar3._4_2_ = param_1->Data2;
    lVar3._6_2_ = param_1->Data3;
    if ((lVar3 != _GUID_f7063da8_8359_439c_9297_bbc5299a7d87._0_8_) ||
       (*(longlong *)param_1->Data4 != _GUID_f7063da8_8359_439c_9297_bbc5299a7d87._8_8_)) {
      *param_2 = (void *)0x0;
      return 0x80004002;
    }
    pFVar4 = (FWindowsUIAWidgetProvider *)&this->field_0x8;
  }
  if (this == (FWindowsUIAWidgetProvider *)&DAT_00000028) {
    pFVar4 = (FWindowsUIAWidgetProvider *)0x0;
  }
  *param_2 = pFVar4;
  if (pFVar4 == (FWindowsUIAWidgetProvider *)0x0) {
    return 0x80004002;
  }
  (**(code **)(*(longlong *)this + 8))(this);
  return 0;
}

// QueryInterface`adjustor{8}' @ 1423fd4bc

/* [thunk]:public: virtual long __cdecl FWindowsUIAWidgetProvider::QueryInterface`adjustor{8}'
   (struct _GUID const & __ptr64,void * __ptr64 * __ptr64) __ptr64 */

long __thiscall
FWindowsUIAWidgetProvider::QueryInterface_adjustor_8__
          (FWindowsUIAWidgetProvider *this,_GUID *param_1,void **param_2)

{
  long lVar1;
  
  lVar1 = QueryInterface((FWindowsUIAWidgetProvider *)&this[-1].field_0x30,(_GUID *)param_1,param_2)
  ;
  return lVar1;
}

// Release @ 142400210

ulong __thiscall FWindowsUIAWidgetProvider::Release(FWindowsUIAWidgetProvider *this)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  
  if (*(int *)&this[-1].field_0x30 == 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6951043228682420265>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\Accessibility\\WindowsUIABaseProvider.cpp"
                       ,0x29,"RefCount > 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  uVar3 = *(int *)&this[-1].field_0x30 - 1;
  *(ulong *)&this[-1].field_0x30 = uVar3;
  if (uVar3 == 0) {
    (*(code *)**(undefined8 **)&this[-1].field_0x10)(&this[-1].field_0x10,1);
    uVar3 = 0;
  }
  return uVar3;
}

// Release`adjustor{8}' @ 142400274

/* [thunk]:public: virtual unsigned long __cdecl FWindowsUIAWidgetProvider::Release`adjustor{8}'
   (void) __ptr64 */

ulong __thiscall FWindowsUIAWidgetProvider::Release_adjustor_8__(FWindowsUIAWidgetProvider *this)

{
  ulong uVar1;
  
  uVar1 = Release((FWindowsUIAWidgetProvider *)&this[-1].field_0x30);
  return uVar1;
}

// SetFocus @ 142404300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall FWindowsUIAWidgetProvider::SetFocus(FWindowsUIAWidgetProvider *this)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  undefined **local_38;
  undefined1 *local_30;
  undefined4 *local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_30 = &this[-1].field_0x8;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FWindowsUIAWidgetProvider::SetFocus'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_28 = local_58;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FWindowsUIAWidgetProvider::SetFocus'::__l2::<lambda_1>,void>::
                Call;
  local_58[0] = 0;
  local_20 = (undefined ***)0x0;
  lVar1 = *(longlong *)(*(longlong *)&this[-1].field_0x10 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    pppuVar4 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar4 = local_20;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return local_58[0];
}

// SupportsInterface @ 1424088a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FWindowsUIAWidgetProvider::SupportsInterface(FWindowsUIAWidgetProvider *this,int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  int local_res10 [6];
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)&this->field_0x8;
  local_58[0] = 0;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIAWidgetProvider::SupportsInterface'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = (longlong)this;
  local_20[2] = (longlong)local_res10;
  local_20[3] = (longlong)local_58;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIAWidgetProvider::SupportsInterface'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return (bool)local_58[0];
}

// get_BoundingRectangle @ 14240cdf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIAWidgetProvider::get_BoundingRectangle(FWindowsUIAWidgetProvider *this,UiaRect *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  UiaRect *local_res10 [3];
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)&this[-1].field_0x10;
  local_58[0] = 0;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIAWidgetProvider::get_BoundingRectangle'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = (longlong)&this[-1].field_0x8;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)local_res10;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIAWidgetProvider::get_BoundingRectangle'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

// get_FragmentRoot @ 14240d660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIAWidgetProvider::get_FragmentRoot
          (FWindowsUIAWidgetProvider *this,IRawElementProviderFragmentRoot **param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  IRawElementProviderFragmentRoot **local_res10 [3];
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)&this[-1].field_0x10;
  local_58[0] = 0x80040201;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIAWidgetProvider::get_FragmentRoot'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = (longlong)&this[-1].field_0x8;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)local_res10;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIAWidgetProvider::get_FragmentRoot'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

// get_HostRawElementProvider @ 14240d770

undefined4 __thiscall
FWindowsUIAWidgetProvider::get_HostRawElementProvider
          (FWindowsUIAWidgetProvider *this,IRawElementProviderSimple **param_1)

{
  *param_1 = (IRawElementProviderSimple *)0x0;
  return 0;
}

// get_ProviderOptions @ 14240e120

undefined4 __thiscall
FWindowsUIAWidgetProvider::get_ProviderOptions
          (FWindowsUIAWidgetProvider *this,ProviderOptions *param_1)

{
  *param_1 = ProviderOptions_ServerSideProvider;
  return 0;
}

