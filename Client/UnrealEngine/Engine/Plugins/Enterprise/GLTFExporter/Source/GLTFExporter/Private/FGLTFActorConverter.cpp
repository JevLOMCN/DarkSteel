// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// Convert @ 14e5e4530

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FGLTFJsonNode * __thiscall FGLTFActorConverter::Convert(FGLTFActorConverter *this,AActor *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  TGLTFConverter<FGLTFJsonAnimation_*,ALevelSequenceActor_const_*> *pTVar3;
  longlong lVar4;
  undefined1 *puVar5;
  USceneComponent *pUVar6;
  code *pcVar7;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  char cVar10;
  UClass *pUVar11;
  TGLTFConverter<FGLTFJsonAnimation_*,ALevelSequenceActor_const_*> *this_00;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar12;
  FGLTFJsonNode *pFVar13;
  uint uVar14;
  undefined1 *puVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  undefined1 *puVar19;
  uint *puVar20;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  AActor *local_d8;
  TGLTFConverter<FGLTFJsonAnimation_*,ALevelSequenceActor_const_*> *local_d0;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  AActor *local_98;
  undefined8 local_90;
  FGLTFJsonNode *local_88;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  AActor **local_50;
  undefined8 *local_48;
  
  if ((((param_1 != (AActor *)0x0) &&
       (bVar9 = UObjectBase::IsValidLowLevel((UObjectBase *)param_1), bVar9)) &&
      (cVar10 = (**(code **)(param_1->_padding_ + 0x120))(param_1), cVar10 == '\0')) &&
     (bVar9 = FGLTFConvertBuilder::IsSelectedActor
                        (*(FGLTFConvertBuilder **)&this->field_0x58,param_1), bVar9)) {
    pUVar11 = Z_Construct_UClass_ALandscapeStreamingProxy_NoRegister();
    iVar18 = (int)pUVar11->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar18) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar18 * 8) !=
        &pUVar11->_padding_)) {
      local_88 = FGLTFConvertBuilder::AddUniqueNode
                           (*(FGLTFConvertBuilder **)&this->field_0x58,
                            (param_1->RootComponent).field0_0x0.DebugPtr);
      pUVar11 = Z_Construct_UClass_ALevelSequenceActor_NoRegister();
      iVar18 = (int)pUVar11->_padding_;
      if ((*(int *)(param_1->_padding_ + 0x38) < iVar18) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar18 * 8) !=
          &pUVar11->_padding_)) {
        pTVar12 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                            (&param_1->OwnedComponents);
        iVar18 = *(int *)&(pTVar12->Elements).field_0x28;
        iStack_c0 = 0;
        uStack_bc = 1;
        local_a8 = 0;
        puVar15 = &(pTVar12->Elements).field_0x10;
        iStack_ac = 0;
        if (iVar18 != 0) {
          puVar20 = *(uint **)&(pTVar12->Elements).field_0x20;
          if (puVar20 == (uint *)0x0) {
            puVar20 = (uint *)puVar15;
          }
          uVar14 = *puVar20;
          while (uVar14 == 0) {
            iStack_c0 = iStack_c0 + 1;
            local_a8 = local_a8 + 0x20;
            iStack_ac = iVar18;
            if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0)
            goto LAB_14e5e47bc;
            uVar14 = puVar20[iStack_c0];
          }
          uStack_bc = ~(uVar14 - 1) & uVar14;
          uVar1 = (ulonglong)uStack_bc * 2 + 1;
          lVar4 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          local_res20 = (int)lVar4;
          iStack_ac = local_res20 + -1 + local_a8;
          if (iVar18 < iStack_ac) {
            iStack_ac = iVar18;
          }
        }
LAB_14e5e47bc:
        uVar14 = *(uint *)&(pTVar12->Elements).field_0x28;
        uVar17 = uVar14 & 0xffffffe0;
        iStack_a0 = *(int *)&(pTVar12->Elements).field_0x8 - *(int *)&(pTVar12->Elements).field_0x34
        ;
        uStack_b0 = 0xffffffff;
        TStack_78._padding_ = CONCAT44(uStack_bc,iStack_c0);
        TStack_78.CurrentBitIndex = iStack_ac;
        TStack_78.UnvisitedBitMask = 0xffffffff;
        iVar16 = (int)uVar14 >> 5;
        TStack_78._28_4_ = iStack_ac;
        TStack_78.BaseBitIndex = local_a8;
        uStack_58 = CONCAT44(uStack_9c,iStack_a0);
        local_c8 = pTVar12;
        local_b8 = puVar15;
        iStack_a4 = iStack_ac;
        local_80 = pTVar12;
        TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar15;
        if ((((int)uVar14 < 0) || (iVar18 < (int)uVar14)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          pFVar13 = (FGLTFJsonNode *)(*pcVar7)();
          return pFVar13;
        }
        uVar2 = *(uint *)&(pTVar12->Elements).field_0x28;
        if (uVar14 != uVar2) {
          puVar5 = *(undefined1 **)&(pTVar12->Elements).field_0x20;
          puVar19 = puVar15;
          if (puVar5 != (undefined1 *)0x0) {
            puVar19 = puVar5;
          }
          uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar16 * 4);
          while (uVar14 == 0) {
            iVar16 = iVar16 + 1;
            uVar17 = uVar17 + 0x20;
            uVar14 = uVar2;
            if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 < iVar16)
            goto LAB_14e5e48c0;
            uVar14 = *(uint *)(puVar19 + (longlong)iVar16 * 4);
          }
          uVar1 = (ulonglong)(~(uVar14 - 1) & uVar14) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          uVar14 = (int)lVar4 + -1 + uVar17;
          if ((int)uVar2 < (int)uVar14) {
            uVar14 = uVar2;
          }
        }
LAB_14e5e48c0:
        while( true ) {
          pTVar8 = local_80;
          if (*(int *)&(local_80->Elements).field_0x8 - *(int *)&(local_80->Elements).field_0x34 !=
              (int)uStack_58) {
            `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
          }
          if (((TStack_78.CurrentBitIndex == uVar14) &&
              (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar15)) &&
             (pTVar8 == pTVar12)) break;
          pUVar6 = *(USceneComponent **)
                    (*(longlong *)&pTVar8->Elements + (longlong)TStack_78.CurrentBitIndex * 0x10);
          if (pUVar6 != (USceneComponent *)0x0) {
            pUVar11 = Z_Construct_UClass_USceneComponent_NoRegister();
            iVar18 = (int)pUVar11->_padding_;
            if ((iVar18 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar18 * 8) ==
                &pUVar11->_padding_)) {
              FGLTFConvertBuilder::AddUniqueNode(*(FGLTFConvertBuilder **)&this->field_0x58,pUVar6);
            }
          }
          TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
        }
      }
      else if (*(char *)(*(longlong *)(*(longlong *)&this->field_0x58 + 0x18) + 0xa2) != '\0') {
        pTVar3 = *(TGLTFConverter<FGLTFJsonAnimation_*,ALevelSequenceActor_const_*> **)
                  (*(longlong *)&this->field_0x58 + 0x8e0);
        local_d8 = param_1;
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,&local_d8);
        local_98 = local_d8;
        uVar14 = ((uint)((ulonglong)local_d8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_d8 >> 4)) *
                 -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        uVar14 = uVar14 >> 0x10 ^ uVar14;
        if (*(int *)&(pTVar3->CachedOutputs).field_0x8 !=
            *(int *)&(pTVar3->CachedOutputs).field_0x34) {
          puVar15 = *(undefined1 **)&(pTVar3->CachedOutputs).field_0x40;
          if (puVar15 == (undefined1 *)0x0) {
            puVar15 = &(pTVar3->CachedOutputs).field_0x38;
          }
          iVar18 = *(int *)(puVar15 +
                           (ulonglong)(*(int *)&(pTVar3->CachedOutputs).field_0x48 - 1U & uVar14) *
                           4);
          if (iVar18 != -1) {
            lVar4 = *(longlong *)&pTVar3->CachedOutputs;
            do {
              if (*(AActor **)(lVar4 + (longlong)iVar18 * 0x18) == local_d8) {
                if (((iVar18 != -1) && (lVar4 = lVar4 + (longlong)iVar18 * 0x18, lVar4 != 0)) &&
                   (lVar4 != -8)) {
                  return local_88;
                }
                break;
              }
              iVar18 = *(int *)(lVar4 + 0x10 + (longlong)iVar18 * 0x18);
            } while (iVar18 != -1);
          }
        }
        local_d0 = pTVar3;
        this_00 = UE::Core::Private::
                  DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAnimation_*,ALevelSequenceActor_const_*>,TGLTFConverter<FGLTFJsonAnimation_*,ALevelSequenceActor_const_*>_*>
                            (&local_d0);
        local_90 = TGLTFConverter<FGLTFJsonAnimation*___ptr64,ALevelSequenceActor_const*___ptr64>::
                   _vcall__16__flat______
                             ((TGLTFConverter<FGLTFJsonAnimation*___ptr64,ALevelSequenceActor_const*___ptr64>
                               *)this_00);
        local_50 = &local_98;
        local_48 = &local_90;
        TSet<TTuple<TTuple<ALevelSequenceActor_const_*>,FGLTFJsonAnimation_*>,TDefaultMapHashableKeyFuncs<TTuple<ALevelSequenceActor_const_*>,FGLTFJsonAnimation_*,0>,FDefaultSetAllocator>
        ::
        EmplaceByHash<TPairInitializer<TTuple<ALevelSequenceActor_const_*>_&&,FGLTFJsonAnimation_*_const_&>_>
                  ((TSet<TTuple<TTuple<ALevelSequenceActor_const_*>,FGLTFJsonAnimation_*>,TDefaultMapHashableKeyFuncs<TTuple<ALevelSequenceActor_const_*>,FGLTFJsonAnimation_*,0>,FDefaultSetAllocator>
                    *)&pTVar3->CachedOutputs,(uint)local_res18,
                   (TPairInitializer<TTuple<ALevelSequenceActor_const_*>_&&,FGLTFJsonAnimation_*_const_&>
                    *)(ulonglong)uVar14,(bool *)&local_50);
      }
      return local_88;
    }
  }
  return (FGLTFJsonNode *)0x0;
}

