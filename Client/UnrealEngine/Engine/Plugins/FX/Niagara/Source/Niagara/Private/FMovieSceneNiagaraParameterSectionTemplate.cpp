// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 9

// StaticStruct @ 148ee5b70

UScriptStruct * __cdecl FMovieSceneNiagaraParameterSectionTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate,
                         (UObject *)pUVar1,L"MovieSceneNiagaraParameterSectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate.OuterSingleton
  ;
}

// FMovieSceneNiagaraParameterSectionTemplate @ 148f7fcb0

FMovieSceneNiagaraParameterSectionTemplate * __thiscall
FMovieSceneNiagaraParameterSectionTemplate::FMovieSceneNiagaraParameterSectionTemplate
          (FMovieSceneNiagaraParameterSectionTemplate *this,FNiagaraVariable *param_1)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMovieSceneNiagaraParameterSectionTemplate__6B_;
  FNiagaraVariable::FNiagaraVariable(&this->Parameter,param_1);
  pFVar1 = (param_1->VarData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// FMovieSceneNiagaraParameterSectionTemplate @ 148f7fd10

FMovieSceneNiagaraParameterSectionTemplate * __thiscall
FMovieSceneNiagaraParameterSectionTemplate::FMovieSceneNiagaraParameterSectionTemplate
          (FMovieSceneNiagaraParameterSectionTemplate *this)

{
  int iVar1;
  
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMovieSceneNiagaraParameterSectionTemplate__6B_;
  (this->Parameter)._padding_ = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&(this->Parameter)._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->Parameter)._padding_ = iVar1;
  (this->Parameter).VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Parameter).VarData.ArrayNum = 0;
  (this->Parameter).VarData.ArrayMax = 0;
  return this;
}

// Evaluate @ 148fa9a70

void __thiscall
FMovieSceneNiagaraParameterSectionTemplate::Evaluate
          (FMovieSceneNiagaraParameterSectionTemplate *this,FMovieSceneEvaluationOperand *param_1,
          FMovieSceneContext *param_2,FPersistentEvaluationData *param_3,
          FMovieSceneExecutionTokens *param_4)

{
  FWeakObjectPtr *pFVar1;
  uint uVar2;
  TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
  *this_00;
  code *pcVar3;
  void *_Src;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  FMovieSceneContext *pFVar8;
  size_t _Size;
  FName *pFVar9;
  FWeakObjectPtr *pFVar10;
  undefined1 local_res20 [8];
  ulonglong local_78;
  void *local_68;
  undefined8 local_60;
  FSetParameterValueExecutionToken local_58;
  
  this_00 = (TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
             *)param_3->EntityData;
  if (this_00 ==
      (TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
       *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2208776142733705528>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PersistentEvaluationData.h"
                       ,0x138,"EntityData");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    iVar5 = TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FMovieSceneEvaluationKey>
                      (this_00,~(param_3->SectionKey).TrackIdentifier.Value ^
                               (param_3->SectionKey).SectionIndex ^
                               (param_3->SectionKey).SequenceID.Value,&param_3->SectionKey);
    if (iVar5 != -1) {
      lVar6 = (longlong)iVar5 * 0x20 + *(longlong *)&this_00->Elements;
      plVar7 = (longlong *)(lVar6 + 0x10);
      if (lVar6 == 0) {
        plVar7 = (longlong *)0x0;
      }
      if ((plVar7 != (longlong *)0x0) && (lVar6 = *plVar7, lVar6 != 0)) {
        iVar5 = *(int *)(lVar6 + 0x10);
        pFVar10 = *(FWeakObjectPtr **)(lVar6 + 8);
        pFVar9 = (FName *)(pFVar10 + 1);
        pFVar1 = pFVar10 + (longlong)iVar5 * 5;
        while( true ) {
          if (*(int *)(lVar6 + 0x10) != iVar5) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<FComponentData_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res20);
          }
          if (pFVar10 == pFVar1) break;
          if (pFVar9[3].Number != 0xffffffff) {
            local_68 = (void *)0x0;
            local_60 = 0;
            pcVar3 = *(code **)(this->_padding_ + 0x50);
            uVar2 = *(uint *)((longlong)&param_2->_padding_ + 4);
            if (uVar2 == 0x80000000) {
              if ((int)param_2->_padding_ == 0) {
                pFVar8 = (FMovieSceneContext *)((longlong)&param_2->_padding_ + 4);
                if ((*(char *)((longlong)&param_2->_padding_ + 4) == '\x02') &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Type != ERangeBoundTypes::Open",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                       ,99,L""), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              else {
                pFVar8 = param_2;
                if (((char)param_2->_padding_ == '\x02') &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Type != ERangeBoundTypes::Open",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                       ,99,L""), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              local_78 = *(ulonglong *)((longlong)&pFVar8->_padding_ + 4);
            }
            else {
              local_78 = (ulonglong)uVar2;
            }
            (*pcVar3)(this,local_78,pFVar9,pFVar9 + 2,&local_68);
            _Src = local_68;
            _Size = (size_t)(int)local_60;
            local_58.Parameter.Name = *pFVar9;
            local_58._padding_ = (longlong)&___7FSetParameterValueExecutionToken__6B_;
            local_58.ComponentPtr.WeakPtr = *pFVar10;
            local_58.Parameter.TypeDefHandle.RegisteredTypeIndex = pFVar9[1].ComparisonIndex.Value;
            local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_58.Data.ArrayNum = (int)local_60;
            if ((int)local_60 == 0) {
              local_58.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,(int)local_60,0,&local_58.Data.AllocatorInstance,(int)local_60,
                         &local_58.Data.ArrayMax);
              memcpy(local_58.Data.AllocatorInstance.Data,_Src,_Size);
            }
            FMovieSceneExecutionTokens::Add<FSetParameterValueExecutionToken>(param_4,&local_58);
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
            local_58._padding_ = (longlong)&___7IMovieSceneExecutionToken__6B_;
            if (local_68 != (void *)0x0) {
              FMemory::Free(local_68);
            }
          }
          pFVar10 = pFVar10 + 5;
          pFVar9 = pFVar9 + 5;
        }
      }
    }
  }
  return;
}

// GetAlternateParameterTypes @ 148fb1280

TArrayView<FNiagaraTypeDefinition,int> * __thiscall
FMovieSceneNiagaraParameterSectionTemplate::GetAlternateParameterTypes
          (FMovieSceneNiagaraParameterSectionTemplate *this,
          TArrayView<FNiagaraTypeDefinition,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (FNiagaraTypeDefinition *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetAnimatedParameterValue @ 148fb1910

void __thiscall
FMovieSceneNiagaraParameterSectionTemplate::GetAnimatedParameterValue
          (FMovieSceneNiagaraParameterSectionTemplate *this,FFrameTime param_1,
          FNiagaraVariableBase *param_2,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  return;
}

// GetScriptStructImpl @ 148fb70a0

UScriptStruct * __thiscall
FMovieSceneNiagaraParameterSectionTemplate::GetScriptStructImpl
          (FMovieSceneNiagaraParameterSectionTemplate *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate,
                         (UObject *)pUVar1,L"MovieSceneNiagaraParameterSectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate.OuterSingleton
  ;
}

// Initialize @ 148fc48c0

void __thiscall
FMovieSceneNiagaraParameterSectionTemplate::Initialize
          (FMovieSceneNiagaraParameterSectionTemplate *this,FMovieSceneEvaluationOperand *param_1,
          FMovieSceneContext *param_2,FPersistentEvaluationData *param_3,IMovieScenePlayer *param_4)

{
  FMovieSceneEvaluationKey *pFVar1;
  ForAnyElementType *pFVar2;
  FWeakObjectPtr *pFVar3;
  UObject *pUVar4;
  undefined1 *puVar5;
  FWeakObjectPtr *pFVar6;
  TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
  *this_00;
  code *pcVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  UObject *pUVar13;
  UClass *pUVar14;
  int *piVar15;
  FNiagaraTypeDefinition *pFVar16;
  undefined8 *puVar17;
  void *_Src;
  size_t sVar18;
  FNiagaraTypeDefinition *pFVar19;
  FWeakObjectPtr local_108;
  FNiagaraTypeDefinitionHandle local_100 [2];
  FWeakObjectPtr local_f8;
  FWeakObjectPtr local_f0;
  FNiagaraTypeDefinitionHandle local_e8 [2];
  ForAnyElementType local_e0;
  int local_d8;
  int local_d4;
  ForAnyElementType local_d0;
  undefined8 local_c8;
  UObject *local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  FWeakObjectPtr *local_a8;
  FWeakObjectPtr local_a0;
  FNiagaraTypeDefinitionHandle local_98 [2];
  void *local_90;
  undefined8 local_88;
  FWeakObjectPtr local_80;
  FWeakObjectPtr *local_78;
  FMovieSceneEvaluationKey *local_70;
  undefined8 **local_68;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_60;
  FNiagaraTypeDefinition *local_50;
  int local_48;
  
  pFVar1 = &param_3->SectionKey;
  if ((param_3->EntityData ==
       (TMap<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>_>
        *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("EntityData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PersistentEvaluationData.h"
                         ,0x11d,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_00 = (TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
             *)param_3->EntityData;
  iVar10 = TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FMovieSceneEvaluationKey>
                     (this_00,~(param_3->SectionKey).TrackIdentifier.Value ^
                              (param_3->SectionKey).SectionIndex ^ (pFVar1->SequenceID).Value,pFVar1
                     );
  puVar17 = (undefined8 *)0x0;
  if (((iVar10 == -1) ||
      (lVar11 = (longlong)iVar10 * 0x20 + *(longlong *)&this_00->Elements, lVar11 == 0)) ||
     (puVar12 = (undefined8 *)(lVar11 + 0x10), puVar12 == (undefined8 *)0x0)) {
    if ((this_00 ==
         (TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
          *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("EntityData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PersistentEvaluationData.h"
                           ,300,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    puVar12 = ::operator_new(0x18);
    if (puVar12 != (undefined8 *)0x0) {
      puVar12[1] = 0;
      *puVar12 = &___7FParameterSectionData__6B_;
      puVar12[2] = 0;
      puVar17 = puVar12;
    }
    local_68 = &local_b8;
    local_b8 = puVar17;
    local_70 = pFVar1;
    TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FMovieSceneEvaluationKey_const_&,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_&&>_>
              ((TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
                *)param_3->EntityData,
               (TPairInitializer<FMovieSceneEvaluationKey_const_&,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_&&>
                *)&stack0x00000010,(bool *)&local_70);
    if (local_b8 != (undefined8 *)0x0) {
      (**(code **)*local_b8)(local_b8,1);
    }
  }
  else {
    puVar17 = (undefined8 *)*puVar12;
  }
  pFVar2 = (ForAnyElementType *)(puVar17 + 1);
  DestructItems<FComponentData,int>((FComponentData *)pFVar2->Data,*(int *)(puVar17 + 2));
  *(undefined4 *)(puVar17 + 2) = 0;
  if (*(int *)((longlong)puVar17 + 0x14) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,pFVar2,0,(int *)((longlong)puVar17 + 0x14));
  }
  IMovieScenePlayer::FindBoundObjects
            (param_4,&local_60,&param_1->ObjectBindingID,&param_1->SequenceID);
  local_78 = &local_60.DataPtr[local_60.ArrayNum].WeakPtr;
  if (&(local_60.DataPtr)->WeakPtr != local_78) {
    do {
      local_80 = (local_60.DataPtr)->WeakPtr;
      local_a8 = &(local_60.DataPtr)->WeakPtr;
      pUVar13 = FWeakObjectPtr::Get(&local_80);
      if (pUVar13 != (UObject *)0x0) {
        pUVar14 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
        iVar10 = (int)pUVar14->_padding_;
        if (((iVar10 <= *(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38)) &&
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) + (longlong)iVar10 * 8) ==
             &pUVar14->_padding_)) &&
           (pUVar4 = pUVar13 + 0x22, local_c0 = pUVar4, *(longlong *)pUVar4 != 0)) {
          local_108.ObjectIndex = 0;
          local_108.ObjectSerialNumber = 0;
          local_100[0].RegisteredTypeIndex =
               FNiagaraTypeDefinitionHandle::Register(local_100,&FNiagaraTypeDefinition::Vec4Def);
          puVar5 = &pUVar13[0x22].field_0x10;
          piVar15 = (int *)(**(code **)(*(longlong *)puVar5 + 0x58))(puVar5,&this->Parameter,0);
          if (((piVar15 == (int *)0x0) || (*piVar15 == -1)) ||
             (_Src = (void *)((longlong)*piVar15 + *(longlong *)&pUVar13[0x23].field_0x8),
             _Src == (void *)0x0)) {
            lVar11 = *(longlong *)pUVar4;
            piVar15 = (int *)(**(code **)(*(longlong *)(lVar11 + 0x348) + 0x58))
                                       (lVar11 + 0x348,&this->Parameter,0);
            if ((piVar15 == (int *)0x0) || (*piVar15 == -1)) {
              _Src = (void *)0x0;
            }
            else {
              _Src = (void *)((longlong)*piVar15 + *(longlong *)(lVar11 + 0x368));
              if (_Src != (void *)0x0) goto LAB_148fc4b3d;
            }
            (**(code **)(this->_padding_ + 0x58))(this,&local_50);
            pFVar16 = local_50 + local_48;
            for (pFVar19 = local_50; pFVar19 != pFVar16; pFVar19 = pFVar19 + 1) {
              local_a0 = (FWeakObjectPtr)(this->Parameter)._padding_;
              local_98[0].RegisteredTypeIndex =
                   FNiagaraTypeDefinitionHandle::Register(local_98,pFVar19);
              _Src = (void *)0x0;
              local_90 = (void *)0x0;
              local_88 = 0;
              piVar15 = (int *)(**(code **)(*(longlong *)puVar5 + 0x58))(puVar5,&local_a0,0);
              if (((piVar15 != (int *)0x0) && (*piVar15 != -1)) &&
                 (_Src = (void *)((longlong)*piVar15 + *(longlong *)&pUVar13[0x23].field_0x8),
                 _Src != (void *)0x0)) {
LAB_148fc4c2c:
                local_108 = local_a0;
                local_100[0].RegisteredTypeIndex = local_98[0].RegisteredTypeIndex;
                if (local_90 != (void *)0x0) {
                  FMemory::Free(local_90);
                }
                break;
              }
              lVar11 = *(longlong *)pUVar4;
              piVar15 = (int *)(**(code **)(*(longlong *)(lVar11 + 0x348) + 0x58))
                                         (lVar11 + 0x348,&local_a0);
              if (((piVar15 != (int *)0x0) && (*piVar15 != -1)) &&
                 (_Src = (void *)((longlong)*piVar15 + *(longlong *)(lVar11 + 0x368)),
                 _Src != (void *)0x0)) goto LAB_148fc4c2c;
              if (local_90 != (void *)0x0) {
                FMemory::Free(local_90);
              }
              pUVar4 = local_c0;
            }
          }
          else {
LAB_148fc4b3d:
            local_108 = (FWeakObjectPtr)(this->Parameter)._padding_;
            local_100[0].RegisteredTypeIndex = (int)(this->Parameter)._padding_;
          }
          local_b0 = 0;
          if (((local_108 != (FWeakObjectPtr)0x0) &&
              (pFVar16 = FNiagaraTypeDefinitionHandle::Resolve(local_100),
              (pFVar16->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0)) &&
             (_Src != (void *)0x0)) {
            local_d0.Data = (FScriptContainerElement *)0x0;
            local_c8 = 0;
            pFVar16 = FNiagaraTypeDefinitionHandle::Resolve
                                ((FNiagaraTypeDefinitionHandle *)&(this->Parameter)._padding_);
            iVar10 = FNiagaraTypeDefinition::GetSize(pFVar16);
            UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar10,&local_d0,(int *)&local_c8,(int *)((longlong)&local_c8 + 4));
            pFVar16 = FNiagaraTypeDefinitionHandle::Resolve
                                ((FNiagaraTypeDefinitionHandle *)&(this->Parameter)._padding_);
            iVar10 = FNiagaraTypeDefinition::GetSize(pFVar16);
            memcpy(local_d0.Data,_Src,(longlong)iVar10);
            local_f8.ObjectIndex = 0;
            local_f8.ObjectSerialNumber = 0;
            local_f0.ObjectIndex = 0;
            local_f0.ObjectSerialNumber = 0;
            local_e8[0].RegisteredTypeIndex =
                 FNiagaraTypeDefinitionHandle::Register(local_e8,&FNiagaraTypeDefinition::Vec4Def);
            local_e0.Data = (FScriptContainerElement *)0x0;
            local_d8 = 0;
            local_d4 = -1;
            local_c0 = pUVar13;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar13);
            }
            FWeakObjectPtr::operator=(&local_f8,(FObjectPtr)&local_c0);
            local_f0 = local_108;
            local_e8[0].RegisteredTypeIndex = local_100[0].RegisteredTypeIndex;
            if (local_e0.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e0.Data);
            }
            FVar8.Data = local_d0.Data;
            sVar18 = (size_t)(int)local_c8;
            local_e0.Data = (FScriptContainerElement *)0x0;
            local_d8 = (int)local_c8;
            if ((int)local_c8 == 0) {
              local_d4 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,(int)local_c8,0,&local_e0,(int)local_c8,&local_d4);
              memcpy(local_e0.Data,FVar8.Data,sVar18);
              if ((local_d4 == -1) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsSet()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                     ,0x171,
                                     L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                    ), bVar9)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            piVar15 = (int *)((longlong)puVar17 + 0x14);
            if ((((FWeakObjectPtr *)pFVar2->Data <= &local_f8) &&
                (&local_f8 < (FWeakObjectPtr *)pFVar2->Data + (longlong)*piVar15 * 5)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar10 = *(int *)(puVar17 + 2);
            if (iVar10 == *piVar15) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x828,pFVar2,piVar15);
            }
            FVar8.Data = local_e0.Data;
            *(int *)(puVar17 + 2) = iVar10 + 1;
            pFVar6 = (FWeakObjectPtr *)(pFVar2->Data + (longlong)iVar10 * 0x28);
            *pFVar6 = local_f8;
            pFVar3 = pFVar6 + 3;
            pFVar6[1] = local_f0;
            pFVar6[2].ObjectIndex = local_e8[0].RegisteredTypeIndex;
            piVar15 = &pFVar6[4].ObjectSerialNumber;
            *piVar15 = -1;
            pFVar3->ObjectIndex = 0;
            pFVar3->ObjectSerialNumber = 0;
            pFVar6[4].ObjectIndex = 0;
            if (local_d4 != -1) {
              sVar18 = (size_t)local_d8;
              pFVar6[4].ObjectIndex = local_d8;
              if (local_d8 == 0) {
                *piVar15 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,local_d8,0,(ForAnyElementType *)pFVar3,local_d8,piVar15);
                memcpy((void *)*pFVar3,FVar8.Data,sVar18);
              }
              if ((local_d4 != -1) && (local_e0.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_e0.Data);
              }
            }
            if (local_d0.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d0.Data);
            }
          }
        }
      }
      local_60.DataPtr = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)(local_a8 + 1);
    } while ((FWeakObjectPtr *)local_60.DataPtr != local_78);
  }
  return;
}

// SetupOverrides @ 148fcdc20

void __thiscall
FMovieSceneNiagaraParameterSectionTemplate::SetupOverrides
          (FMovieSceneNiagaraParameterSectionTemplate *this)

{
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 4;
  return;
}

