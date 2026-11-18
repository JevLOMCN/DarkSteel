// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 1

// Pop @ 14aadfdb0

TVariant<bool,int,float,TSharedPtr<UE::Mutable::Private::String_const_,1>,TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>,TSharedPtr<UE::Mutable::Private::FInstance_const_,1>_>
* __thiscall
UE::Mutable::Private::FStack::Pop
          (FStack *this,
          TVariant<bool,int,float,TSharedPtr<UE::Mutable::Private::String_const_,1>,TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>,TSharedPtr<UE::Mutable::Private::FInstance_const_,1>_>
          *__return_storage_ptr__)

{
  undefined1 *puVar1;
  void *_Src;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TVariant<bool,int,float,TSharedPtr<UE::Mutable::Private::String_const_,1>,TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>,TSharedPtr<UE::Mutable::Private::FInstance_const_,1>_>
  *pTVar5;
  FStack *pFVar6;
  ulonglong uVar7;
  
  puVar1 = &this->field_0x308;
  if (*(int *)puVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TVariant<bool,int,float,TSharedPtr<UE::Mutable::Private::String_const_,1>,TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>,TSharedPtr<UE::Mutable::Private::FInstance_const_,1>_>
                *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar6 = this;
  if (*(FStack **)&this->field_0x300 != (FStack *)0x0) {
    pFVar6 = *(FStack **)&this->field_0x300;
  }
  TVariant<bool,int,float,TSharedPtr<UE::Mutable::Private::String_const_,1>,TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>,TSharedPtr<UE::Mutable::Private::FInstance_const_,1>_>
  ::
  TVariant<bool,int,float,TSharedPtr<UE::Mutable::Private::String_const_,1>,TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>,TSharedPtr<UE::Mutable::Private::FInstance_const_,1>_>
            (__return_storage_ptr__,
             (TVariant<bool,int,float,TSharedPtr<UE::Mutable::Private::String_const_,1>,TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>,TSharedPtr<UE::Mutable::Private::FInstance_const_,1>_>
              *)(&pFVar6->field_0x0 + (longlong)(*(int *)puVar1 + -1) * 0x18));
  iVar2 = *(int *)puVar1;
  if (*(FStack **)&this->field_0x300 != (FStack *)0x0) {
    this = *(FStack **)&this->field_0x300;
  }
  uVar7 = (ulonglong)*(byte *)((longlong)this + (longlong)iVar2 * 0x18 + -8);
  _Src = &this->field_0x0 + (longlong)iVar2 * 0x18;
  if (5 < uVar7) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TVariant<bool,int,float,TSharedPtr<UE::Mutable::Private::String_const_,1>,TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>,TSharedPtr<UE::Mutable::Private::FInstance_const_,1>_>
                *)(*pcVar3)();
      return pTVar5;
    }
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,int,float,TSharedPtr<UE::Mutable::Private::String_const_,1>,TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>,TSharedPtr<UE::Mutable::Private::FInstance_const_,1>_>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[uVar7])((void *)((longlong)_Src + -0x18));
  if (*(int *)puVar1 - iVar2 != 0) {
    memmove((void *)((longlong)_Src + -0x18),_Src,(longlong)(*(int *)puVar1 - iVar2) * 0x18);
  }
  *(int *)puVar1 = *(int *)puVar1 + -1;
  return __return_storage_ptr__;
}

