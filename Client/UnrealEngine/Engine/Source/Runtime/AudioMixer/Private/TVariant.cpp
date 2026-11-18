// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 1

// TVariant<Audio::FPatchInput,TSharedPtr<Audio::FPatchOutput,1>_> @ 1464d7510

TVariant<Audio::FPatchInput,TSharedPtr<Audio::FPatchOutput,1>_> * __thiscall
TVariant<Audio::FPatchInput,TSharedPtr<Audio::FPatchOutput,1>_>::
TVariant<Audio::FPatchInput,TSharedPtr<Audio::FPatchOutput,1>_>
          (TVariant<Audio::FPatchInput,TSharedPtr<Audio::FPatchOutput,1>_> *this,
          TVariant<Audio::FPatchInput,TSharedPtr<Audio::FPatchOutput,1>_> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<Audio::FPatchInput,TSharedPtr<Audio::FPatchOutput,1>_> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<Audio::FPatchInput,TSharedPtr<Audio::FPatchOutput,1>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<Audio::FPatchInput,TSharedPtr<Audio::FPatchOutput,1>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

