// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProxyTable
// Functions: 7

// StaticStruct @ 14cf25210

UScriptStruct * __cdecl FLookupProxy::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLookupProxy.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProxyTable();
    Z_Registration_Info_UScriptStruct_FLookupProxy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLookupProxy,(UObject *)pUVar1,L"LookupProxy");
  }
  return Z_Registration_Info_UScriptStruct_FLookupProxy.OuterSingleton;
}

// FLookupProxy @ 14cf26690

FLookupProxy * __thiscall FLookupProxy::FLookupProxy(FLookupProxy *this)

{
  UPackage *pUVar1;
  
  (this->Proxy).field0_0x0.DebugPtr = (UProxyAsset *)0x0;
  this->_padding_ = (longlong)&___7FLookupProxy__6B_;
  FInstancedStruct::FInstancedStruct(&this->ProxyTable);
  if (Z_Registration_Info_UScriptStruct_FProxyTableContextProperty.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProxyTable();
    Z_Registration_Info_UScriptStruct_FProxyTableContextProperty.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FProxyTableContextProperty,(UObject *)pUVar1,
                         L"ProxyTableContextProperty");
  }
  FInstancedStruct::InitializeAs
            (&this->ProxyTable,
             Z_Registration_Info_UScriptStruct_FProxyTableContextProperty.OuterSingleton,
             (uchar *)0x0);
  return this;
}

// ChooseMulti @ 14cf26e80

EIteratorStatus __thiscall
FLookupProxy::ChooseMulti
          (FLookupProxy *this,FChooserEvaluationContext *param_1,
          TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
          *param_2)

{
  char cVar1;
  EIteratorStatus EVar2;
  FChooserParameterProxyTableBase *pFVar3;
  TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
  *pTVar4;
  UProxyTable *local_res8;
  undefined1 local_28 [32];
  
  if ((this->Proxy).field0_0x0.DebugPtr != (UProxyAsset *)0x0) {
    pFVar3 = FInstancedStruct::GetPtr<FChooserParameterProxyTableBase>(&this->ProxyTable);
    if (pFVar3 != (FChooserParameterProxyTableBase *)0x0) {
      local_res8 = (UProxyTable *)0x0;
      cVar1 = (**(code **)((longlong)*pFVar3 + 0x40))(pFVar3,param_1,&local_res8);
      if ((cVar1 != '\0') && (local_res8 != (UProxyTable *)0x0)) {
        pTVar4 = TDelegate<enum_FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                 ::
                 TDelegate<enum_FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                           (local_28,param_2);
        EVar2 = UProxyTable::FindProxyObjectMulti
                          (local_res8,&((this->Proxy).field0_0x0.DebugPtr)->Guid,param_1,pTVar4);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
        return EVar2;
      }
    }
    pTVar4 = TDelegate<enum_FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             ::
             TDelegate<enum_FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                       (local_28,param_2);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar4);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return Continue;
}

// ChooseObject @ 14cf26f60

UObject * __thiscall
FLookupProxy::ChooseObject(FLookupProxy *this,FChooserEvaluationContext *param_1)

{
  char cVar1;
  FChooserParameterProxyTableBase *pFVar2;
  UObject *pUVar3;
  UProxyTable *local_res8;
  
  if ((this->Proxy).field0_0x0.DebugPtr != (UProxyAsset *)0x0) {
    pFVar2 = FInstancedStruct::GetPtr<FChooserParameterProxyTableBase>(&this->ProxyTable);
    if (pFVar2 != (FChooserParameterProxyTableBase *)0x0) {
      local_res8 = (UProxyTable *)0x0;
      cVar1 = (**(code **)((longlong)*pFVar2 + 0x40))(pFVar2,param_1,&local_res8);
      if ((cVar1 != '\0') && (local_res8 != (UProxyTable *)0x0)) {
        pUVar3 = UProxyTable::FindProxyObject
                           (local_res8,&((this->Proxy).field0_0x0.DebugPtr)->Guid,param_1);
        return pUVar3;
      }
    }
  }
  return (UObject *)0x0;
}

// Compile @ 14cf26fe0

void __thiscall FLookupProxy::Compile(FLookupProxy *this,IHasContextClass *param_1,bool param_2)

{
  FChooserParameterBase *pFVar1;
  
  if ((this->Proxy).field0_0x0.DebugPtr != (UProxyAsset *)0x0) {
    pFVar1 = FInstancedStruct::GetMutablePtr<FChooserParameterBase>(&this->ProxyTable);
    if (pFVar1 != (FChooserParameterBase *)0x0) {
      (**(code **)((longlong)*pFVar1 + 0x28))(pFVar1,param_1,param_2);
    }
  }
  return;
}

// GetDebugName @ 14cf27760

void __thiscall FLookupProxy::GetDebugName(FLookupProxy *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FName local_res8 [4];
  FString local_18;
  
  if ((this->Proxy).field0_0x0.DebugPtr != (UProxyAsset *)0x0) {
    local_res8[0] = UE::CoreUObject::Private::GetFName((UObject *)(local_res8 + 2));
    local_res8[0] = *(FName *)local_res8[0];
    ::FName::ToString(local_res8,&local_18);
    if (param_1 != &local_18) {
      pFVar1 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_1->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
      (param_1->Data).ArrayNum = local_18.Data.ArrayNum;
      (param_1->Data).ArrayMax = local_18.Data.ArrayMax;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// HasCompileErrors @ 14cf27ad0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall FLookupProxy::HasCompileErrors(FLookupProxy *this,FText *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  FChooserParameterBase *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  undefined1 local_res8 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_b8;
  FText local_a8;
  FText local_98;
  FTextFormat local_88;
  FText local_78;
  FFormatArgumentValue local_68;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  if ((this->Proxy).field0_0x0.DebugPtr == (UProxyAsset *)0x0) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"LookupProxy",L"NoProxy",L"LookupProxy: Proxy Asset is not set");
    FText::operator=(param_1,pFVar6);
    local_38.TextData.Reference = local_28.TextData.Reference;
  }
  else {
    pFVar5 = FInstancedStruct::GetMutablePtr<FChooserParameterBase>(&this->ProxyTable);
    if (pFVar5 != (FChooserParameterBase *)0x0) {
      FText::FText(&local_a8);
      cVar2 = (**(code **)((longlong)*pFVar5 + 0x30))(pFVar5,&local_a8);
      if (cVar2 == '\0') {
        bVar3 = false;
      }
      else {
        local_98.TextData.Reference = local_a8.TextData.Reference;
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a8.TextData.Reference + 8))
                    (local_a8.TextData.Reference,local_res8);
        }
        local_98.Flags = local_a8.Flags;
        pFVar6 = FText::AsLocalizable_Advanced_LocText
                           (&local_48,L"LookupProxy",L"LookupProxyBinding",
                            L"LookupProxy: ProxyTable Reference - {0}");
        pFVar7 = FTextFormat::FTextFormat(&local_18,pFVar6,Default);
        local_68.Type = Text;
        FText::FText((FText *)&local_68.TextValue,&local_98);
        if ((local_68.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b8.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,0,&local_b8.AllocatorInstance,1,&local_b8.ArrayMax);
        ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                  (local_b8.AllocatorInstance.Data,&local_68,1);
        local_88.TextFormatData.Object = (pFVar7->TextFormatData).Object;
        local_88.TextFormatData.SharedReferenceCount.ReferenceController =
             (pFVar7->TextFormatData).SharedReferenceCount.ReferenceController;
        if (local_88.TextFormatData.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_88.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_88.TextFormatData.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        FText::Format(&local_78,&local_88,&local_b8);
        DestructItems<FFormatArgumentValue,int>
                  ((FFormatArgumentValue *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
        if ((FFormatArgumentValue *)local_b8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0)
        {
          FMemory::Free(local_b8.AllocatorInstance.Data);
        }
        if (local_68.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_68.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar7->TextFormatData).SharedReferenceCount.ReferenceController);
        if (local_98.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
        }
        FText::operator=(param_1,&local_78);
        if (local_78.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
        }
        if (local_48.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
        }
        bVar3 = true;
      }
      if (local_a8.TextData.Reference == (ITextData *)0x0) {
        return bVar3;
      }
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      return bVar3;
    }
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"LookupProxy",L"NoParameter",
                        L"LookupProxy: No Proxy Table parameter bound");
    FText::operator=(param_1,pFVar6);
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return true;
}

