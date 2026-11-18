// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 1

// SetDefaultLiteral @ 14ad63870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::FInputDataVertex::SetDefaultLiteral(FInputDataVertex *this,FLiteral *param_1)

{
  FLiteral *pFVar1;
  ulonglong uVar2;
  byte bVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong lStack_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  pFVar1 = &this->Literal;
  if (param_1 != pFVar1) {
    bVar3 = (param_1->Value).TypeIndex;
    local_28 = CONCAT71(local_28._1_7_,bVar3);
    if (0xc < (ulonglong)bVar3) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xec,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                ::__l2::CopyConstructors)[bVar3])(&local_38,param_1);
    uVar2 = *(ulonglong *)&(this->Literal).Value.TypeIndex;
    lVar5 = (pFVar1->Value)._padding_;
    lVar6 = (this->Literal).Value._padding_;
    (pFVar1->Value)._padding_ = local_38;
    (this->Literal).Value._padding_ = lStack_30;
    *(ulonglong *)&(this->Literal).Value.TypeIndex = local_28;
    local_38 = lVar5;
    lStack_30 = lVar6;
    local_28 = uVar2;
    if (0xc < (uVar2 & 0xff)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar2 & 0xff])(&local_38);
  }
  return;
}

