// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 1

// AddOrUpdateVertex @ 14ad45a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
          (TVertexInterfaceImpl<Metasound::FInputDataVertex> *this,FInputDataVertex *param_1)

{
  int *piVar1;
  FLiteral *pFVar2;
  ulonglong uVar3;
  byte bVar4;
  FInputDataVertex *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FInputDataVertex *pFVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  undefined1 auStack_88 [32];
  FInputDataVertex *local_68;
  FInputDataVertex *local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_38;
  longlong lStack_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar5 = (FInputDataVertex *)(this->Vertices).AllocatorInstance.Data;
  lVar12 = (longlong)(this->Vertices).ArrayNum;
  if (pFVar5 != pFVar5 + lVar12) {
    pFVar9 = pFVar5;
    do {
      if (pFVar9->_padding_ == param_1->_padding_) {
        pFVar9->_padding_ = param_1->_padding_;
        pFVar2 = &pFVar9->Literal;
        pFVar9->_padding_ = param_1->_padding_;
        *(int *)&pFVar9->_padding_ = (int)param_1->_padding_;
        if (&param_1->Literal == pFVar2) {
          return;
        }
        bVar4 = (param_1->Literal).Value.TypeIndex;
        local_28 = CONCAT71(local_28._1_7_,bVar4);
        if ((0xc < (ulonglong)bVar4) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x105,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                    ::__l2::MoveConstructors)[bVar4])(&local_38,&param_1->Literal);
        uVar3 = *(ulonglong *)&(pFVar9->Literal).Value.TypeIndex;
        lVar12 = (pFVar2->Value)._padding_;
        lVar10 = (pFVar9->Literal).Value._padding_;
        (pFVar2->Value)._padding_ = local_38;
        (pFVar9->Literal).Value._padding_ = lStack_30;
        *(ulonglong *)&(pFVar9->Literal).Value.TypeIndex = local_28;
        local_38 = lVar12;
        lStack_30 = lVar10;
        local_28 = uVar3;
        if ((0xc < (uVar3 & 0xff)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar3 & 0xff])(&local_38);
        return;
      }
      pFVar9 = pFVar9 + 1;
    } while (pFVar9 != pFVar5 + lVar12);
  }
  if ((pFVar5 <= param_1) &&
     (lVar10 = (longlong)(this->Vertices).ArrayMax, param_1 < pFVar5 + lVar10)) {
    local_48 = 0x38;
    local_68 = param_1;
    local_60 = pFVar5;
    local_58 = lVar10;
    local_50 = lVar12;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar8 = (this->Vertices).ArrayNum;
  piVar1 = &(this->Vertices).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,(ForAnyElementType *)this,piVar1);
  }
  (this->Vertices).ArrayNum = iVar8 + 1;
  pFVar11 = (this->Vertices).AllocatorInstance.Data + (longlong)iVar8 * 0x38;
  *(undefined ***)pFVar11 = &___7FDataVertex_Metasound__6B_;
  *(longlong *)(pFVar11 + 8) = param_1->_padding_;
  *(longlong *)(pFVar11 + 0x10) = param_1->_padding_;
  *(int *)(pFVar11 + 0x18) = (int)param_1->_padding_;
  *(undefined ***)pFVar11 = &___7FInputDataVertex_Metasound__6B_;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  ::
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
            ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              *)(pFVar11 + 0x20),&(param_1->Literal).Value);
  return;
}

