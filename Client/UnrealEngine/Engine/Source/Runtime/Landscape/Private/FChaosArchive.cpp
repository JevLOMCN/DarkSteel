// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 2

// SerializePtr<Chaos::FHeightField> @ 145f01260

void __thiscall
Chaos::FChaosArchive::SerializePtr<Chaos::FHeightField>
          (FChaosArchive *this,TSerializablePtr<Chaos::FHeightField> *param_1)

{
  longlong *plVar1;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> *pTVar2;
  FArchiveState *this_00;
  FFastPathLoadBuffer *pFVar3;
  FArchive *pFVar4;
  uint *puVar5;
  FChaosArchiveContext *pFVar6;
  FHeightField *pFVar7;
  code *pcVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  ForElementType<FSetElementId> FVar12;
  undefined1 *puVar13;
  uint uVar14;
  longlong lVar15;
  bool bVar16;
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [4];
  undefined1 local_88 [8];
  FHeightField *local_80;
  FHeightField *local_78;
  FHeightField **local_70;
  uint *local_68;
  FHeightField **local_60;
  uint *local_58;
  
  plVar1 = &this->_padding_;
  this_00 = (FArchiveState *)*plVar1;
  bVar16 = param_1->Ptr != (FHeightField *)0x0;
  pFVar3 = this_00->ActiveFPLB;
  puVar5 = (uint *)((longlong)pFVar3->StartFastPathLoadBuffer + 4);
  if (pFVar3->EndFastPathLoadBuffer < puVar5) {
    local_res10[0] = 0;
    if (this_00->ArIsLoading == 0) {
      local_res10[0] = (uint)(param_1->Ptr != (FHeightField *)0x0);
    }
    (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError(this_00);
    }
    uVar10 = local_res10[0];
    if (this_00->ArIsLoading == 0) goto LAB_145f012f2;
  }
  else {
    uVar10 = *(uint *)pFVar3->StartFastPathLoadBuffer;
    pFVar3->StartFastPathLoadBuffer = (uchar *)puVar5;
  }
  bVar16 = uVar10 != 0;
LAB_145f012f2:
  if (bVar16) {
    pFVar4 = (FArchive *)*plVar1;
    if ((pFVar4->field_0x28 & 1) == 0) {
      if (((pFVar4->field_0x28 & 4) != 0) || ((pFVar4->field_0x2b & 4) != 0)) {
        local_80 = param_1->Ptr;
        pTVar2 = &this->Context;
        pFVar6 = pTVar2->Ptr;
        uVar10 = ((uint)((ulonglong)local_80 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_80 >> 4)) *
                 -0x7a143595;
        uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
        if (*(int *)&(pFVar6->PendingAdds).Elements.field_0x8 !=
            *(int *)&(pFVar6->PendingAdds).Elements.field_0x34) {
          FVar12 = (pFVar6->PendingAdds).Hash.SecondaryData;
          if (FVar12 == (ForElementType<FSetElementId>)0x0) {
            FVar12 = (ForElementType<FSetElementId>)&(pFVar6->PendingAdds).Hash;
          }
          iVar11 = *(int *)((longlong)FVar12 +
                           (ulonglong)
                           ((pFVar6->PendingAdds).HashSize - 1U & (uVar10 >> 0x10 ^ uVar10)) * 4);
          if (iVar11 != -1) {
            lVar15 = *(longlong *)&(pFVar6->PendingAdds).Elements;
            do {
              if (*(FHeightField **)(lVar15 + (longlong)iVar11 * 0x10) == local_80) {
                bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Context->PendingAdds.Contains(ObjRaw) == false",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ChaosArchive.h"
                                    ,0xdf,L"");
                if (bVar16) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                break;
              }
              iVar11 = *(int *)(lVar15 + 8 + (longlong)iVar11 * 0x10);
            } while (iVar11 != -1);
          }
        }
        pFVar6 = pTVar2->Ptr;
        uVar10 = ((uint)((ulonglong)local_80 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_80 >> 4)) *
                 -0x7a143595;
        uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
        if (*(int *)&(pFVar6->ObjToTag).field_0x8 != *(int *)&(pFVar6->ObjToTag).field_0x34) {
          puVar13 = *(undefined1 **)&(pFVar6->ObjToTag).field_0x40;
          if (puVar13 == (undefined1 *)0x0) {
            puVar13 = &(pFVar6->ObjToTag).field_0x38;
          }
          iVar11 = *(int *)(puVar13 +
                           (ulonglong)
                           (*(int *)&(pFVar6->ObjToTag).field_0x48 - 1U & (uVar10 >> 0x10 ^ uVar10))
                           * 4);
          if (iVar11 != -1) {
            do {
              if (*(FHeightField **)(*(longlong *)&pFVar6->ObjToTag + (longlong)iVar11 * 0x18) ==
                  local_80) {
                if (iVar11 != -1) {
                  pFVar4 = (FArchive *)*plVar1;
                  piVar9 = TMapBase<void_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,int,0>_>
                           ::FindChecked((TMapBase<void_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,int,0>_>
                                          *)&pTVar2->Ptr->ObjToTag,local_80);
                  ::operator<<(pFVar4,piVar9);
                  return;
                }
                break;
              }
              iVar11 = *(int *)(*(longlong *)&pFVar6->ObjToTag + 0x10 + (longlong)iVar11 * 0x18);
            } while (iVar11 != -1);
          }
        }
        TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>::Emplace<void_*_const_&>
                  (&pTVar2->Ptr->PendingAdds,(void **)local_88,(bool *)&local_80);
        local_res18[0] = pTVar2->Ptr->TagCount;
        pTVar2->Ptr->TagCount = local_res18[0] + 1;
        local_60 = &local_80;
        local_58 = local_res18;
        TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<void_*_const_&,int_const_&>_>
                  ((TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                    *)&pTVar2->Ptr->ObjToTag,
                   (TPairInitializer<void_*_const_&,int_const_&> *)(local_88 + 4),(bool *)&local_60)
        ;
        pFVar4 = (FArchive *)*plVar1;
        puVar5 = (uint *)**(undefined8 **)&pFVar4->field_0x8;
        if ((uint *)(*(undefined8 **)&pFVar4->field_0x8)[1] < puVar5 + 1) {
          if ((pFVar4->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,local_res18,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(pFVar4,local_res18);
          }
        }
        else {
          local_res18[0] = *puVar5;
          **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 4;
        }
        StaticSerialize<Chaos::FHeightField>(this,param_1);
        TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>::Remove
                  (&pTVar2->Ptr->PendingAdds,local_80);
      }
    }
    else {
      puVar5 = (uint *)**(undefined8 **)&pFVar4->field_0x8;
      if ((uint *)(*(undefined8 **)&pFVar4->field_0x8)[1] < puVar5 + 1) {
        if ((pFVar4->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,local_res8,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar4,local_res8);
        }
      }
      else {
        local_res8[0] = *puVar5;
        **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 4;
      }
      if ((int)local_res8[0] < 0) {
        FArchiveState::SetCriticalError((FArchiveState *)*plVar1);
      }
      else {
        pFVar6 = (this->Context).Ptr;
        iVar11 = (local_res8[0] - (pFVar6->TagToObject).ArrayNum) + 1;
        if (0 < iVar11) {
          TArray<void_*,TSizedDefaultAllocator<32>_>::AddZeroed(&pFVar6->TagToObject,iVar11);
        }
        lVar15 = (longlong)(int)local_res8[0];
        if (((int)local_res8[0] < 0) ||
           (pFVar6 = (this->Context).Ptr, (pFVar6->TagToObject).ArrayNum <= (int)local_res8[0])) {
          FArchiveState::SetCriticalError((FArchiveState *)*plVar1);
        }
        else {
          if (((int)local_res8[0] < 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar10 = local_res8[0];
          if (*(longlong *)((pFVar6->TagToObject).AllocatorInstance.Data + lVar15 * 8) == 0) {
            StaticSerialize<Chaos::FHeightField>(this,param_1);
            lVar15 = (longlong)(int)local_res8[0];
            pFVar6 = (this->Context).Ptr;
            pFVar7 = param_1->Ptr;
            uVar10 = 0;
            if ((int)local_res8[0] < (pFVar6->TagToObject).ArrayNum) {
              uVar10 = ~local_res8[0] >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            *(FHeightField **)((pFVar6->TagToObject).AllocatorInstance.Data + lVar15 * 8) = pFVar7;
            local_78 = param_1->Ptr;
            local_70 = &local_78;
            local_68 = local_res8;
            TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<void_*_&&,int_const_&>_>
                      ((TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                        *)&((this->Context).Ptr)->ObjToTag,
                       (TPairInitializer<void_*_&&,int_const_&> *)(local_res18 + 2),
                       (bool *)&local_70);
          }
          else {
            pFVar6 = (this->Context).Ptr;
            uVar14 = 0;
            if ((int)local_res8[0] < (pFVar6->TagToObject).ArrayNum) {
              uVar14 = ~local_res8[0] >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            param_1->Ptr = *(FHeightField **)
                            ((pFVar6->TagToObject).AllocatorInstance.Data +
                            (longlong)(int)uVar10 * 8);
          }
        }
      }
    }
  }
  else {
    param_1->Ptr = (FHeightField *)0x0;
  }
  return;
}

// StaticSerialize<Chaos::FHeightField> @ 145f01850

void __thiscall
Chaos::FChaosArchive::StaticSerialize<Chaos::FHeightField>
          (FChaosArchive *this,TSerializablePtr<Chaos::FHeightField> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FHeightField *pFVar3;
  FHeightField *this_00;
  byte bVar4;
  
  this_00 = param_1->Ptr;
  pFVar3 = (FHeightField *)FImplicitObject::SerializationFactory(this,(FImplicitObject *)this_00);
  bVar4 = (byte)this->_padding_ & 1;
  if (pFVar3 == (FHeightField *)0x0) {
    if (bVar4 != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Ar.IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ChaosArchive.h"
                         ,0x15e,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  else {
    if (bVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ar.IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ChaosArchive.h"
                         ,0x158,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    param_1->Ptr = pFVar3;
    this_00 = pFVar3;
  }
  FHeightField::Serialize(this_00,this);
  return;
}

