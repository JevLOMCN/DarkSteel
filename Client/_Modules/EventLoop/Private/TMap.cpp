// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EventLoop
// Functions: 1

// RemoveAndCopyValue @ 143144460

bool __thiscall
TMap<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>,int,0>_>
::RemoveAndCopyValue
          (TMap<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>,int,0>_>
           *this,TResourceHandle<UE::EventLoop::FIORequestHandleTraits> *param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined1 *puVar8;
  uint *puVar9;
  uint uVar10;
  
  uVar3 = param_1->ID;
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar8 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar8 = &this->field_0x38;
    }
    uVar10 = *(uint *)(puVar8 + ((uVar3 >> 0x20) * 0x17 + uVar3 &
                                (ulonglong)(*(int *)&this->field_0x48 - 1)) * 4);
    if (uVar10 != 0xffffffff) {
      lVar4 = *(longlong *)this;
      do {
        lVar1 = (longlong)(int)uVar10 * 0x18;
        if (*(ulonglong *)(lVar1 + lVar4) == uVar3) {
          *param_2 = *(int *)(lVar1 + 8 + lVar4);
          if ((-1 < (int)uVar10) && ((int)uVar10 < *(int *)&this->field_0x28)) {
            puVar8 = *(undefined1 **)&this->field_0x20;
            if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
              puVar8 = &this->field_0x10;
            }
            if ((*(uint *)(puVar8 + (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) *
                                    4) >> (uVar10 & 0x1f) & 1) != 0) goto LAB_14314455c;
          }
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Elements.IsValidIndex(ElementIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                             ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex")
          ;
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
LAB_14314455c:
          lVar4 = *(longlong *)this;
          puVar8 = *(undefined1 **)&this->field_0x40;
          if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
            puVar8 = &this->field_0x38;
          }
          puVar9 = (uint *)(puVar8 + (longlong)*(int *)(lVar4 + lVar1 + 0x14) * 4);
          do {
            uVar2 = *puVar9;
            if (uVar2 == 0xffffffff) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash");
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
            }
            else if (uVar2 == uVar10) {
              *puVar9 = *(uint *)(lVar4 + lVar1 + 0x10);
              TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this,uVar10,1);
              return true;
            }
            puVar9 = (uint *)(*(longlong *)this + (longlong)(int)uVar2 * 0x18 + 0x10);
          } while( true );
        }
        uVar10 = *(uint *)(lVar1 + 0x10 + lVar4);
      } while (uVar10 != 0xffffffff);
    }
  }
  return false;
}

