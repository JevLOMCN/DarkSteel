// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// FDS_MountStatus @ 14ba90850

FDS_MountStatus * __thiscall
FDS_MountStatus::FDS_MountStatus(FDS_MountStatus *this,RiderStatus *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 uStack_1c;
  
  lVar8 = 0;
  piVar1 = &(this->Riders).ArrayMax;
  (this->Riders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  (this->Riders).ArrayNum = 0;
  uVar3 = *(uint *)&(param_1->_impl_).riders_.field_0x8;
  if (-1 < (int)uVar3) {
    if (0 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar3,(ForAnyElementType *)this,0,piVar1);
      do {
        uVar7 = *(ulonglong *)&(param_1->_impl_).riders_;
        if ((uVar7 & 1) != 0) {
          uVar7 = *(ulonglong *)(uVar7 + 7 + lVar8 * 8);
        }
        uVar5 = *(undefined8 *)(uVar7 + 0x18);
        uVar4 = *(undefined4 *)(uVar7 + 0x20);
        iVar6 = (this->Riders).ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)this,piVar1);
        }
        lVar8 = lVar8 + 1;
        (this->Riders).ArrayNum = iVar6 + 1;
        pFVar2 = (this->Riders).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
        *(undefined8 *)pFVar2 = uVar5;
        *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_1c,uVar4);
      } while (lVar8 < (int)uVar3);
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

