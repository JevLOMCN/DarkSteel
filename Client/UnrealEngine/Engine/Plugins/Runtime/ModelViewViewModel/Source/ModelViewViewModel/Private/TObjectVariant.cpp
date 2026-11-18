// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 5

// GetData @ 14a7510e0

void * __thiscall UE::MVVM::TObjectVariant<0>::GetData(TObjectVariant<0> *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(this->Binding).TypeIndex;
  if (2 < uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  bVar1 = (this->Binding).TypeIndex;
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject*___ptr64>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar5) != '\0') {
    if (bVar1 != 2) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pvVar4 = (void *)(*pcVar2)();
        return pvVar4;
      }
    }
    return (void *)(this->Binding)._padding_;
  }
  if (2 < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject*___ptr64>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (ulonglong)bVar1 + 4) != '\0') {
    if ((this->Binding).TypeIndex != '\x01') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pvVar4 = (void *)(*pcVar2)();
        return pvVar4;
      }
    }
    return (void *)(this->Binding)._padding_;
  }
  return (void *)0x0;
}

// GetOwner @ 14a753330

UStruct * __thiscall UE::MVVM::TObjectVariant<0>::GetOwner(TObjectVariant<0> *this)

{
  byte bVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UStruct *pUVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)(this->Binding).TypeIndex;
  if (2 < uVar6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar5 = (UStruct *)(*pcVar3)();
      return pUVar5;
    }
  }
  bVar1 = (this->Binding).TypeIndex;
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject*___ptr64>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar6) == '\0') {
    if (2 < (ulonglong)bVar1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pUVar5 = (UStruct *)(*pcVar3)();
        return pUVar5;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject*___ptr64>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (ulonglong)bVar1 + 4) != '\0') {
      if ((this->Binding).TypeIndex != '\x01') {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pUVar5 = (UStruct *)(*pcVar3)();
          return pUVar5;
        }
      }
      return (UStruct *)(this->Binding)._padding_;
    }
  }
  else {
    if (bVar1 != 2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pUVar5 = (UStruct *)(*pcVar3)();
        return pUVar5;
      }
    }
    lVar2 = (this->Binding)._padding_;
    if (lVar2 != 0) {
      return *(UStruct **)(lVar2 + 0x10);
    }
  }
  return (UStruct *)0x0;
}

// GetUObject @ 14a7549a0

UObject * __thiscall UE::MVVM::TObjectVariant<0>::GetUObject(TObjectVariant<0> *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  if ((this->Binding).TypeIndex == '\x02') {
    return (UObject *)(this->Binding)._padding_;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Index == TypeIndex",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                     ,0x97,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UObject *)(*pcVar1)();
    return pUVar3;
  }
  return (UObject *)(this->Binding)._padding_;
}

// IsNull @ 14a759a00

bool __thiscall UE::MVVM::TObjectVariant<0>::IsNull(TObjectVariant<0> *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(this->Binding).TypeIndex;
  if (2 < uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  bVar1 = (this->Binding).TypeIndex;
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject*___ptr64>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar5) != '\0') {
    if (bVar1 != 2) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    return (this->Binding)._padding_ == 0;
  }
  if (2 < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject*___ptr64>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (ulonglong)bVar1 + 4) != '\0') {
    if ((this->Binding).TypeIndex != '\x01') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    return (this->Binding)._padding_ == 0;
  }
  return true;
}

// IsUObject @ 14a759eb0

bool __thiscall UE::MVVM::TObjectVariant<0>::IsUObject(TObjectVariant<0> *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(this->Binding).TypeIndex;
  if (2 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)*(undefined1 *)
                ((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject*___ptr64>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + uVar4);
}

