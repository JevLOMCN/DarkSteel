// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 3

// TMap<UE::Math::TIntPoint<int>,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>_> @ 145f76830

TMap<UE::Math::TIntPoint<int>,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>_>
* __thiscall
TMap<UE::Math::TIntPoint<int>,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>_>
::
TMap<UE::Math::TIntPoint<int>,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>_>
          (TMap<UE::Math::TIntPoint<int>,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>_>
           *this,TMap<UE::Math::TIntPoint<int>,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>_>
                 *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  if (this != param_1) {
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)&this->field_0x8 = *(undefined4 *)&param_1->field_0x8;
    *(undefined4 *)&this->field_0xc = *(undefined4 *)&param_1->field_0xc;
    *(undefined8 *)&param_1->field_0x8 = 0;
    if (&this->field_0x10 != &param_1->field_0x10) {
      if (*(longlong *)&param_1->field_0x20 == 0) {
        memmove(&this->field_0x10,&param_1->field_0x10,0x10);
      }
      if (*(void **)&this->field_0x20 != (void *)0x0) {
        FMemory::Free(*(void **)&this->field_0x20);
      }
      *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_1->field_0x20;
      *(undefined8 *)&param_1->field_0x20 = 0;
      *(undefined4 *)&this->field_0x28 = *(undefined4 *)&param_1->field_0x28;
      *(undefined4 *)&this->field_0x2c = *(undefined4 *)&param_1->field_0x2c;
      *(undefined8 *)&param_1->field_0x28 = 0;
    }
    *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
    *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
    *(undefined4 *)&param_1->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_1->field_0x34 = 0;
  }
  if (*(longlong *)&param_1->field_0x40 == 0) {
    *(undefined4 *)&this->field_0x38 = *(undefined4 *)&param_1->field_0x38;
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  *(undefined8 *)&this->field_0x40 = *(undefined8 *)&param_1->field_0x40;
  *(undefined8 *)&param_1->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = *(undefined4 *)&param_1->field_0x48;
  *(undefined4 *)&param_1->field_0x48 = 0;
  return this;
}

// RemoveAndCopyValue @ 145f9f710

bool __thiscall
TMap<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>_>
::RemoveAndCopyValue
          (TMap<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>_>
           *this,TIntPoint<int> param_1,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup> *param_2)

{
  longlong lVar1;
  longlong lVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar11 = param_1.field0_0x0._4_4_;
  uVar10 = param_1.field0_0x0._0_4_ - uVar11 ^ uVar11 >> 0xd;
  uVar9 = (-0x61c88647 - uVar10) - uVar11 ^ uVar10 << 8;
  uVar12 = (uVar11 - uVar10) - uVar9 ^ uVar9 >> 0xd;
  uVar10 = (uVar10 - uVar12) - uVar9 ^ uVar12 >> 0xc;
  uVar9 = (uVar9 - uVar10) - uVar12 ^ uVar10 << 0x10;
  uVar12 = (uVar12 - uVar9) - uVar10 ^ uVar9 >> 5;
  uVar10 = (uVar10 - uVar12) - uVar9 ^ uVar12 >> 3;
  uVar9 = (uVar9 - uVar10) - uVar12 ^ uVar10 << 10;
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar7 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar7 = &this->field_0x38;
    }
    uVar9 = *(uint *)(puVar7 + (ulonglong)
                               (*(int *)&this->field_0x48 - 1U &
                               ((uVar12 - uVar9) - uVar10 ^ uVar9 >> 0xf)) * 4);
    if (uVar9 != 0xffffffff) {
      lVar2 = *(longlong *)this;
      do {
        lVar1 = (longlong)(int)uVar9 * 0x18;
        if (((int)*(undefined8 *)(lVar1 + lVar2) == param_1.field0_0x0._0_4_) &&
           ((uint)((ulonglong)*(undefined8 *)(lVar1 + lVar2) >> 0x20) == uVar11)) {
          if (uVar9 == 0xffffffff) {
            return false;
          }
          if ((UE::GC::GIsIncrementalReachabilityPending) &&
             (pUVar3 = *(UObject **)(lVar1 + 8 + lVar2), pUVar3 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar3);
          }
          param_2->field0_0x0 =
               *(TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_u_0 *)(lVar1 + 8 + lVar2);
          if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)&this->field_0x28)) {
            puVar7 = *(undefined1 **)&this->field_0x20;
            if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
              puVar7 = &this->field_0x10;
            }
            if ((*(uint *)(puVar7 + (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4
                          ) >> (uVar9 & 0x1f) & 1) != 0) goto LAB_145f9f8b3;
          }
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Elements.IsValidIndex(ElementIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                             ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex")
          ;
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
LAB_145f9f8b3:
          lVar2 = *(longlong *)this;
          puVar7 = *(undefined1 **)&this->field_0x40;
          if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
            puVar7 = &this->field_0x38;
          }
          puVar8 = (uint *)(puVar7 + (longlong)*(int *)(lVar2 + lVar1 + 0x14) * 4);
          do {
            uVar10 = *puVar8;
            if (uVar10 == 0xffffffff) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash");
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
            }
            else if (uVar10 == uVar9) {
              *puVar8 = *(uint *)(lVar2 + lVar1 + 0x10);
              TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this,uVar9,1);
              return true;
            }
            puVar8 = (uint *)(*(longlong *)this + (longlong)(int)uVar10 * 0x18 + 0x10);
          } while( true );
        }
        uVar9 = *(uint *)(lVar1 + 0x10 + lVar2);
      } while (uVar9 != 0xffffffff);
    }
  }
  return false;
}

// TMap<FTextureResource_*,enum_ERHIAccess,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextureResource_*,enum_ERHIAccess,0>_> @ 145fb4760

TMap<FTextureResource_*,ERHIAccess,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextureResource_*,ERHIAccess,0>_>
* __thiscall
TMap<FTextureResource_*,enum_ERHIAccess,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextureResource_*,enum_ERHIAccess,0>_>
::
TMap<FTextureResource_*,enum_ERHIAccess,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextureResource_*,enum_ERHIAccess,0>_>
          (void *this,
          TMap<FTextureResource_*,ERHIAccess,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextureResource_*,ERHIAccess,0>_>
          *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  *(undefined4 *)((longlong)this + 0x2c) = 0x80;
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined8 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x48) = 0;
  if (this != param_1) {
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)((longlong)this + 8) = *(undefined4 *)&param_1->field_0x8;
    *(undefined4 *)((longlong)this + 0xc) = *(undefined4 *)&param_1->field_0xc;
    *(undefined8 *)&param_1->field_0x8 = 0;
    if ((undefined1 *)((longlong)this + 0x10) != &param_1->field_0x10) {
      if (*(longlong *)&param_1->field_0x20 == 0) {
        memmove((undefined1 *)((longlong)this + 0x10),&param_1->field_0x10,0x10);
      }
      if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)this + 0x20));
      }
      *(undefined8 *)((longlong)this + 0x20) = *(undefined8 *)&param_1->field_0x20;
      *(undefined8 *)&param_1->field_0x20 = 0;
      *(undefined4 *)((longlong)this + 0x28) = *(undefined4 *)&param_1->field_0x28;
      *(undefined4 *)((longlong)this + 0x2c) = *(undefined4 *)&param_1->field_0x2c;
      *(undefined8 *)&param_1->field_0x28 = 0;
    }
    *(undefined4 *)((longlong)this + 0x30) = *(undefined4 *)&param_1->field_0x30;
    *(undefined4 *)((longlong)this + 0x34) = *(undefined4 *)&param_1->field_0x34;
    *(undefined4 *)&param_1->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_1->field_0x34 = 0;
  }
  if (*(longlong *)&param_1->field_0x40 == 0) {
    *(undefined4 *)((longlong)this + 0x38) = *(undefined4 *)&param_1->field_0x38;
  }
  if (*(void **)((longlong)this + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x40));
  }
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)&param_1->field_0x40;
  *(undefined8 *)&param_1->field_0x40 = 0;
  *(undefined4 *)((longlong)this + 0x48) = *(undefined4 *)&param_1->field_0x48;
  *(undefined4 *)&param_1->field_0x48 = 0;
  return this;
}

