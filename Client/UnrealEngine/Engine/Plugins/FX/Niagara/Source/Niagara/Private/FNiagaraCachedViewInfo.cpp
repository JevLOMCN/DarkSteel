// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// Init @ 149450520

void __thiscall
FNiagaraCachedViewInfo::Init(FNiagaraCachedViewInfo *this,FWorldCachedViewInfo *param_1)

{
  uchar *puVar1;
  TArray<UE::Math::TPlane<double>,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  int *piVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  ForElementType<UE::Math::TPlane<double>_> FVar8;
  int iVar9;
  
  dVar5 = (param_1->ViewMatrix).M[0][1];
  pTVar2 = &this->FrutumPlanes;
  piVar3 = &(this->FrutumPlanes).ArrayNum;
  (this->ViewMat).M[0][0] = (param_1->ViewMatrix).M[0][0];
  (this->ViewMat).M[0][1] = dVar5;
  dVar5 = (param_1->ViewMatrix).M[0][3];
  (this->ViewMat).M[0][2] = (param_1->ViewMatrix).M[0][2];
  (this->ViewMat).M[0][3] = dVar5;
  dVar5 = (param_1->ViewMatrix).M[1][1];
  (this->ViewMat).M[1][0] = (param_1->ViewMatrix).M[1][0];
  (this->ViewMat).M[1][1] = dVar5;
  dVar5 = (param_1->ViewMatrix).M[1][3];
  (this->ViewMat).M[1][2] = (param_1->ViewMatrix).M[1][2];
  (this->ViewMat).M[1][3] = dVar5;
  dVar5 = (param_1->ViewMatrix).M[2][1];
  (this->ViewMat).M[2][0] = (param_1->ViewMatrix).M[2][0];
  (this->ViewMat).M[2][1] = dVar5;
  dVar5 = (param_1->ViewMatrix).M[2][3];
  (this->ViewMat).M[2][2] = (param_1->ViewMatrix).M[2][2];
  (this->ViewMat).M[2][3] = dVar5;
  dVar5 = (param_1->ViewMatrix).M[3][1];
  (this->ViewMat).M[3][0] = (param_1->ViewMatrix).M[3][0];
  (this->ViewMat).M[3][1] = dVar5;
  dVar5 = (param_1->ViewMatrix).M[3][3];
  (this->ViewMat).M[3][2] = (param_1->ViewMatrix).M[3][2];
  (this->ViewMat).M[3][3] = dVar5;
  dVar5 = (param_1->ProjectionMatrix).M[0][1];
  (this->ProjectionMat).M[0][0] = (param_1->ProjectionMatrix).M[0][0];
  (this->ProjectionMat).M[0][1] = dVar5;
  dVar5 = (param_1->ProjectionMatrix).M[0][3];
  (this->ProjectionMat).M[0][2] = (param_1->ProjectionMatrix).M[0][2];
  (this->ProjectionMat).M[0][3] = dVar5;
  dVar5 = (param_1->ProjectionMatrix).M[1][1];
  (this->ProjectionMat).M[1][0] = (param_1->ProjectionMatrix).M[1][0];
  (this->ProjectionMat).M[1][1] = dVar5;
  dVar5 = (param_1->ProjectionMatrix).M[1][3];
  (this->ProjectionMat).M[1][2] = (param_1->ProjectionMatrix).M[1][2];
  (this->ProjectionMat).M[1][3] = dVar5;
  dVar5 = (param_1->ProjectionMatrix).M[2][1];
  (this->ProjectionMat).M[2][0] = (param_1->ProjectionMatrix).M[2][0];
  (this->ProjectionMat).M[2][1] = dVar5;
  dVar5 = (param_1->ProjectionMatrix).M[2][3];
  (this->ProjectionMat).M[2][2] = (param_1->ProjectionMatrix).M[2][2];
  (this->ProjectionMat).M[2][3] = dVar5;
  dVar5 = (param_1->ProjectionMatrix).M[3][1];
  (this->ProjectionMat).M[3][0] = (param_1->ProjectionMatrix).M[3][0];
  (this->ProjectionMat).M[3][1] = dVar5;
  dVar5 = (param_1->ProjectionMatrix).M[3][3];
  (this->ProjectionMat).M[3][2] = (param_1->ProjectionMatrix).M[3][2];
  (this->ProjectionMat).M[3][3] = dVar5;
  dVar5 = (param_1->ViewToWorld).M[0][1];
  (this->ViewToWorld).M[0][0] = (param_1->ViewToWorld).M[0][0];
  (this->ViewToWorld).M[0][1] = dVar5;
  dVar5 = (param_1->ViewToWorld).M[0][3];
  (this->ViewToWorld).M[0][2] = (param_1->ViewToWorld).M[0][2];
  (this->ViewToWorld).M[0][3] = dVar5;
  dVar5 = (param_1->ViewToWorld).M[1][1];
  (this->ViewToWorld).M[1][0] = (param_1->ViewToWorld).M[1][0];
  (this->ViewToWorld).M[1][1] = dVar5;
  dVar5 = (param_1->ViewToWorld).M[1][3];
  (this->ViewToWorld).M[1][2] = (param_1->ViewToWorld).M[1][2];
  (this->ViewToWorld).M[1][3] = dVar5;
  dVar5 = (param_1->ViewToWorld).M[2][1];
  (this->ViewToWorld).M[2][0] = (param_1->ViewToWorld).M[2][0];
  (this->ViewToWorld).M[2][1] = dVar5;
  dVar5 = (param_1->ViewToWorld).M[2][3];
  (this->ViewToWorld).M[2][2] = (param_1->ViewToWorld).M[2][2];
  (this->ViewToWorld).M[2][3] = dVar5;
  dVar5 = (param_1->ViewToWorld).M[3][1];
  (this->ViewToWorld).M[3][0] = (param_1->ViewToWorld).M[3][0];
  (this->ViewToWorld).M[3][1] = dVar5;
  dVar5 = (param_1->ViewToWorld).M[3][3];
  (this->ViewToWorld).M[3][2] = (param_1->ViewToWorld).M[3][2];
  (this->ViewToWorld).M[3][3] = dVar5;
  dVar5 = (param_1->ViewProjectionMatrix).M[0][1];
  (this->ViewProjMat).M[0][0] = (param_1->ViewProjectionMatrix).M[0][0];
  (this->ViewProjMat).M[0][1] = dVar5;
  dVar5 = (param_1->ViewProjectionMatrix).M[0][3];
  (this->ViewProjMat).M[0][2] = (param_1->ViewProjectionMatrix).M[0][2];
  (this->ViewProjMat).M[0][3] = dVar5;
  dVar5 = (param_1->ViewProjectionMatrix).M[1][1];
  (this->ViewProjMat).M[1][0] = (param_1->ViewProjectionMatrix).M[1][0];
  (this->ViewProjMat).M[1][1] = dVar5;
  dVar5 = (param_1->ViewProjectionMatrix).M[1][3];
  (this->ViewProjMat).M[1][2] = (param_1->ViewProjectionMatrix).M[1][2];
  (this->ViewProjMat).M[1][3] = dVar5;
  dVar5 = (param_1->ViewProjectionMatrix).M[2][1];
  (this->ViewProjMat).M[2][0] = (param_1->ViewProjectionMatrix).M[2][0];
  (this->ViewProjMat).M[2][1] = dVar5;
  dVar5 = (param_1->ViewProjectionMatrix).M[2][3];
  (this->ViewProjMat).M[2][2] = (param_1->ViewProjectionMatrix).M[2][2];
  (this->ViewProjMat).M[2][3] = dVar5;
  dVar5 = (param_1->ViewProjectionMatrix).M[3][1];
  (this->ViewProjMat).M[3][0] = (param_1->ViewProjectionMatrix).M[3][0];
  (this->ViewProjMat).M[3][1] = dVar5;
  dVar5 = (param_1->ViewProjectionMatrix).M[3][3];
  (this->ViewProjMat).M[3][2] = (param_1->ViewProjectionMatrix).M[3][2];
  (this->ViewProjMat).M[3][3] = dVar5;
  iVar9 = *piVar3;
  if (iVar9 < 6) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
              (0x20,0x10,6 - iVar9,&pTVar2->AllocatorInstance,piVar3,&(this->FrutumPlanes).ArrayMax)
    ;
  }
  else if (6 < iVar9) {
    iVar9 = iVar9 + -6;
    if (iVar9 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else if (iVar9 == 0) goto LAB_1494507b4;
    FVar8 = (this->FrutumPlanes).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FVar8 = (ForElementType<UE::Math::TPlane<double>_>)pTVar2;
    }
    iVar7 = (*piVar3 - iVar9) + -6;
    if (iVar7 != 0) {
      memmove((ForElementType<UE::Math::TPlane<double>_> *)((longlong)FVar8 + 0xc0),
              (ForElementType<UE::Math::TPlane<double>_> *)((longlong)FVar8 + 0xc0) +
              (longlong)iVar9 * 4,(longlong)iVar7 << 5);
    }
    *piVar3 = *piVar3 - iVar9;
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
              (0x20,0x10,&pTVar2->AllocatorInstance,*piVar3,&(this->FrutumPlanes).ArrayMax);
  }
LAB_1494507b4:
  if ((this->FrutumPlanes).ArrayNum < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar8 = (this->FrutumPlanes).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FVar8 = (ForElementType<UE::Math::TPlane<double>_>)pTVar2;
  }
  bVar6 = UE::Math::MakeFrustumPlane<double>
                    ((this->ViewProjMat).M[0][3] - (this->ViewProjMat).M[0][2],
                     (this->ViewProjMat).M[1][3] - (this->ViewProjMat).M[1][2],
                     (this->ViewProjMat).M[2][3] - (this->ViewProjMat).M[2][2],
                     (this->ViewProjMat).M[3][3] - (this->ViewProjMat).M[3][2],
                     (TPlane<double> *)FVar8);
  if (!bVar6) {
    if ((this->FrutumPlanes).ArrayNum < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FVar8 = (this->FrutumPlanes).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FVar8 = (ForElementType<UE::Math::TPlane<double>_>)pTVar2;
    }
    *(undefined8 *)FVar8 = 0;
    puVar1 = (uchar *)((longlong)FVar8 + 8);
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
    puVar1 = (uchar *)((longlong)FVar8 + 0x10);
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
    puVar1 = (uchar *)((longlong)FVar8 + 0x18);
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
  }
  if ((this->FrutumPlanes).ArrayNum < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar8 = (this->FrutumPlanes).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FVar8 = (ForElementType<UE::Math::TPlane<double>_>)pTVar2;
  }
  bVar6 = UE::Math::MakeFrustumPlane<double>
                    ((this->ViewProjMat).M[0][2],(this->ViewProjMat).M[1][2],
                     (this->ViewProjMat).M[2][2],(this->ViewProjMat).M[3][2],
                     (TPlane<double> *)((longlong)FVar8 + 0x20));
  if (!bVar6) {
    if ((this->FrutumPlanes).ArrayNum < 2) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FVar8 = (this->FrutumPlanes).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FVar8 = (ForElementType<UE::Math::TPlane<double>_>)pTVar2;
    }
    puVar1 = (uchar *)((longlong)FVar8 + 0x20);
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
    puVar1 = (uchar *)((longlong)FVar8 + 0x28);
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
    puVar1 = (uchar *)((longlong)FVar8 + 0x30);
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
    puVar1 = (uchar *)((longlong)FVar8 + 0x38);
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
  }
  if ((this->FrutumPlanes).ArrayNum < 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar8 = (this->FrutumPlanes).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FVar8 = (ForElementType<UE::Math::TPlane<double>_>)pTVar2;
  }
  bVar6 = UE::Math::MakeFrustumPlane<double>
                    ((this->ViewProjMat).M[0][3] - (this->ViewProjMat).M[0][1],
                     (this->ViewProjMat).M[1][3] - (this->ViewProjMat).M[1][1],
                     (this->ViewProjMat).M[2][3] - (this->ViewProjMat).M[2][1],
                     (this->ViewProjMat).M[3][3] - (this->ViewProjMat).M[3][1],
                     (TPlane<double> *)((longlong)FVar8 + 0x40));
  if (!bVar6) {
    if ((this->FrutumPlanes).ArrayNum < 3) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FVar8 = (this->FrutumPlanes).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FVar8 = (ForElementType<UE::Math::TPlane<double>_>)pTVar2;
    }
    puVar1 = (uchar *)((longlong)FVar8 + 0x40);
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
    puVar1 = (uchar *)((longlong)FVar8 + 0x48);
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
    puVar1 = (uchar *)((longlong)FVar8 + 0x50);
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
    puVar1 = (uchar *)((longlong)FVar8 + 0x58);
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
  }
  if ((this->FrutumPlanes).ArrayNum < 4) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar8 = (this->FrutumPlanes).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FVar8 = (ForElementType<UE::Math::TPlane<double>_>)pTVar2;
  }
  bVar6 = UE::Math::MakeFrustumPlane<double>
                    ((this->ViewProjMat).M[0][1] + (this->ViewProjMat).M[0][3],
                     (this->ViewProjMat).M[1][3] + (this->ViewProjMat).M[1][1],
                     (this->ViewProjMat).M[2][1] + (this->ViewProjMat).M[2][3],
                     (this->ViewProjMat).M[3][3] + (this->ViewProjMat).M[3][1],
                     (TPlane<double> *)((longlong)FVar8 + 0x60));
  if (!bVar6) {
    if ((this->FrutumPlanes).ArrayNum < 4) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FVar8 = (this->FrutumPlanes).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FVar8 = (ForElementType<UE::Math::TPlane<double>_>)pTVar2;
    }
    puVar1 = (uchar *)((longlong)FVar8 + 0x60);
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
    puVar1 = (uchar *)((longlong)FVar8 + 0x68);
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
    puVar1 = (uchar *)((longlong)FVar8 + 0x70);
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
    puVar1 = (uchar *)((longlong)FVar8 + 0x78);
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
  }
  if ((this->FrutumPlanes).ArrayNum < 5) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar8 = (this->FrutumPlanes).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FVar8 = (ForElementType<UE::Math::TPlane<double>_>)pTVar2;
  }
  bVar6 = UE::Math::MakeFrustumPlane<double>
                    ((this->ViewProjMat).M[0][0] + (this->ViewProjMat).M[0][3],
                     (this->ViewProjMat).M[1][0] + (this->ViewProjMat).M[1][3],
                     (this->ViewProjMat).M[2][0] + (this->ViewProjMat).M[2][3],
                     (this->ViewProjMat).M[3][3] + (this->ViewProjMat).M[3][0],
                     (TPlane<double> *)((longlong)FVar8 + 0x80));
  if (!bVar6) {
    if ((this->FrutumPlanes).ArrayNum < 5) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FVar8 = (this->FrutumPlanes).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FVar8 = (ForElementType<UE::Math::TPlane<double>_>)pTVar2;
    }
    puVar1 = (uchar *)((longlong)FVar8 + 0x80);
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
    puVar1 = (uchar *)((longlong)FVar8 + 0x88);
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
    puVar1 = (uchar *)((longlong)FVar8 + 0x90);
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
    puVar1 = (uchar *)((longlong)FVar8 + 0x98);
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
  }
  if ((this->FrutumPlanes).ArrayNum < 6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar8 = (this->FrutumPlanes).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FVar8 = (ForElementType<UE::Math::TPlane<double>_>)pTVar2;
  }
  bVar6 = UE::Math::MakeFrustumPlane<double>
                    ((this->ViewProjMat).M[0][3] - (this->ViewProjMat).M[0][0],
                     (this->ViewProjMat).M[1][3] - (this->ViewProjMat).M[1][0],
                     (this->ViewProjMat).M[2][3] - (this->ViewProjMat).M[2][0],
                     (this->ViewProjMat).M[3][3] - (this->ViewProjMat).M[3][0],
                     (TPlane<double> *)((longlong)FVar8 + 0xa0));
  if (!bVar6) {
    if ((this->FrutumPlanes).ArrayNum < 6) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FVar8 = (this->FrutumPlanes).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FVar8 = (ForElementType<UE::Math::TPlane<double>_>)pTVar2;
    }
    puVar1 = (uchar *)((longlong)FVar8 + 0xa0);
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
    puVar1 = (uchar *)((longlong)FVar8 + 0xa8);
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
    puVar1 = (uchar *)((longlong)FVar8 + 0xb0);
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
    puVar1 = (uchar *)((longlong)FVar8 + 0xb8);
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
  }
  return;
}

