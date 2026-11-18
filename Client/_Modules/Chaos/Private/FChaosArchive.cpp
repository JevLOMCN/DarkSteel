// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 52

// SerializePtr<Chaos::TGeometryParticle<double,3>_> @ 14372aac0

void __thiscall
Chaos::FChaosArchive::SerializePtr<Chaos::TGeometryParticle<double,3>_>
          (FChaosArchive *this,TSerializablePtr<Chaos::TGeometryParticle<double,3>_> *param_1)

{
  longlong *plVar1;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> *pTVar2;
  FArchiveState *this_00;
  FFastPathLoadBuffer *pFVar3;
  FArchive *pFVar4;
  uint *puVar5;
  FChaosArchiveContext *pFVar6;
  TGeometryParticle<double,3> *pTVar7;
  code *pcVar8;
  TTuple<void_*,int> *pTVar9;
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
  TGeometryParticle<double,3> *local_80;
  TGeometryParticle<double,3> *local_78;
  TGeometryParticle<double,3> **local_70;
  uint *local_68;
  TGeometryParticle<double,3> **local_60;
  uint *local_58;
  
  plVar1 = &this->_padding_;
  this_00 = (FArchiveState *)*plVar1;
  bVar16 = param_1->Ptr != (TGeometryParticle<double,3> *)0x0;
  pFVar3 = this_00->ActiveFPLB;
  puVar5 = (uint *)((longlong)pFVar3->StartFastPathLoadBuffer + 4);
  if (pFVar3->EndFastPathLoadBuffer < puVar5) {
    local_res10[0] = 0;
    if (this_00->ArIsLoading == 0) {
      local_res10[0] = (uint)(param_1->Ptr != (TGeometryParticle<double,3> *)0x0);
    }
    (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError(this_00);
    }
    uVar10 = local_res10[0];
    if (this_00->ArIsLoading == 0) goto LAB_14372ab52;
  }
  else {
    uVar10 = *(uint *)pFVar3->StartFastPathLoadBuffer;
    pFVar3->StartFastPathLoadBuffer = (uchar *)puVar5;
  }
  bVar16 = uVar10 != 0;
LAB_14372ab52:
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
              if (*(TGeometryParticle<double,3> **)(lVar15 + (longlong)iVar11 * 0x10) == local_80) {
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
              if (*(TGeometryParticle<double,3> **)
                   (*(longlong *)&pFVar6->ObjToTag + (longlong)iVar11 * 0x18) == local_80) {
                if (iVar11 != -1) {
                  pFVar4 = (FArchive *)*plVar1;
                  pTVar9 = TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                           ::Find((TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                                   *)&pFVar6->ObjToTag,local_80);
                  if ((pTVar9 == (TTuple<void_*,int> *)0x0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Pair != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                          ,0x288,L""), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  ::operator<<(pFVar4,(int *)&pTVar9->field_0x8);
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
        StaticSerialize<Chaos::TGeometryParticle<double,3>_>(this,param_1);
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
            StaticSerialize<Chaos::TGeometryParticle<double,3>_>(this,param_1);
            lVar15 = (longlong)(int)local_res8[0];
            pFVar6 = (this->Context).Ptr;
            pTVar7 = param_1->Ptr;
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
            *(TGeometryParticle<double,3> **)
             ((pFVar6->TagToObject).AllocatorInstance.Data + lVar15 * 8) = pTVar7;
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
            param_1->Ptr = *(TGeometryParticle<double,3> **)
                            ((pFVar6->TagToObject).AllocatorInstance.Data +
                            (longlong)(int)uVar10 * 8);
          }
        }
      }
    }
  }
  else {
    param_1->Ptr = (TGeometryParticle<double,3> *)0x0;
  }
  return;
}

// SerializePtr<Chaos::TGeometryParticleHandleImp<double,3,1>_> @ 14372afe0

void __thiscall
Chaos::FChaosArchive::SerializePtr<Chaos::TGeometryParticleHandleImp<double,3,1>_>
          (FChaosArchive *this,
          TSerializablePtr<Chaos::TGeometryParticleHandleImp<double,3,1>_> *param_1)

{
  longlong *plVar1;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> *pTVar2;
  FArchiveState *this_00;
  FFastPathLoadBuffer *pFVar3;
  FArchive *pFVar4;
  uint *puVar5;
  FChaosArchiveContext *pFVar6;
  TGeometryParticleHandleImp<double,3,1> *pTVar7;
  code *pcVar8;
  TTuple<void_*,int> *pTVar9;
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
  TGeometryParticleHandleImp<double,3,1> *local_80;
  TGeometryParticleHandleImp<double,3,1> *local_78;
  TGeometryParticleHandleImp<double,3,1> **local_70;
  uint *local_68;
  TGeometryParticleHandleImp<double,3,1> **local_60;
  uint *local_58;
  
  plVar1 = &this->_padding_;
  this_00 = (FArchiveState *)*plVar1;
  bVar16 = param_1->Ptr != (TGeometryParticleHandleImp<double,3,1> *)0x0;
  pFVar3 = this_00->ActiveFPLB;
  puVar5 = (uint *)((longlong)pFVar3->StartFastPathLoadBuffer + 4);
  if (pFVar3->EndFastPathLoadBuffer < puVar5) {
    local_res10[0] = 0;
    if (this_00->ArIsLoading == 0) {
      local_res10[0] = (uint)(param_1->Ptr != (TGeometryParticleHandleImp<double,3,1> *)0x0);
    }
    (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError(this_00);
    }
    uVar10 = local_res10[0];
    if (this_00->ArIsLoading == 0) goto LAB_14372b072;
  }
  else {
    uVar10 = *(uint *)pFVar3->StartFastPathLoadBuffer;
    pFVar3->StartFastPathLoadBuffer = (uchar *)puVar5;
  }
  bVar16 = uVar10 != 0;
LAB_14372b072:
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
              if (*(TGeometryParticleHandleImp<double,3,1> **)(lVar15 + (longlong)iVar11 * 0x10) ==
                  local_80) {
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
              if (*(TGeometryParticleHandleImp<double,3,1> **)
                   (*(longlong *)&pFVar6->ObjToTag + (longlong)iVar11 * 0x18) == local_80) {
                if (iVar11 != -1) {
                  pFVar4 = (FArchive *)*plVar1;
                  pTVar9 = TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                           ::Find((TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                                   *)&pFVar6->ObjToTag,local_80);
                  if ((pTVar9 == (TTuple<void_*,int> *)0x0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Pair != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                          ,0x288,L""), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  ::operator<<(pFVar4,(int *)&pTVar9->field_0x8);
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
        StaticSerialize<Chaos::TGeometryParticleHandleImp<double,3,1>_>(this,param_1);
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
            StaticSerialize<Chaos::TGeometryParticleHandleImp<double,3,1>_>(this,param_1);
            lVar15 = (longlong)(int)local_res8[0];
            pFVar6 = (this->Context).Ptr;
            pTVar7 = param_1->Ptr;
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
            *(TGeometryParticleHandleImp<double,3,1> **)
             ((pFVar6->TagToObject).AllocatorInstance.Data + lVar15 * 8) = pTVar7;
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
            param_1->Ptr = *(TGeometryParticleHandleImp<double,3,1> **)
                            ((pFVar6->TagToObject).AllocatorInstance.Data +
                            (longlong)(int)uVar10 * 8);
          }
        }
      }
    }
  }
  else {
    param_1->Ptr = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  }
  return;
}

// SerializePtr<Chaos::TGeometryParticlesImp<double,3,0>_> @ 14372b500

void __thiscall
Chaos::FChaosArchive::SerializePtr<Chaos::TGeometryParticlesImp<double,3,0>_>
          (FChaosArchive *this,TSerializablePtr<Chaos::TGeometryParticlesImp<double,3,0>_> *param_1)

{
  longlong *plVar1;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> *pTVar2;
  FArchiveState *this_00;
  FFastPathLoadBuffer *pFVar3;
  FArchive *pFVar4;
  uint *puVar5;
  FChaosArchiveContext *pFVar6;
  TGeometryParticlesImp<double,3,0> *pTVar7;
  code *pcVar8;
  TTuple<void_*,int> *pTVar9;
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
  TGeometryParticlesImp<double,3,0> *local_80;
  TGeometryParticlesImp<double,3,0> *local_78;
  TGeometryParticlesImp<double,3,0> **local_70;
  uint *local_68;
  TGeometryParticlesImp<double,3,0> **local_60;
  uint *local_58;
  
  plVar1 = &this->_padding_;
  this_00 = (FArchiveState *)*plVar1;
  bVar16 = param_1->Ptr != (TGeometryParticlesImp<double,3,0> *)0x0;
  pFVar3 = this_00->ActiveFPLB;
  puVar5 = (uint *)((longlong)pFVar3->StartFastPathLoadBuffer + 4);
  if (pFVar3->EndFastPathLoadBuffer < puVar5) {
    local_res10[0] = 0;
    if (this_00->ArIsLoading == 0) {
      local_res10[0] = (uint)(param_1->Ptr != (TGeometryParticlesImp<double,3,0> *)0x0);
    }
    (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError(this_00);
    }
    uVar10 = local_res10[0];
    if (this_00->ArIsLoading == 0) goto LAB_14372b592;
  }
  else {
    uVar10 = *(uint *)pFVar3->StartFastPathLoadBuffer;
    pFVar3->StartFastPathLoadBuffer = (uchar *)puVar5;
  }
  bVar16 = uVar10 != 0;
LAB_14372b592:
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
              if (*(TGeometryParticlesImp<double,3,0> **)(lVar15 + (longlong)iVar11 * 0x10) ==
                  local_80) {
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
              if (*(TGeometryParticlesImp<double,3,0> **)
                   (*(longlong *)&pFVar6->ObjToTag + (longlong)iVar11 * 0x18) == local_80) {
                if (iVar11 != -1) {
                  pFVar4 = (FArchive *)*plVar1;
                  pTVar9 = TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                           ::Find((TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                                   *)&pFVar6->ObjToTag,local_80);
                  if ((pTVar9 == (TTuple<void_*,int> *)0x0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Pair != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                          ,0x288,L""), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  ::operator<<(pFVar4,(int *)&pTVar9->field_0x8);
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
        StaticSerialize<Chaos::TGeometryParticlesImp<double,3,0>_>(this,param_1);
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
            StaticSerialize<Chaos::TGeometryParticlesImp<double,3,0>_>(this,param_1);
            lVar15 = (longlong)(int)local_res8[0];
            pFVar6 = (this->Context).Ptr;
            pTVar7 = param_1->Ptr;
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
            *(TGeometryParticlesImp<double,3,0> **)
             ((pFVar6->TagToObject).AllocatorInstance.Data + lVar15 * 8) = pTVar7;
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
            param_1->Ptr = *(TGeometryParticlesImp<double,3,0> **)
                            ((pFVar6->TagToObject).AllocatorInstance.Data +
                            (longlong)(int)uVar10 * 8);
          }
        }
      }
    }
  }
  else {
    param_1->Ptr = (TGeometryParticlesImp<double,3,0> *)0x0;
  }
  return;
}

// SerializePtr<Chaos::TPBDRigidParticleHandleImp<double,3,1>_> @ 14372ba20

void __thiscall
Chaos::FChaosArchive::SerializePtr<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
          (FChaosArchive *this,
          TSerializablePtr<Chaos::TPBDRigidParticleHandleImp<double,3,1>_> *param_1)

{
  longlong *plVar1;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> *pTVar2;
  FArchiveState *this_00;
  FFastPathLoadBuffer *pFVar3;
  FArchive *pFVar4;
  uint *puVar5;
  FChaosArchiveContext *pFVar6;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar7;
  code *pcVar8;
  TTuple<void_*,int> *pTVar9;
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
  TPBDRigidParticleHandleImp<double,3,1> *local_80;
  TPBDRigidParticleHandleImp<double,3,1> *local_78;
  TPBDRigidParticleHandleImp<double,3,1> **local_70;
  uint *local_68;
  TPBDRigidParticleHandleImp<double,3,1> **local_60;
  uint *local_58;
  
  plVar1 = &this->_padding_;
  this_00 = (FArchiveState *)*plVar1;
  bVar16 = param_1->Ptr != (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
  pFVar3 = this_00->ActiveFPLB;
  puVar5 = (uint *)((longlong)pFVar3->StartFastPathLoadBuffer + 4);
  if (pFVar3->EndFastPathLoadBuffer < puVar5) {
    local_res10[0] = 0;
    if (this_00->ArIsLoading == 0) {
      local_res10[0] = (uint)(param_1->Ptr != (TPBDRigidParticleHandleImp<double,3,1> *)0x0);
    }
    (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError(this_00);
    }
    uVar10 = local_res10[0];
    if (this_00->ArIsLoading == 0) goto LAB_14372bab2;
  }
  else {
    uVar10 = *(uint *)pFVar3->StartFastPathLoadBuffer;
    pFVar3->StartFastPathLoadBuffer = (uchar *)puVar5;
  }
  bVar16 = uVar10 != 0;
LAB_14372bab2:
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
              if (*(TPBDRigidParticleHandleImp<double,3,1> **)(lVar15 + (longlong)iVar11 * 0x10) ==
                  local_80) {
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
              if (*(TPBDRigidParticleHandleImp<double,3,1> **)
                   (*(longlong *)&pFVar6->ObjToTag + (longlong)iVar11 * 0x18) == local_80) {
                if (iVar11 != -1) {
                  pFVar4 = (FArchive *)*plVar1;
                  pTVar9 = TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                           ::Find((TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                                   *)&pFVar6->ObjToTag,local_80);
                  if ((pTVar9 == (TTuple<void_*,int> *)0x0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Pair != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                          ,0x288,L""), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  ::operator<<(pFVar4,(int *)&pTVar9->field_0x8);
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
        StaticSerialize<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>(this,param_1);
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
            StaticSerialize<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>(this,param_1);
            lVar15 = (longlong)(int)local_res8[0];
            pFVar6 = (this->Context).Ptr;
            pTVar7 = param_1->Ptr;
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
            *(TPBDRigidParticleHandleImp<double,3,1> **)
             ((pFVar6->TagToObject).AllocatorInstance.Data + lVar15 * 8) = pTVar7;
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
            param_1->Ptr = *(TPBDRigidParticleHandleImp<double,3,1> **)
                            ((pFVar6->TagToObject).AllocatorInstance.Data +
                            (longlong)(int)uVar10 * 8);
          }
        }
      }
    }
  }
  else {
    param_1->Ptr = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
  }
  return;
}

// SerializePtr<Chaos::FImplicitObject> @ 14372bf40

void __thiscall
Chaos::FChaosArchive::SerializePtr<Chaos::FImplicitObject>
          (FChaosArchive *this,TRefCountPtr<Chaos::FImplicitObject> *param_1)

{
  longlong *plVar1;
  FChaosArchiveContext *pFVar2;
  FImplicitObject *pFVar3;
  FImplicitObject *pFVar4;
  longlong lVar5;
  void **ppvVar6;
  TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*> *pTVar7;
  undefined8 *puVar8;
  TPairInitializer<void_*_&&,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*_&&> local_res8;
  undefined8 *local_res18;
  FRefCountPtrHolder ***local_28;
  undefined8 **local_20;
  
  local_res8.Key = (void **)param_1->Reference;
  SerializePtr<Chaos::FImplicitObject>(this,(TSerializablePtr<Chaos::FImplicitObject> *)&local_res8)
  ;
  ppvVar6 = local_res8.Key;
  if ((this->_padding_ & 1) != 0) {
    pFVar2 = (this->Context).Ptr;
    pTVar7 = TSet<TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*,0>,FDefaultSetAllocator>
                     *)&pFVar2->ObjToRefCountPtrHolder,local_res8.Key);
    if ((pTVar7 == (TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*> *)0x0) ||
       (puVar8 = *(undefined8 **)&pTVar7->field_0x8, puVar8 == (undefined8 *)0x0)) {
      puVar8 = ::operator_new(0x10);
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        *puVar8 = &___7__TRefCountPtrHolder_VFImplicitObject_Chaos___FChaosArchiveContext_Chaos__6B_
        ;
        puVar8[1] = ppvVar6;
        if ((FImplicitObject *)ppvVar6 != (FImplicitObject *)0x0) {
          LOCK();
          *(int *)((longlong)ppvVar6 + 8) = (int)*(longlong *)((longlong)ppvVar6 + 8) + 1;
          UNLOCK();
        }
      }
      local_28 = &local_res8.Value;
      local_20 = &local_res18;
      local_res8.Value = ppvVar6;
      local_res18 = puVar8;
      TSet<TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<void_*_&&,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*_&&>_>
                ((TSet<TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*,0>,FDefaultSetAllocator>
                  *)&pFVar2->ObjToRefCountPtrHolder,&local_res8,(bool *)&local_28);
    }
    pFVar3 = (FImplicitObject *)puVar8[1];
    pFVar4 = param_1->Reference;
    if (pFVar4 != pFVar3) {
      param_1->Reference = pFVar3;
      if (pFVar3 != (FImplicitObject *)0x0) {
        LOCK();
        *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar4 != (FImplicitObject *)0x0) {
        LOCK();
        plVar1 = &pFVar4->_padding_;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar5 == 1) && (*(int *)((longlong)&pFVar4->_padding_ + 4) == 0)) {
          (**(code **)pFVar4->_padding_)(pFVar4,1);
        }
      }
    }
  }
  return;
}

// SerializePtr<Chaos::FImplicitObject> @ 14372c060

void __thiscall
Chaos::FChaosArchive::SerializePtr<Chaos::FImplicitObject>
          (FChaosArchive *this,TSerializablePtr<Chaos::FImplicitObject> *param_1)

{
  longlong *plVar1;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> *pTVar2;
  FArchiveState *this_00;
  FFastPathLoadBuffer *pFVar3;
  FArchive *pFVar4;
  uint *puVar5;
  FChaosArchiveContext *pFVar6;
  FImplicitObject *pFVar7;
  code *pcVar8;
  TTuple<void_*,int> *pTVar9;
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
  FImplicitObject *local_80;
  FImplicitObject *local_78;
  FImplicitObject **local_70;
  uint *local_68;
  FImplicitObject **local_60;
  uint *local_58;
  
  plVar1 = &this->_padding_;
  this_00 = (FArchiveState *)*plVar1;
  bVar16 = param_1->Ptr != (FImplicitObject *)0x0;
  pFVar3 = this_00->ActiveFPLB;
  puVar5 = (uint *)((longlong)pFVar3->StartFastPathLoadBuffer + 4);
  if (pFVar3->EndFastPathLoadBuffer < puVar5) {
    local_res10[0] = 0;
    if (this_00->ArIsLoading == 0) {
      local_res10[0] = (uint)(param_1->Ptr != (FImplicitObject *)0x0);
    }
    (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError(this_00);
    }
    uVar10 = local_res10[0];
    if (this_00->ArIsLoading == 0) goto LAB_14372c0f2;
  }
  else {
    uVar10 = *(uint *)pFVar3->StartFastPathLoadBuffer;
    pFVar3->StartFastPathLoadBuffer = (uchar *)puVar5;
  }
  bVar16 = uVar10 != 0;
LAB_14372c0f2:
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
              if (*(FImplicitObject **)(lVar15 + (longlong)iVar11 * 0x10) == local_80) {
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
              if (*(FImplicitObject **)(*(longlong *)&pFVar6->ObjToTag + (longlong)iVar11 * 0x18) ==
                  local_80) {
                if (iVar11 != -1) {
                  pFVar4 = (FArchive *)*plVar1;
                  pTVar9 = TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                           ::Find((TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                                   *)&pFVar6->ObjToTag,local_80);
                  if ((pTVar9 == (TTuple<void_*,int> *)0x0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Pair != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                          ,0x288,L""), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  ::operator<<(pFVar4,(int *)&pTVar9->field_0x8);
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
        StaticSerialize<Chaos::FImplicitObject>(this,param_1);
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
            StaticSerialize<Chaos::FImplicitObject>(this,param_1);
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
            *(FImplicitObject **)((pFVar6->TagToObject).AllocatorInstance.Data + lVar15 * 8) =
                 pFVar7;
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
            param_1->Ptr = *(FImplicitObject **)
                            ((pFVar6->TagToObject).AllocatorInstance.Data +
                            (longlong)(int)uVar10 * 8);
          }
        }
      }
    }
  }
  else {
    param_1->Ptr = (FImplicitObject *)0x0;
  }
  return;
}

// SerializePtr<Chaos::FShapeInstanceProxy> @ 14372c580

void __thiscall
Chaos::FChaosArchive::SerializePtr<Chaos::FShapeInstanceProxy>
          (FChaosArchive *this,TSerializablePtr<Chaos::FShapeInstanceProxy> *param_1)

{
  longlong *plVar1;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> *pTVar2;
  FArchiveState *this_00;
  FFastPathLoadBuffer *pFVar3;
  FArchive *pFVar4;
  uint *puVar5;
  FChaosArchiveContext *pFVar6;
  FShapeInstanceProxy *pFVar7;
  code *pcVar8;
  TTuple<void_*,int> *pTVar9;
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
  FShapeInstanceProxy *local_80;
  FShapeInstanceProxy *local_78;
  FShapeInstanceProxy **local_70;
  uint *local_68;
  FShapeInstanceProxy **local_60;
  uint *local_58;
  
  plVar1 = &this->_padding_;
  this_00 = (FArchiveState *)*plVar1;
  bVar16 = param_1->Ptr != (FShapeInstanceProxy *)0x0;
  pFVar3 = this_00->ActiveFPLB;
  puVar5 = (uint *)((longlong)pFVar3->StartFastPathLoadBuffer + 4);
  if (pFVar3->EndFastPathLoadBuffer < puVar5) {
    local_res10[0] = 0;
    if (this_00->ArIsLoading == 0) {
      local_res10[0] = (uint)(param_1->Ptr != (FShapeInstanceProxy *)0x0);
    }
    (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError(this_00);
    }
    uVar10 = local_res10[0];
    if (this_00->ArIsLoading == 0) goto LAB_14372c612;
  }
  else {
    uVar10 = *(uint *)pFVar3->StartFastPathLoadBuffer;
    pFVar3->StartFastPathLoadBuffer = (uchar *)puVar5;
  }
  bVar16 = uVar10 != 0;
LAB_14372c612:
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
              if (*(FShapeInstanceProxy **)(lVar15 + (longlong)iVar11 * 0x10) == local_80) {
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
              if (*(FShapeInstanceProxy **)
                   (*(longlong *)&pFVar6->ObjToTag + (longlong)iVar11 * 0x18) == local_80) {
                if (iVar11 != -1) {
                  pFVar4 = (FArchive *)*plVar1;
                  pTVar9 = TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                           ::Find((TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                                   *)&pFVar6->ObjToTag,local_80);
                  if ((pTVar9 == (TTuple<void_*,int> *)0x0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Pair != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                          ,0x288,L""), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  ::operator<<(pFVar4,(int *)&pTVar9->field_0x8);
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
        StaticSerialize<Chaos::FShapeInstanceProxy>(this,param_1);
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
            StaticSerialize<Chaos::FShapeInstanceProxy>(this,param_1);
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
            *(FShapeInstanceProxy **)((pFVar6->TagToObject).AllocatorInstance.Data + lVar15 * 8) =
                 pFVar7;
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
            param_1->Ptr = *(FShapeInstanceProxy **)
                            ((pFVar6->TagToObject).AllocatorInstance.Data +
                            (longlong)(int)uVar10 * 8);
          }
        }
      }
    }
  }
  else {
    param_1->Ptr = (FShapeInstanceProxy *)0x0;
  }
  return;
}

// StaticSerialize<Chaos::TGeometryParticle<double,3>_> @ 14372cb40

void __thiscall
Chaos::FChaosArchive::StaticSerialize<Chaos::TGeometryParticle<double,3>_>
          (FChaosArchive *this,TSerializablePtr<Chaos::TGeometryParticle<double,3>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TGeometryParticle<double,3> *pTVar3;
  TGeometryParticle<double,3> *pTVar4;
  byte bVar5;
  
  pTVar4 = param_1->Ptr;
  pTVar3 = TGeometryParticle<double,3>::SerializationFactory(this,pTVar4);
  bVar5 = (byte)this->_padding_ & 1;
  if (pTVar3 == (TGeometryParticle<double,3> *)0x0) {
    if (bVar5 != 0) {
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
    if (bVar5 == 0) {
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
    param_1->Ptr = pTVar3;
    pTVar4 = pTVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00014372cbf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pTVar4->_padding_ + 8))(pTVar4,this);
  return;
}

// StaticSerialize<Chaos::TGeometryParticleHandleImp<double,3,1>_> @ 14372cc00

void __thiscall
Chaos::FChaosArchive::StaticSerialize<Chaos::TGeometryParticleHandleImp<double,3,1>_>
          (FChaosArchive *this,
          TSerializablePtr<Chaos::TGeometryParticleHandleImp<double,3,1>_> *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  TGeometryParticleHandleImp<double,3,1> *this_01;
  
  this_01 = param_1->Ptr;
  if ((this->_padding_ & 1) == 0) {
    bVar2 = (byte)this->_padding_ & 1;
  }
  else {
    this_00 = ::operator_new(0x18);
    if (this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    }
    else {
      this_00->_padding_ = 0;
      *(undefined4 *)&this_00->_padding_ = 0;
      *(undefined1 *)((longlong)&this_00->_padding_ + 4) = 0;
      TGeometryParticleHandleImp<double,3,1>::SetConstraintGraphNode
                (this_00,(FPBDIslandParticle *)0x0);
    }
    bVar2 = (byte)this->_padding_ & 1;
    if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      if (bVar2 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ar.IsLoading()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ChaosArchive.h"
                           ,0x158,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      param_1->Ptr = this_00;
      this_01 = this_00;
      goto LAB_14372ccc3;
    }
  }
  if (bVar2 != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Ar.IsLoading()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ChaosArchive.h"
                       ,0x15e,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
LAB_14372ccc3:
  TGeometryParticleHandleImp<double,3,1>::Serialize(this_01,this);
  return;
}

// StaticSerialize<Chaos::TGeometryParticlesImp<double,3,0>_> @ 14372ccf0

void __thiscall
Chaos::FChaosArchive::StaticSerialize<Chaos::TGeometryParticlesImp<double,3,0>_>
          (FChaosArchive *this,TSerializablePtr<Chaos::TGeometryParticlesImp<double,3,0>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TGeometryParticlesImp<double,3,0> *pTVar3;
  TGeometryParticlesImp<double,3,0> *pTVar4;
  byte bVar5;
  
  pTVar4 = param_1->Ptr;
  pTVar3 = TGeometryParticlesImp<double,3,0>::SerializationFactory(this,pTVar4);
  bVar5 = (byte)this->_padding_ & 1;
  if (pTVar3 == (TGeometryParticlesImp<double,3,0> *)0x0) {
    if (bVar5 != 0) {
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
    if (bVar5 == 0) {
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
    param_1->Ptr = pTVar3;
    pTVar4 = pTVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00014372cda1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pTVar4->_padding_ + 8))(pTVar4,this);
  return;
}

// StaticSerialize<Chaos::TPBDRigidParticleHandleImp<double,3,1>_> @ 14372cdb0

void __thiscall
Chaos::FChaosArchive::StaticSerialize<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
          (FChaosArchive *this,
          TSerializablePtr<Chaos::TPBDRigidParticleHandleImp<double,3,1>_> *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  TGeometryParticleHandleImp<double,3,1> *this_01;
  
  this_01 = (TGeometryParticleHandleImp<double,3,1> *)param_1->Ptr;
  if ((this->_padding_ & 1) == 0) {
    bVar2 = (byte)this->_padding_ & 1;
  }
  else {
    this_00 = ::operator_new(0x18);
    if (this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    }
    else {
      this_00->_padding_ = 0;
      *(undefined4 *)&this_00->_padding_ = 0;
      *(undefined1 *)((longlong)&this_00->_padding_ + 4) = 0;
      TGeometryParticleHandleImp<double,3,1>::SetConstraintGraphNode
                (this_00,(FPBDIslandParticle *)0x0);
    }
    bVar2 = (byte)this->_padding_ & 1;
    if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      if (bVar2 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ar.IsLoading()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ChaosArchive.h"
                           ,0x158,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      param_1->Ptr = (TPBDRigidParticleHandleImp<double,3,1> *)this_00;
      this_01 = this_00;
      goto LAB_14372ce73;
    }
  }
  if (bVar2 != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Ar.IsLoading()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ChaosArchive.h"
                       ,0x15e,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
LAB_14372ce73:
  TGeometryParticleHandleImp<double,3,1>::Serialize(this_01,this);
  return;
}

// StaticSerialize<Chaos::FImplicitObject> @ 14372cea0

void __thiscall
Chaos::FChaosArchive::StaticSerialize<Chaos::FImplicitObject>
          (FChaosArchive *this,TSerializablePtr<Chaos::FImplicitObject> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FImplicitObject *pFVar3;
  FImplicitObject *pFVar4;
  byte bVar5;
  
  pFVar4 = param_1->Ptr;
  pFVar3 = FImplicitObject::SerializationFactory(this,pFVar4);
  bVar5 = (byte)this->_padding_ & 1;
  if (pFVar3 == (FImplicitObject *)0x0) {
    if (bVar5 != 0) {
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
    if (bVar5 == 0) {
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
    pFVar4 = pFVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00014372cf51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pFVar4->_padding_ + 0x100))(pFVar4,this);
  return;
}

// StaticSerialize<Chaos::FShapeInstanceProxy> @ 14372cf60

void __thiscall
Chaos::FChaosArchive::StaticSerialize<Chaos::FShapeInstanceProxy>
          (FChaosArchive *this,TSerializablePtr<Chaos::FShapeInstanceProxy> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShapeInstanceProxy *pFVar3;
  FShapeInstanceProxy *pFVar4;
  byte bVar5;
  
  pFVar4 = param_1->Ptr;
  pFVar3 = FShapeInstanceProxy::SerializationFactory(this,pFVar4);
  bVar5 = (byte)this->_padding_ & 1;
  if (pFVar3 == (FShapeInstanceProxy *)0x0) {
    if (bVar5 != 0) {
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
    if (bVar5 == 0) {
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
    pFVar4 = pFVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00014372d011. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pFVar4->_padding_ + 8))(pFVar4,this);
  return;
}

// SerializeLegacy @ 1437ac730

void __thiscall
Chaos::FChaosArchive::SerializeLegacy
          (FChaosArchive *this,
          TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_> *param_1)

{
  FImplicitObject::SerializeLegacyHelper((FArchive *)this->_padding_,param_1);
  return;
}

// SerializePtr<Chaos::TBox<double,3>_> @ 143882f40

void __thiscall
Chaos::FChaosArchive::SerializePtr<Chaos::TBox<double,3>_>
          (FChaosArchive *this,TSerializablePtr<Chaos::TBox<double,3>_> *param_1)

{
  longlong *plVar1;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> *pTVar2;
  FArchiveState *this_00;
  FFastPathLoadBuffer *pFVar3;
  FArchive *pFVar4;
  uint *puVar5;
  FChaosArchiveContext *pFVar6;
  TBox<double,3> *pTVar7;
  code *pcVar8;
  TTuple<void_*,int> *pTVar9;
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
  TBox<double,3> *local_80;
  TBox<double,3> *local_78;
  TBox<double,3> **local_70;
  uint *local_68;
  TBox<double,3> **local_60;
  uint *local_58;
  
  plVar1 = &this->_padding_;
  this_00 = (FArchiveState *)*plVar1;
  bVar16 = param_1->Ptr != (TBox<double,3> *)0x0;
  pFVar3 = this_00->ActiveFPLB;
  puVar5 = (uint *)((longlong)pFVar3->StartFastPathLoadBuffer + 4);
  if (pFVar3->EndFastPathLoadBuffer < puVar5) {
    local_res10[0] = 0;
    if (this_00->ArIsLoading == 0) {
      local_res10[0] = (uint)(param_1->Ptr != (TBox<double,3> *)0x0);
    }
    (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError(this_00);
    }
    uVar10 = local_res10[0];
    if (this_00->ArIsLoading == 0) goto LAB_143882fd2;
  }
  else {
    uVar10 = *(uint *)pFVar3->StartFastPathLoadBuffer;
    pFVar3->StartFastPathLoadBuffer = (uchar *)puVar5;
  }
  bVar16 = uVar10 != 0;
LAB_143882fd2:
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
              if (*(TBox<double,3> **)(lVar15 + (longlong)iVar11 * 0x10) == local_80) {
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
              if (*(TBox<double,3> **)(*(longlong *)&pFVar6->ObjToTag + (longlong)iVar11 * 0x18) ==
                  local_80) {
                if (iVar11 != -1) {
                  pFVar4 = (FArchive *)*plVar1;
                  pTVar9 = TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                           ::Find((TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                                   *)&pFVar6->ObjToTag,local_80);
                  if ((pTVar9 == (TTuple<void_*,int> *)0x0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Pair != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                          ,0x288,L""), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  ::operator<<(pFVar4,(int *)&pTVar9->field_0x8);
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
        StaticSerialize<Chaos::TBox<double,3>_>(this,param_1);
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
            StaticSerialize<Chaos::TBox<double,3>_>(this,param_1);
            lVar15 = (longlong)(int)local_res8[0];
            pFVar6 = (this->Context).Ptr;
            pTVar7 = param_1->Ptr;
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
            *(TBox<double,3> **)((pFVar6->TagToObject).AllocatorInstance.Data + lVar15 * 8) = pTVar7
            ;
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
            param_1->Ptr = *(TBox<double,3> **)
                            ((pFVar6->TagToObject).AllocatorInstance.Data +
                            (longlong)(int)uVar10 * 8);
          }
        }
      }
    }
  }
  else {
    param_1->Ptr = (TBox<double,3> *)0x0;
  }
  return;
}

// SerializePtr<Chaos::TSphere<double,3>_> @ 143883460

void __thiscall
Chaos::FChaosArchive::SerializePtr<Chaos::TSphere<double,3>_>
          (FChaosArchive *this,TSerializablePtr<Chaos::TSphere<double,3>_> *param_1)

{
  longlong *plVar1;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> *pTVar2;
  FArchiveState *this_00;
  FFastPathLoadBuffer *pFVar3;
  FArchive *pFVar4;
  uint *puVar5;
  FChaosArchiveContext *pFVar6;
  TSphere<double,3> *pTVar7;
  code *pcVar8;
  TTuple<void_*,int> *pTVar9;
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
  TSphere<double,3> *local_80;
  TSphere<double,3> *local_78;
  TSphere<double,3> **local_70;
  uint *local_68;
  TSphere<double,3> **local_60;
  uint *local_58;
  
  plVar1 = &this->_padding_;
  this_00 = (FArchiveState *)*plVar1;
  bVar16 = param_1->Ptr != (TSphere<double,3> *)0x0;
  pFVar3 = this_00->ActiveFPLB;
  puVar5 = (uint *)((longlong)pFVar3->StartFastPathLoadBuffer + 4);
  if (pFVar3->EndFastPathLoadBuffer < puVar5) {
    local_res10[0] = 0;
    if (this_00->ArIsLoading == 0) {
      local_res10[0] = (uint)(param_1->Ptr != (TSphere<double,3> *)0x0);
    }
    (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError(this_00);
    }
    uVar10 = local_res10[0];
    if (this_00->ArIsLoading == 0) goto LAB_1438834f2;
  }
  else {
    uVar10 = *(uint *)pFVar3->StartFastPathLoadBuffer;
    pFVar3->StartFastPathLoadBuffer = (uchar *)puVar5;
  }
  bVar16 = uVar10 != 0;
LAB_1438834f2:
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
              if (*(TSphere<double,3> **)(lVar15 + (longlong)iVar11 * 0x10) == local_80) {
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
              if (*(TSphere<double,3> **)(*(longlong *)&pFVar6->ObjToTag + (longlong)iVar11 * 0x18)
                  == local_80) {
                if (iVar11 != -1) {
                  pFVar4 = (FArchive *)*plVar1;
                  pTVar9 = TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                           ::Find((TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                                   *)&pFVar6->ObjToTag,local_80);
                  if ((pTVar9 == (TTuple<void_*,int> *)0x0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Pair != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                          ,0x288,L""), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  ::operator<<(pFVar4,(int *)&pTVar9->field_0x8);
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
        StaticSerialize<Chaos::TSphere<double,3>_>(this,param_1);
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
            StaticSerialize<Chaos::TSphere<double,3>_>(this,param_1);
            lVar15 = (longlong)(int)local_res8[0];
            pFVar6 = (this->Context).Ptr;
            pTVar7 = param_1->Ptr;
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
            *(TSphere<double,3> **)((pFVar6->TagToObject).AllocatorInstance.Data + lVar15 * 8) =
                 pTVar7;
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
            param_1->Ptr = *(TSphere<double,3> **)
                            ((pFVar6->TagToObject).AllocatorInstance.Data +
                            (longlong)(int)uVar10 * 8);
          }
        }
      }
    }
  }
  else {
    param_1->Ptr = (TSphere<double,3> *)0x0;
  }
  return;
}

// SerializePtr<Chaos::FCapsule> @ 143883980

void __thiscall
Chaos::FChaosArchive::SerializePtr<Chaos::FCapsule>
          (FChaosArchive *this,TSerializablePtr<Chaos::FCapsule> *param_1)

{
  longlong *plVar1;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> *pTVar2;
  FArchiveState *this_00;
  FFastPathLoadBuffer *pFVar3;
  FArchive *pFVar4;
  uint *puVar5;
  FChaosArchiveContext *pFVar6;
  FCapsule *pFVar7;
  code *pcVar8;
  TTuple<void_*,int> *pTVar9;
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
  FCapsule *local_80;
  FCapsule *local_78;
  FCapsule **local_70;
  uint *local_68;
  FCapsule **local_60;
  uint *local_58;
  
  plVar1 = &this->_padding_;
  this_00 = (FArchiveState *)*plVar1;
  bVar16 = param_1->Ptr != (FCapsule *)0x0;
  pFVar3 = this_00->ActiveFPLB;
  puVar5 = (uint *)((longlong)pFVar3->StartFastPathLoadBuffer + 4);
  if (pFVar3->EndFastPathLoadBuffer < puVar5) {
    local_res10[0] = 0;
    if (this_00->ArIsLoading == 0) {
      local_res10[0] = (uint)(param_1->Ptr != (FCapsule *)0x0);
    }
    (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError(this_00);
    }
    uVar10 = local_res10[0];
    if (this_00->ArIsLoading == 0) goto LAB_143883a12;
  }
  else {
    uVar10 = *(uint *)pFVar3->StartFastPathLoadBuffer;
    pFVar3->StartFastPathLoadBuffer = (uchar *)puVar5;
  }
  bVar16 = uVar10 != 0;
LAB_143883a12:
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
              if (*(FCapsule **)(lVar15 + (longlong)iVar11 * 0x10) == local_80) {
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
              if (*(FCapsule **)(*(longlong *)&pFVar6->ObjToTag + (longlong)iVar11 * 0x18) ==
                  local_80) {
                if (iVar11 != -1) {
                  pFVar4 = (FArchive *)*plVar1;
                  pTVar9 = TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                           ::Find((TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                                   *)&pFVar6->ObjToTag,local_80);
                  if ((pTVar9 == (TTuple<void_*,int> *)0x0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Pair != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                          ,0x288,L""), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  ::operator<<(pFVar4,(int *)&pTVar9->field_0x8);
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
        StaticSerialize<Chaos::FCapsule>(this,param_1);
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
            StaticSerialize<Chaos::FCapsule>(this,param_1);
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
            *(FCapsule **)((pFVar6->TagToObject).AllocatorInstance.Data + lVar15 * 8) = pFVar7;
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
            param_1->Ptr = *(FCapsule **)
                            ((pFVar6->TagToObject).AllocatorInstance.Data +
                            (longlong)(int)uVar10 * 8);
          }
        }
      }
    }
  }
  else {
    param_1->Ptr = (FCapsule *)0x0;
  }
  return;
}

// SerializePtr<Chaos::FConvex> @ 143883ea0

void __thiscall
Chaos::FChaosArchive::SerializePtr<Chaos::FConvex>
          (FChaosArchive *this,TSerializablePtr<Chaos::FConvex> *param_1)

{
  longlong *plVar1;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> *pTVar2;
  FArchiveState *this_00;
  FFastPathLoadBuffer *pFVar3;
  FArchive *pFVar4;
  uint *puVar5;
  FChaosArchiveContext *pFVar6;
  FConvex *pFVar7;
  code *pcVar8;
  TTuple<void_*,int> *pTVar9;
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
  FConvex *local_80;
  FConvex *local_78;
  FConvex **local_70;
  uint *local_68;
  FConvex **local_60;
  uint *local_58;
  
  plVar1 = &this->_padding_;
  this_00 = (FArchiveState *)*plVar1;
  bVar16 = param_1->Ptr != (FConvex *)0x0;
  pFVar3 = this_00->ActiveFPLB;
  puVar5 = (uint *)((longlong)pFVar3->StartFastPathLoadBuffer + 4);
  if (pFVar3->EndFastPathLoadBuffer < puVar5) {
    local_res10[0] = 0;
    if (this_00->ArIsLoading == 0) {
      local_res10[0] = (uint)(param_1->Ptr != (FConvex *)0x0);
    }
    (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError(this_00);
    }
    uVar10 = local_res10[0];
    if (this_00->ArIsLoading == 0) goto LAB_143883f32;
  }
  else {
    uVar10 = *(uint *)pFVar3->StartFastPathLoadBuffer;
    pFVar3->StartFastPathLoadBuffer = (uchar *)puVar5;
  }
  bVar16 = uVar10 != 0;
LAB_143883f32:
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
              if (*(FConvex **)(lVar15 + (longlong)iVar11 * 0x10) == local_80) {
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
              if (*(FConvex **)(*(longlong *)&pFVar6->ObjToTag + (longlong)iVar11 * 0x18) ==
                  local_80) {
                if (iVar11 != -1) {
                  pFVar4 = (FArchive *)*plVar1;
                  pTVar9 = TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                           ::Find((TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                                   *)&pFVar6->ObjToTag,local_80);
                  if ((pTVar9 == (TTuple<void_*,int> *)0x0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Pair != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                          ,0x288,L""), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  ::operator<<(pFVar4,(int *)&pTVar9->field_0x8);
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
        StaticSerialize<Chaos::FConvex>(this,param_1);
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
            StaticSerialize<Chaos::FConvex>(this,param_1);
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
            *(FConvex **)((pFVar6->TagToObject).AllocatorInstance.Data + lVar15 * 8) = pFVar7;
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
            param_1->Ptr = *(FConvex **)
                            ((pFVar6->TagToObject).AllocatorInstance.Data +
                            (longlong)(int)uVar10 * 8);
          }
        }
      }
    }
  }
  else {
    param_1->Ptr = (FConvex *)0x0;
  }
  return;
}

// SerializePtr<Chaos::FImplicitObjectUnion> @ 1438843c0

void __thiscall
Chaos::FChaosArchive::SerializePtr<Chaos::FImplicitObjectUnion>
          (FChaosArchive *this,TSerializablePtr<Chaos::FImplicitObjectUnion> *param_1)

{
  longlong *plVar1;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> *pTVar2;
  FArchiveState *this_00;
  FFastPathLoadBuffer *pFVar3;
  FArchive *pFVar4;
  uint *puVar5;
  FChaosArchiveContext *pFVar6;
  FImplicitObjectUnion *pFVar7;
  code *pcVar8;
  TTuple<void_*,int> *pTVar9;
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
  FImplicitObjectUnion *local_80;
  FImplicitObjectUnion *local_78;
  FImplicitObjectUnion **local_70;
  uint *local_68;
  FImplicitObjectUnion **local_60;
  uint *local_58;
  
  plVar1 = &this->_padding_;
  this_00 = (FArchiveState *)*plVar1;
  bVar16 = param_1->Ptr != (FImplicitObjectUnion *)0x0;
  pFVar3 = this_00->ActiveFPLB;
  puVar5 = (uint *)((longlong)pFVar3->StartFastPathLoadBuffer + 4);
  if (pFVar3->EndFastPathLoadBuffer < puVar5) {
    local_res10[0] = 0;
    if (this_00->ArIsLoading == 0) {
      local_res10[0] = (uint)(param_1->Ptr != (FImplicitObjectUnion *)0x0);
    }
    (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError(this_00);
    }
    uVar10 = local_res10[0];
    if (this_00->ArIsLoading == 0) goto LAB_143884452;
  }
  else {
    uVar10 = *(uint *)pFVar3->StartFastPathLoadBuffer;
    pFVar3->StartFastPathLoadBuffer = (uchar *)puVar5;
  }
  bVar16 = uVar10 != 0;
LAB_143884452:
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
              if (*(FImplicitObjectUnion **)(lVar15 + (longlong)iVar11 * 0x10) == local_80) {
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
              if (*(FImplicitObjectUnion **)
                   (*(longlong *)&pFVar6->ObjToTag + (longlong)iVar11 * 0x18) == local_80) {
                if (iVar11 != -1) {
                  pFVar4 = (FArchive *)*plVar1;
                  pTVar9 = TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                           ::Find((TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                                   *)&pFVar6->ObjToTag,local_80);
                  if ((pTVar9 == (TTuple<void_*,int> *)0x0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Pair != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                          ,0x288,L""), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  ::operator<<(pFVar4,(int *)&pTVar9->field_0x8);
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
        StaticSerialize<Chaos::FImplicitObjectUnion>(this,param_1);
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
            StaticSerialize<Chaos::FImplicitObjectUnion>(this,param_1);
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
            *(FImplicitObjectUnion **)((pFVar6->TagToObject).AllocatorInstance.Data + lVar15 * 8) =
                 pFVar7;
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
            param_1->Ptr = *(FImplicitObjectUnion **)
                            ((pFVar6->TagToObject).AllocatorInstance.Data +
                            (longlong)(int)uVar10 * 8);
          }
        }
      }
    }
  }
  else {
    param_1->Ptr = (FImplicitObjectUnion *)0x0;
  }
  return;
}

// StaticSerialize<Chaos::TBox<double,3>_> @ 143885220

void __thiscall
Chaos::FChaosArchive::StaticSerialize<Chaos::TBox<double,3>_>
          (FChaosArchive *this,TSerializablePtr<Chaos::TBox<double,3>_> *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TBox<double,3> *pTVar5;
  FArchive *pFVar6;
  byte bVar7;
  TBox<double,3> *this_00;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  
  this_00 = param_1->Ptr;
  pTVar5 = (TBox<double,3> *)FImplicitObject::SerializationFactory(this,(FImplicitObject *)this_00);
  bVar7 = (byte)this->_padding_ & 1;
  if (pTVar5 == (TBox<double,3> *)0x0) {
    if (bVar7 != 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Ar.IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ChaosArchive.h"
                         ,0x15e,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  else {
    if (bVar7 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ar.IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ChaosArchive.h"
                         ,0x158,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    param_1->Ptr = pTVar5;
    this_00 = pTVar5;
  }
  (**(code **)(this_00->_padding_ + 0x118))(this_00,local_res10);
  FImplicitObject::SerializeImp((FImplicitObject *)this_00,(FArchive *)this);
  pFVar6 = SerializeReal<double,3>((FArchive *)this,&(this_00->AABB).MMin);
  SerializeReal<double,3>(pFVar6,&(this_00->AABB).MMax);
  (**(code **)(this->_padding_ + 0x230))(this,&FReleaseObjectVersion::GUID);
  iVar4 = FArchiveState::CustomVer((FArchiveState *)this,&FReleaseObjectVersion::GUID);
  if (0x24 < iVar4) {
    plVar1 = (longlong *)this->_padding_;
    local_res8[0] = (uint)this_00->_padding_;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((this->_padding_ & 0x10000) == 0) {
        (**(code **)(this->_padding_ + 0x188))(this,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    *(uint *)&this_00->_padding_ = local_res8[0];
  }
  return;
}

// StaticSerialize<Chaos::TSphere<double,3>_> @ 143885370

void __thiscall
Chaos::FChaosArchive::StaticSerialize<Chaos::TSphere<double,3>_>
          (FChaosArchive *this,TSerializablePtr<Chaos::TSphere<double,3>_> *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  TSphere<double,3> *pTVar4;
  byte bVar5;
  TSphere<double,3> *this_00;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  
  this_00 = param_1->Ptr;
  pTVar4 = (TSphere<double,3> *)
           FImplicitObject::SerializationFactory(this,(FImplicitObject *)this_00);
  bVar5 = (byte)this->_padding_ & 1;
  if (pTVar4 == (TSphere<double,3> *)0x0) {
    if (bVar5 != 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Ar.IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ChaosArchive.h"
                         ,0x15e,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  else {
    if (bVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ar.IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ChaosArchive.h"
                         ,0x158,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    param_1->Ptr = pTVar4;
    this_00 = pTVar4;
  }
  (**(code **)(this_00->_padding_ + 0x118))(this_00,local_res10);
  FImplicitObject::SerializeImp((FImplicitObject *)this_00,(FArchive *)this);
  operator<<<3>((FArchive *)this,&this_00->Center);
  plVar1 = (longlong *)this->_padding_;
  local_res8[0] = (uint)this_00->_padding_;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((this->_padding_ & 0x10000) == 0) {
      (**(code **)(this->_padding_ + 0x188))(this,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  *(uint *)&this_00->_padding_ = local_res8[0];
  return;
}

// StaticSerialize<Chaos::FCapsule> @ 143885490

void __thiscall
Chaos::FChaosArchive::StaticSerialize<Chaos::FCapsule>
          (FChaosArchive *this,TSerializablePtr<Chaos::FCapsule> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FCapsule *pFVar3;
  FCapsule *this_00;
  byte bVar4;
  
  this_00 = param_1->Ptr;
  pFVar3 = (FCapsule *)FImplicitObject::SerializationFactory(this,(FImplicitObject *)this_00);
  bVar4 = (byte)this->_padding_ & 1;
  if (pFVar3 == (FCapsule *)0x0) {
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
  FCapsule::Serialize(this_00,this);
  return;
}

// StaticSerialize<Chaos::FConvex> @ 143885550

void __thiscall
Chaos::FChaosArchive::StaticSerialize<Chaos::FConvex>
          (FChaosArchive *this,TSerializablePtr<Chaos::FConvex> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FConvex *pFVar3;
  FConvex *this_00;
  byte bVar4;
  
  this_00 = param_1->Ptr;
  pFVar3 = (FConvex *)FImplicitObject::SerializationFactory(this,(FImplicitObject *)this_00);
  bVar4 = (byte)this->_padding_ & 1;
  if (pFVar3 == (FConvex *)0x0) {
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
  FConvex::Serialize(this_00,this);
  return;
}

// StaticSerialize<Chaos::FImplicitObjectUnion> @ 143885610

void __thiscall
Chaos::FChaosArchive::StaticSerialize<Chaos::FImplicitObjectUnion>
          (FChaosArchive *this,TSerializablePtr<Chaos::FImplicitObjectUnion> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FImplicitObjectUnion *pFVar3;
  FImplicitObjectUnion *pFVar4;
  byte bVar5;
  
  pFVar4 = param_1->Ptr;
  pFVar3 = (FImplicitObjectUnion *)
           FImplicitObject::SerializationFactory(this,(FImplicitObject *)pFVar4);
  bVar5 = (byte)this->_padding_ & 1;
  if (pFVar3 == (FImplicitObjectUnion *)0x0) {
    if (bVar5 != 0) {
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
    if (bVar5 == 0) {
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
    pFVar4 = pFVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001438856c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pFVar4->_padding_ + 0x100))(pFVar4,this);
  return;
}

// SerializePtr<Chaos::FBVHParticles> @ 143ae7400

void __thiscall
Chaos::FChaosArchive::SerializePtr<Chaos::FBVHParticles>
          (FChaosArchive *this,TSerializablePtr<Chaos::FBVHParticles> *param_1)

{
  longlong *plVar1;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> *pTVar2;
  FArchiveState *this_00;
  FFastPathLoadBuffer *pFVar3;
  FArchive *pFVar4;
  uint *puVar5;
  FChaosArchiveContext *pFVar6;
  FBVHParticles *pFVar7;
  code *pcVar8;
  TTuple<void_*,int> *pTVar9;
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
  FBVHParticles *local_80;
  FBVHParticles *local_78;
  FBVHParticles **local_70;
  uint *local_68;
  FBVHParticles **local_60;
  uint *local_58;
  
  plVar1 = &this->_padding_;
  this_00 = (FArchiveState *)*plVar1;
  bVar16 = param_1->Ptr != (FBVHParticles *)0x0;
  pFVar3 = this_00->ActiveFPLB;
  puVar5 = (uint *)((longlong)pFVar3->StartFastPathLoadBuffer + 4);
  if (pFVar3->EndFastPathLoadBuffer < puVar5) {
    local_res10[0] = 0;
    if (this_00->ArIsLoading == 0) {
      local_res10[0] = (uint)(param_1->Ptr != (FBVHParticles *)0x0);
    }
    (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError(this_00);
    }
    uVar10 = local_res10[0];
    if (this_00->ArIsLoading == 0) goto LAB_143ae7492;
  }
  else {
    uVar10 = *(uint *)pFVar3->StartFastPathLoadBuffer;
    pFVar3->StartFastPathLoadBuffer = (uchar *)puVar5;
  }
  bVar16 = uVar10 != 0;
LAB_143ae7492:
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
              if (*(FBVHParticles **)(lVar15 + (longlong)iVar11 * 0x10) == local_80) {
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
              if (*(FBVHParticles **)(*(longlong *)&pFVar6->ObjToTag + (longlong)iVar11 * 0x18) ==
                  local_80) {
                if (iVar11 != -1) {
                  pFVar4 = (FArchive *)*plVar1;
                  pTVar9 = TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                           ::Find((TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                                   *)&pFVar6->ObjToTag,local_80);
                  if ((pTVar9 == (TTuple<void_*,int> *)0x0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Pair != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                          ,0x288,L""), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  ::operator<<(pFVar4,(int *)&pTVar9->field_0x8);
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
        StaticSerialize<Chaos::FBVHParticles>(this,param_1);
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
            StaticSerialize<Chaos::FBVHParticles>(this,param_1);
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
            *(FBVHParticles **)((pFVar6->TagToObject).AllocatorInstance.Data + lVar15 * 8) = pFVar7;
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
            param_1->Ptr = *(FBVHParticles **)
                            ((pFVar6->TagToObject).AllocatorInstance.Data +
                            (longlong)(int)uVar10 * 8);
          }
        }
      }
    }
  }
  else {
    param_1->Ptr = (FBVHParticles *)0x0;
  }
  return;
}

// SerializePtr<Chaos::FShapeInstance> @ 143ae7920

void __thiscall
Chaos::FChaosArchive::SerializePtr<Chaos::FShapeInstance>
          (FChaosArchive *this,TSerializablePtr<Chaos::FShapeInstance> *param_1)

{
  longlong *plVar1;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> *pTVar2;
  FArchiveState *this_00;
  FFastPathLoadBuffer *pFVar3;
  FArchive *pFVar4;
  uint *puVar5;
  FChaosArchiveContext *pFVar6;
  FShapeInstance *pFVar7;
  code *pcVar8;
  TTuple<void_*,int> *pTVar9;
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
  FShapeInstance *local_80;
  FShapeInstance *local_78;
  FShapeInstance **local_70;
  uint *local_68;
  FShapeInstance **local_60;
  uint *local_58;
  
  plVar1 = &this->_padding_;
  this_00 = (FArchiveState *)*plVar1;
  bVar16 = param_1->Ptr != (FShapeInstance *)0x0;
  pFVar3 = this_00->ActiveFPLB;
  puVar5 = (uint *)((longlong)pFVar3->StartFastPathLoadBuffer + 4);
  if (pFVar3->EndFastPathLoadBuffer < puVar5) {
    local_res10[0] = 0;
    if (this_00->ArIsLoading == 0) {
      local_res10[0] = (uint)(param_1->Ptr != (FShapeInstance *)0x0);
    }
    (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError(this_00);
    }
    uVar10 = local_res10[0];
    if (this_00->ArIsLoading == 0) goto LAB_143ae79b2;
  }
  else {
    uVar10 = *(uint *)pFVar3->StartFastPathLoadBuffer;
    pFVar3->StartFastPathLoadBuffer = (uchar *)puVar5;
  }
  bVar16 = uVar10 != 0;
LAB_143ae79b2:
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
              if (*(FShapeInstance **)(lVar15 + (longlong)iVar11 * 0x10) == local_80) {
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
              if (*(FShapeInstance **)(*(longlong *)&pFVar6->ObjToTag + (longlong)iVar11 * 0x18) ==
                  local_80) {
                if (iVar11 != -1) {
                  pFVar4 = (FArchive *)*plVar1;
                  pTVar9 = TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                           ::Find((TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                                   *)&pFVar6->ObjToTag,local_80);
                  if ((pTVar9 == (TTuple<void_*,int> *)0x0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Pair != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                          ,0x288,L""), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  ::operator<<(pFVar4,(int *)&pTVar9->field_0x8);
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
        StaticSerialize<Chaos::FShapeInstance>(this,param_1);
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
            StaticSerialize<Chaos::FShapeInstance>(this,param_1);
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
            *(FShapeInstance **)((pFVar6->TagToObject).AllocatorInstance.Data + lVar15 * 8) = pFVar7
            ;
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
            param_1->Ptr = *(FShapeInstance **)
                            ((pFVar6->TagToObject).AllocatorInstance.Data +
                            (longlong)(int)uVar10 * 8);
          }
        }
      }
    }
  }
  else {
    param_1->Ptr = (FShapeInstance *)0x0;
  }
  return;
}

// StaticSerialize<Chaos::FBVHParticles> @ 143ae9d30

void __thiscall
Chaos::FChaosArchive::StaticSerialize<Chaos::FBVHParticles>
          (FChaosArchive *this,TSerializablePtr<Chaos::FBVHParticles> *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  FBVHParticles *pFVar4;
  FBVHParticles *this_00;
  
  this_00 = param_1->Ptr;
  if ((this->_padding_ & 1) == 0) {
    bVar2 = (byte)this->_padding_ & 1;
  }
  else {
    pFVar4 = ::operator_new(0x48);
    if (pFVar4 == (FBVHParticles *)0x0) {
      pFVar4 = (FBVHParticles *)0x0;
    }
    else {
      pFVar4 = FBVHParticles::FBVHParticles(pFVar4);
    }
    bVar2 = (byte)this->_padding_ & 1;
    if (pFVar4 != (FBVHParticles *)0x0) {
      if (bVar2 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ar.IsLoading()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ChaosArchive.h"
                           ,0x158,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      param_1->Ptr = pFVar4;
      this_00 = pFVar4;
      goto LAB_143ae9ddf;
    }
  }
  if (bVar2 != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Ar.IsLoading()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ChaosArchive.h"
                       ,0x15e,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
LAB_143ae9ddf:
  FBVHParticles::Serialize(this_00,this);
  return;
}

// StaticSerialize<Chaos::FShapeInstance> @ 143ae9e10

void __thiscall
Chaos::FChaosArchive::StaticSerialize<Chaos::FShapeInstance>
          (FChaosArchive *this,TSerializablePtr<Chaos::FShapeInstance> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShapeInstance *pFVar3;
  FShapeInstance *pFVar4;
  byte bVar5;
  
  pFVar4 = param_1->Ptr;
  pFVar3 = FShapeInstance::SerializationFactory(this,pFVar4);
  bVar5 = (byte)this->_padding_ & 1;
  if (pFVar3 == (FShapeInstance *)0x0) {
    if (bVar5 != 0) {
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
    if (bVar5 == 0) {
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
    pFVar4 = pFVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x000143ae9ec1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pFVar4->_padding_ + 8))(pFVar4,this);
  return;
}

// SerializePtr<Chaos::FPerShapeData> @ 143b532b0

void __thiscall
Chaos::FChaosArchive::SerializePtr<Chaos::FPerShapeData>
          (FChaosArchive *this,TSerializablePtr<Chaos::FPerShapeData> *param_1)

{
  longlong *plVar1;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> *pTVar2;
  FArchiveState *this_00;
  FFastPathLoadBuffer *pFVar3;
  FArchive *pFVar4;
  uint *puVar5;
  FChaosArchiveContext *pFVar6;
  FPerShapeData *pFVar7;
  code *pcVar8;
  TTuple<void_*,int> *pTVar9;
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
  FPerShapeData *local_80;
  FPerShapeData *local_78;
  FPerShapeData **local_70;
  uint *local_68;
  FPerShapeData **local_60;
  uint *local_58;
  
  plVar1 = &this->_padding_;
  this_00 = (FArchiveState *)*plVar1;
  bVar16 = param_1->Ptr != (FPerShapeData *)0x0;
  pFVar3 = this_00->ActiveFPLB;
  puVar5 = (uint *)((longlong)pFVar3->StartFastPathLoadBuffer + 4);
  if (pFVar3->EndFastPathLoadBuffer < puVar5) {
    local_res10[0] = 0;
    if (this_00->ArIsLoading == 0) {
      local_res10[0] = (uint)(param_1->Ptr != (FPerShapeData *)0x0);
    }
    (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError(this_00);
    }
    uVar10 = local_res10[0];
    if (this_00->ArIsLoading == 0) goto LAB_143b53342;
  }
  else {
    uVar10 = *(uint *)pFVar3->StartFastPathLoadBuffer;
    pFVar3->StartFastPathLoadBuffer = (uchar *)puVar5;
  }
  bVar16 = uVar10 != 0;
LAB_143b53342:
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
              if (*(FPerShapeData **)(lVar15 + (longlong)iVar11 * 0x10) == local_80) {
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
              if (*(FPerShapeData **)(*(longlong *)&pFVar6->ObjToTag + (longlong)iVar11 * 0x18) ==
                  local_80) {
                if (iVar11 != -1) {
                  pFVar4 = (FArchive *)*plVar1;
                  pTVar9 = TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                           ::Find((TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                                   *)&pFVar6->ObjToTag,local_80);
                  if ((pTVar9 == (TTuple<void_*,int> *)0x0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Pair != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                          ,0x288,L""), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  ::operator<<(pFVar4,(int *)&pTVar9->field_0x8);
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
        StaticSerialize<Chaos::FPerShapeData>(this,param_1);
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
            StaticSerialize<Chaos::FPerShapeData>(this,param_1);
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
            *(FPerShapeData **)((pFVar6->TagToObject).AllocatorInstance.Data + lVar15 * 8) = pFVar7;
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
            param_1->Ptr = *(FPerShapeData **)
                            ((pFVar6->TagToObject).AllocatorInstance.Data +
                            (longlong)(int)uVar10 * 8);
          }
        }
      }
    }
  }
  else {
    param_1->Ptr = (FPerShapeData *)0x0;
  }
  return;
}

// SerializePtr<Chaos::FTriangleMeshImplicitObject> @ 143b537d0

void __thiscall
Chaos::FChaosArchive::SerializePtr<Chaos::FTriangleMeshImplicitObject>
          (FChaosArchive *this,TSerializablePtr<Chaos::FTriangleMeshImplicitObject> *param_1)

{
  longlong *plVar1;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> *pTVar2;
  FArchiveState *this_00;
  FFastPathLoadBuffer *pFVar3;
  FArchive *pFVar4;
  uint *puVar5;
  FChaosArchiveContext *pFVar6;
  FTriangleMeshImplicitObject *pFVar7;
  code *pcVar8;
  TTuple<void_*,int> *pTVar9;
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
  FTriangleMeshImplicitObject *local_80;
  FTriangleMeshImplicitObject *local_78;
  FTriangleMeshImplicitObject **local_70;
  uint *local_68;
  FTriangleMeshImplicitObject **local_60;
  uint *local_58;
  
  plVar1 = &this->_padding_;
  this_00 = (FArchiveState *)*plVar1;
  bVar16 = param_1->Ptr != (FTriangleMeshImplicitObject *)0x0;
  pFVar3 = this_00->ActiveFPLB;
  puVar5 = (uint *)((longlong)pFVar3->StartFastPathLoadBuffer + 4);
  if (pFVar3->EndFastPathLoadBuffer < puVar5) {
    local_res10[0] = 0;
    if (this_00->ArIsLoading == 0) {
      local_res10[0] = (uint)(param_1->Ptr != (FTriangleMeshImplicitObject *)0x0);
    }
    (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError(this_00);
    }
    uVar10 = local_res10[0];
    if (this_00->ArIsLoading == 0) goto LAB_143b53862;
  }
  else {
    uVar10 = *(uint *)pFVar3->StartFastPathLoadBuffer;
    pFVar3->StartFastPathLoadBuffer = (uchar *)puVar5;
  }
  bVar16 = uVar10 != 0;
LAB_143b53862:
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
              if (*(FTriangleMeshImplicitObject **)(lVar15 + (longlong)iVar11 * 0x10) == local_80) {
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
              if (*(FTriangleMeshImplicitObject **)
                   (*(longlong *)&pFVar6->ObjToTag + (longlong)iVar11 * 0x18) == local_80) {
                if (iVar11 != -1) {
                  pFVar4 = (FArchive *)*plVar1;
                  pTVar9 = TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                           ::Find((TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                                   *)&pFVar6->ObjToTag,local_80);
                  if ((pTVar9 == (TTuple<void_*,int> *)0x0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Pair != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                          ,0x288,L""), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  ::operator<<(pFVar4,(int *)&pTVar9->field_0x8);
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
        StaticSerialize<Chaos::FTriangleMeshImplicitObject>(this,param_1);
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
            StaticSerialize<Chaos::FTriangleMeshImplicitObject>(this,param_1);
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
            *(FTriangleMeshImplicitObject **)
             ((pFVar6->TagToObject).AllocatorInstance.Data + lVar15 * 8) = pFVar7;
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
            param_1->Ptr = *(FTriangleMeshImplicitObject **)
                            ((pFVar6->TagToObject).AllocatorInstance.Data +
                            (longlong)(int)uVar10 * 8);
          }
        }
      }
    }
  }
  else {
    param_1->Ptr = (FTriangleMeshImplicitObject *)0x0;
  }
  return;
}

// StaticSerialize<Chaos::FPerShapeData> @ 143b53cf0

void __thiscall
Chaos::FChaosArchive::StaticSerialize<Chaos::FPerShapeData>
          (FChaosArchive *this,TSerializablePtr<Chaos::FPerShapeData> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FPerShapeData *pFVar3;
  FPerShapeData *pFVar4;
  byte bVar5;
  
  pFVar4 = param_1->Ptr;
  pFVar3 = FPerShapeData::SerializationFactory(this,pFVar4);
  bVar5 = (byte)this->_padding_ & 1;
  if (pFVar3 == (FPerShapeData *)0x0) {
    if (bVar5 != 0) {
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
    if (bVar5 == 0) {
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
    pFVar4 = pFVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x000143b53da1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pFVar4->_padding_ + 8))(pFVar4,this);
  return;
}

// StaticSerialize<Chaos::FTriangleMeshImplicitObject> @ 143b53db0

void __thiscall
Chaos::FChaosArchive::StaticSerialize<Chaos::FTriangleMeshImplicitObject>
          (FChaosArchive *this,TSerializablePtr<Chaos::FTriangleMeshImplicitObject> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FTriangleMeshImplicitObject *pFVar3;
  FTriangleMeshImplicitObject *this_00;
  byte bVar4;
  
  this_00 = param_1->Ptr;
  pFVar3 = (FTriangleMeshImplicitObject *)
           FImplicitObject::SerializationFactory(this,(FImplicitObject *)this_00);
  bVar4 = (byte)this->_padding_ & 1;
  if (pFVar3 == (FTriangleMeshImplicitObject *)0x0) {
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
  FTriangleMeshImplicitObject::Serialize(this_00,this);
  return;
}

// SerializePtr<Chaos::FLevelSet> @ 143bc69b0

void __thiscall
Chaos::FChaosArchive::SerializePtr<Chaos::FLevelSet>
          (FChaosArchive *this,TSerializablePtr<Chaos::FLevelSet> *param_1)

{
  longlong *plVar1;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> *pTVar2;
  FArchiveState *this_00;
  FFastPathLoadBuffer *pFVar3;
  FArchive *pFVar4;
  uint *puVar5;
  FChaosArchiveContext *pFVar6;
  FLevelSet *pFVar7;
  code *pcVar8;
  TTuple<void_*,int> *pTVar9;
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
  FLevelSet *local_80;
  FLevelSet *local_78;
  FLevelSet **local_70;
  uint *local_68;
  FLevelSet **local_60;
  uint *local_58;
  
  plVar1 = &this->_padding_;
  this_00 = (FArchiveState *)*plVar1;
  bVar16 = param_1->Ptr != (FLevelSet *)0x0;
  pFVar3 = this_00->ActiveFPLB;
  puVar5 = (uint *)((longlong)pFVar3->StartFastPathLoadBuffer + 4);
  if (pFVar3->EndFastPathLoadBuffer < puVar5) {
    local_res10[0] = 0;
    if (this_00->ArIsLoading == 0) {
      local_res10[0] = (uint)(param_1->Ptr != (FLevelSet *)0x0);
    }
    (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError(this_00);
    }
    uVar10 = local_res10[0];
    if (this_00->ArIsLoading == 0) goto LAB_143bc6a42;
  }
  else {
    uVar10 = *(uint *)pFVar3->StartFastPathLoadBuffer;
    pFVar3->StartFastPathLoadBuffer = (uchar *)puVar5;
  }
  bVar16 = uVar10 != 0;
LAB_143bc6a42:
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
              if (*(FLevelSet **)(lVar15 + (longlong)iVar11 * 0x10) == local_80) {
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
              if (*(FLevelSet **)(*(longlong *)&pFVar6->ObjToTag + (longlong)iVar11 * 0x18) ==
                  local_80) {
                if (iVar11 != -1) {
                  pFVar4 = (FArchive *)*plVar1;
                  pTVar9 = TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                           ::Find((TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                                   *)&pFVar6->ObjToTag,local_80);
                  if ((pTVar9 == (TTuple<void_*,int> *)0x0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Pair != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                          ,0x288,L""), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  ::operator<<(pFVar4,(int *)&pTVar9->field_0x8);
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
        StaticSerialize<Chaos::FLevelSet>(this,param_1);
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
            StaticSerialize<Chaos::FLevelSet>(this,param_1);
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
            *(FLevelSet **)((pFVar6->TagToObject).AllocatorInstance.Data + lVar15 * 8) = pFVar7;
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
            param_1->Ptr = *(FLevelSet **)
                            ((pFVar6->TagToObject).AllocatorInstance.Data +
                            (longlong)(int)uVar10 * 8);
          }
        }
      }
    }
  }
  else {
    param_1->Ptr = (FLevelSet *)0x0;
  }
  return;
}

// SerializePtr<Chaos::FMLLevelSet> @ 143bc6ed0

void __thiscall
Chaos::FChaosArchive::SerializePtr<Chaos::FMLLevelSet>
          (FChaosArchive *this,TSerializablePtr<Chaos::FMLLevelSet> *param_1)

{
  longlong *plVar1;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> *pTVar2;
  FArchiveState *this_00;
  FFastPathLoadBuffer *pFVar3;
  FArchive *pFVar4;
  uint *puVar5;
  FChaosArchiveContext *pFVar6;
  FMLLevelSet *pFVar7;
  code *pcVar8;
  TTuple<void_*,int> *pTVar9;
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
  FMLLevelSet *local_80;
  FMLLevelSet *local_78;
  FMLLevelSet **local_70;
  uint *local_68;
  FMLLevelSet **local_60;
  uint *local_58;
  
  plVar1 = &this->_padding_;
  this_00 = (FArchiveState *)*plVar1;
  bVar16 = param_1->Ptr != (FMLLevelSet *)0x0;
  pFVar3 = this_00->ActiveFPLB;
  puVar5 = (uint *)((longlong)pFVar3->StartFastPathLoadBuffer + 4);
  if (pFVar3->EndFastPathLoadBuffer < puVar5) {
    local_res10[0] = 0;
    if (this_00->ArIsLoading == 0) {
      local_res10[0] = (uint)(param_1->Ptr != (FMLLevelSet *)0x0);
    }
    (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError(this_00);
    }
    uVar10 = local_res10[0];
    if (this_00->ArIsLoading == 0) goto LAB_143bc6f62;
  }
  else {
    uVar10 = *(uint *)pFVar3->StartFastPathLoadBuffer;
    pFVar3->StartFastPathLoadBuffer = (uchar *)puVar5;
  }
  bVar16 = uVar10 != 0;
LAB_143bc6f62:
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
              if (*(FMLLevelSet **)(lVar15 + (longlong)iVar11 * 0x10) == local_80) {
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
              if (*(FMLLevelSet **)(*(longlong *)&pFVar6->ObjToTag + (longlong)iVar11 * 0x18) ==
                  local_80) {
                if (iVar11 != -1) {
                  pFVar4 = (FArchive *)*plVar1;
                  pTVar9 = TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                           ::Find((TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                                   *)&pFVar6->ObjToTag,local_80);
                  if ((pTVar9 == (TTuple<void_*,int> *)0x0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Pair != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                          ,0x288,L""), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  ::operator<<(pFVar4,(int *)&pTVar9->field_0x8);
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
        StaticSerialize<Chaos::FMLLevelSet>(this,param_1);
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
            StaticSerialize<Chaos::FMLLevelSet>(this,param_1);
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
            *(FMLLevelSet **)((pFVar6->TagToObject).AllocatorInstance.Data + lVar15 * 8) = pFVar7;
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
            param_1->Ptr = *(FMLLevelSet **)
                            ((pFVar6->TagToObject).AllocatorInstance.Data +
                            (longlong)(int)uVar10 * 8);
          }
        }
      }
    }
  }
  else {
    param_1->Ptr = (FMLLevelSet *)0x0;
  }
  return;
}

// StaticSerialize<Chaos::FLevelSet> @ 143bc9280

void __thiscall
Chaos::FChaosArchive::StaticSerialize<Chaos::FLevelSet>
          (FChaosArchive *this,TSerializablePtr<Chaos::FLevelSet> *param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  FLevelSet *pFVar5;
  byte bVar6;
  FLevelSet *this_00;
  
  this_00 = param_1->Ptr;
  pFVar5 = (FLevelSet *)FImplicitObject::SerializationFactory(this,(FImplicitObject *)this_00);
  bVar6 = (byte)this->_padding_ & 1;
  if (pFVar5 == (FLevelSet *)0x0) {
    if (bVar6 != 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Ar.IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ChaosArchive.h"
                         ,0x15e,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  else {
    if (bVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ar.IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ChaosArchive.h"
                         ,0x158,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    param_1->Ptr = pFVar5;
    this_00 = pFVar5;
  }
  FImplicitObject::SerializeImp((FImplicitObject *)this_00,(FArchive *)this);
  SerializeReal<double,3>((FArchive *)this,(TVector<double,3> *)&this_00->MGrid);
  SerializeReal<double,3>((FArchive *)this,(TVector<double,3> *)&(this_00->MGrid).field_0x18);
  operator<<<int,3>((FArchive *)this,(TVector<int,3> *)&(this_00->MGrid).field_0x30);
  SerializeReal<double,3>((FArchive *)this,(TVector<double,3> *)&(this_00->MGrid).field_0x40);
  operator<<<Chaos::TArrayND<double,3>_double_3>
            ((FArchive *)this,(TArrayNDBase<Chaos::TArrayND<double,3>,double,3> *)&this_00->MPhi);
  operator<<<Chaos::TArrayND<Chaos::TVector<double,3>,3>,Chaos::TVector<double,3>_3>
            ((FArchive *)this,
             (TArrayNDBase<Chaos::TArrayND<Chaos::TVector<double,3>,3>,Chaos::TVector<double,3>,3> *
             )&this_00->MNormals);
  TBox<double,3>::SerializeAsAABB((FArchive *)this,&this_00->MLocalBoundingBox);
  TBox<double,3>::SerializeAsAABB((FArchive *)this,&this_00->MOriginalLocalBoundingBox);
  piVar1 = &this_00->MBandWidth;
  piVar2 = *(int **)this->_padding_;
  if ((int *)((undefined8 *)this->_padding_)[1] < piVar2 + 1) {
    if ((this->_padding_ & 0x10000) == 0) {
      (**(code **)(this->_padding_ + 0x188))(this,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    *(longlong *)this->_padding_ = *(longlong *)this->_padding_ + 4;
  }
  return;
}

// StaticSerialize<Chaos::FMLLevelSet> @ 143bc93f0

void __thiscall
Chaos::FChaosArchive::StaticSerialize<Chaos::FMLLevelSet>
          (FChaosArchive *this,TSerializablePtr<Chaos::FMLLevelSet> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FMLLevelSet *pFVar3;
  FMLLevelSet *this_00;
  byte bVar4;
  
  this_00 = param_1->Ptr;
  pFVar3 = (FMLLevelSet *)FImplicitObject::SerializationFactory(this,(FImplicitObject *)this_00);
  bVar4 = (byte)this->_padding_ & 1;
  if (pFVar3 == (FMLLevelSet *)0x0) {
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
  FMLLevelSet::Serialize(this_00,this);
  return;
}

// SerializePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_> @ 143cfb8f0

void __thiscall
Chaos::FChaosArchive::
SerializePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>
          (FChaosArchive *this,
          TSerializablePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>
          *param_1)

{
  longlong *plVar1;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> *pTVar2;
  FArchiveState *this_00;
  FFastPathLoadBuffer *pFVar3;
  FArchive *pFVar4;
  uint *puVar5;
  FChaosArchiveContext *pFVar6;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *pIVar7;
  code *pcVar8;
  TTuple<void_*,int> *pTVar9;
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
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *local_80;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *local_78;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> **local_70;
  uint *local_68;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> **local_60;
  uint *local_58;
  
  plVar1 = &this->_padding_;
  this_00 = (FArchiveState *)*plVar1;
  bVar16 = param_1->Ptr != (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0
  ;
  pFVar3 = this_00->ActiveFPLB;
  puVar5 = (uint *)((longlong)pFVar3->StartFastPathLoadBuffer + 4);
  if (pFVar3->EndFastPathLoadBuffer < puVar5) {
    local_res10[0] = 0;
    if (this_00->ArIsLoading == 0) {
      local_res10[0] =
           (uint)(param_1->Ptr !=
                 (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0);
    }
    (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError(this_00);
    }
    uVar10 = local_res10[0];
    if (this_00->ArIsLoading == 0) goto LAB_143cfb982;
  }
  else {
    uVar10 = *(uint *)pFVar3->StartFastPathLoadBuffer;
    pFVar3->StartFastPathLoadBuffer = (uchar *)puVar5;
  }
  bVar16 = uVar10 != 0;
LAB_143cfb982:
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
              if (*(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> **)
                   (lVar15 + (longlong)iVar11 * 0x10) == local_80) {
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
              if (*(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> **)
                   (*(longlong *)&pFVar6->ObjToTag + (longlong)iVar11 * 0x18) == local_80) {
                if (iVar11 != -1) {
                  pFVar4 = (FArchive *)*plVar1;
                  pTVar9 = TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                           ::Find((TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                                   *)&pFVar6->ObjToTag,local_80);
                  if ((pTVar9 == (TTuple<void_*,int> *)0x0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Pair != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                          ,0x288,L""), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  ::operator<<(pFVar4,(int *)&pTVar9->field_0x8);
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
        StaticSerialize<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>
                  (this,param_1);
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
            StaticSerialize<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>
                      (this,param_1);
            lVar15 = (longlong)(int)local_res8[0];
            pFVar6 = (this->Context).Ptr;
            pIVar7 = param_1->Ptr;
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
            *(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> **)
             ((pFVar6->TagToObject).AllocatorInstance.Data + lVar15 * 8) = pIVar7;
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
            param_1->Ptr = *(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> **)
                            ((pFVar6->TagToObject).AllocatorInstance.Data +
                            (longlong)(int)uVar10 * 8);
          }
        }
      }
    }
  }
  else {
    param_1->Ptr = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0;
  }
  return;
}

// SerializePtr<Chaos::TKinematicGeometryParticlesImp<double,3,0>_> @ 143cfbe10

void __thiscall
Chaos::FChaosArchive::SerializePtr<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>
          (FChaosArchive *this,
          TSerializablePtr<Chaos::TKinematicGeometryParticlesImp<double,3,0>_> *param_1)

{
  longlong *plVar1;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> *pTVar2;
  FArchiveState *this_00;
  FFastPathLoadBuffer *pFVar3;
  FArchive *pFVar4;
  uint *puVar5;
  FChaosArchiveContext *pFVar6;
  TKinematicGeometryParticlesImp<double,3,0> *pTVar7;
  code *pcVar8;
  TTuple<void_*,int> *pTVar9;
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
  TKinematicGeometryParticlesImp<double,3,0> *local_80;
  TKinematicGeometryParticlesImp<double,3,0> *local_78;
  TKinematicGeometryParticlesImp<double,3,0> **local_70;
  uint *local_68;
  TKinematicGeometryParticlesImp<double,3,0> **local_60;
  uint *local_58;
  
  plVar1 = &this->_padding_;
  this_00 = (FArchiveState *)*plVar1;
  bVar16 = param_1->Ptr != (TKinematicGeometryParticlesImp<double,3,0> *)0x0;
  pFVar3 = this_00->ActiveFPLB;
  puVar5 = (uint *)((longlong)pFVar3->StartFastPathLoadBuffer + 4);
  if (pFVar3->EndFastPathLoadBuffer < puVar5) {
    local_res10[0] = 0;
    if (this_00->ArIsLoading == 0) {
      local_res10[0] = (uint)(param_1->Ptr != (TKinematicGeometryParticlesImp<double,3,0> *)0x0);
    }
    (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError(this_00);
    }
    uVar10 = local_res10[0];
    if (this_00->ArIsLoading == 0) goto LAB_143cfbea2;
  }
  else {
    uVar10 = *(uint *)pFVar3->StartFastPathLoadBuffer;
    pFVar3->StartFastPathLoadBuffer = (uchar *)puVar5;
  }
  bVar16 = uVar10 != 0;
LAB_143cfbea2:
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
              if (*(TKinematicGeometryParticlesImp<double,3,0> **)(lVar15 + (longlong)iVar11 * 0x10)
                  == local_80) {
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
              if (*(TKinematicGeometryParticlesImp<double,3,0> **)
                   (*(longlong *)&pFVar6->ObjToTag + (longlong)iVar11 * 0x18) == local_80) {
                if (iVar11 != -1) {
                  pFVar4 = (FArchive *)*plVar1;
                  pTVar9 = TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                           ::Find((TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                                   *)&pFVar6->ObjToTag,local_80);
                  if ((pTVar9 == (TTuple<void_*,int> *)0x0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Pair != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                          ,0x288,L""), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  ::operator<<(pFVar4,(int *)&pTVar9->field_0x8);
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
        StaticSerialize<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>(this,param_1);
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
            StaticSerialize<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>(this,param_1);
            lVar15 = (longlong)(int)local_res8[0];
            pFVar6 = (this->Context).Ptr;
            pTVar7 = param_1->Ptr;
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
            *(TKinematicGeometryParticlesImp<double,3,0> **)
             ((pFVar6->TagToObject).AllocatorInstance.Data + lVar15 * 8) = pTVar7;
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
            param_1->Ptr = *(TKinematicGeometryParticlesImp<double,3,0> **)
                            ((pFVar6->TagToObject).AllocatorInstance.Data +
                            (longlong)(int)uVar10 * 8);
          }
        }
      }
    }
  }
  else {
    param_1->Ptr = (TKinematicGeometryParticlesImp<double,3,0> *)0x0;
  }
  return;
}

// SerializePtr<Chaos::TPBDGeometryCollectionParticles<double,3>_> @ 143cfc330

void __thiscall
Chaos::FChaosArchive::SerializePtr<Chaos::TPBDGeometryCollectionParticles<double,3>_>
          (FChaosArchive *this,
          TSerializablePtr<Chaos::TPBDGeometryCollectionParticles<double,3>_> *param_1)

{
  longlong *plVar1;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> *pTVar2;
  FArchiveState *this_00;
  FFastPathLoadBuffer *pFVar3;
  FArchive *pFVar4;
  uint *puVar5;
  FChaosArchiveContext *pFVar6;
  TPBDGeometryCollectionParticles<double,3> *pTVar7;
  code *pcVar8;
  TTuple<void_*,int> *pTVar9;
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
  TPBDGeometryCollectionParticles<double,3> *local_80;
  TPBDGeometryCollectionParticles<double,3> *local_78;
  TPBDGeometryCollectionParticles<double,3> **local_70;
  uint *local_68;
  TPBDGeometryCollectionParticles<double,3> **local_60;
  uint *local_58;
  
  plVar1 = &this->_padding_;
  this_00 = (FArchiveState *)*plVar1;
  bVar16 = param_1->Ptr != (TPBDGeometryCollectionParticles<double,3> *)0x0;
  pFVar3 = this_00->ActiveFPLB;
  puVar5 = (uint *)((longlong)pFVar3->StartFastPathLoadBuffer + 4);
  if (pFVar3->EndFastPathLoadBuffer < puVar5) {
    local_res10[0] = 0;
    if (this_00->ArIsLoading == 0) {
      local_res10[0] = (uint)(param_1->Ptr != (TPBDGeometryCollectionParticles<double,3> *)0x0);
    }
    (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError(this_00);
    }
    uVar10 = local_res10[0];
    if (this_00->ArIsLoading == 0) goto LAB_143cfc3c2;
  }
  else {
    uVar10 = *(uint *)pFVar3->StartFastPathLoadBuffer;
    pFVar3->StartFastPathLoadBuffer = (uchar *)puVar5;
  }
  bVar16 = uVar10 != 0;
LAB_143cfc3c2:
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
              if (*(TPBDGeometryCollectionParticles<double,3> **)(lVar15 + (longlong)iVar11 * 0x10)
                  == local_80) {
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
              if (*(TPBDGeometryCollectionParticles<double,3> **)
                   (*(longlong *)&pFVar6->ObjToTag + (longlong)iVar11 * 0x18) == local_80) {
                if (iVar11 != -1) {
                  pFVar4 = (FArchive *)*plVar1;
                  pTVar9 = TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                           ::Find((TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                                   *)&pFVar6->ObjToTag,local_80);
                  if ((pTVar9 == (TTuple<void_*,int> *)0x0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Pair != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                          ,0x288,L""), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  ::operator<<(pFVar4,(int *)&pTVar9->field_0x8);
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
        StaticSerialize<Chaos::TPBDGeometryCollectionParticles<double,3>_>(this,param_1);
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
            StaticSerialize<Chaos::TPBDGeometryCollectionParticles<double,3>_>(this,param_1);
            lVar15 = (longlong)(int)local_res8[0];
            pFVar6 = (this->Context).Ptr;
            pTVar7 = param_1->Ptr;
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
            *(TPBDGeometryCollectionParticles<double,3> **)
             ((pFVar6->TagToObject).AllocatorInstance.Data + lVar15 * 8) = pTVar7;
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
            param_1->Ptr = *(TPBDGeometryCollectionParticles<double,3> **)
                            ((pFVar6->TagToObject).AllocatorInstance.Data +
                            (longlong)(int)uVar10 * 8);
          }
        }
      }
    }
  }
  else {
    param_1->Ptr = (TPBDGeometryCollectionParticles<double,3> *)0x0;
  }
  return;
}

// SerializePtr<Chaos::TPBDRigidParticles<double,3>_> @ 143cfc850

void __thiscall
Chaos::FChaosArchive::SerializePtr<Chaos::TPBDRigidParticles<double,3>_>
          (FChaosArchive *this,TSerializablePtr<Chaos::TPBDRigidParticles<double,3>_> *param_1)

{
  longlong *plVar1;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> *pTVar2;
  FArchiveState *this_00;
  FFastPathLoadBuffer *pFVar3;
  FArchive *pFVar4;
  uint *puVar5;
  FChaosArchiveContext *pFVar6;
  TPBDRigidParticles<double,3> *pTVar7;
  code *pcVar8;
  TTuple<void_*,int> *pTVar9;
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
  TPBDRigidParticles<double,3> *local_80;
  TPBDRigidParticles<double,3> *local_78;
  TPBDRigidParticles<double,3> **local_70;
  uint *local_68;
  TPBDRigidParticles<double,3> **local_60;
  uint *local_58;
  
  plVar1 = &this->_padding_;
  this_00 = (FArchiveState *)*plVar1;
  bVar16 = param_1->Ptr != (TPBDRigidParticles<double,3> *)0x0;
  pFVar3 = this_00->ActiveFPLB;
  puVar5 = (uint *)((longlong)pFVar3->StartFastPathLoadBuffer + 4);
  if (pFVar3->EndFastPathLoadBuffer < puVar5) {
    local_res10[0] = 0;
    if (this_00->ArIsLoading == 0) {
      local_res10[0] = (uint)(param_1->Ptr != (TPBDRigidParticles<double,3> *)0x0);
    }
    (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError(this_00);
    }
    uVar10 = local_res10[0];
    if (this_00->ArIsLoading == 0) goto LAB_143cfc8e2;
  }
  else {
    uVar10 = *(uint *)pFVar3->StartFastPathLoadBuffer;
    pFVar3->StartFastPathLoadBuffer = (uchar *)puVar5;
  }
  bVar16 = uVar10 != 0;
LAB_143cfc8e2:
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
              if (*(TPBDRigidParticles<double,3> **)(lVar15 + (longlong)iVar11 * 0x10) == local_80)
              {
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
              if (*(TPBDRigidParticles<double,3> **)
                   (*(longlong *)&pFVar6->ObjToTag + (longlong)iVar11 * 0x18) == local_80) {
                if (iVar11 != -1) {
                  pFVar4 = (FArchive *)*plVar1;
                  pTVar9 = TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                           ::Find((TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                                   *)&pFVar6->ObjToTag,local_80);
                  if ((pTVar9 == (TTuple<void_*,int> *)0x0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Pair != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                          ,0x288,L""), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  ::operator<<(pFVar4,(int *)&pTVar9->field_0x8);
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
        StaticSerialize<Chaos::TPBDRigidParticles<double,3>_>(this,param_1);
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
            StaticSerialize<Chaos::TPBDRigidParticles<double,3>_>(this,param_1);
            lVar15 = (longlong)(int)local_res8[0];
            pFVar6 = (this->Context).Ptr;
            pTVar7 = param_1->Ptr;
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
            *(TPBDRigidParticles<double,3> **)
             ((pFVar6->TagToObject).AllocatorInstance.Data + lVar15 * 8) = pTVar7;
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
            param_1->Ptr = *(TPBDRigidParticles<double,3> **)
                            ((pFVar6->TagToObject).AllocatorInstance.Data +
                            (longlong)(int)uVar10 * 8);
          }
        }
      }
    }
  }
  else {
    param_1->Ptr = (TPBDRigidParticles<double,3> *)0x0;
  }
  return;
}

// StaticSerialize<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_> @ 143cfd020

void __thiscall
Chaos::FChaosArchive::
StaticSerialize<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>
          (FChaosArchive *this,
          TSerializablePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>
          *param_1)

{
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *pIVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *pIVar7;
  uchar local_res8 [8];
  
  pIVar1 = param_1->Ptr;
  iVar6 = FArchiveState::CustomVer((FArchiveState *)this,&FExternalPhysicsCustomObjectVersion::GUID)
  ;
  if (iVar6 < 4) {
LAB_143cfd18e:
    pIVar7 = TSpatialAccelerationSerializationFactory<0,Chaos::FAccelerationStructureHandle,double,3>
             ::Create();
LAB_143cfd196:
    bVar5 = (byte)this->_padding_ & 1;
    if (pIVar7 != (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0) {
      if ((bVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ar.IsLoading()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ChaosArchive.h"
                             ,0x158,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      param_1->Ptr = pIVar7;
      goto LAB_143cfd149;
    }
  }
  else {
    if ((this->_padding_ & 1) == 0) {
      local_res8[0] = pIVar1->Type;
    }
    else {
      local_res8[0] = '\0';
    }
    plVar2 = (longlong *)this->_padding_;
    if ((uchar *)plVar2[1] < (uchar *)*plVar2 + 1) {
      (**(code **)(this->_padding_ + 0x188))(this,local_res8,1);
    }
    else {
      local_res8[0] = *(uchar *)*plVar2;
      *plVar2 = *plVar2 + 1;
    }
    if (local_res8[0] != '\0') {
      if (local_res8[0] == '\x01') {
        if ((this->_padding_ & 1) == 0) {
LAB_143cfd185:
          pIVar7 = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0;
        }
        else {
          pIVar7 = TSpatialAccelerationSerializationFactory<1,Chaos::FAccelerationStructureHandle,double,3>
                   ::Create();
        }
      }
      else {
        if (local_res8[0] != '\x02') {
          if ((local_res8[0] == '\x03') &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("false",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                                 ,0x174,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                             ,0x175,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          goto LAB_143cfd118;
        }
        if ((this->_padding_ & 1) == 0) goto LAB_143cfd185;
        pIVar7 = TSpatialAccelerationSerializationFactory<2,Chaos::FAccelerationStructureHandle,double,3>
                 ::Create();
      }
      goto LAB_143cfd196;
    }
    if ((this->_padding_ & 1) != 0) goto LAB_143cfd18e;
LAB_143cfd118:
    bVar5 = (byte)this->_padding_ & 1;
  }
  pIVar7 = pIVar1;
  if ((bVar5 != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Ar.IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ChaosArchive.h"
                         ,0x15e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_143cfd149:
  (**(code **)(pIVar7->_padding_ + 0xd0))(pIVar7,this);
  return;
}

// StaticSerialize<Chaos::TKinematicGeometryParticlesImp<double,3,0>_> @ 143cfd1f0

void __thiscall
Chaos::FChaosArchive::StaticSerialize<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>
          (FChaosArchive *this,
          TSerializablePtr<Chaos::TKinematicGeometryParticlesImp<double,3,0>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TKinematicGeometryParticlesImp<double,3,0> *pTVar3;
  TKinematicGeometryParticlesImp<double,3,0> *pTVar4;
  byte bVar5;
  
  pTVar4 = param_1->Ptr;
  pTVar3 = (TKinematicGeometryParticlesImp<double,3,0> *)
           TGeometryParticlesImp<double,3,0>::SerializationFactory
                     (this,(TGeometryParticlesImp<double,3,0> *)pTVar4);
  bVar5 = (byte)this->_padding_ & 1;
  if (pTVar3 == (TKinematicGeometryParticlesImp<double,3,0> *)0x0) {
    if (bVar5 != 0) {
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
    if (bVar5 == 0) {
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
    param_1->Ptr = pTVar3;
    pTVar4 = pTVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x000143cfd2a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pTVar4->_padding_ + 8))(pTVar4,this);
  return;
}

// StaticSerialize<Chaos::TPBDGeometryCollectionParticles<double,3>_> @ 143cfd2b0

void __thiscall
Chaos::FChaosArchive::StaticSerialize<Chaos::TPBDGeometryCollectionParticles<double,3>_>
          (FChaosArchive *this,
          TSerializablePtr<Chaos::TPBDGeometryCollectionParticles<double,3>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TPBDGeometryCollectionParticles<double,3> *pTVar3;
  TPBDGeometryCollectionParticles<double,3> *pTVar4;
  byte bVar5;
  
  pTVar4 = param_1->Ptr;
  pTVar3 = (TPBDGeometryCollectionParticles<double,3> *)
           TGeometryParticlesImp<double,3,0>::SerializationFactory
                     (this,(TGeometryParticlesImp<double,3,0> *)pTVar4);
  bVar5 = (byte)this->_padding_ & 1;
  if (pTVar3 == (TPBDGeometryCollectionParticles<double,3> *)0x0) {
    if (bVar5 != 0) {
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
    if (bVar5 == 0) {
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
    param_1->Ptr = pTVar3;
    pTVar4 = pTVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x000143cfd361. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pTVar4 + 8))(pTVar4,this);
  return;
}

// StaticSerialize<Chaos::TPBDRigidParticles<double,3>_> @ 143cfd370

void __thiscall
Chaos::FChaosArchive::StaticSerialize<Chaos::TPBDRigidParticles<double,3>_>
          (FChaosArchive *this,TSerializablePtr<Chaos::TPBDRigidParticles<double,3>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TPBDRigidParticles<double,3> *pTVar3;
  TPBDRigidParticles<double,3> *pTVar4;
  byte bVar5;
  
  pTVar4 = param_1->Ptr;
  pTVar3 = (TPBDRigidParticles<double,3> *)
           TGeometryParticlesImp<double,3,0>::SerializationFactory
                     (this,(TGeometryParticlesImp<double,3,0> *)pTVar4);
  bVar5 = (byte)this->_padding_ & 1;
  if (pTVar3 == (TPBDRigidParticles<double,3> *)0x0) {
    if (bVar5 != 0) {
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
    if (bVar5 == 0) {
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
    param_1->Ptr = pTVar3;
    pTVar4 = pTVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x000143cfd421. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pTVar4->_padding_ + 8))(pTVar4,this);
  return;
}

// SerializePtr<Chaos::FSkinnedTriangleMesh> @ 143df26e0

void __thiscall
Chaos::FChaosArchive::SerializePtr<Chaos::FSkinnedTriangleMesh>
          (FChaosArchive *this,TSerializablePtr<Chaos::FSkinnedTriangleMesh> *param_1)

{
  longlong *plVar1;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> *pTVar2;
  FArchiveState *this_00;
  FFastPathLoadBuffer *pFVar3;
  FArchive *pFVar4;
  uint *puVar5;
  FChaosArchiveContext *pFVar6;
  FSkinnedTriangleMesh *pFVar7;
  code *pcVar8;
  TTuple<void_*,int> *pTVar9;
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
  FSkinnedTriangleMesh *local_80;
  FSkinnedTriangleMesh *local_78;
  FSkinnedTriangleMesh **local_70;
  uint *local_68;
  FSkinnedTriangleMesh **local_60;
  uint *local_58;
  
  plVar1 = &this->_padding_;
  this_00 = (FArchiveState *)*plVar1;
  bVar16 = param_1->Ptr != (FSkinnedTriangleMesh *)0x0;
  pFVar3 = this_00->ActiveFPLB;
  puVar5 = (uint *)((longlong)pFVar3->StartFastPathLoadBuffer + 4);
  if (pFVar3->EndFastPathLoadBuffer < puVar5) {
    local_res10[0] = 0;
    if (this_00->ArIsLoading == 0) {
      local_res10[0] = (uint)(param_1->Ptr != (FSkinnedTriangleMesh *)0x0);
    }
    (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError(this_00);
    }
    uVar10 = local_res10[0];
    if (this_00->ArIsLoading == 0) goto LAB_143df2772;
  }
  else {
    uVar10 = *(uint *)pFVar3->StartFastPathLoadBuffer;
    pFVar3->StartFastPathLoadBuffer = (uchar *)puVar5;
  }
  bVar16 = uVar10 != 0;
LAB_143df2772:
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
              if (*(FSkinnedTriangleMesh **)(lVar15 + (longlong)iVar11 * 0x10) == local_80) {
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
              if (*(FSkinnedTriangleMesh **)
                   (*(longlong *)&pFVar6->ObjToTag + (longlong)iVar11 * 0x18) == local_80) {
                if (iVar11 != -1) {
                  pFVar4 = (FArchive *)*plVar1;
                  pTVar9 = TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                           ::Find((TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                                   *)&pFVar6->ObjToTag,local_80);
                  if ((pTVar9 == (TTuple<void_*,int> *)0x0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Pair != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                          ,0x288,L""), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  ::operator<<(pFVar4,(int *)&pTVar9->field_0x8);
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
        StaticSerialize<Chaos::FSkinnedTriangleMesh>(this,param_1);
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
            StaticSerialize<Chaos::FSkinnedTriangleMesh>(this,param_1);
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
            *(FSkinnedTriangleMesh **)((pFVar6->TagToObject).AllocatorInstance.Data + lVar15 * 8) =
                 pFVar7;
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
            param_1->Ptr = *(FSkinnedTriangleMesh **)
                            ((pFVar6->TagToObject).AllocatorInstance.Data +
                            (longlong)(int)uVar10 * 8);
          }
        }
      }
    }
  }
  else {
    param_1->Ptr = (FSkinnedTriangleMesh *)0x0;
  }
  return;
}

// StaticSerialize<Chaos::FSkinnedTriangleMesh> @ 143df6770

void __thiscall
Chaos::FChaosArchive::StaticSerialize<Chaos::FSkinnedTriangleMesh>
          (FChaosArchive *this,TSerializablePtr<Chaos::FSkinnedTriangleMesh> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSkinnedTriangleMesh *pFVar3;
  FSkinnedTriangleMesh *pFVar4;
  byte bVar5;
  
  pFVar4 = param_1->Ptr;
  pFVar3 = (FSkinnedTriangleMesh *)
           FImplicitObject::SerializationFactory(this,(FImplicitObject *)pFVar4);
  bVar5 = (byte)this->_padding_ & 1;
  if (pFVar3 == (FSkinnedTriangleMesh *)0x0) {
    if (bVar5 != 0) {
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
    if (bVar5 == 0) {
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
    pFVar4 = pFVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x000143df6821. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pFVar4 + 0x100))(pFVar4,this);
  return;
}

// SerializePtr<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_> @ 1440657e0

void __thiscall
Chaos::FChaosArchive::SerializePtr<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>
          (FChaosArchive *this,
          TSerializablePtr<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_> *param_1)

{
  longlong *plVar1;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> *pTVar2;
  FArchiveState *this_00;
  FFastPathLoadBuffer *pFVar3;
  FArchive *pFVar4;
  uint *puVar5;
  FChaosArchiveContext *pFVar6;
  TPBDGeometryCollectionParticleHandleImp<double,3,1> *pTVar7;
  code *pcVar8;
  TTuple<void_*,int> *pTVar9;
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
  TPBDGeometryCollectionParticleHandleImp<double,3,1> *local_80;
  TPBDGeometryCollectionParticleHandleImp<double,3,1> *local_78;
  TPBDGeometryCollectionParticleHandleImp<double,3,1> **local_70;
  uint *local_68;
  TPBDGeometryCollectionParticleHandleImp<double,3,1> **local_60;
  uint *local_58;
  
  plVar1 = &this->_padding_;
  this_00 = (FArchiveState *)*plVar1;
  bVar16 = param_1->Ptr != (TPBDGeometryCollectionParticleHandleImp<double,3,1> *)0x0;
  pFVar3 = this_00->ActiveFPLB;
  puVar5 = (uint *)((longlong)pFVar3->StartFastPathLoadBuffer + 4);
  if (pFVar3->EndFastPathLoadBuffer < puVar5) {
    local_res10[0] = 0;
    if (this_00->ArIsLoading == 0) {
      local_res10[0] =
           (uint)(param_1->Ptr != (TPBDGeometryCollectionParticleHandleImp<double,3,1> *)0x0);
    }
    (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError(this_00);
    }
    uVar10 = local_res10[0];
    if (this_00->ArIsLoading == 0) goto LAB_144065872;
  }
  else {
    uVar10 = *(uint *)pFVar3->StartFastPathLoadBuffer;
    pFVar3->StartFastPathLoadBuffer = (uchar *)puVar5;
  }
  bVar16 = uVar10 != 0;
LAB_144065872:
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
              if (*(TPBDGeometryCollectionParticleHandleImp<double,3,1> **)
                   (lVar15 + (longlong)iVar11 * 0x10) == local_80) {
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
              if (*(TPBDGeometryCollectionParticleHandleImp<double,3,1> **)
                   (*(longlong *)&pFVar6->ObjToTag + (longlong)iVar11 * 0x18) == local_80) {
                if (iVar11 != -1) {
                  pFVar4 = (FArchive *)*plVar1;
                  pTVar9 = TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                           ::Find((TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                                   *)&pFVar6->ObjToTag,local_80);
                  if ((pTVar9 == (TTuple<void_*,int> *)0x0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Pair != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                          ,0x288,L""), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  ::operator<<(pFVar4,(int *)&pTVar9->field_0x8);
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
        StaticSerialize<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>(this,param_1);
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
            StaticSerialize<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>
                      (this,param_1);
            lVar15 = (longlong)(int)local_res8[0];
            pFVar6 = (this->Context).Ptr;
            pTVar7 = param_1->Ptr;
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
            *(TPBDGeometryCollectionParticleHandleImp<double,3,1> **)
             ((pFVar6->TagToObject).AllocatorInstance.Data + lVar15 * 8) = pTVar7;
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
            param_1->Ptr = *(TPBDGeometryCollectionParticleHandleImp<double,3,1> **)
                            ((pFVar6->TagToObject).AllocatorInstance.Data +
                            (longlong)(int)uVar10 * 8);
          }
        }
      }
    }
  }
  else {
    param_1->Ptr = (TPBDGeometryCollectionParticleHandleImp<double,3,1> *)0x0;
  }
  return;
}

// SerializePtr<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_> @ 144065d00

void __thiscall
Chaos::FChaosArchive::SerializePtr<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>
          (FChaosArchive *this,
          TSerializablePtr<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_> *param_1)

{
  longlong *plVar1;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> *pTVar2;
  FArchiveState *this_00;
  FFastPathLoadBuffer *pFVar3;
  FArchive *pFVar4;
  uint *puVar5;
  FChaosArchiveContext *pFVar6;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar7;
  code *pcVar8;
  TTuple<void_*,int> *pTVar9;
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
  TPBDRigidClusteredParticleHandleImp<double,3,1> *local_80;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *local_78;
  TPBDRigidClusteredParticleHandleImp<double,3,1> **local_70;
  uint *local_68;
  TPBDRigidClusteredParticleHandleImp<double,3,1> **local_60;
  uint *local_58;
  
  plVar1 = &this->_padding_;
  this_00 = (FArchiveState *)*plVar1;
  bVar16 = param_1->Ptr != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
  pFVar3 = this_00->ActiveFPLB;
  puVar5 = (uint *)((longlong)pFVar3->StartFastPathLoadBuffer + 4);
  if (pFVar3->EndFastPathLoadBuffer < puVar5) {
    local_res10[0] = 0;
    if (this_00->ArIsLoading == 0) {
      local_res10[0] =
           (uint)(param_1->Ptr != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0);
    }
    (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError(this_00);
    }
    uVar10 = local_res10[0];
    if (this_00->ArIsLoading == 0) goto LAB_144065d92;
  }
  else {
    uVar10 = *(uint *)pFVar3->StartFastPathLoadBuffer;
    pFVar3->StartFastPathLoadBuffer = (uchar *)puVar5;
  }
  bVar16 = uVar10 != 0;
LAB_144065d92:
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
              if (*(TPBDRigidClusteredParticleHandleImp<double,3,1> **)
                   (lVar15 + (longlong)iVar11 * 0x10) == local_80) {
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
              if (*(TPBDRigidClusteredParticleHandleImp<double,3,1> **)
                   (*(longlong *)&pFVar6->ObjToTag + (longlong)iVar11 * 0x18) == local_80) {
                if (iVar11 != -1) {
                  pFVar4 = (FArchive *)*plVar1;
                  pTVar9 = TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                           ::Find((TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                                   *)&pFVar6->ObjToTag,local_80);
                  if ((pTVar9 == (TTuple<void_*,int> *)0x0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Pair != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                          ,0x288,L""), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  ::operator<<(pFVar4,(int *)&pTVar9->field_0x8);
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
        StaticSerialize<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>(this,param_1);
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
            StaticSerialize<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>(this,param_1);
            lVar15 = (longlong)(int)local_res8[0];
            pFVar6 = (this->Context).Ptr;
            pTVar7 = param_1->Ptr;
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
            *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)
             ((pFVar6->TagToObject).AllocatorInstance.Data + lVar15 * 8) = pTVar7;
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
            param_1->Ptr = *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)
                            ((pFVar6->TagToObject).AllocatorInstance.Data +
                            (longlong)(int)uVar10 * 8);
          }
        }
      }
    }
  }
  else {
    param_1->Ptr = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
  }
  return;
}

// SerializePtr<Chaos::TPBDRigidParticle<double,3>_> @ 144066220

void __thiscall
Chaos::FChaosArchive::SerializePtr<Chaos::TPBDRigidParticle<double,3>_>
          (FChaosArchive *this,TSerializablePtr<Chaos::TPBDRigidParticle<double,3>_> *param_1)

{
  longlong *plVar1;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> *pTVar2;
  FArchiveState *this_00;
  FFastPathLoadBuffer *pFVar3;
  FArchive *pFVar4;
  uint *puVar5;
  FChaosArchiveContext *pFVar6;
  TPBDRigidParticle<double,3> *pTVar7;
  code *pcVar8;
  TTuple<void_*,int> *pTVar9;
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
  TPBDRigidParticle<double,3> *local_80;
  TPBDRigidParticle<double,3> *local_78;
  TPBDRigidParticle<double,3> **local_70;
  uint *local_68;
  TPBDRigidParticle<double,3> **local_60;
  uint *local_58;
  
  plVar1 = &this->_padding_;
  this_00 = (FArchiveState *)*plVar1;
  bVar16 = param_1->Ptr != (TPBDRigidParticle<double,3> *)0x0;
  pFVar3 = this_00->ActiveFPLB;
  puVar5 = (uint *)((longlong)pFVar3->StartFastPathLoadBuffer + 4);
  if (pFVar3->EndFastPathLoadBuffer < puVar5) {
    local_res10[0] = 0;
    if (this_00->ArIsLoading == 0) {
      local_res10[0] = (uint)(param_1->Ptr != (TPBDRigidParticle<double,3> *)0x0);
    }
    (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError(this_00);
    }
    uVar10 = local_res10[0];
    if (this_00->ArIsLoading == 0) goto LAB_1440662b2;
  }
  else {
    uVar10 = *(uint *)pFVar3->StartFastPathLoadBuffer;
    pFVar3->StartFastPathLoadBuffer = (uchar *)puVar5;
  }
  bVar16 = uVar10 != 0;
LAB_1440662b2:
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
              if (*(TPBDRigidParticle<double,3> **)(lVar15 + (longlong)iVar11 * 0x10) == local_80) {
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
              if (*(TPBDRigidParticle<double,3> **)
                   (*(longlong *)&pFVar6->ObjToTag + (longlong)iVar11 * 0x18) == local_80) {
                if (iVar11 != -1) {
                  pFVar4 = (FArchive *)*plVar1;
                  pTVar9 = TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                           ::Find((TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                                   *)&pFVar6->ObjToTag,local_80);
                  if ((pTVar9 == (TTuple<void_*,int> *)0x0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Pair != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                          ,0x288,L""), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  ::operator<<(pFVar4,(int *)&pTVar9->field_0x8);
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
        StaticSerialize<Chaos::TPBDRigidParticle<double,3>_>(this,param_1);
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
            StaticSerialize<Chaos::TPBDRigidParticle<double,3>_>(this,param_1);
            lVar15 = (longlong)(int)local_res8[0];
            pFVar6 = (this->Context).Ptr;
            pTVar7 = param_1->Ptr;
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
            *(TPBDRigidParticle<double,3> **)
             ((pFVar6->TagToObject).AllocatorInstance.Data + lVar15 * 8) = pTVar7;
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
            param_1->Ptr = *(TPBDRigidParticle<double,3> **)
                            ((pFVar6->TagToObject).AllocatorInstance.Data +
                            (longlong)(int)uVar10 * 8);
          }
        }
      }
    }
  }
  else {
    param_1->Ptr = (TPBDRigidParticle<double,3> *)0x0;
  }
  return;
}

// StaticSerialize<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_> @ 144066840

void __thiscall
Chaos::FChaosArchive::StaticSerialize<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>
          (FChaosArchive *this,
          TSerializablePtr<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_> *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  TGeometryParticleHandleImp<double,3,1> *this_01;
  
  this_01 = (TGeometryParticleHandleImp<double,3,1> *)param_1->Ptr;
  if ((this->_padding_ & 1) == 0) {
    bVar2 = (byte)this->_padding_ & 1;
  }
  else {
    this_00 = ::operator_new(0x18);
    if (this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    }
    else {
      this_00->_padding_ = 0;
      *(undefined4 *)&this_00->_padding_ = 0;
      *(undefined1 *)((longlong)&this_00->_padding_ + 4) = 0;
      TGeometryParticleHandleImp<double,3,1>::SetConstraintGraphNode
                (this_00,(FPBDIslandParticle *)0x0);
    }
    bVar2 = (byte)this->_padding_ & 1;
    if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      if (bVar2 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ar.IsLoading()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ChaosArchive.h"
                           ,0x158,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      param_1->Ptr = (TPBDGeometryCollectionParticleHandleImp<double,3,1> *)this_00;
      this_01 = this_00;
      goto LAB_144066903;
    }
  }
  if (bVar2 != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Ar.IsLoading()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ChaosArchive.h"
                       ,0x15e,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
LAB_144066903:
  TGeometryParticleHandleImp<double,3,1>::Serialize(this_01,this);
  return;
}

// StaticSerialize<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_> @ 144066930

void __thiscall
Chaos::FChaosArchive::StaticSerialize<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>
          (FChaosArchive *this,
          TSerializablePtr<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_> *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  TGeometryParticleHandleImp<double,3,1> *this_01;
  
  this_01 = (TGeometryParticleHandleImp<double,3,1> *)param_1->Ptr;
  if ((this->_padding_ & 1) == 0) {
    bVar2 = (byte)this->_padding_ & 1;
  }
  else {
    this_00 = ::operator_new(0x18);
    if (this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    }
    else {
      this_00->_padding_ = 0;
      *(undefined4 *)&this_00->_padding_ = 0;
      *(undefined1 *)((longlong)&this_00->_padding_ + 4) = 0;
      TGeometryParticleHandleImp<double,3,1>::SetConstraintGraphNode
                (this_00,(FPBDIslandParticle *)0x0);
    }
    bVar2 = (byte)this->_padding_ & 1;
    if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      if (bVar2 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ar.IsLoading()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ChaosArchive.h"
                           ,0x158,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      param_1->Ptr = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)this_00;
      this_01 = this_00;
      goto LAB_1440669f3;
    }
  }
  if (bVar2 != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Ar.IsLoading()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ChaosArchive.h"
                       ,0x15e,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
LAB_1440669f3:
  TGeometryParticleHandleImp<double,3,1>::Serialize(this_01,this);
  return;
}

// StaticSerialize<Chaos::TPBDRigidParticle<double,3>_> @ 144066a20

void __thiscall
Chaos::FChaosArchive::StaticSerialize<Chaos::TPBDRigidParticle<double,3>_>
          (FChaosArchive *this,TSerializablePtr<Chaos::TPBDRigidParticle<double,3>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TPBDRigidParticle<double,3> *pTVar3;
  TPBDRigidParticle<double,3> *pTVar4;
  byte bVar5;
  
  pTVar4 = param_1->Ptr;
  pTVar3 = (TPBDRigidParticle<double,3> *)
           TGeometryParticle<double,3>::SerializationFactory
                     (this,(TGeometryParticle<double,3> *)pTVar4);
  bVar5 = (byte)this->_padding_ & 1;
  if (pTVar3 == (TPBDRigidParticle<double,3> *)0x0) {
    if (bVar5 != 0) {
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
    if (bVar5 == 0) {
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
    param_1->Ptr = pTVar3;
    pTVar4 = pTVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x000144066ad1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pTVar4 + 8))(pTVar4,this);
  return;
}

