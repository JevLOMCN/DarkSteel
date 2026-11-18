// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// operator= @ 14242f5c0

FDisplayMetrics * __thiscall
FDisplayMetrics::operator=(FDisplayMetrics *this,FDisplayMetrics *param_1)

{
  TArray<FMonitorInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FMonitorInfo *pFVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  
  pTVar1 = &this->MonitorInfo;
  this->PrimaryDisplayWidth = param_1->PrimaryDisplayWidth;
  this->PrimaryDisplayHeight = param_1->PrimaryDisplayHeight;
  if (pTVar1 != &param_1->MonitorInfo) {
    DestructItems<FMonitorInfo,int>
              ((FMonitorInfo *)(pTVar1->AllocatorInstance).Data,(this->MonitorInfo).ArrayNum);
    iVar3 = (param_1->MonitorInfo).ArrayNum;
    piVar2 = &(this->MonitorInfo).ArrayMax;
    pFVar4 = (FMonitorInfo *)(param_1->MonitorInfo).AllocatorInstance.Data;
    (this->MonitorInfo).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<FMonitorInfo,FMonitorInfo,int>((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  iVar3 = (param_1->PrimaryDisplayWorkAreaRect).Top;
  iVar6 = (param_1->PrimaryDisplayWorkAreaRect).Right;
  iVar7 = (param_1->PrimaryDisplayWorkAreaRect).Bottom;
  (this->PrimaryDisplayWorkAreaRect).Left = (param_1->PrimaryDisplayWorkAreaRect).Left;
  (this->PrimaryDisplayWorkAreaRect).Top = iVar3;
  (this->PrimaryDisplayWorkAreaRect).Right = iVar6;
  (this->PrimaryDisplayWorkAreaRect).Bottom = iVar7;
  iVar3 = (param_1->VirtualDisplayRect).Top;
  iVar6 = (param_1->VirtualDisplayRect).Right;
  iVar7 = (param_1->VirtualDisplayRect).Bottom;
  (this->VirtualDisplayRect).Left = (param_1->VirtualDisplayRect).Left;
  (this->VirtualDisplayRect).Top = iVar3;
  (this->VirtualDisplayRect).Right = iVar6;
  (this->VirtualDisplayRect).Bottom = iVar7;
  dVar5 = (param_1->TitleSafePaddingSize).field0_0x0._s_0.Y;
  (this->TitleSafePaddingSize).field0_0x0._s_0.X = (param_1->TitleSafePaddingSize).field0_0x0._s_0.X
  ;
  (this->TitleSafePaddingSize).field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_1->TitleSafePaddingSize).field0_0x0._s_0.W;
  (this->TitleSafePaddingSize).field0_0x0._s_0.Z = (param_1->TitleSafePaddingSize).field0_0x0._s_0.Z
  ;
  (this->TitleSafePaddingSize).field0_0x0._s_0.W = dVar5;
  dVar5 = (param_1->ActionSafePaddingSize).field0_0x0._s_0.Y;
  (this->ActionSafePaddingSize).field0_0x0._s_0.X =
       (param_1->ActionSafePaddingSize).field0_0x0._s_0.X;
  (this->ActionSafePaddingSize).field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_1->ActionSafePaddingSize).field0_0x0._s_0.W;
  (this->ActionSafePaddingSize).field0_0x0._s_0.Z =
       (param_1->ActionSafePaddingSize).field0_0x0._s_0.Z;
  (this->ActionSafePaddingSize).field0_0x0._s_0.W = dVar5;
  return this;
}

