// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 7

// FFrontendQueryKey @ 14ae58120

FFrontendQueryKey * __thiscall
Metasound::FFrontendQueryKey::FFrontendQueryKey(FFrontendQueryKey *this,FFrontendQueryKey *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FFrontendQueryKey *pFVar4;
  
  bVar1 = (param_1->Key).TypeIndex;
  (this->Key).TypeIndex = bVar1;
  if (3 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FFrontendQueryKey *)(*pcVar2)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<Metasound::FFrontendQueryKey::FNull,int,FString,FName>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  this->Hash = param_1->Hash;
  return this;
}

// FFrontendQueryKey @ 14ae581a0

FFrontendQueryKey * __thiscall
Metasound::FFrontendQueryKey::FFrontendQueryKey(FFrontendQueryKey *this,FFrontendQueryKey *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FFrontendQueryKey *pFVar4;
  
  bVar1 = (param_1->Key).TypeIndex;
  (this->Key).TypeIndex = bVar1;
  if (3 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xec,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FFrontendQueryKey *)(*pcVar2)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<Metasound::FFrontendQueryKey::FNull,int,FString,FName>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
              ::__l2::CopyConstructors)[bVar1])(this,param_1);
  this->Hash = param_1->Hash;
  return this;
}

// FFrontendQueryKey @ 14ae58220

FFrontendQueryKey * __thiscall
Metasound::FFrontendQueryKey::FFrontendQueryKey(FFrontendQueryKey *this,FName *param_1)

{
  FName FVar1;
  uint uVar2;
  
  (this->Key)._padding_ = (longlong)*param_1;
  (this->Key).TypeIndex = '\x03';
  FVar1 = *param_1;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  this->Hash = uVar2 + FVar1.Number;
  return this;
}

// FFrontendQueryKey @ 14ae58260

FFrontendQueryKey * __thiscall
Metasound::FFrontendQueryKey::FFrontendQueryKey(FFrontendQueryKey *this,FString *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  ::FString::FString((FString *)this,param_1);
  (this->Key).TypeIndex = '\x02';
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar4 = L"";
    iVar3 = 0;
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
  this->Hash = uVar2;
  return this;
}

// FFrontendQueryKey @ 14ae582c0

FFrontendQueryKey * __thiscall
Metasound::FFrontendQueryKey::FFrontendQueryKey(FFrontendQueryKey *this,int param_1)

{
  *(int *)&(this->Key)._padding_ = param_1;
  (this->Key).TypeIndex = '\x01';
  this->Hash = param_1;
  return this;
}

// FFrontendQueryKey @ 14ae582e0

FFrontendQueryKey * __thiscall
Metasound::FFrontendQueryKey::FFrontendQueryKey(FFrontendQueryKey *this)

{
  (this->Key).TypeIndex = '\0';
  this->Hash = 0xffffffff;
  return this;
}

// IsNull @ 14ae7a790

bool __thiscall Metasound::FFrontendQueryKey::IsNull(FFrontendQueryKey *this)

{
  return (this->Key).TypeIndex != '\0';
}

