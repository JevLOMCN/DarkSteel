// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 2

// TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF> @ 14e765250

TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>
* __thiscall
TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>
::
TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>
          (void *this,
          TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>
          *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>
  *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  *(byte *)((longlong)this + 1) = bVar1;
  if (3 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF> @ 14e7652d0

TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>
* __thiscall
TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>
::
TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>
          (void *this,
          TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>
          *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>
  *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  *(byte *)((longlong)this + 1) = bVar1;
  if (3 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xec,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
              ::__l2::CopyConstructors)[bVar1])(this,param_1);
  return this;
}

