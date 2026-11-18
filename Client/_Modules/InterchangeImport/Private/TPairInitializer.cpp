// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 1

// operator<enum_EInterchangePropertyTracks,UE::Interchange::Private::FInterchangePropertyTracksHelper::FInterchangeProperty>_TTuple<enum_EInterchangePropertyTracks,UE::Interchange::Private::FInterchangePropertyTracksHelper::FInterchangeProperty> @ 14e675b10

TTuple<EInterchangePropertyTracks,UE::Interchange::Private::FInterchangePropertyTracksHelper::FInterchangeProperty>
* __thiscall
TPairInitializer<enum_EInterchangePropertyTracks_const_&,UE::Interchange::Private::FInterchangePropertyTracksHelper::FInterchangeProperty_const_&>
::
operator<enum_EInterchangePropertyTracks,UE::Interchange::Private::FInterchangePropertyTracksHelper::FInterchangeProperty>_TTuple<enum_EInterchangePropertyTracks,UE::Interchange::Private::FInterchangePropertyTracksHelper::FInterchangeProperty>
          (void *this,
          TTuple<EInterchangePropertyTracks,UE::Interchange::Private::FInterchangePropertyTracksHelper::FInterchangeProperty>
          *__return_storage_ptr__)

{
  byte bVar1;
  FString *pFVar2;
  code *pcVar3;
  bool bVar4;
  TTuple<EInterchangePropertyTracks,UE::Interchange::Private::FInterchangePropertyTracksHelper::FInterchangeProperty>
  *pTVar5;
  
  pFVar2 = *(FString **)((longlong)this + 8);
  *(undefined4 *)__return_storage_ptr__ = **(undefined4 **)this;
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x8,pFVar2);
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x18,pFVar2 + 1);
  *(FScriptContainerElement **)&__return_storage_ptr__->field_0x28 =
       pFVar2[2].Data.AllocatorInstance.Data;
  bVar1 = *(byte *)&pFVar2[3].Data.AllocatorInstance.Data;
  __return_storage_ptr__->field_0x38 = bVar1;
  if (2 < bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xec,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TTuple<EInterchangePropertyTracks,UE::Interchange::Private::FInterchangePropertyTracksHelper::FInterchangeProperty>
                *)(*pcVar3)();
      return pTVar5;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<UEnum*___ptr64,int,UClass*___ptr64>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
              ::__l2::CopyConstructors)[bVar1])
            (&__return_storage_ptr__->field_0x30,&pFVar2[2].Data.ArrayNum);
  return __return_storage_ptr__;
}

