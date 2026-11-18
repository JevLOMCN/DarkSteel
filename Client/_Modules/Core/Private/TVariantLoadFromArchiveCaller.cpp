// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// Load @ 141d03100

void __cdecl
UE::Core::Private::TVariantLoadFromArchiveCaller<int,TVariant<int,FString>_>::Load
          (FArchive *param_1,TVariant<int,FString> *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  code *pcVar3;
  bool bVar4;
  
  bVar1 = param_2->TypeIndex;
  if (1 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<int,FString>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])(param_2);
  *(undefined4 *)&param_2->_padding_ = 0;
  param_2->TypeIndex = '\0';
  puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if (puVar2 + 1 <= (undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *(undefined4 *)&param_2->_padding_ = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141d031ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
  return;
}

// Load @ 141d031d0

void __cdecl
UE::Core::Private::TVariantLoadFromArchiveCaller<FString,TVariant<int,FString>_>::Load
          (FArchive *param_1,TVariant<int,FString> *param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar1 = param_2->TypeIndex;
  if (1 < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<int,FString>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])(param_2);
  param_2->_padding_ = 0;
  param_2->_padding_ = 0;
  param_2->TypeIndex = '\x01';
  ::operator<<(param_1,(FString *)param_2);
  return;
}

