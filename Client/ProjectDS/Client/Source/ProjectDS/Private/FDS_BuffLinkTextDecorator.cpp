// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// CreateDecoratorWidget @ 14b42ca40

TSharedPtr<SWidget,1> * __thiscall
FDS_BuffLinkTextDecorator::CreateDecoratorWidget
          (FDS_BuffLinkTextDecorator *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,
          FTextRunInfo *param_1,FTextBlockStyle *param_2)

{
  int iVar1;
  void *pvVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TTuple<FString,FString> *pTVar5;
  FLinearColor *pFVar6;
  FDS_BuffBaseTableRow *pFVar7;
  FText *pFVar8;
  TSharedRef<SWidget,1> *pTVar9;
  FString local_98;
  FString local_88;
  FLinearColor_u_0 local_78;
  TSharedRef<SWidget,1> local_68;
  TSharedRef<SWidget,1> local_58;
  TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> local_48;
  
  ::FString::FString((FString *)&local_68,L"linkdata");
  pTVar5 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)&param_1->_padding_,(FString *)&local_68);
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (pTVar5 == (TTuple<FString,FString> *)0x0) {
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
  }
  else {
    iVar1 = *(int *)&pTVar5->field_0x18;
    pvVar2 = *(void **)&pTVar5->field_0x10;
    local_98.Data.ArrayNum = iVar1;
    if (iVar1 == 0) {
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,0,(ForAnyElementType *)&local_98,iVar1,&local_98.Data.ArrayMax);
      memcpy(local_98.Data.AllocatorInstance.Data,pvVar2,(longlong)iVar1 * 2);
    }
  }
  if (local_68.Object != (SWidget *)0x0) {
    FMemory::Free(local_68.Object);
  }
  ::FString::FString((FString *)&local_68,L"color");
  pTVar5 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)&param_1->_padding_,(FString *)&local_68);
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (pTVar5 == (TTuple<FString,FString> *)0x0) {
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
  }
  else {
    iVar1 = *(int *)&pTVar5->field_0x18;
    pvVar2 = *(void **)&pTVar5->field_0x10;
    local_88.Data.ArrayNum = iVar1;
    if (iVar1 == 0) {
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,0,(ForAnyElementType *)&local_88,iVar1,&local_88.Data.ArrayMax);
      memcpy(local_88.Data.AllocatorInstance.Data,pvVar2,(longlong)iVar1 * 2);
    }
  }
  if (local_68.Object != (SWidget *)0x0) {
    FMemory::Free(local_68.Object);
  }
  bVar4 = FLinearColor::InitFromString((FLinearColor *)&local_78._s_0,&local_88);
  if (!bVar4) {
    if ((param_2->ColorAndOpacity).ColorUseRule == UseColor_ColorTable) {
      pFVar6 = FSlateColor::GetColorFromTable(&param_2->ColorAndOpacity);
      local_78._s_0.R = (pFVar6->field0_0x0)._s_0.R;
      local_78._s_0.G = (pFVar6->field0_0x0)._s_0.G;
      local_78._s_0.B = (pFVar6->field0_0x0)._s_0.B;
      local_78._s_0.A = (pFVar6->field0_0x0)._s_0.A;
    }
    else {
      local_78._s_0.R = (param_2->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.R;
      local_78._s_0.G = (param_2->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.G;
      local_78._s_0.B = (param_2->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.B;
      local_78._s_0.A = (param_2->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.A;
    }
  }
  bVar4 = FText::IsEmpty(&param_1->Content);
  if ((bVar4) &&
     (pFVar7 = FDS_BuffBaseTableRow::Get(0x44d,true), pFVar7 != (FDS_BuffBaseTableRow *)0x0)) {
    local_48._0_8_ = 0;
    local_48._8_8_ = 0;
    local_48._16_4_ = 0;
    TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              (&local_48,
               (TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *)
               &this->field_0x18);
    bVar4 = (bool)this->field_0x10;
    pFVar8 = FDS_StringIDWrapper::Text((FDS_StringIDWrapper *)&pFVar7->ID_Name,(FText *)&local_58);
    pTVar9 = FDS_BaseLinkTextDecorator::CreateLinkWidget
                       ((FDS_BaseLinkTextDecorator *)this,&local_68,pFVar8,&local_98,param_2,
                        (FLinearColor *)&local_78._s_0,bVar4,&local_48);
    __return_storage_ptr__->Object = pTVar9->Object;
    pTVar3 = (pTVar9->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    if (local_58.Object != (SWidget *)0x0) {
      (**(code **)((local_58.Object)->_padding_ + 0x10))();
    }
  }
  else {
    local_48._0_8_ = 0;
    local_48._8_8_ = 0;
    local_48._16_4_ = 0;
    TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              (&local_48,
               (TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *)
               &this->field_0x18);
    pTVar9 = FDS_BaseLinkTextDecorator::CreateLinkWidget
                       ((FDS_BaseLinkTextDecorator *)this,&local_58,&param_1->Content,&local_98,
                        param_2,(FLinearColor *)&local_78._s_0,(bool)this->field_0x10,&local_48);
    __return_storage_ptr__->Object = pTVar9->Object;
    pTVar3 = (pTVar9->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Supports @ 14b42e2a0

bool __thiscall
FDS_BuffLinkTextDecorator::Supports
          (FDS_BuffLinkTextDecorator *this,FTextRunParseResults *param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FDS_StringUiID local_18;
  
  local_18.ID = 0xc5af;
  local_18._padding_ = (longlong)&___7FDS_StringUiID__6B_;
  pFVar3 = FDS_StringUiID::Str(&local_18);
  iVar2 = (param_1->Name).Data.ArrayNum;
  iVar1 = (pFVar3->Data).ArrayNum;
  if (iVar2 != iVar1) {
    return iVar1 + iVar2 == 1;
  }
  if (1 < iVar2) {
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->Name).Data.AllocatorInstance.Data,
                       (wchar_t *)(pFVar3->Data).AllocatorInstance.Data);
    return iVar2 == 0;
  }
  return true;
}

