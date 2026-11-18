// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// FTextFormatData @ 141736300

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FTextFormatData * __thiscall
FTextFormatData::FTextFormatData
          (FTextFormatData *this,FString *param_1,ETextFormatFlags param_2,
          TSharedRef<FTextFormatPatternDefinition_const_,1> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  undefined1 local_res18 [8];
  
  this->SourceType = String;
  this->FormatFlags = param_2;
  (this->PatternDef).Object = param_3->Object;
  pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
  (this->PatternDef).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar3 = FText::GetEmpty();
  (this->SourceText).TextData.Reference = (ITextData *)0x0;
  pIVar2 = (pFVar3->TextData).Reference;
  (this->SourceText).TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res18);
  }
  (this->SourceText).Flags = 0;
  (this->SourceExpression).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompiledDataMutex).State = (atomic<unsigned_char>)0x0;
  (this->SourceExpression).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceExpression).Data.ArrayNum = (param_1->Data).ArrayNum;
  (this->SourceExpression).Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  (this->LexedExpression).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LexedExpression).ArrayNum = 0;
  (this->LexedExpression).ArrayMax = 0;
  (this->CompiledTextSnapshot).TextDataPtr.Reference = (ITextData *)0x0;
  (this->CompiledTextSnapshot).LocalizedStringPtr = (TDisplayStringPtr<FString_const_>)0x0;
  (this->CompiledTextSnapshot).GlobalHistoryRevision = 0;
  (this->CompiledTextSnapshot).LocalHistoryRevision = 0;
  (this->CompiledTextSnapshot).Flags = 0;
  (this->LastCompileError).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastCompileError).Data.ArrayNum = 0;
  (this->LastCompileError).Data.ArrayMax = 0;
  Compile_NoLock(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// FTextFormatData @ 1417363d0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FTextFormatData * __thiscall
FTextFormatData::FTextFormatData
          (FTextFormatData *this,FText *param_1,ETextFormatFlags param_2,
          TSharedRef<FTextFormatPatternDefinition_const_,1> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->SourceType = Text;
  this->FormatFlags = param_2;
  (this->PatternDef).Object = param_3->Object;
  pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
  (this->PatternDef).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  FText::FText(&this->SourceText,param_1);
  (this->CompiledDataMutex).State = (atomic<unsigned_char>)0x0;
  (this->SourceExpression).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceExpression).Data.ArrayNum = 0;
  (this->SourceExpression).Data.ArrayMax = 0;
  (this->LexedExpression).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LexedExpression).ArrayNum = 0;
  (this->LexedExpression).ArrayMax = 0;
  (this->CompiledTextSnapshot).TextDataPtr.Reference = (ITextData *)0x0;
  (this->CompiledTextSnapshot).LocalizedStringPtr = (TDisplayStringPtr<FString_const_>)0x0;
  (this->CompiledTextSnapshot).GlobalHistoryRevision = 0;
  (this->CompiledTextSnapshot).LocalHistoryRevision = 0;
  (this->CompiledTextSnapshot).Flags = 0;
  (this->LastCompileError).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastCompileError).Data.ArrayNum = 0;
  (this->LastCompileError).Data.ArrayMax = 0;
  Compile_NoLock(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FTextFormatData @ 141739610

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall FTextFormatData::~FTextFormatData(FTextFormatData *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TDisplayStringPtr<FString_const_> TVar3;
  ITextData *pIVar4;
  
  pFVar2 = (this->LastCompileError).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TVar3 = (this->CompiledTextSnapshot).LocalizedStringPtr;
  if (TVar3 != (TDisplayStringPtr<FString_const_>)0x0) {
    LOCK();
    iVar1 = *(int *)TVar3;
    *(int *)TVar3 = *(int *)TVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      if (*(void **)((longlong)TVar3 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)TVar3 + 8));
      }
      ::operator_delete((void *)TVar3,0x18);
    }
  }
  pIVar4 = (this->CompiledTextSnapshot).TextDataPtr.Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  DestructItems<TExpressionToken<wchar_t>,int>
            ((TExpressionToken<wchar_t> *)(this->LexedExpression).AllocatorInstance.Data,
             (this->LexedExpression).ArrayNum);
  pFVar2 = (this->LexedExpression).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SourceExpression).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pIVar4 = (this->SourceText).TextData.Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PatternDef).SharedReferenceCount.ReferenceController);
  return;
}

// Compile_NoLock @ 14174c840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTextFormatData::Compile_NoLock(FTextFormatData *this)

{
  TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  FTextFormatPatternDefinition *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  undefined8 uVar12;
  TRefCountPtr<ITextData> TVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_TextFormatData_Compile> FVar18;
  FString *pFVar19;
  FTextSnapshot *pFVar20;
  FScriptContainerElement *pFVar21;
  FText *pFVar22;
  FTextFormat *pFVar23;
  wchar_t *pwVar24;
  FNameEntryId FVar25;
  FName FVar26;
  uint uVar27;
  ulonglong uVar28;
  longlong lVar29;
  uint uVar30;
  FScriptContainerElement *pFVar31;
  TExpressionToken<wchar_t> *pTVar32;
  ulonglong uVar33;
  undefined1 auStackY_228 [32];
  char local_1c6 [2];
  int local_1c4;
  FLLMScope local_1c0 [2];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_1b8;
  FColor_u_0 local_1a8;
  int local_1a4;
  uint local_1a0;
  uint uStack_19c;
  FName local_198;
  FText local_190;
  FName local_180;
  undefined1 local_170 [8];
  FMemScope local_168;
  FTextFormat local_160;
  FText local_150;
  FText local_140;
  FText local_130;
  FString local_120;
  FFormatArgumentValue local_108;
  undefined4 local_e8;
  longlong local_e0;
  longlong *local_d8;
  undefined4 local_d0;
  FName local_c8;
  FText local_c0;
  FTextSnapshot local_b0;
  ForAnyElementType local_98 [2];
  FTextFormat local_88;
  TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
  local_78;
  FText local_60;
  ulonglong local_50;
  FText local_48;
  byte local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_228;
  FVar18 = StatPtr_STAT_TextFormatData_Compile;
  if (StatPtr_STAT_TextFormatData_Compile ==
      (FThreadSafeStaticStat<FStat_STAT_TextFormatData_Compile>)0x0) {
    pFVar17 = ::FName::FName(&local_c8,"STAT_TextFormatData_Compile");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_TextFormatData_Compile>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextFormatData_Compile,*pFVar17,
                        L"TextFormatData Compile","STATGROUP_Text","STATCAT_Advanced",L"Text",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar26 = *(FName *)FVar18;
  bVar10 = false;
  bVar11 = false;
  local_180.ComparisonIndex.Value = 0;
  local_180.Number = 0;
  bVar14 = false;
  bVar15 = false;
  FVar25 = FVar26.ComparisonIndex.Value;
  uVar27 = FVar26.Number;
  if ((FVar25.Value != 0) || (uVar27 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1a8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1a8._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar10 = false;
      bVar11 = true;
      bVar14 = false;
      bVar15 = true;
      if (-1 < CpuChannel->Enabled) {
        local_198.ComparisonIndex.Value = FVar25.Value;
        local_198.Number = uVar27;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_198,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextFormatter.cpp"
                   ,0x2cf);
        bVar10 = true;
        bVar11 = true;
        bVar14 = true;
        bVar15 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1a0 = FVar25.Value;
      uStack_19c = uVar27;
      FThreadStats::AddMessage(FVar26,CycleScopeStart);
      bVar14 = true;
      goto LAB_14174c9aa;
    }
  }
  bVar11 = bVar15;
  bVar10 = bVar14;
  bVar14 = false;
  FVar26 = local_180;
LAB_14174c9aa:
  FLLMScope::FLLMScope(local_1c0,Localization,false,None,Default,true);
  FMemScope::FMemScope(&local_168,Localization,true);
  pTVar32 = (TExpressionToken<wchar_t> *)(this->LexedExpression).AllocatorInstance.Data;
  pTVar1 = &this->LexedExpression;
  piVar2 = &(this->LexedExpression).ArrayMax;
  iVar3 = (this->LexedExpression).ArrayNum;
  if (*piVar2 < 0) {
    DestructItems<TExpressionToken<wchar_t>,int>(pTVar32,iVar3);
    (this->LexedExpression).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<TExpressionToken<wchar_t>,int>(pTVar32,iVar3);
    (this->LexedExpression).ArrayNum = 0;
  }
  if (this->SourceType == Text) {
    FText::Rebuild(&this->SourceText);
    pFVar19 = (FString *)(**(code **)((longlong)*(this->SourceText).TextData.Reference + 0x28))();
    ::FString::operator=(&this->SourceExpression,pFVar19);
    pFVar20 = FTextSnapshot::FTextSnapshot(&local_b0,&this->SourceText);
    FTextSnapshot::operator=(&this->CompiledTextSnapshot,pFVar20);
    if (local_b0.LocalizedStringPtr != (TDisplayStringPtr<FString_const_>)0x0) {
      LOCK();
      iVar3 = *(int *)local_b0.LocalizedStringPtr;
      *(int *)local_b0.LocalizedStringPtr = *(int *)local_b0.LocalizedStringPtr + -1;
      UNLOCK();
      if (iVar3 == 1) {
        if (*(void **)((longlong)local_b0.LocalizedStringPtr + 8) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)local_b0.LocalizedStringPtr + 8));
        }
        ::operator_delete((void *)local_b0.LocalizedStringPtr,0x18);
      }
    }
    if (local_b0.TextDataPtr.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b0.TextDataPtr.Reference + 0x10))();
    }
  }
  pFVar7 = (this->PatternDef).Object;
  uVar27 = 1;
  this->CompiledExpressionType = Simple;
  this->BaseFormatStringLength = 0;
  this->FormatArgumentEstimateMultiplier = 1;
  if ((this->SourceExpression).Data.ArrayNum == 0) {
    pwVar24 = L"";
  }
  else {
    pwVar24 = (wchar_t *)(this->SourceExpression).Data.AllocatorInstance.Data;
  }
  ExpressionParser::Lex<wchar_t>(&local_78,pwVar24,&pFVar7->TextFormatDefinitions);
  uVar28 = local_78.Variant._16_8_ & 0xff;
  if ((2 < uVar28) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28) == '\0') {
LAB_14174d21b:
    pTVar32 = (TExpressionToken<wchar_t> *)(this->LexedExpression).AllocatorInstance.Data;
    iVar3 = (this->LexedExpression).ArrayNum;
    if ((this->LexedExpression).ArrayMax < 0) {
      DestructItems<TExpressionToken<wchar_t>,int>(pTVar32,iVar3);
      (this->LexedExpression).ArrayNum = 0;
      if ((this->LexedExpression).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,0,&(this->LexedExpression).AllocatorInstance,0,
                   &(this->LexedExpression).ArrayMax);
      }
    }
    else {
      DestructItems<TExpressionToken<wchar_t>,int>(pTVar32,iVar3);
      (this->LexedExpression).ArrayNum = 0;
    }
    this->CompiledExpressionType = Invalid;
    if ((local_78.Variant.TypeIndex != '\x01') &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FText::Rebuild((FText *)&local_78);
    pFVar19 = (FString *)(**(code **)((longlong)*(ITextData *)local_78.Variant._padding_ + 0x28))();
    ::FString::operator=(&this->LastCompileError,pFVar19);
  }
  else {
    if ((local_78.Variant.TypeIndex != '\0') &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar12 = local_78.Variant._16_8_;
    pTVar32 = (TExpressionToken<wchar_t> *)local_78.Variant._padding_;
    local_1a4 = local_78.Variant._padding_._4_4_;
    local_78.Variant._padding_ = 0;
    uVar30 = (uint)local_78.Variant._padding_;
    local_78.Variant._padding_ = 0;
    if ((2 < local_78.Variant.TypeIndex) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar12 & 0xff])(&local_78);
    local_78.Variant.TypeIndex = 2;
    if (pTVar1 != (TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_> *)local_98) {
      DestructItems<TExpressionToken<wchar_t>,int>
                ((TExpressionToken<wchar_t> *)(pTVar1->AllocatorInstance).Data,
                 (this->LexedExpression).ArrayNum);
      pFVar8 = (pTVar1->AllocatorInstance).Data;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)pTVar32;
      pTVar32 = (TExpressionToken<wchar_t> *)0x0;
      (this->LexedExpression).ArrayNum = uVar30;
      uVar30 = 0;
      *piVar2 = local_1a4;
    }
    DestructItems<TExpressionToken<wchar_t>,int>(pTVar32,uVar30);
    if (pTVar32 != (TExpressionToken<wchar_t> *)0x0) {
      FMemory::Free(pTVar32);
    }
    uVar30 = 0;
    if (0 < (this->LexedExpression).ArrayNum) {
      lVar29 = 0;
      do {
        uVar16 = 0;
        if ((int)uVar30 < (this->LexedExpression).ArrayNum) {
          uVar16 = ~uVar30 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar31 = (pTVar1->AllocatorInstance).Data + lVar29;
        uVar16 = *(uint *)(pFVar31 + 8);
        pFVar8 = pFVar31 + 0x18;
        uVar4 = *(uint *)(pFVar31 + 0xc);
        uVar5 = *(uint *)(pFVar31 + 4);
        uVar6 = *(uint *)pFVar31;
        pFVar21 = pFVar8;
        if (((uVar4 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FStringLiteral>::GetTypeId(void)'
                       ::__l2::Global.D ||
             uVar16 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FStringLiteral>::GetTypeId(void)'
                       ::__l2::Global.C) ||
            uVar5 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FStringLiteral>::GetTypeId(void)'
                     ::__l2::Global.B) ||
            uVar6 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FStringLiteral>::GetTypeId(void)'
                     ::__l2::Global.A) {
          pFVar21 = (FScriptContainerElement *)0x0;
        }
        if (pFVar21 == (FScriptContainerElement *)0x0) {
          pFVar21 = pFVar8;
          if (((uVar4 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FEscapedCharacter>::GetTypeId(void)'
                         ::__l2::Global.D ||
               uVar16 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FEscapedCharacter>::GetTypeId(void)'
                         ::__l2::Global.C) ||
              uVar5 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FEscapedCharacter>::GetTypeId(void)'
                       ::__l2::Global.B) ||
              uVar6 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FEscapedCharacter>::GetTypeId(void)'
                       ::__l2::Global.A) {
            pFVar21 = (FScriptContainerElement *)0x0;
          }
          if (pFVar21 == (FScriptContainerElement *)0x0) {
            if ((((uVar4 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentTokenSpecifier>::GetTypeId(void)'
                            ::__l2::Global.D &&
                  uVar16 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentTokenSpecifier>::GetTypeId(void)'
                            ::__l2::Global.C) &&
                 uVar5 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentTokenSpecifier>::GetTypeId(void)'
                          ::__l2::Global.B) &&
                 uVar6 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentTokenSpecifier>::GetTypeId(void)'
                          ::__l2::Global.A) && (pFVar8 != (FScriptContainerElement *)0x0)) {
              this->CompiledExpressionType = Complex;
              if ((-1 < (int)uVar27) && ((int)uVar27 < (this->LexedExpression).ArrayNum)) {
                uVar16 = 0;
                if ((int)uVar27 < (this->LexedExpression).ArrayNum) {
                  uVar16 = ~uVar27 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar8 = (pTVar1->AllocatorInstance).Data;
                pFVar21 = pFVar8 + lVar29 + 0x78;
                if (((*(uint *)(pFVar8 + lVar29 + 0x6c) !=
                      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentModifierTokenSpecifier>::GetTypeId(void)'
                      ::__l2::Global.D ||
                     *(uint *)(pFVar8 + lVar29 + 0x68) !=
                     `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentModifierTokenSpecifier>::GetTypeId(void)'
                     ::__l2::Global.C) ||
                    *(uint *)(pFVar8 + lVar29 + 100) !=
                    `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentModifierTokenSpecifier>::GetTypeId(void)'
                    ::__l2::Global.B) ||
                    *(uint *)(pFVar8 + lVar29 + 0x60) !=
                    `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentModifierTokenSpecifier>::GetTypeId(void)'
                    ::__l2::Global.A) {
                  pFVar21 = (FScriptContainerElement *)0x0;
                }
                if (pFVar21 != (FScriptContainerElement *)0x0) {
                  if ((this->FormatFlags & Default) == None) {
                    uVar30 = uVar30 + 1;
                    uVar27 = uVar27 + 1;
                    this->BaseFormatStringLength =
                         *(int *)(pFVar21 + 8) + this->BaseFormatStringLength + 1;
                    lVar29 = lVar29 + 0x60;
                  }
                  else {
                    local_1c4 = 0;
                    local_1c6[0] = '\0';
                    (**(code **)(**(longlong **)(pFVar21 + 0x10) + 0x20))
                              (*(longlong **)(pFVar21 + 0x10),&local_1c4,local_1c6);
                    this->BaseFormatStringLength = this->BaseFormatStringLength + local_1c4;
                    uVar30 = uVar30 + 1;
                    this->FormatArgumentEstimateMultiplier =
                         this->FormatArgumentEstimateMultiplier + (uint)(local_1c6[0] != '\0');
                    uVar27 = uVar27 + 1;
                    lVar29 = lVar29 + 0x60;
                  }
                }
              }
            }
            else if ((((uVar4 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentModifierTokenSpecifier>::GetTypeId(void)'
                                 ::__l2::Global.D &&
                       uVar16 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentModifierTokenSpecifier>::GetTypeId(void)'
                                 ::__l2::Global.C) &&
                      uVar5 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentModifierTokenSpecifier>::GetTypeId(void)'
                               ::__l2::Global.B) &&
                      uVar6 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentModifierTokenSpecifier>::GetTypeId(void)'
                               ::__l2::Global.A) && (pFVar8 != (FScriptContainerElement *)0x0)) {
              ::FString::ConstructFromPtrSize
                        (&local_120,*(wchar_t **)(pFVar31 + 0x40),
                         (int)(*(longlong *)(pFVar31 + 0x48) -
                               (longlong)*(wchar_t **)(pFVar31 + 0x40) >> 1));
              FText::FromString(&local_190,&local_120);
              if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_120.Data.AllocatorInstance.Data);
              }
              uVar27 = *(uint *)(pFVar31 + 0x54);
              local_150.TextData.Reference = local_190.TextData.Reference;
              if (local_190.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_190.TextData.Reference + 8))
                          (local_190.TextData.Reference,local_170);
              }
              local_150.Flags = local_190.Flags;
              pFVar22 = FText::AsLocalizable_Advanced_LocText
                                  (&local_c0,L"TextFormatter",L"UnexpectedArgumentModifierToken",
                                   L"Unexpected \'argument modifier\' token: {0} (token started at index {1})"
                                  );
              pFVar23 = FTextFormat::FTextFormat(&local_88,pFVar22,Default);
              local_108.Type = Text;
              FText::FText((FText *)&local_108.TextValue,&local_150);
              if ((local_108.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0)
                 && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsSet()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                         ,0xbd,
                                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                        ), bVar15)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              local_e8 = 0;
              local_d8 = (longlong *)0x0;
              local_d0 = 0;
              local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_1b8.ArrayNum = 2;
              local_e0 = (longlong)(int)uVar27;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,2,0,&local_1b8.AllocatorInstance,2,&local_1b8.ArrayMax);
              ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                        (local_1b8.AllocatorInstance.Data,&local_108,2);
              local_160.TextFormatData.Object = (pFVar23->TextFormatData).Object;
              local_160.TextFormatData.SharedReferenceCount.ReferenceController =
                   (pFVar23->TextFormatData).SharedReferenceCount.ReferenceController;
              if (local_160.TextFormatData.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_160.TextFormatData.SharedReferenceCount.ReferenceController)->
                SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_160.TextFormatData.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              FTextFormatter::Format(&local_130,&local_160,&local_1b8,false,false);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_160.TextFormatData.SharedReferenceCount.ReferenceController);
              DestructItems<FFormatArgumentValue,int>
                        ((FFormatArgumentValue *)local_1b8.AllocatorInstance.Data,local_1b8.ArrayNum
                        );
              if ((FFormatArgumentValue *)local_1b8.AllocatorInstance.Data !=
                  (FFormatArgumentValue *)0x0) {
                FMemory::Free(local_1b8.AllocatorInstance.Data);
              }
              if (local_d8 != (longlong *)0x0) {
                (**(code **)(*local_d8 + 0x10))();
              }
              if (local_108.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)
              {
                (**(code **)((longlong)
                             *(ITextData *)
                              local_108.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
                          ();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((pFVar23->TextFormatData).SharedReferenceCount.ReferenceController);
              if (local_150.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_150.TextData.Reference + 0x10))();
              }
              local_140.TextData.Reference = local_130.TextData.Reference;
              if (local_130.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_130.TextData.Reference + 8))
                          (local_130.TextData.Reference,&local_1a0);
              }
              local_140.Flags = local_130.Flags;
              FText::FText(&local_48,&local_140);
              local_38 = 1;
              local_50 = CONCAT71(local_50._1_7_,1);
              FText::FText(&local_60,&local_48);
              uVar28 = local_50;
              uVar12 = local_60._8_8_;
              TVar13.Reference = local_60.TextData.Reference;
              local_50 = local_78.Variant._16_8_;
              uVar33 = local_78.Variant._16_8_ & 0xff;
              local_78.Variant._16_8_ = uVar28;
              local_60.TextData.Reference = (ITextData *)local_78.Variant._padding_;
              local_60._8_8_ = local_78.Variant._padding_;
              local_78.Variant._padding_ = (longlong)TVar13.Reference;
              local_78.Variant._padding_ = uVar12;
              if ((2 < uVar33) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                      ,0xd4,L""), bVar15)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar33] ==
                  UE::Core::Private::
                  TDestructorCaller<TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType>
                  ::Destruct) {
                if ((TExpressionToken<wchar_t> *)local_60.TextData.Reference !=
                    (TExpressionToken<wchar_t> *)0x0) {
                  (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
                }
              }
              else {
                (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar33])(&local_60);
              }
              uVar28 = (ulonglong)local_38;
              if ((2 < local_38) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                      ,0xd4,L""), bVar15)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar28] ==
                  UE::Core::Private::
                  TDestructorCaller<TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType>
                  ::Destruct) {
                if (local_48.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
                }
              }
              else {
                (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar28])(&local_48);
              }
              if (local_140.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
              }
              if (local_130.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_130.TextData.Reference + 0x10))();
              }
              if (local_c0.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
              }
              if (local_190.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_190.TextData.Reference + 0x10))
                          (local_190.TextData.Reference);
              }
              goto LAB_14174d21b;
            }
          }
          else {
            this->BaseFormatStringLength = this->BaseFormatStringLength + 1;
          }
        }
        else {
          this->BaseFormatStringLength = this->BaseFormatStringLength + *(uint *)(pFVar21 + 8);
        }
        uVar30 = uVar30 + 1;
        uVar27 = uVar27 + 1;
        lVar29 = lVar29 + 0x60;
      } while ((int)uVar30 < (this->LexedExpression).ArrayNum);
    }
  }
  uVar28 = local_78.Variant._16_8_ & 0xff;
  if ((2 < local_78.Variant.TypeIndex) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar28])(&local_78);
  FMemScope::~FMemScope(&local_168);
  FLLMScope::~FLLMScope(local_1c0);
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FThreadStats::AddMessage(FVar26,CycleScopeEnd);
  }
  return;
}

// ConditionalCompile_NoLock @ 14174d680

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall FTextFormatData::ConditionalCompile_NoLock(FTextFormatData *this)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  FText *pFVar9;
  TDisplayStringPtr<FString_const_> *pTVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  FTextSnapshot *pFVar14;
  undefined4 local_res8;
  undefined4 uStackX_c;
  FTextSnapshot local_38;
  
  uVar7 = 0;
  local_res8 = 0;
  if (this->SourceType != Text) {
    return;
  }
  pFVar9 = FText::GetEmpty();
  bVar5 = FText::IdenticalTo(&this->SourceText,pFVar9,None);
  if (bVar5) {
    return;
  }
  FText::Rebuild(&this->SourceText);
  pIVar1 = (this->CompiledTextSnapshot).TextDataPtr.Reference;
  bVar5 = false;
  if ((pIVar1 == (ITextData *)0x0) ||
     (pIVar2 = (this->SourceText).TextData.Reference, bVar5 = false, pIVar1 != pIVar2)) {
LAB_14174d727:
    bVar4 = false;
  }
  else {
    pTVar10 = (TDisplayStringPtr<FString_const_> *)
              (**(code **)((longlong)*pIVar2 + 0x30))(pIVar2,&local_res8);
    bVar5 = true;
    if (((this->CompiledTextSnapshot).LocalizedStringPtr != *pTVar10) ||
       (((uVar6 = FTextSnapshot::GetGlobalHistoryRevisionForText(&this->SourceText),
         (this->CompiledTextSnapshot).GlobalHistoryRevision != uVar6 ||
         (uVar6 = FTextSnapshot::GetLocalHistoryRevisionForText(&this->SourceText),
         (this->CompiledTextSnapshot).LocalHistoryRevision != uVar6)) ||
        ((this->CompiledTextSnapshot).Flags != (this->SourceText).Flags)))) goto LAB_14174d727;
    bVar4 = true;
  }
  if ((bVar5) && (piVar3 = (int *)CONCAT44(uStackX_c,local_res8), piVar3 != (int *)0x0)) {
    LOCK();
    iVar8 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      if (*(void **)(piVar3 + 2) != (void *)0x0) {
        FMemory::Free(*(void **)(piVar3 + 2));
      }
      ::operator_delete(piVar3,0x18);
    }
  }
  if (bVar4) {
    return;
  }
  FText::Rebuild(&this->SourceText);
  if ((this->CompiledTextSnapshot).TextDataPtr.Reference != (ITextData *)0x0) {
    FText::Rebuild(&this->SourceText);
    lVar11 = (**(code **)((longlong)*(this->SourceText).TextData.Reference + 0x28))();
    if ((*(int *)(lVar11 + 8) < 2) || (((this->SourceText).Flags & 2) != 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)((longlong)*(this->SourceText).TextData.Reference + 0x38))();
    }
    if ((this->CompiledTextSnapshot).GlobalHistoryRevision == uVar6) {
      FText::Rebuild(&this->SourceText);
      lVar11 = (**(code **)((longlong)*(this->SourceText).TextData.Reference + 0x28))();
      if ((1 < *(int *)(lVar11 + 8)) && (((this->SourceText).Flags & 2) == 0)) {
        uVar7 = (**(code **)((longlong)*(this->SourceText).TextData.Reference + 0x40))();
      }
      if ((this->CompiledTextSnapshot).LocalHistoryRevision == uVar7) {
        puVar12 = (undefined8 *)
                  (**(code **)((longlong)*(this->CompiledTextSnapshot).TextDataPtr.Reference + 0x28)
                  )();
        puVar13 = (undefined8 *)
                  (**(code **)((longlong)*(this->SourceText).TextData.Reference + 0x28))();
        iVar8 = *(int *)(puVar12 + 1);
        if (iVar8 == *(int *)(puVar13 + 1)) {
          if (1 < iVar8) {
            iVar8 = wcscmp((wchar_t *)*puVar12,(wchar_t *)*puVar13);
            bVar5 = iVar8 == 0;
            goto LAB_14174d828;
          }
        }
        else {
          bVar5 = *(int *)(puVar13 + 1) + iVar8 == 1;
LAB_14174d828:
          if (!bVar5) goto LAB_14174d834;
        }
        bVar5 = false;
        goto LAB_14174d837;
      }
    }
  }
LAB_14174d834:
  bVar5 = true;
LAB_14174d837:
  pFVar14 = FTextSnapshot::FTextSnapshot(&local_38,&this->SourceText);
  FTextSnapshot::operator=(&this->CompiledTextSnapshot,pFVar14);
  if (local_38.LocalizedStringPtr != (TDisplayStringPtr<FString_const_>)0x0) {
    LOCK();
    iVar8 = *(int *)local_38.LocalizedStringPtr;
    *(int *)local_38.LocalizedStringPtr = *(int *)local_38.LocalizedStringPtr + -1;
    UNLOCK();
    if (iVar8 == 1) {
      if (*(void **)((longlong)local_38.LocalizedStringPtr + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)local_38.LocalizedStringPtr + 8));
      }
      ::operator_delete((void *)local_38.LocalizedStringPtr,0x18);
    }
  }
  if (local_38.TextDataPtr.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextDataPtr.Reference + 0x10))();
  }
  if (bVar5) {
    Compile_NoLock(this);
  }
  return;
}

// Format_NoLock @ 141759c80

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FString * __thiscall
FTextFormatData::Format_NoLock
          (FTextFormatData *this,FString *__return_storage_ptr__,
          FPrivateTextFormatArguments *param_1)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FString *pFVar6;
  FFormatArgumentValue *this_00;
  longlong lVar7;
  wchar_t *pwVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  uint local_res8;
  int local_res20 [2];
  FString local_48;
  
  if ((this->SourceType == Text) && (param_1->bRebuildText != false)) {
    FText::Rebuild(&this->SourceText);
  }
  ConditionalCompile_NoLock(this);
  if ((this->LexedExpression).ArrayNum == 0) {
    ::FString::FString(__return_storage_ptr__,&this->SourceExpression);
    return __return_storage_ptr__;
  }
  uVar10 = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ::FString::Reserve(&local_48,
                     this->FormatArgumentEstimateMultiplier * param_1->EstimatedArgumentValuesLength
                     + this->BaseFormatStringLength);
  local_res8 = 0;
  uVar14 = uVar10;
  uVar16 = uVar10;
  if (0 < (this->LexedExpression).ArrayNum) {
    do {
      uVar9 = (uint)uVar10;
      uVar11 = 0;
      if ((int)uVar9 < (this->LexedExpression).ArrayNum) {
        uVar11 = ~uVar9 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar3)();
        return pFVar6;
      }
      pFVar15 = (this->LexedExpression).AllocatorInstance.Data;
      lVar7 = uVar16 * 0x60;
      uVar11 = *(uint *)(pFVar15 + lVar7);
      pFVar12 = pFVar15 + lVar7 + 0x18;
      uVar5 = *(uint *)(pFVar15 + lVar7 + 4);
      uVar1 = *(uint *)(pFVar15 + lVar7 + 8);
      uVar2 = *(uint *)(pFVar15 + lVar7 + 0xc);
      pFVar15 = pFVar12;
      if (((uVar2 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FStringLiteral>::GetTypeId(void)'
                     ::__l2::Global.D ||
           uVar1 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FStringLiteral>::GetTypeId(void)'
                    ::__l2::Global.C) ||
          uVar5 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FStringLiteral>::GetTypeId(void)'
                   ::__l2::Global.B) ||
          uVar11 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FStringLiteral>::GetTypeId(void)'
                    ::__l2::Global.A) {
        pFVar15 = (FScriptContainerElement *)0x0;
      }
      if (pFVar15 == (FScriptContainerElement *)0x0) {
        pFVar15 = pFVar12;
        if (((uVar2 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FEscapedCharacter>::GetTypeId(void)'
                       ::__l2::Global.D ||
             uVar1 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FEscapedCharacter>::GetTypeId(void)'
                      ::__l2::Global.C) ||
            uVar5 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FEscapedCharacter>::GetTypeId(void)'
                     ::__l2::Global.B) ||
            uVar11 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FEscapedCharacter>::GetTypeId(void)'
                      ::__l2::Global.A) {
          pFVar15 = (FScriptContainerElement *)0x0;
        }
        if (pFVar15 == (FScriptContainerElement *)0x0) {
          if ((((uVar2 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentTokenSpecifier>::GetTypeId(void)'
                          ::__l2::Global.D &&
                uVar1 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentTokenSpecifier>::GetTypeId(void)'
                         ::__l2::Global.C) &&
               uVar5 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentTokenSpecifier>::GetTypeId(void)'
                        ::__l2::Global.B) &&
               uVar11 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentTokenSpecifier>::GetTypeId(void)'
                         ::__l2::Global.A) && (pFVar12 != (FScriptContainerElement *)0x0)) {
            local_res20[0] = (int)uVar14;
            local_res8 = local_res20[0] + 1;
            this_00 = (FFormatArgumentValue *)
                      (**(code **)&param_1->GetArgumentValue)
                                (*(undefined8 *)&(param_1->GetArgumentValue).field_0x8,pFVar12,
                                 local_res20);
            if (this_00 == (FFormatArgumentValue *)0x0) {
              ::FString::AppendChar(&local_48,((this->PatternDef).Object)->ArgStartChar);
              ::FString::AppendChars(&local_48,*(wchar_t **)pFVar12,*(int *)(pFVar12 + 8));
              ::FString::AppendChar(&local_48,((this->PatternDef).Object)->ArgEndChar);
            }
            else {
              uVar11 = uVar9 + 1;
              uVar14 = uVar16 + 1;
              if ((-1 < (int)uVar11) && ((int)uVar11 < (this->LexedExpression).ArrayNum)) {
                uVar5 = 0;
                if ((int)uVar11 < (this->LexedExpression).ArrayNum) {
                  uVar5 = ~uVar11 >> 0x1f;
                }
                if ((uVar5 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  pFVar6 = (FString *)(*pcVar3)();
                  return pFVar6;
                }
                pFVar12 = (this->LexedExpression).AllocatorInstance.Data + uVar14 * 0x60;
                pFVar15 = pFVar12 + 0x18;
                if (((*(uint *)(pFVar12 + 0xc) !=
                      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentModifierTokenSpecifier>::GetTypeId(void)'
                      ::__l2::Global.D ||
                     *(uint *)(pFVar12 + 8) !=
                     `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentModifierTokenSpecifier>::GetTypeId(void)'
                     ::__l2::Global.C) ||
                    *(uint *)(pFVar12 + 4) !=
                    `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentModifierTokenSpecifier>::GetTypeId(void)'
                    ::__l2::Global.B) ||
                    *(uint *)pFVar12 !=
                    `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentModifierTokenSpecifier>::GetTypeId(void)'
                    ::__l2::Global.A) {
                  pFVar15 = (FScriptContainerElement *)0x0;
                }
                if (pFVar15 != (FScriptContainerElement *)0x0) {
                  uVar16 = uVar14;
                  uVar9 = uVar11;
                  if ((this->FormatFlags & Default) == None) {
                    ::FString::AppendChar(&local_48,((this->PatternDef).Object)->ArgModChar);
                    ::FString::AppendChars(&local_48,*(wchar_t **)pFVar15,*(uint *)(pFVar15 + 8));
                  }
                  else {
                    (**(code **)(**(longlong **)(pFVar15 + 0x10) + 0x10))
                              (*(longlong **)(pFVar15 + 0x10),this_00,param_1,&local_48);
                  }
                  goto LAB_14175a045;
                }
              }
              FFormatArgumentValue::ToFormattedString
                        (this_00,param_1->bRebuildText,param_1->bRebuildAsSource,&local_48);
            }
          }
          else if ((((uVar2 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentModifierTokenSpecifier>::GetTypeId(void)'
                               ::__l2::Global.D &&
                     uVar1 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentModifierTokenSpecifier>::GetTypeId(void)'
                              ::__l2::Global.C) &&
                    uVar5 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentModifierTokenSpecifier>::GetTypeId(void)'
                             ::__l2::Global.B) &&
                    uVar11 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentModifierTokenSpecifier>::GetTypeId(void)'
                              ::__l2::Global.A) && (pFVar12 != (FScriptContainerElement *)0x0)) {
            ::FString::AppendChar(&local_48,((this->PatternDef).Object)->ArgModChar);
            iVar13 = *(int *)(pFVar12 + 8);
            pwVar8 = *(wchar_t **)pFVar12;
            goto LAB_14175a03b;
          }
        }
        else {
          ::FString::AppendChar(&local_48,*(wchar_t *)pFVar15);
        }
      }
      else {
        iVar13 = *(int *)(pFVar15 + 8);
        pwVar8 = *(wchar_t **)pFVar15;
LAB_14175a03b:
        ::FString::AppendChars(&local_48,pwVar8,iVar13);
      }
LAB_14175a045:
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar14 = (ulonglong)local_res8;
      uVar16 = uVar16 + 1;
    } while ((int)(uVar9 + 1) < (this->LexedExpression).ArrayNum);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_48.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_48.Data.ArrayMax;
  return __return_storage_ptr__;
}

// GetFormatArgumentNames_NoLock @ 14175d390

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FTextFormatData::GetFormatArgumentNames_NoLock
          (FTextFormatData *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res18;
  FString local_38;
  
  ConditionalCompile_NoLock(this);
  if (this->CompiledExpressionType == Complex) {
    pFVar8 = (this->LexedExpression).AllocatorInstance.Data;
    iVar1 = (this->LexedExpression).ArrayNum;
    pFVar9 = pFVar8 + (longlong)iVar1 * 0x60;
    while( true ) {
      if ((this->LexedExpression).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TExpressionToken<wchar_t>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar8 == pFVar9) break;
      local_res18 = pFVar8 + 0x18;
      if (((*(uint *)(pFVar8 + 0xc) !=
            `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentTokenSpecifier>::GetTypeId(void)'
            ::__l2::Global.D ||
           *(uint *)(pFVar8 + 4) !=
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentTokenSpecifier>::GetTypeId(void)'
           ::__l2::Global.B) ||
          *(uint *)(pFVar8 + 8) !=
          `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentTokenSpecifier>::GetTypeId(void)'
          ::__l2::Global.C) ||
          *(uint *)pFVar8 !=
          `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentTokenSpecifier>::GetTypeId(void)'
          ::__l2::Global.A) {
        local_res18 = (FScriptContainerElement *)0x0;
      }
      if (local_res18 == (FScriptContainerElement *)0x0) {
        pFVar7 = pFVar8 + 0x18;
        if (((*(uint *)(pFVar8 + 0xc) !=
              `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentModifierTokenSpecifier>::GetTypeId(void)'
              ::__l2::Global.D ||
             *(uint *)(pFVar8 + 8) !=
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentModifierTokenSpecifier>::GetTypeId(void)'
             ::__l2::Global.C) ||
            *(uint *)(pFVar8 + 4) !=
            `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentModifierTokenSpecifier>::GetTypeId(void)'
            ::__l2::Global.B) ||
            *(uint *)pFVar8 !=
            `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentModifierTokenSpecifier>::GetTypeId(void)'
            ::__l2::Global.A) {
          pFVar7 = (FScriptContainerElement *)0x0;
        }
        if ((pFVar7 != (FScriptContainerElement *)0x0) && ((this->FormatFlags & Default) != None)) {
          (**(code **)(**(longlong **)(pFVar7 + 0x10) + 0x18))
                    (*(longlong **)(pFVar7 + 0x10),param_1);
        }
LAB_14175d58c:
        pFVar8 = pFVar8 + 0x60;
      }
      else {
        pFVar5 = TArray<FString,TSizedDefaultAllocator<32>_>::
                 FindByPredicate<_FTextFormatData::GetFormatArgumentNames_NoLock_::__l12::<lambda_1>_>
                           (param_1,(<lambda_1>)&local_res18);
        if (pFVar5 != (FString *)0x0) goto LAB_14175d58c;
        pFVar6 = (FScriptContainerElement *)
                 ::FString::ConstructFromPtrSize
                           (&local_38,*(wchar_t **)local_res18,*(uint *)(local_res18 + 8));
        pFVar7 = (param_1->AllocatorInstance).Data;
        if (((pFVar7 <= pFVar6) && (pFVar6 < pFVar7 + (longlong)param_1->ArrayMax * 0x10)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar4 = param_1->ArrayNum;
        if (iVar4 == param_1->ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar4 + 1;
        pFVar7 = (param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
        *(undefined8 *)pFVar7 = 0;
        *(FScriptContainerElement **)pFVar7 =
             (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->field_0x0)->AllocatorInstance
             ).Data;
        (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->field_0x0)->AllocatorInstance).
        Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar7 + 8) = *(int *)&pFVar6[8].field_0x0;
        *(int *)(pFVar7 + 0xc) = *(int *)&pFVar6[0xc].field_0x0;
        *(undefined8 *)&pFVar6[8].field_0x0 = 0;
        if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
        goto LAB_14175d58c;
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
        pFVar8 = pFVar8 + 0x60;
      }
    }
  }
  return;
}

// GetSharedEmptyInstance @ 141760c90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSharedRef<FTextFormatData,1> * __cdecl
FTextFormatData::GetSharedEmptyInstance(TSharedRef<FTextFormatData,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FTextFormatPatternDefinition_const_,1> *pTVar4;
  FText *pFVar5;
  FSharedReferencer<1> FVar6;
  TSharedRef<FTextFormatData,1> *pTVar7;
  TRefCountPtr<ITextData> TVar8;
  undefined1 local_res8 [8];
  FText local_38;
  TSharedRef<FTextFormatPatternDefinition_const_,1> local_28;
  TSharedRef<FTextFormatPatternDefinition_const_,1> local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pTVar4 = FTextFormatPatternDefinition::GetDefault(&local_18);
    pFVar5 = FText::GetEmpty();
    TVar8.Reference = (pFVar5->TextData).Reference;
    local_38.TextData.Reference = TVar8.Reference;
    if (TVar8.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar8.Reference + 8))(TVar8.Reference,local_res8);
    }
    local_38.Flags = 0;
    FVar6.ReferenceController = ::operator_new(0x98);
    if (FVar6.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      EmptyInstance = ___xmm_00000000000000000000000000000010;
    }
    else {
      (FVar6.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      (FVar6.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (FVar6.ReferenceController)->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFTextFormatData___00_SharedPointerInternals__6B_;
      local_28.SharedReferenceCount.ReferenceController =
           (pTVar4->SharedReferenceCount).ReferenceController;
      local_28.Object = pTVar4->Object;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FTextFormatData((FTextFormatData *)(FVar6.ReferenceController + 1),&local_38,Default,&local_28
                     );
      EmptyInstance.SharedReferenceCount.ReferenceController = FVar6.ReferenceController;
      EmptyInstance.Object = (FTextFormatData *)(FVar6.ReferenceController + 1);
      TVar8.Reference = local_38.TextData.Reference;
      if (((FTextFormatData *)(FVar6.ReferenceController + 1) == (FTextFormatData *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), TVar8.Reference = local_38.TextData.Reference, bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TSharedRef<FTextFormatData,1> *)(*pcVar2)();
        return pTVar7;
      }
    }
    if (TVar8.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar8.Reference + 0x10))(TVar8.Reference);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    atexit(`FTextFormatData::GetSharedEmptyInstance'::__l2::
           _dynamic_atexit_destructor_for__EmptyInstance__);
    _Init_thread_footer(&::_TSS0);
  }
  __return_storage_ptr__->Object = EmptyInstance.Object;
  FVar6.ReferenceController = EmptyInstance.SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       EmptyInstance.SharedReferenceCount.ReferenceController;
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar6.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// IdenticalTo @ 141762fa0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FTextFormatData::IdenticalTo
          (FTextFormatData *this,FTextFormatData *param_1,ETextIdenticalModeFlags param_2)

{
  ESourceType EVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  
  EVar1 = this->SourceType;
  if (EVar1 == param_1->SourceType) {
    if (EVar1 == Text) {
      bVar3 = FText::IdenticalTo(&this->SourceText,&param_1->SourceText,param_2);
      return bVar3;
    }
    if ((EVar1 == String) && ((param_2 & LexicalCompareInvariants) != None)) {
      iVar4 = (this->SourceExpression).Data.ArrayNum;
      iVar2 = (param_1->SourceExpression).Data.ArrayNum;
      if (iVar4 != iVar2) {
        return iVar4 + iVar2 == 1;
      }
      if (1 < iVar4) {
        iVar4 = wcscmp((wchar_t *)(this->SourceExpression).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->SourceExpression).Data.AllocatorInstance.Data);
        return iVar4 == 0;
      }
      return true;
    }
  }
  return false;
}

// IsValid_NoLock @ 1417671f0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall FTextFormatData::IsValid_NoLock(FTextFormatData *this)

{
  return this->CompiledExpressionType != Invalid;
}

// ValidatePattern_NoLock @ 141783780

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall
FTextFormatData::ValidatePattern_NoLock
          (FTextFormatData *this,TSharedPtr<FCulture,1> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  TSharedRef<FCulture,1> *pTVar6;
  FInternationalization *pFVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FString *pFVar12;
  undefined1 local_res8 [8];
  TSharedRef<FCulture,1> local_58;
  FCulture *local_48;
  TReferenceControllerBase<1> *local_40;
  TSharedRef<FCulture,1> local_38;
  
  ConditionalCompile_NoLock(this);
  if (this->CompiledExpressionType == Invalid) {
    pFVar12 = &this->LastCompileError;
    if (1 < (this->LastCompileError).Data.ArrayNum) {
      pFVar10 = (param_2->AllocatorInstance).Data;
      if (((pFVar10 <= pFVar12) && (pFVar12 < pFVar10 + (longlong)param_2->ArrayMax * 0x10)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      iVar5 = param_2->ArrayNum;
      if (iVar5 == param_2->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar5 + 1;
      ::FString::FString((FString *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                         pFVar12);
    }
    return false;
  }
  if (this->CompiledExpressionType != Complex) {
    return true;
  }
  iVar5 = 0;
  if (param_1->Object == (FCulture *)0x0) {
    pFVar7 = FInternationalization::Get();
    if (((pFVar7->CurrentLanguage).Object == (FCulture *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    local_58.SharedReferenceCount.ReferenceController =
         (pFVar7->CurrentLanguage).SharedReferenceCount.ReferenceController;
    local_58.Object = (pFVar7->CurrentLanguage).Object;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_58.Object == (FCulture *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    pTVar6 = &local_58;
    iVar9 = 2;
  }
  else {
    pTVar6 = TSharedPtr<FCulture,1>::ToSharedRef(param_1,&local_38);
    iVar9 = iVar5;
    iVar5 = 1;
  }
  local_48 = pTVar6->Object;
  local_40 = (pTVar6->SharedReferenceCount).ReferenceController;
  if (local_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (iVar9 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  if (iVar5 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  bVar2 = true;
  if ((this->FormatFlags & Default) != None) {
    pFVar10 = (this->LexedExpression).AllocatorInstance.Data;
    iVar5 = (this->LexedExpression).ArrayNum;
    pFVar11 = pFVar10 + (longlong)iVar5 * 0x60;
    while( true ) {
      if ((this->LexedExpression).ArrayNum != iVar5) {
        `TCheckedPointerIterator<TExpressionToken<wchar_t>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar10 == pFVar11) break;
      pFVar8 = pFVar10 + 0x18;
      if (((*(uint *)(pFVar10 + 0xc) !=
            `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentModifierTokenSpecifier>::GetTypeId(void)'
            ::__l2::Global.D ||
           *(uint *)(pFVar10 + 8) !=
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentModifierTokenSpecifier>::GetTypeId(void)'
           ::__l2::Global.C) ||
          *(uint *)(pFVar10 + 4) !=
          `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentModifierTokenSpecifier>::GetTypeId(void)'
          ::__l2::Global.B) ||
          *(uint *)pFVar10 !=
          `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentModifierTokenSpecifier>::GetTypeId(void)'
          ::__l2::Global.A) {
        pFVar8 = (FScriptContainerElement *)0x0;
      }
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        bVar4 = (**(code **)(**(longlong **)(pFVar8 + 0x10) + 8))
                          (*(longlong **)(pFVar8 + 0x10),&local_48,param_2);
        bVar2 = (bool)(bVar2 & bVar4);
      }
      pFVar10 = pFVar10 + 0x60;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  return bVar2;
}

