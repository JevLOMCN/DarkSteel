// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 76

// ~TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_> @ 142012180

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
::
~TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
          (TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
           *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ValidatedReferences).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedReferences).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedStridedArrays).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedArrays).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ~TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<4>_> @ 142012250

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<4>_>
::
~TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<4>_>
          (TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<4>_>
           *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ValidatedReferences).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedReferences).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedStridedArrays).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedArrays).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ~TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<5>_> @ 142012320

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<5>_>
::
~TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<5>_>
          (TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<5>_>
           *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ValidatedReferences).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedReferences).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedStridedArrays).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedArrays).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ~TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_> @ 1420123f0

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
::
~TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
          (TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
           *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ValidatedReferences).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedReferences).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedStridedArrays).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedArrays).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ~TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_> @ 1420124c0

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
::
~TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
          (TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
           *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ValidatedReferences).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedReferences).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedStridedArrays).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedArrays).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ~TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_> @ 142012590

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
::
~TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
          (TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
           *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ValidatedReferences).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedReferences).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedStridedArrays).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedArrays).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ~TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<12>_> @ 142012660

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<12>_>
::
~TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<12>_>
          (TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<12>_>
           *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ValidatedReferences).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedReferences).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedStridedArrays).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedArrays).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ~TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<13>_> @ 142012730

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<13>_>
::
~TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<13>_>
          (TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<13>_>
           *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ValidatedReferences).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedReferences).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedStridedArrays).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedArrays).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ~TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<1>_> @ 142012800

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<1>_>
::
~TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<1>_>
          (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<1>_>
           *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ValidatedReferences).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedReferences).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedStridedArrays).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedArrays).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ~TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<4>_> @ 1420128d0

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<4>_>
::
~TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<4>_>
          (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<4>_>
           *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ValidatedReferences).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedReferences).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedStridedArrays).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedArrays).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ~TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<5>_> @ 1420129a0

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<5>_>
::
~TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<5>_>
          (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<5>_>
           *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ValidatedReferences).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedReferences).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedStridedArrays).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedArrays).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ~TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<8>_> @ 142012a70

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<8>_>
::
~TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<8>_>
          (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<8>_>
           *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ValidatedReferences).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedReferences).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedStridedArrays).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedArrays).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ~TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<9>_> @ 142012b40

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<9>_>
::
~TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<9>_>
          (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<9>_>
           *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ValidatedReferences).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedReferences).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedStridedArrays).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedArrays).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ~TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<0>_> @ 142012c10

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<0>_>
::
~TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<0>_>
          (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<0>_>
           *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ValidatedReferences).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedReferences).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedStridedArrays).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedArrays).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ~TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<12>_> @ 142012ce0

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<12>_>
::
~TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<12>_>
          (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<12>_>
           *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ValidatedReferences).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedReferences).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedStridedArrays).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedArrays).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ~TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<13>_> @ 142012db0

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<13>_>
::
~TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<13>_>
          (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<13>_>
           *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ValidatedReferences).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedReferences).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedStridedArrays).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedArrays).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// DrainArraysFull @ 142026750

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
::DrainArraysFull(TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
                  *this)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FImmutableReference *pFVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  FReferenceArray *pFVar10;
  FReferenceArray *pFVar11;
  
  pFVar11 = (this->UnvalidatedArrays).Entries;
  puVar1 = &this->field_0x148;
  pFVar10 = pFVar11;
  if (pFVar11 == (FReferenceArray *)puVar1) {
    (this->UnvalidatedArrays).Num = 0;
    return;
  }
  do {
    pFVar10 = pFVar10 + 1;
  } while (pFVar10 != (FReferenceArray *)puVar1);
  do {
    pFVar7 = (pFVar11->Array->AllocatorInstance).Data;
    uVar8 = pFVar11->Array->ArrayNum;
    if (((int)uVar8 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar8 != 0) {
      uVar9 = 0x20 - (this->UnvalidatedReferences).Num;
      pFVar6 = pFVar7;
      if (uVar9 <= uVar8) {
        do {
          if (((int)uVar8 < (int)uVar9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Idx <= Body.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x5cd,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (((int)uVar9 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar8 = uVar8 - uVar9;
          pFVar6 = pFVar7 + (longlong)(int)uVar9 * 8;
          if (((int)uVar8 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((0x20 - (this->UnvalidatedReferences).Num < uVar9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x660,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = pFVar7 + (longlong)(int)uVar9 * 8;
          pFVar4 = (this->UnvalidatedReferences).Entries + (this->UnvalidatedReferences).Num;
          for (; pFVar7 != pFVar2; pFVar7 = pFVar7 + 8) {
            pFVar4->Object = *(UObject **)pFVar7;
            pFVar4 = pFVar4 + 1;
          }
          (this->UnvalidatedReferences).Num = (this->UnvalidatedReferences).Num + uVar9;
          if (((this->UnvalidatedReferences).Num != 0x20) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("UnvalidatedReferences.IsFull()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x615,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          DrainUnvalidatedFull(this);
          uVar9 = 0x20;
          pFVar7 = pFVar6;
        } while (0x1f < uVar8);
      }
      if ((0x20 - (this->UnvalidatedReferences).Num < uVar8) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x660,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar4 = (this->UnvalidatedReferences).Entries + (this->UnvalidatedReferences).Num;
      pFVar7 = pFVar6 + (longlong)(int)uVar8 * 8;
      for (; pFVar6 != pFVar7; pFVar6 = pFVar6 + 8) {
        pFVar4->Object = *(UObject **)pFVar6;
        pFVar4 = pFVar4 + 1;
      }
      (this->UnvalidatedReferences).Num = (this->UnvalidatedReferences).Num + uVar8;
      if (((this->UnvalidatedReferences).Num == 0x20) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!UnvalidatedReferences.IsFull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x61a,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar11 = pFVar11 + 1;
    if (pFVar11 == (FReferenceArray *)puVar1) {
      (this->UnvalidatedArrays).Num = 0;
      return;
    }
  } while( true );
}

// DrainArraysFull @ 142026a80

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<4>_>
::DrainArraysFull(TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<4>_>
                  *this)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FImmutableReference *pFVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  FReferenceArray *pFVar10;
  FReferenceArray *pFVar11;
  
  pFVar11 = (this->UnvalidatedArrays).Entries;
  puVar1 = &this->field_0x148;
  pFVar10 = pFVar11;
  if (pFVar11 == (FReferenceArray *)puVar1) {
    (this->UnvalidatedArrays).Num = 0;
    return;
  }
  do {
    pFVar10 = pFVar10 + 1;
  } while (pFVar10 != (FReferenceArray *)puVar1);
  do {
    pFVar7 = (pFVar11->Array->AllocatorInstance).Data;
    uVar8 = pFVar11->Array->ArrayNum;
    if (((int)uVar8 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar8 != 0) {
      uVar9 = 0x20 - (this->UnvalidatedReferences).Num;
      pFVar6 = pFVar7;
      if (uVar9 <= uVar8) {
        do {
          if (((int)uVar8 < (int)uVar9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Idx <= Body.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x5cd,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (((int)uVar9 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar8 = uVar8 - uVar9;
          pFVar6 = pFVar7 + (longlong)(int)uVar9 * 8;
          if (((int)uVar8 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((0x20 - (this->UnvalidatedReferences).Num < uVar9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x660,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = pFVar7 + (longlong)(int)uVar9 * 8;
          pFVar4 = (this->UnvalidatedReferences).Entries + (this->UnvalidatedReferences).Num;
          for (; pFVar7 != pFVar2; pFVar7 = pFVar7 + 8) {
            pFVar4->Object = *(UObject **)pFVar7;
            pFVar4 = pFVar4 + 1;
          }
          (this->UnvalidatedReferences).Num = (this->UnvalidatedReferences).Num + uVar9;
          if (((this->UnvalidatedReferences).Num != 0x20) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("UnvalidatedReferences.IsFull()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x615,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          DrainUnvalidatedFull(this);
          uVar9 = 0x20;
          pFVar7 = pFVar6;
        } while (0x1f < uVar8);
      }
      if ((0x20 - (this->UnvalidatedReferences).Num < uVar8) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x660,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar4 = (this->UnvalidatedReferences).Entries + (this->UnvalidatedReferences).Num;
      pFVar7 = pFVar6 + (longlong)(int)uVar8 * 8;
      for (; pFVar6 != pFVar7; pFVar6 = pFVar6 + 8) {
        pFVar4->Object = *(UObject **)pFVar6;
        pFVar4 = pFVar4 + 1;
      }
      (this->UnvalidatedReferences).Num = (this->UnvalidatedReferences).Num + uVar8;
      if (((this->UnvalidatedReferences).Num == 0x20) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!UnvalidatedReferences.IsFull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x61a,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar11 = pFVar11 + 1;
    if (pFVar11 == (FReferenceArray *)puVar1) {
      (this->UnvalidatedArrays).Num = 0;
      return;
    }
  } while( true );
}

// DrainArraysFull @ 142026db0

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<5>_>
::DrainArraysFull(TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<5>_>
                  *this)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FImmutableReference *pFVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  FReferenceArray *pFVar10;
  FReferenceArray *pFVar11;
  
  pFVar11 = (this->UnvalidatedArrays).Entries;
  puVar1 = &this->field_0x148;
  pFVar10 = pFVar11;
  if (pFVar11 == (FReferenceArray *)puVar1) {
    (this->UnvalidatedArrays).Num = 0;
    return;
  }
  do {
    pFVar10 = pFVar10 + 1;
  } while (pFVar10 != (FReferenceArray *)puVar1);
  do {
    pFVar7 = (pFVar11->Array->AllocatorInstance).Data;
    uVar8 = pFVar11->Array->ArrayNum;
    if (((int)uVar8 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar8 != 0) {
      uVar9 = 0x20 - (this->UnvalidatedReferences).Num;
      pFVar6 = pFVar7;
      if (uVar9 <= uVar8) {
        do {
          if (((int)uVar8 < (int)uVar9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Idx <= Body.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x5cd,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (((int)uVar9 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar8 = uVar8 - uVar9;
          pFVar6 = pFVar7 + (longlong)(int)uVar9 * 8;
          if (((int)uVar8 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((0x20 - (this->UnvalidatedReferences).Num < uVar9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x660,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = pFVar7 + (longlong)(int)uVar9 * 8;
          pFVar4 = (this->UnvalidatedReferences).Entries + (this->UnvalidatedReferences).Num;
          for (; pFVar7 != pFVar2; pFVar7 = pFVar7 + 8) {
            pFVar4->Object = *(UObject **)pFVar7;
            pFVar4 = pFVar4 + 1;
          }
          (this->UnvalidatedReferences).Num = (this->UnvalidatedReferences).Num + uVar9;
          if (((this->UnvalidatedReferences).Num != 0x20) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("UnvalidatedReferences.IsFull()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x615,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          DrainUnvalidatedFull(this);
          uVar9 = 0x20;
          pFVar7 = pFVar6;
        } while (0x1f < uVar8);
      }
      if ((0x20 - (this->UnvalidatedReferences).Num < uVar8) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x660,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar4 = (this->UnvalidatedReferences).Entries + (this->UnvalidatedReferences).Num;
      pFVar7 = pFVar6 + (longlong)(int)uVar8 * 8;
      for (; pFVar6 != pFVar7; pFVar6 = pFVar6 + 8) {
        pFVar4->Object = *(UObject **)pFVar6;
        pFVar4 = pFVar4 + 1;
      }
      (this->UnvalidatedReferences).Num = (this->UnvalidatedReferences).Num + uVar8;
      if (((this->UnvalidatedReferences).Num == 0x20) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!UnvalidatedReferences.IsFull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x61a,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar11 = pFVar11 + 1;
    if (pFVar11 == (FReferenceArray *)puVar1) {
      (this->UnvalidatedArrays).Num = 0;
      return;
    }
  } while( true );
}

// DrainArraysFull @ 1420270e0

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
::DrainArraysFull(TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
                  *this)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FImmutableReference *pFVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  FReferenceArray *pFVar10;
  FReferenceArray *pFVar11;
  
  pFVar11 = (this->UnvalidatedArrays).Entries;
  puVar1 = &this->field_0x148;
  pFVar10 = pFVar11;
  if (pFVar11 == (FReferenceArray *)puVar1) {
    (this->UnvalidatedArrays).Num = 0;
    return;
  }
  do {
    pFVar10 = pFVar10 + 1;
  } while (pFVar10 != (FReferenceArray *)puVar1);
  do {
    pFVar7 = (pFVar11->Array->AllocatorInstance).Data;
    uVar8 = pFVar11->Array->ArrayNum;
    if (((int)uVar8 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar8 != 0) {
      uVar9 = 0x20 - (this->UnvalidatedReferences).Num;
      pFVar6 = pFVar7;
      if (uVar9 <= uVar8) {
        do {
          if (((int)uVar8 < (int)uVar9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Idx <= Body.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x5cd,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (((int)uVar9 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar8 = uVar8 - uVar9;
          pFVar6 = pFVar7 + (longlong)(int)uVar9 * 8;
          if (((int)uVar8 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((0x20 - (this->UnvalidatedReferences).Num < uVar9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x660,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = pFVar7 + (longlong)(int)uVar9 * 8;
          pFVar4 = (this->UnvalidatedReferences).Entries + (this->UnvalidatedReferences).Num;
          for (; pFVar7 != pFVar2; pFVar7 = pFVar7 + 8) {
            pFVar4->Object = *(UObject **)pFVar7;
            pFVar4 = pFVar4 + 1;
          }
          (this->UnvalidatedReferences).Num = (this->UnvalidatedReferences).Num + uVar9;
          if (((this->UnvalidatedReferences).Num != 0x20) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("UnvalidatedReferences.IsFull()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x615,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          DrainUnvalidatedFull(this);
          uVar9 = 0x20;
          pFVar7 = pFVar6;
        } while (0x1f < uVar8);
      }
      if ((0x20 - (this->UnvalidatedReferences).Num < uVar8) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x660,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar4 = (this->UnvalidatedReferences).Entries + (this->UnvalidatedReferences).Num;
      pFVar7 = pFVar6 + (longlong)(int)uVar8 * 8;
      for (; pFVar6 != pFVar7; pFVar6 = pFVar6 + 8) {
        pFVar4->Object = *(UObject **)pFVar6;
        pFVar4 = pFVar4 + 1;
      }
      (this->UnvalidatedReferences).Num = (this->UnvalidatedReferences).Num + uVar8;
      if (((this->UnvalidatedReferences).Num == 0x20) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!UnvalidatedReferences.IsFull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x61a,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar11 = pFVar11 + 1;
    if (pFVar11 == (FReferenceArray *)puVar1) {
      (this->UnvalidatedArrays).Num = 0;
      return;
    }
  } while( true );
}

// DrainArraysFull @ 142027410

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
::DrainArraysFull(TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
                  *this)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FImmutableReference *pFVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  FReferenceArray *pFVar10;
  FReferenceArray *pFVar11;
  
  pFVar11 = (this->UnvalidatedArrays).Entries;
  puVar1 = &this->field_0x148;
  pFVar10 = pFVar11;
  if (pFVar11 == (FReferenceArray *)puVar1) {
    (this->UnvalidatedArrays).Num = 0;
    return;
  }
  do {
    pFVar10 = pFVar10 + 1;
  } while (pFVar10 != (FReferenceArray *)puVar1);
  do {
    pFVar7 = (pFVar11->Array->AllocatorInstance).Data;
    uVar8 = pFVar11->Array->ArrayNum;
    if (((int)uVar8 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar8 != 0) {
      uVar9 = 0x20 - (this->UnvalidatedReferences).Num;
      pFVar6 = pFVar7;
      if (uVar9 <= uVar8) {
        do {
          if (((int)uVar8 < (int)uVar9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Idx <= Body.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x5cd,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (((int)uVar9 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar8 = uVar8 - uVar9;
          pFVar6 = pFVar7 + (longlong)(int)uVar9 * 8;
          if (((int)uVar8 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((0x20 - (this->UnvalidatedReferences).Num < uVar9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x660,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = pFVar7 + (longlong)(int)uVar9 * 8;
          pFVar4 = (this->UnvalidatedReferences).Entries + (this->UnvalidatedReferences).Num;
          for (; pFVar7 != pFVar2; pFVar7 = pFVar7 + 8) {
            pFVar4->Object = *(UObject **)pFVar7;
            pFVar4 = pFVar4 + 1;
          }
          (this->UnvalidatedReferences).Num = (this->UnvalidatedReferences).Num + uVar9;
          if (((this->UnvalidatedReferences).Num != 0x20) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("UnvalidatedReferences.IsFull()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x615,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          DrainUnvalidatedFull(this);
          uVar9 = 0x20;
          pFVar7 = pFVar6;
        } while (0x1f < uVar8);
      }
      if ((0x20 - (this->UnvalidatedReferences).Num < uVar8) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x660,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar4 = (this->UnvalidatedReferences).Entries + (this->UnvalidatedReferences).Num;
      pFVar7 = pFVar6 + (longlong)(int)uVar8 * 8;
      for (; pFVar6 != pFVar7; pFVar6 = pFVar6 + 8) {
        pFVar4->Object = *(UObject **)pFVar6;
        pFVar4 = pFVar4 + 1;
      }
      (this->UnvalidatedReferences).Num = (this->UnvalidatedReferences).Num + uVar8;
      if (((this->UnvalidatedReferences).Num == 0x20) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!UnvalidatedReferences.IsFull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x61a,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar11 = pFVar11 + 1;
    if (pFVar11 == (FReferenceArray *)puVar1) {
      (this->UnvalidatedArrays).Num = 0;
      return;
    }
  } while( true );
}

// DrainArraysFull @ 142027740

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
::DrainArraysFull(TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
                  *this)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FImmutableReference *pFVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  FReferenceArray *pFVar10;
  FReferenceArray *pFVar11;
  
  pFVar11 = (this->UnvalidatedArrays).Entries;
  puVar1 = &this->field_0x148;
  pFVar10 = pFVar11;
  if (pFVar11 == (FReferenceArray *)puVar1) {
    (this->UnvalidatedArrays).Num = 0;
    return;
  }
  do {
    pFVar10 = pFVar10 + 1;
  } while (pFVar10 != (FReferenceArray *)puVar1);
  do {
    pFVar7 = (pFVar11->Array->AllocatorInstance).Data;
    uVar8 = pFVar11->Array->ArrayNum;
    if (((int)uVar8 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar8 != 0) {
      uVar9 = 0x20 - (this->UnvalidatedReferences).Num;
      pFVar6 = pFVar7;
      if (uVar9 <= uVar8) {
        do {
          if (((int)uVar8 < (int)uVar9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Idx <= Body.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x5cd,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (((int)uVar9 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar8 = uVar8 - uVar9;
          pFVar6 = pFVar7 + (longlong)(int)uVar9 * 8;
          if (((int)uVar8 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((0x20 - (this->UnvalidatedReferences).Num < uVar9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x660,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = pFVar7 + (longlong)(int)uVar9 * 8;
          pFVar4 = (this->UnvalidatedReferences).Entries + (this->UnvalidatedReferences).Num;
          for (; pFVar7 != pFVar2; pFVar7 = pFVar7 + 8) {
            pFVar4->Object = *(UObject **)pFVar7;
            pFVar4 = pFVar4 + 1;
          }
          (this->UnvalidatedReferences).Num = (this->UnvalidatedReferences).Num + uVar9;
          if (((this->UnvalidatedReferences).Num != 0x20) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("UnvalidatedReferences.IsFull()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x615,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          DrainUnvalidatedFull(this);
          uVar9 = 0x20;
          pFVar7 = pFVar6;
        } while (0x1f < uVar8);
      }
      if ((0x20 - (this->UnvalidatedReferences).Num < uVar8) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x660,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar4 = (this->UnvalidatedReferences).Entries + (this->UnvalidatedReferences).Num;
      pFVar7 = pFVar6 + (longlong)(int)uVar8 * 8;
      for (; pFVar6 != pFVar7; pFVar6 = pFVar6 + 8) {
        pFVar4->Object = *(UObject **)pFVar6;
        pFVar4 = pFVar4 + 1;
      }
      (this->UnvalidatedReferences).Num = (this->UnvalidatedReferences).Num + uVar8;
      if (((this->UnvalidatedReferences).Num == 0x20) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!UnvalidatedReferences.IsFull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x61a,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar11 = pFVar11 + 1;
    if (pFVar11 == (FReferenceArray *)puVar1) {
      (this->UnvalidatedArrays).Num = 0;
      return;
    }
  } while( true );
}

// DrainArraysFull @ 142027a70

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<12>_>
::DrainArraysFull(TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<12>_>
                  *this)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FImmutableReference *pFVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  FReferenceArray *pFVar10;
  FReferenceArray *pFVar11;
  
  pFVar11 = (this->UnvalidatedArrays).Entries;
  puVar1 = &this->field_0x148;
  pFVar10 = pFVar11;
  if (pFVar11 == (FReferenceArray *)puVar1) {
    (this->UnvalidatedArrays).Num = 0;
    return;
  }
  do {
    pFVar10 = pFVar10 + 1;
  } while (pFVar10 != (FReferenceArray *)puVar1);
  do {
    pFVar7 = (pFVar11->Array->AllocatorInstance).Data;
    uVar8 = pFVar11->Array->ArrayNum;
    if (((int)uVar8 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar8 != 0) {
      uVar9 = 0x20 - (this->UnvalidatedReferences).Num;
      pFVar6 = pFVar7;
      if (uVar9 <= uVar8) {
        do {
          if (((int)uVar8 < (int)uVar9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Idx <= Body.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x5cd,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (((int)uVar9 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar8 = uVar8 - uVar9;
          pFVar6 = pFVar7 + (longlong)(int)uVar9 * 8;
          if (((int)uVar8 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((0x20 - (this->UnvalidatedReferences).Num < uVar9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x660,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = pFVar7 + (longlong)(int)uVar9 * 8;
          pFVar4 = (this->UnvalidatedReferences).Entries + (this->UnvalidatedReferences).Num;
          for (; pFVar7 != pFVar2; pFVar7 = pFVar7 + 8) {
            pFVar4->Object = *(UObject **)pFVar7;
            pFVar4 = pFVar4 + 1;
          }
          (this->UnvalidatedReferences).Num = (this->UnvalidatedReferences).Num + uVar9;
          if (((this->UnvalidatedReferences).Num != 0x20) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("UnvalidatedReferences.IsFull()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x615,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          DrainUnvalidatedFull(this);
          uVar9 = 0x20;
          pFVar7 = pFVar6;
        } while (0x1f < uVar8);
      }
      if ((0x20 - (this->UnvalidatedReferences).Num < uVar8) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x660,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar4 = (this->UnvalidatedReferences).Entries + (this->UnvalidatedReferences).Num;
      pFVar7 = pFVar6 + (longlong)(int)uVar8 * 8;
      for (; pFVar6 != pFVar7; pFVar6 = pFVar6 + 8) {
        pFVar4->Object = *(UObject **)pFVar6;
        pFVar4 = pFVar4 + 1;
      }
      (this->UnvalidatedReferences).Num = (this->UnvalidatedReferences).Num + uVar8;
      if (((this->UnvalidatedReferences).Num == 0x20) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!UnvalidatedReferences.IsFull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x61a,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar11 = pFVar11 + 1;
    if (pFVar11 == (FReferenceArray *)puVar1) {
      (this->UnvalidatedArrays).Num = 0;
      return;
    }
  } while( true );
}

// DrainArraysFull @ 142027da0

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<13>_>
::DrainArraysFull(TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<13>_>
                  *this)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FImmutableReference *pFVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  FReferenceArray *pFVar10;
  FReferenceArray *pFVar11;
  
  pFVar11 = (this->UnvalidatedArrays).Entries;
  puVar1 = &this->field_0x148;
  pFVar10 = pFVar11;
  if (pFVar11 == (FReferenceArray *)puVar1) {
    (this->UnvalidatedArrays).Num = 0;
    return;
  }
  do {
    pFVar10 = pFVar10 + 1;
  } while (pFVar10 != (FReferenceArray *)puVar1);
  do {
    pFVar7 = (pFVar11->Array->AllocatorInstance).Data;
    uVar8 = pFVar11->Array->ArrayNum;
    if (((int)uVar8 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar8 != 0) {
      uVar9 = 0x20 - (this->UnvalidatedReferences).Num;
      pFVar6 = pFVar7;
      if (uVar9 <= uVar8) {
        do {
          if (((int)uVar8 < (int)uVar9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Idx <= Body.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x5cd,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (((int)uVar9 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar8 = uVar8 - uVar9;
          pFVar6 = pFVar7 + (longlong)(int)uVar9 * 8;
          if (((int)uVar8 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((0x20 - (this->UnvalidatedReferences).Num < uVar9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x660,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = pFVar7 + (longlong)(int)uVar9 * 8;
          pFVar4 = (this->UnvalidatedReferences).Entries + (this->UnvalidatedReferences).Num;
          for (; pFVar7 != pFVar2; pFVar7 = pFVar7 + 8) {
            pFVar4->Object = *(UObject **)pFVar7;
            pFVar4 = pFVar4 + 1;
          }
          (this->UnvalidatedReferences).Num = (this->UnvalidatedReferences).Num + uVar9;
          if (((this->UnvalidatedReferences).Num != 0x20) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("UnvalidatedReferences.IsFull()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x615,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          DrainUnvalidatedFull(this);
          uVar9 = 0x20;
          pFVar7 = pFVar6;
        } while (0x1f < uVar8);
      }
      if ((0x20 - (this->UnvalidatedReferences).Num < uVar8) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x660,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar4 = (this->UnvalidatedReferences).Entries + (this->UnvalidatedReferences).Num;
      pFVar7 = pFVar6 + (longlong)(int)uVar8 * 8;
      for (; pFVar6 != pFVar7; pFVar6 = pFVar6 + 8) {
        pFVar4->Object = *(UObject **)pFVar6;
        pFVar4 = pFVar4 + 1;
      }
      (this->UnvalidatedReferences).Num = (this->UnvalidatedReferences).Num + uVar8;
      if (((this->UnvalidatedReferences).Num == 0x20) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!UnvalidatedReferences.IsFull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x61a,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar11 = pFVar11 + 1;
    if (pFVar11 == (FReferenceArray *)puVar1) {
      (this->UnvalidatedArrays).Num = 0;
      return;
    }
  } while( true );
}

// DrainArraysFull @ 1420280d0

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<1>_>
::DrainArraysFull(TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<1>_>
                  *this)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FMutableReference *pFVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  FReferenceArray *pFVar10;
  FReferenceArray *pFVar11;
  
  pFVar11 = (this->UnvalidatedArrays).Entries;
  puVar1 = &this->field_0x148;
  pFVar10 = pFVar11;
  if (pFVar11 == (FReferenceArray *)puVar1) {
    (this->UnvalidatedArrays).Num = 0;
    return;
  }
  do {
    pFVar10 = pFVar10 + 1;
  } while (pFVar10 != (FReferenceArray *)puVar1);
  do {
    pFVar7 = (pFVar11->Array->AllocatorInstance).Data;
    uVar8 = pFVar11->Array->ArrayNum;
    if (((int)uVar8 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar8 != 0) {
      uVar9 = 0x20 - (this->UnvalidatedReferences).Num;
      pFVar6 = pFVar7;
      if (uVar9 <= uVar8) {
        do {
          if (((int)uVar8 < (int)uVar9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Idx <= Body.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x5cd,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (((int)uVar9 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar8 = uVar8 - uVar9;
          pFVar6 = pFVar7 + (longlong)(int)uVar9 * 8;
          if (((int)uVar8 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((0x20 - (this->UnvalidatedReferences).Num < uVar9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x660,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar4 = (this->UnvalidatedReferences).Entries + (this->UnvalidatedReferences).Num;
          pFVar2 = pFVar7 + (longlong)(int)uVar9 * 8;
          for (; pFVar7 != pFVar2; pFVar7 = pFVar7 + 8) {
            pFVar4->Object = (UObject **)pFVar7;
            pFVar4 = pFVar4 + 1;
          }
          (this->UnvalidatedReferences).Num = (this->UnvalidatedReferences).Num + uVar9;
          if (((this->UnvalidatedReferences).Num != 0x20) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("UnvalidatedReferences.IsFull()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x615,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          DrainUnvalidatedFull(this);
          uVar9 = 0x20;
          pFVar7 = pFVar6;
        } while (0x1f < uVar8);
      }
      if ((0x20 - (this->UnvalidatedReferences).Num < uVar8) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x660,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar4 = (this->UnvalidatedReferences).Entries + (this->UnvalidatedReferences).Num;
      pFVar7 = pFVar6 + (longlong)(int)uVar8 * 8;
      for (; pFVar6 != pFVar7; pFVar6 = pFVar6 + 8) {
        pFVar4->Object = (UObject **)pFVar6;
        pFVar4 = pFVar4 + 1;
      }
      (this->UnvalidatedReferences).Num = (this->UnvalidatedReferences).Num + uVar8;
      if (((this->UnvalidatedReferences).Num == 0x20) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!UnvalidatedReferences.IsFull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x61a,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar11 = pFVar11 + 1;
    if (pFVar11 == (FReferenceArray *)puVar1) {
      (this->UnvalidatedArrays).Num = 0;
      return;
    }
  } while( true );
}

// DrainArraysFull @ 142028400

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<4>_>
::DrainArraysFull(TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<4>_>
                  *this)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FMutableReference *pFVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  FReferenceArray *pFVar10;
  FReferenceArray *pFVar11;
  
  pFVar11 = (this->UnvalidatedArrays).Entries;
  puVar1 = &this->field_0x148;
  pFVar10 = pFVar11;
  if (pFVar11 == (FReferenceArray *)puVar1) {
    (this->UnvalidatedArrays).Num = 0;
    return;
  }
  do {
    pFVar10 = pFVar10 + 1;
  } while (pFVar10 != (FReferenceArray *)puVar1);
  do {
    pFVar7 = (pFVar11->Array->AllocatorInstance).Data;
    uVar8 = pFVar11->Array->ArrayNum;
    if (((int)uVar8 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar8 != 0) {
      uVar9 = 0x20 - (this->UnvalidatedReferences).Num;
      pFVar6 = pFVar7;
      if (uVar9 <= uVar8) {
        do {
          if (((int)uVar8 < (int)uVar9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Idx <= Body.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x5cd,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (((int)uVar9 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar8 = uVar8 - uVar9;
          pFVar6 = pFVar7 + (longlong)(int)uVar9 * 8;
          if (((int)uVar8 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((0x20 - (this->UnvalidatedReferences).Num < uVar9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x660,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar4 = (this->UnvalidatedReferences).Entries + (this->UnvalidatedReferences).Num;
          pFVar2 = pFVar7 + (longlong)(int)uVar9 * 8;
          for (; pFVar7 != pFVar2; pFVar7 = pFVar7 + 8) {
            pFVar4->Object = (UObject **)pFVar7;
            pFVar4 = pFVar4 + 1;
          }
          (this->UnvalidatedReferences).Num = (this->UnvalidatedReferences).Num + uVar9;
          if (((this->UnvalidatedReferences).Num != 0x20) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("UnvalidatedReferences.IsFull()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x615,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          DrainUnvalidatedFull(this);
          uVar9 = 0x20;
          pFVar7 = pFVar6;
        } while (0x1f < uVar8);
      }
      if ((0x20 - (this->UnvalidatedReferences).Num < uVar8) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x660,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar4 = (this->UnvalidatedReferences).Entries + (this->UnvalidatedReferences).Num;
      pFVar7 = pFVar6 + (longlong)(int)uVar8 * 8;
      for (; pFVar6 != pFVar7; pFVar6 = pFVar6 + 8) {
        pFVar4->Object = (UObject **)pFVar6;
        pFVar4 = pFVar4 + 1;
      }
      (this->UnvalidatedReferences).Num = (this->UnvalidatedReferences).Num + uVar8;
      if (((this->UnvalidatedReferences).Num == 0x20) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!UnvalidatedReferences.IsFull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x61a,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar11 = pFVar11 + 1;
    if (pFVar11 == (FReferenceArray *)puVar1) {
      (this->UnvalidatedArrays).Num = 0;
      return;
    }
  } while( true );
}

// DrainArraysFull @ 142028730

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<5>_>
::DrainArraysFull(TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<5>_>
                  *this)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FMutableReference *pFVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  FReferenceArray *pFVar10;
  FReferenceArray *pFVar11;
  
  pFVar11 = (this->UnvalidatedArrays).Entries;
  puVar1 = &this->field_0x148;
  pFVar10 = pFVar11;
  if (pFVar11 == (FReferenceArray *)puVar1) {
    (this->UnvalidatedArrays).Num = 0;
    return;
  }
  do {
    pFVar10 = pFVar10 + 1;
  } while (pFVar10 != (FReferenceArray *)puVar1);
  do {
    pFVar7 = (pFVar11->Array->AllocatorInstance).Data;
    uVar8 = pFVar11->Array->ArrayNum;
    if (((int)uVar8 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar8 != 0) {
      uVar9 = 0x20 - (this->UnvalidatedReferences).Num;
      pFVar6 = pFVar7;
      if (uVar9 <= uVar8) {
        do {
          if (((int)uVar8 < (int)uVar9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Idx <= Body.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x5cd,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (((int)uVar9 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar8 = uVar8 - uVar9;
          pFVar6 = pFVar7 + (longlong)(int)uVar9 * 8;
          if (((int)uVar8 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((0x20 - (this->UnvalidatedReferences).Num < uVar9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x660,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar4 = (this->UnvalidatedReferences).Entries + (this->UnvalidatedReferences).Num;
          pFVar2 = pFVar7 + (longlong)(int)uVar9 * 8;
          for (; pFVar7 != pFVar2; pFVar7 = pFVar7 + 8) {
            pFVar4->Object = (UObject **)pFVar7;
            pFVar4 = pFVar4 + 1;
          }
          (this->UnvalidatedReferences).Num = (this->UnvalidatedReferences).Num + uVar9;
          if (((this->UnvalidatedReferences).Num != 0x20) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("UnvalidatedReferences.IsFull()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x615,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          DrainUnvalidatedFull(this);
          uVar9 = 0x20;
          pFVar7 = pFVar6;
        } while (0x1f < uVar8);
      }
      if ((0x20 - (this->UnvalidatedReferences).Num < uVar8) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x660,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar4 = (this->UnvalidatedReferences).Entries + (this->UnvalidatedReferences).Num;
      pFVar7 = pFVar6 + (longlong)(int)uVar8 * 8;
      for (; pFVar6 != pFVar7; pFVar6 = pFVar6 + 8) {
        pFVar4->Object = (UObject **)pFVar6;
        pFVar4 = pFVar4 + 1;
      }
      (this->UnvalidatedReferences).Num = (this->UnvalidatedReferences).Num + uVar8;
      if (((this->UnvalidatedReferences).Num == 0x20) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!UnvalidatedReferences.IsFull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x61a,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar11 = pFVar11 + 1;
    if (pFVar11 == (FReferenceArray *)puVar1) {
      (this->UnvalidatedArrays).Num = 0;
      return;
    }
  } while( true );
}

// DrainArraysFull @ 142028a60

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<8>_>
::DrainArraysFull(TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<8>_>
                  *this)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FMutableReference *pFVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  FReferenceArray *pFVar10;
  FReferenceArray *pFVar11;
  
  pFVar11 = (this->UnvalidatedArrays).Entries;
  puVar1 = &this->field_0x148;
  pFVar10 = pFVar11;
  if (pFVar11 == (FReferenceArray *)puVar1) {
    (this->UnvalidatedArrays).Num = 0;
    return;
  }
  do {
    pFVar10 = pFVar10 + 1;
  } while (pFVar10 != (FReferenceArray *)puVar1);
  do {
    pFVar7 = (pFVar11->Array->AllocatorInstance).Data;
    uVar8 = pFVar11->Array->ArrayNum;
    if (((int)uVar8 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar8 != 0) {
      uVar9 = 0x20 - (this->UnvalidatedReferences).Num;
      pFVar6 = pFVar7;
      if (uVar9 <= uVar8) {
        do {
          if (((int)uVar8 < (int)uVar9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Idx <= Body.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x5cd,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (((int)uVar9 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar8 = uVar8 - uVar9;
          pFVar6 = pFVar7 + (longlong)(int)uVar9 * 8;
          if (((int)uVar8 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((0x20 - (this->UnvalidatedReferences).Num < uVar9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x660,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar4 = (this->UnvalidatedReferences).Entries + (this->UnvalidatedReferences).Num;
          pFVar2 = pFVar7 + (longlong)(int)uVar9 * 8;
          for (; pFVar7 != pFVar2; pFVar7 = pFVar7 + 8) {
            pFVar4->Object = (UObject **)pFVar7;
            pFVar4 = pFVar4 + 1;
          }
          (this->UnvalidatedReferences).Num = (this->UnvalidatedReferences).Num + uVar9;
          if (((this->UnvalidatedReferences).Num != 0x20) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("UnvalidatedReferences.IsFull()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x615,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          DrainUnvalidatedFull(this);
          uVar9 = 0x20;
          pFVar7 = pFVar6;
        } while (0x1f < uVar8);
      }
      if ((0x20 - (this->UnvalidatedReferences).Num < uVar8) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x660,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar4 = (this->UnvalidatedReferences).Entries + (this->UnvalidatedReferences).Num;
      pFVar7 = pFVar6 + (longlong)(int)uVar8 * 8;
      for (; pFVar6 != pFVar7; pFVar6 = pFVar6 + 8) {
        pFVar4->Object = (UObject **)pFVar6;
        pFVar4 = pFVar4 + 1;
      }
      (this->UnvalidatedReferences).Num = (this->UnvalidatedReferences).Num + uVar8;
      if (((this->UnvalidatedReferences).Num == 0x20) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!UnvalidatedReferences.IsFull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x61a,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar11 = pFVar11 + 1;
    if (pFVar11 == (FReferenceArray *)puVar1) {
      (this->UnvalidatedArrays).Num = 0;
      return;
    }
  } while( true );
}

// DrainArraysFull @ 142028d90

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<9>_>
::DrainArraysFull(TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<9>_>
                  *this)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FMutableReference *pFVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  FReferenceArray *pFVar10;
  FReferenceArray *pFVar11;
  
  pFVar11 = (this->UnvalidatedArrays).Entries;
  puVar1 = &this->field_0x148;
  pFVar10 = pFVar11;
  if (pFVar11 == (FReferenceArray *)puVar1) {
    (this->UnvalidatedArrays).Num = 0;
    return;
  }
  do {
    pFVar10 = pFVar10 + 1;
  } while (pFVar10 != (FReferenceArray *)puVar1);
  do {
    pFVar7 = (pFVar11->Array->AllocatorInstance).Data;
    uVar8 = pFVar11->Array->ArrayNum;
    if (((int)uVar8 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar8 != 0) {
      uVar9 = 0x20 - (this->UnvalidatedReferences).Num;
      pFVar6 = pFVar7;
      if (uVar9 <= uVar8) {
        do {
          if (((int)uVar8 < (int)uVar9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Idx <= Body.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x5cd,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (((int)uVar9 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar8 = uVar8 - uVar9;
          pFVar6 = pFVar7 + (longlong)(int)uVar9 * 8;
          if (((int)uVar8 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((0x20 - (this->UnvalidatedReferences).Num < uVar9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x660,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar4 = (this->UnvalidatedReferences).Entries + (this->UnvalidatedReferences).Num;
          pFVar2 = pFVar7 + (longlong)(int)uVar9 * 8;
          for (; pFVar7 != pFVar2; pFVar7 = pFVar7 + 8) {
            pFVar4->Object = (UObject **)pFVar7;
            pFVar4 = pFVar4 + 1;
          }
          (this->UnvalidatedReferences).Num = (this->UnvalidatedReferences).Num + uVar9;
          if (((this->UnvalidatedReferences).Num != 0x20) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("UnvalidatedReferences.IsFull()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x615,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          DrainUnvalidatedFull(this);
          uVar9 = 0x20;
          pFVar7 = pFVar6;
        } while (0x1f < uVar8);
      }
      if ((0x20 - (this->UnvalidatedReferences).Num < uVar8) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x660,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar4 = (this->UnvalidatedReferences).Entries + (this->UnvalidatedReferences).Num;
      pFVar7 = pFVar6 + (longlong)(int)uVar8 * 8;
      for (; pFVar6 != pFVar7; pFVar6 = pFVar6 + 8) {
        pFVar4->Object = (UObject **)pFVar6;
        pFVar4 = pFVar4 + 1;
      }
      (this->UnvalidatedReferences).Num = (this->UnvalidatedReferences).Num + uVar8;
      if (((this->UnvalidatedReferences).Num == 0x20) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!UnvalidatedReferences.IsFull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x61a,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar11 = pFVar11 + 1;
    if (pFVar11 == (FReferenceArray *)puVar1) {
      (this->UnvalidatedArrays).Num = 0;
      return;
    }
  } while( true );
}

// DrainArraysFull @ 1420290c0

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<0>_>
::DrainArraysFull(TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<0>_>
                  *this)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FMutableReference *pFVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  FReferenceArray *pFVar10;
  FReferenceArray *pFVar11;
  
  pFVar11 = (this->UnvalidatedArrays).Entries;
  puVar1 = &this->field_0x148;
  pFVar10 = pFVar11;
  if (pFVar11 == (FReferenceArray *)puVar1) {
    (this->UnvalidatedArrays).Num = 0;
    return;
  }
  do {
    pFVar10 = pFVar10 + 1;
  } while (pFVar10 != (FReferenceArray *)puVar1);
  do {
    pFVar7 = (pFVar11->Array->AllocatorInstance).Data;
    uVar8 = pFVar11->Array->ArrayNum;
    if (((int)uVar8 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar8 != 0) {
      uVar9 = 0x20 - (this->UnvalidatedReferences).Num;
      pFVar6 = pFVar7;
      if (uVar9 <= uVar8) {
        do {
          if (((int)uVar8 < (int)uVar9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Idx <= Body.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x5cd,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (((int)uVar9 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar8 = uVar8 - uVar9;
          pFVar6 = pFVar7 + (longlong)(int)uVar9 * 8;
          if (((int)uVar8 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((0x20 - (this->UnvalidatedReferences).Num < uVar9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x660,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar4 = (this->UnvalidatedReferences).Entries + (this->UnvalidatedReferences).Num;
          pFVar2 = pFVar7 + (longlong)(int)uVar9 * 8;
          for (; pFVar7 != pFVar2; pFVar7 = pFVar7 + 8) {
            pFVar4->Object = (UObject **)pFVar7;
            pFVar4 = pFVar4 + 1;
          }
          (this->UnvalidatedReferences).Num = (this->UnvalidatedReferences).Num + uVar9;
          if (((this->UnvalidatedReferences).Num != 0x20) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("UnvalidatedReferences.IsFull()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x615,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          DrainUnvalidatedFull(this);
          uVar9 = 0x20;
          pFVar7 = pFVar6;
        } while (0x1f < uVar8);
      }
      if ((0x20 - (this->UnvalidatedReferences).Num < uVar8) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x660,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar4 = (this->UnvalidatedReferences).Entries + (this->UnvalidatedReferences).Num;
      pFVar7 = pFVar6 + (longlong)(int)uVar8 * 8;
      for (; pFVar6 != pFVar7; pFVar6 = pFVar6 + 8) {
        pFVar4->Object = (UObject **)pFVar6;
        pFVar4 = pFVar4 + 1;
      }
      (this->UnvalidatedReferences).Num = (this->UnvalidatedReferences).Num + uVar8;
      if (((this->UnvalidatedReferences).Num == 0x20) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!UnvalidatedReferences.IsFull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x61a,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar11 = pFVar11 + 1;
    if (pFVar11 == (FReferenceArray *)puVar1) {
      (this->UnvalidatedArrays).Num = 0;
      return;
    }
  } while( true );
}

// DrainArraysFull @ 1420293f0

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<12>_>
::DrainArraysFull(TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<12>_>
                  *this)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FMutableReference *pFVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  FReferenceArray *pFVar10;
  FReferenceArray *pFVar11;
  
  pFVar11 = (this->UnvalidatedArrays).Entries;
  puVar1 = &this->field_0x148;
  pFVar10 = pFVar11;
  if (pFVar11 == (FReferenceArray *)puVar1) {
    (this->UnvalidatedArrays).Num = 0;
    return;
  }
  do {
    pFVar10 = pFVar10 + 1;
  } while (pFVar10 != (FReferenceArray *)puVar1);
  do {
    pFVar7 = (pFVar11->Array->AllocatorInstance).Data;
    uVar8 = pFVar11->Array->ArrayNum;
    if (((int)uVar8 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar8 != 0) {
      uVar9 = 0x20 - (this->UnvalidatedReferences).Num;
      pFVar6 = pFVar7;
      if (uVar9 <= uVar8) {
        do {
          if (((int)uVar8 < (int)uVar9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Idx <= Body.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x5cd,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (((int)uVar9 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar8 = uVar8 - uVar9;
          pFVar6 = pFVar7 + (longlong)(int)uVar9 * 8;
          if (((int)uVar8 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((0x20 - (this->UnvalidatedReferences).Num < uVar9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x660,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar4 = (this->UnvalidatedReferences).Entries + (this->UnvalidatedReferences).Num;
          pFVar2 = pFVar7 + (longlong)(int)uVar9 * 8;
          for (; pFVar7 != pFVar2; pFVar7 = pFVar7 + 8) {
            pFVar4->Object = (UObject **)pFVar7;
            pFVar4 = pFVar4 + 1;
          }
          (this->UnvalidatedReferences).Num = (this->UnvalidatedReferences).Num + uVar9;
          if (((this->UnvalidatedReferences).Num != 0x20) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("UnvalidatedReferences.IsFull()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x615,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          DrainUnvalidatedFull(this);
          uVar9 = 0x20;
          pFVar7 = pFVar6;
        } while (0x1f < uVar8);
      }
      if ((0x20 - (this->UnvalidatedReferences).Num < uVar8) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x660,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar4 = (this->UnvalidatedReferences).Entries + (this->UnvalidatedReferences).Num;
      pFVar7 = pFVar6 + (longlong)(int)uVar8 * 8;
      for (; pFVar6 != pFVar7; pFVar6 = pFVar6 + 8) {
        pFVar4->Object = (UObject **)pFVar6;
        pFVar4 = pFVar4 + 1;
      }
      (this->UnvalidatedReferences).Num = (this->UnvalidatedReferences).Num + uVar8;
      if (((this->UnvalidatedReferences).Num == 0x20) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!UnvalidatedReferences.IsFull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x61a,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar11 = pFVar11 + 1;
    if (pFVar11 == (FReferenceArray *)puVar1) {
      (this->UnvalidatedArrays).Num = 0;
      return;
    }
  } while( true );
}

// DrainArraysFull @ 142029720

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<13>_>
::DrainArraysFull(TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<13>_>
                  *this)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FMutableReference *pFVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  FReferenceArray *pFVar10;
  FReferenceArray *pFVar11;
  
  pFVar11 = (this->UnvalidatedArrays).Entries;
  puVar1 = &this->field_0x148;
  pFVar10 = pFVar11;
  if (pFVar11 == (FReferenceArray *)puVar1) {
    (this->UnvalidatedArrays).Num = 0;
    return;
  }
  do {
    pFVar10 = pFVar10 + 1;
  } while (pFVar10 != (FReferenceArray *)puVar1);
  do {
    pFVar7 = (pFVar11->Array->AllocatorInstance).Data;
    uVar8 = pFVar11->Array->ArrayNum;
    if (((int)uVar8 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar8 != 0) {
      uVar9 = 0x20 - (this->UnvalidatedReferences).Num;
      pFVar6 = pFVar7;
      if (uVar9 <= uVar8) {
        do {
          if (((int)uVar8 < (int)uVar9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Idx <= Body.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x5cd,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (((int)uVar9 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar8 = uVar8 - uVar9;
          pFVar6 = pFVar7 + (longlong)(int)uVar9 * 8;
          if (((int)uVar8 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((0x20 - (this->UnvalidatedReferences).Num < uVar9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x660,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar4 = (this->UnvalidatedReferences).Entries + (this->UnvalidatedReferences).Num;
          pFVar2 = pFVar7 + (longlong)(int)uVar9 * 8;
          for (; pFVar7 != pFVar2; pFVar7 = pFVar7 + 8) {
            pFVar4->Object = (UObject **)pFVar7;
            pFVar4 = pFVar4 + 1;
          }
          (this->UnvalidatedReferences).Num = (this->UnvalidatedReferences).Num + uVar9;
          if (((this->UnvalidatedReferences).Num != 0x20) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("UnvalidatedReferences.IsFull()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x615,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          DrainUnvalidatedFull(this);
          uVar9 = 0x20;
          pFVar7 = pFVar6;
        } while (0x1f < uVar8);
      }
      if ((0x20 - (this->UnvalidatedReferences).Num < uVar8) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x660,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar4 = (this->UnvalidatedReferences).Entries + (this->UnvalidatedReferences).Num;
      pFVar7 = pFVar6 + (longlong)(int)uVar8 * 8;
      for (; pFVar6 != pFVar7; pFVar6 = pFVar6 + 8) {
        pFVar4->Object = (UObject **)pFVar6;
        pFVar4 = pFVar4 + 1;
      }
      (this->UnvalidatedReferences).Num = (this->UnvalidatedReferences).Num + uVar8;
      if (((this->UnvalidatedReferences).Num == 0x20) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!UnvalidatedReferences.IsFull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x61a,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar11 = pFVar11 + 1;
    if (pFVar11 == (FReferenceArray *)puVar1) {
      (this->UnvalidatedArrays).Num = 0;
      return;
    }
  } while( true );
}

// DrainStridedArraysFull @ 142029d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
::DrainStridedArraysFull
          (TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
           *this)

{
  FImmutableReference *pFVar1;
  FStridedReferenceArray *pFVar2;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
  *pTVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  undefined8 uVar8;
  FScriptArray *pFVar9;
  undefined1 auVar10 [16];
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
  *this_00;
  ulonglong *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  FStridedReferenceArray *pFVar14;
  longlong lVar15;
  undefined1 (*pauVar16) [16];
  uint uVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auStack_3f0 [8];
  undefined1 auStack_3e8 [4];
  undefined1 auStack_3e4 [4];
  longlong lStack_3e0;
  uint auStack_3d8 [2];
  longlong lStack_3d0;
  uint auStack_3c8 [2];
  longlong lStack_3c0;
  undefined4 uStack_3b8;
  undefined1 auStack_3b4 [4];
  undefined1 auStack_3b0 [8];
  undefined1 auStack_3a8 [4];
  undefined1 auStack_3a4 [4];
  undefined1 auStack_3a0 [8];
  undefined1 auStack_398 [4];
  undefined1 auStack_394 [4];
  undefined1 auStack_390 [8];
  undefined1 auStack_388 [4];
  undefined1 auStack_384 [4];
  undefined1 auStack_380 [8];
  undefined1 auStack_378 [4];
  undefined1 auStack_374 [52];
  undefined8 uStack_340;
  undefined1 auStack_338 [32];
  FScriptArray *local_318;
  undefined8 uStack_310;
  undefined1 local_308 [16];
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
  *local_2f8;
  undefined8 uStack_2f0;
  undefined1 *local_2e8;
  undefined1 *local_2e0;
  undefined1 *local_2d8;
  undefined1 *local_2d0;
  undefined1 *local_2c8;
  undefined1 *local_2c0;
  undefined1 *local_2b8;
  undefined1 *local_2b0;
  undefined1 *local_2a8;
  undefined1 *local_2a0;
  undefined1 *local_298;
  undefined1 *local_290;
  undefined1 *local_288;
  undefined1 *local_280;
  undefined1 *local_278;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  ulonglong local_248;
  uint auStack_240 [126];
  ulonglong local_48 [4];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_338;
  local_2f8 = this;
  local_2d0 = auStack_3b4 + -(longlong)this;
  local_2c8 = auStack_3b0 + -(longlong)this;
  local_2c0 = auStack_3a8 + -(longlong)this;
  local_2b8 = auStack_3a4 + -(longlong)this;
  local_2b0 = auStack_3a0 + -(longlong)this;
  local_2a8 = auStack_398 + -(longlong)this;
  local_2a0 = auStack_394 + -(longlong)this;
  local_298 = auStack_390 + -(longlong)this;
  local_290 = auStack_388 + -(longlong)this;
  local_288 = auStack_384 + -(longlong)this;
  local_280 = auStack_380 + -(longlong)this;
  local_278 = auStack_378 + -(longlong)this;
  local_308._0_8_ = auStack_374 + -(longlong)this;
  local_2e8 = auStack_3f0 + -(longlong)this;
  local_2e0 = auStack_3e8 + -(longlong)this;
  local_2d8 = auStack_3e4 + -(longlong)this;
  lVar15 = 4;
  pFVar14 = (this->UnvalidatedStridedArrays).Entries + 2;
  do {
    uVar8 = *(undefined8 *)&pFVar14[-2].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[-2].Array)->field_0x8;
    *(ulonglong *)((longlong)&pFVar14->Array + (longlong)local_2e8) =
         *(longlong *)pFVar14[-2].Array + (*(ulonglong *)&pFVar14[-2].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar14->Array + (longlong)local_2e0) = uVar5;
    *(uint *)((longlong)&pFVar14->Array + (longlong)local_2d8) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    uStack_310._2_4_ = (uint)((ulonglong)*(undefined8 *)&pFVar14[-1].Layout >> 0x10);
    uVar5 = *(undefined4 *)&(pFVar14[-1].Array)->field_0x8;
    *(ulonglong *)(((longlong)&lStack_3e0 - (longlong)this) + (longlong)pFVar14) =
         *(longlong *)pFVar14[-1].Array + (*(ulonglong *)&pFVar14[-1].Layout & 0xffff) * 8;
    *(undefined4 *)(((longlong)auStack_3d8 - (longlong)this) + (longlong)pFVar14) = uVar5;
    *(uint *)((longlong)auStack_3d8 + (4 - (longlong)this) + (longlong)pFVar14) =
         uStack_310._2_4_ & 0xffff;
    uStack_310._2_4_ = (uint)((ulonglong)*(undefined8 *)&pFVar14->Layout >> 0x10);
    uVar5 = *(undefined4 *)&pFVar14->Array->field_0x8;
    *(ulonglong *)(((longlong)&lStack_3d0 - (longlong)this) + (longlong)pFVar14) =
         *(longlong *)pFVar14->Array + (*(ulonglong *)&pFVar14->Layout & 0xffff) * 8;
    *(undefined4 *)(((longlong)auStack_3c8 - (longlong)this) + (longlong)pFVar14) = uVar5;
    *(uint *)((longlong)auStack_3c8 + (4 - (longlong)this) + (longlong)pFVar14) =
         uStack_310._2_4_ & 0xffff;
    uStack_310._2_4_ = (uint)((ulonglong)*(undefined8 *)&pFVar14[1].Layout >> 0x10);
    uVar5 = *(undefined4 *)&(pFVar14[1].Array)->field_0x8;
    *(ulonglong *)((longlong)pFVar14 + ((longlong)&lStack_3c0 - (longlong)this)) =
         *(longlong *)pFVar14[1].Array + (*(ulonglong *)&pFVar14[1].Layout & 0xffff) * 8;
    *(undefined4 *)(((longlong)&uStack_3b8 - (longlong)this) + (longlong)pFVar14) = uVar5;
    *(uint *)((longlong)&pFVar14->Array + (longlong)local_2d0) = uStack_310._2_4_ & 0xffff;
    uVar8 = *(undefined8 *)&pFVar14[2].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[2].Array)->field_0x8;
    *(ulonglong *)((longlong)&pFVar14->Array + (longlong)local_2c8) =
         *(longlong *)pFVar14[2].Array + (*(ulonglong *)&pFVar14[2].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar14->Array + (longlong)local_2c0) = uVar5;
    *(uint *)((longlong)&pFVar14->Array + (longlong)local_2b8) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    uVar8 = *(undefined8 *)&pFVar14[3].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[3].Array)->field_0x8;
    pFVar2 = pFVar14 + 8;
    *(ulonglong *)((longlong)&pFVar2[-8].Array + (longlong)local_2b0) =
         *(longlong *)pFVar14[3].Array + (*(ulonglong *)&pFVar14[3].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar2[-8].Array + (longlong)local_2a8) = uVar5;
    *(uint *)((longlong)&pFVar2[-8].Array + (longlong)local_2a0) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    uVar8 = *(undefined8 *)&pFVar14[4].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[4].Array)->field_0x8;
    *(ulonglong *)((longlong)&pFVar2[-8].Array + (longlong)local_298) =
         *(longlong *)pFVar14[4].Array + (*(ulonglong *)&pFVar14[4].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar2[-8].Array + (longlong)local_290) = uVar5;
    *(uint *)((longlong)&pFVar2[-8].Array + (longlong)local_288) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    pFVar9 = pFVar14[5].Array;
    uVar8 = *(undefined8 *)&pFVar14[5].Layout;
    uVar5 = *(undefined4 *)&pFVar9->field_0x8;
    *(ulonglong *)((longlong)&pFVar2[-8].Array + (longlong)local_280) =
         *(longlong *)pFVar9 + (*(ulonglong *)&pFVar14[5].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar2[-8].Array + (longlong)local_278) = uVar5;
    *(uint *)((longlong)&pFVar2[-8].Array + local_308._0_8_) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    lVar15 = lVar15 + -1;
    pFVar14 = pFVar2;
  } while (lVar15 != 0);
  this_00 = local_2f8;
  puVar11 = &local_248;
  do {
    puVar11 = puVar11 + 2;
  } while (puVar11 != local_48);
  pauVar16 = (undefined1 (*) [16])&local_248;
  local_318 = pFVar9;
  uStack_310 = uVar8;
  do {
    local_308 = *pauVar16;
    if (*(int *)(*pauVar16 + 8) != 0) {
      uVar13 = 0x20 - (this_00->UnvalidatedReferences).Num;
      puVar12 = local_308._0_8_;
      uVar17 = local_308._8_4_;
      local_258 = local_308;
      if (uVar13 <= *(uint *)(*pauVar16 + 8)) {
        iVar18 = local_308._12_4_;
        bVar20 = SBORROW4(uVar13,uVar17);
        iVar6 = uVar13 - uVar17;
        bVar19 = uVar13 == uVar17;
        local_268 = local_308;
        do {
          auVar10 = local_268;
          local_308 = local_268;
          if (!bVar19 && bVar20 == iVar6 < 0) {
            uStack_340 = 0x14202a1ea;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Idx <= Body.Num",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x5d5,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          if (iVar18 == 0) {
            uStack_340 = 0x14202a215;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Body.Stride > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x5d6,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          uVar17 = uVar17 - uVar13;
          uStack_2f0._4_4_ = auVar10._12_4_;
          local_2f8 = auVar10._0_8_;
          uStack_2f0._0_4_ = uVar13;
          local_308._8_4_ = uVar17;
          puVar12 = puVar12 + iVar18 * uVar13;
          local_308._0_8_ = puVar12;
          if (0x20 - (this_00->UnvalidatedReferences).Num < uVar13) {
            uStack_340 = 0x14202a26b;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x660,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          pFVar1 = (this_00->UnvalidatedReferences).Entries + (this_00->UnvalidatedReferences).Num;
          for (pTVar3 = local_2f8;
              pTVar3 != (TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
                         *)((longlong)local_2f8 + (ulonglong)(local_2f8._12_4_ * uVar13) * 8);
              pTVar3 = (TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
                        *)((longlong)pTVar3 + (uStack_2f0 >> 0x20) * 8)) {
            pFVar1->Object = *(UObject **)pTVar3;
            pFVar1 = pFVar1 + 1;
          }
          (this_00->UnvalidatedReferences).Num = (this_00->UnvalidatedReferences).Num + uVar13;
          if ((this_00->UnvalidatedReferences).Num != 0x20) {
            uStack_340 = 0x14202a2f5;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("UnvalidatedReferences.IsFull()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x615,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          uStack_340 = 0x14202a303;
          DrainUnvalidatedFull(this_00);
          uVar13 = 0x20;
          local_268 = local_308;
          bVar20 = SBORROW4(0x20,uVar17);
          iVar6 = 0x20 - uVar17;
          bVar19 = iVar6 == 0;
        } while (0x20 < uVar17 || bVar19);
      }
      auVar10 = local_308;
      local_268 = local_308;
      if (0x20 - (this_00->UnvalidatedReferences).Num < uVar17) {
        uStack_340 = 0x14202a357;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                            ,0x660,L"");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar1 = (this_00->UnvalidatedReferences).Entries + (this_00->UnvalidatedReferences).Num;
      puVar4 = puVar12 + uVar17 * auVar10._12_4_;
      for (; puVar12 != puVar4; puVar12 = puVar12 + (auVar10._8_8_ >> 0x20)) {
        pFVar1->Object = (UObject *)*puVar12;
        pFVar1 = pFVar1 + 1;
      }
      (this_00->UnvalidatedReferences).Num = (this_00->UnvalidatedReferences).Num + uVar17;
      if ((this_00->UnvalidatedReferences).Num == 0x20) {
        uStack_340 = 0x14202a3e6;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("!UnvalidatedReferences.IsFull()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                            ,0x61a,L"");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
    }
    pauVar16 = pauVar16 + 1;
  } while (pauVar16 != (undefined1 (*) [16])local_48);
  (this_00->UnvalidatedStridedArrays).Num = 0;
  return;
}

// DrainStridedArraysFull @ 14202a450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
::DrainStridedArraysFull
          (TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
           *this)

{
  FImmutableReference *pFVar1;
  FStridedReferenceArray *pFVar2;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
  *pTVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  undefined8 uVar8;
  FScriptArray *pFVar9;
  undefined1 auVar10 [16];
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
  *this_00;
  ulonglong *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  FStridedReferenceArray *pFVar14;
  longlong lVar15;
  undefined1 (*pauVar16) [16];
  uint uVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auStack_3f0 [8];
  undefined1 auStack_3e8 [4];
  undefined1 auStack_3e4 [4];
  longlong lStack_3e0;
  uint auStack_3d8 [2];
  longlong lStack_3d0;
  uint auStack_3c8 [2];
  longlong lStack_3c0;
  undefined4 uStack_3b8;
  undefined1 auStack_3b4 [4];
  undefined1 auStack_3b0 [8];
  undefined1 auStack_3a8 [4];
  undefined1 auStack_3a4 [4];
  undefined1 auStack_3a0 [8];
  undefined1 auStack_398 [4];
  undefined1 auStack_394 [4];
  undefined1 auStack_390 [8];
  undefined1 auStack_388 [4];
  undefined1 auStack_384 [4];
  undefined1 auStack_380 [8];
  undefined1 auStack_378 [4];
  undefined1 auStack_374 [52];
  undefined8 uStack_340;
  undefined1 auStack_338 [32];
  FScriptArray *local_318;
  undefined8 uStack_310;
  undefined1 local_308 [16];
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
  *local_2f8;
  undefined8 uStack_2f0;
  undefined1 *local_2e8;
  undefined1 *local_2e0;
  undefined1 *local_2d8;
  undefined1 *local_2d0;
  undefined1 *local_2c8;
  undefined1 *local_2c0;
  undefined1 *local_2b8;
  undefined1 *local_2b0;
  undefined1 *local_2a8;
  undefined1 *local_2a0;
  undefined1 *local_298;
  undefined1 *local_290;
  undefined1 *local_288;
  undefined1 *local_280;
  undefined1 *local_278;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  ulonglong local_248;
  uint auStack_240 [126];
  ulonglong local_48 [4];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_338;
  local_2f8 = this;
  local_2d0 = auStack_3b4 + -(longlong)this;
  local_2c8 = auStack_3b0 + -(longlong)this;
  local_2c0 = auStack_3a8 + -(longlong)this;
  local_2b8 = auStack_3a4 + -(longlong)this;
  local_2b0 = auStack_3a0 + -(longlong)this;
  local_2a8 = auStack_398 + -(longlong)this;
  local_2a0 = auStack_394 + -(longlong)this;
  local_298 = auStack_390 + -(longlong)this;
  local_290 = auStack_388 + -(longlong)this;
  local_288 = auStack_384 + -(longlong)this;
  local_280 = auStack_380 + -(longlong)this;
  local_278 = auStack_378 + -(longlong)this;
  local_308._0_8_ = auStack_374 + -(longlong)this;
  local_2e8 = auStack_3f0 + -(longlong)this;
  local_2e0 = auStack_3e8 + -(longlong)this;
  local_2d8 = auStack_3e4 + -(longlong)this;
  lVar15 = 4;
  pFVar14 = (this->UnvalidatedStridedArrays).Entries + 2;
  do {
    uVar8 = *(undefined8 *)&pFVar14[-2].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[-2].Array)->field_0x8;
    *(ulonglong *)((longlong)&pFVar14->Array + (longlong)local_2e8) =
         *(longlong *)pFVar14[-2].Array + (*(ulonglong *)&pFVar14[-2].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar14->Array + (longlong)local_2e0) = uVar5;
    *(uint *)((longlong)&pFVar14->Array + (longlong)local_2d8) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    uStack_310._2_4_ = (uint)((ulonglong)*(undefined8 *)&pFVar14[-1].Layout >> 0x10);
    uVar5 = *(undefined4 *)&(pFVar14[-1].Array)->field_0x8;
    *(ulonglong *)(((longlong)&lStack_3e0 - (longlong)this) + (longlong)pFVar14) =
         *(longlong *)pFVar14[-1].Array + (*(ulonglong *)&pFVar14[-1].Layout & 0xffff) * 8;
    *(undefined4 *)(((longlong)auStack_3d8 - (longlong)this) + (longlong)pFVar14) = uVar5;
    *(uint *)((longlong)auStack_3d8 + (4 - (longlong)this) + (longlong)pFVar14) =
         uStack_310._2_4_ & 0xffff;
    uStack_310._2_4_ = (uint)((ulonglong)*(undefined8 *)&pFVar14->Layout >> 0x10);
    uVar5 = *(undefined4 *)&pFVar14->Array->field_0x8;
    *(ulonglong *)(((longlong)&lStack_3d0 - (longlong)this) + (longlong)pFVar14) =
         *(longlong *)pFVar14->Array + (*(ulonglong *)&pFVar14->Layout & 0xffff) * 8;
    *(undefined4 *)(((longlong)auStack_3c8 - (longlong)this) + (longlong)pFVar14) = uVar5;
    *(uint *)((longlong)auStack_3c8 + (4 - (longlong)this) + (longlong)pFVar14) =
         uStack_310._2_4_ & 0xffff;
    uStack_310._2_4_ = (uint)((ulonglong)*(undefined8 *)&pFVar14[1].Layout >> 0x10);
    uVar5 = *(undefined4 *)&(pFVar14[1].Array)->field_0x8;
    *(ulonglong *)((longlong)pFVar14 + ((longlong)&lStack_3c0 - (longlong)this)) =
         *(longlong *)pFVar14[1].Array + (*(ulonglong *)&pFVar14[1].Layout & 0xffff) * 8;
    *(undefined4 *)(((longlong)&uStack_3b8 - (longlong)this) + (longlong)pFVar14) = uVar5;
    *(uint *)((longlong)&pFVar14->Array + (longlong)local_2d0) = uStack_310._2_4_ & 0xffff;
    uVar8 = *(undefined8 *)&pFVar14[2].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[2].Array)->field_0x8;
    *(ulonglong *)((longlong)&pFVar14->Array + (longlong)local_2c8) =
         *(longlong *)pFVar14[2].Array + (*(ulonglong *)&pFVar14[2].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar14->Array + (longlong)local_2c0) = uVar5;
    *(uint *)((longlong)&pFVar14->Array + (longlong)local_2b8) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    uVar8 = *(undefined8 *)&pFVar14[3].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[3].Array)->field_0x8;
    pFVar2 = pFVar14 + 8;
    *(ulonglong *)((longlong)&pFVar2[-8].Array + (longlong)local_2b0) =
         *(longlong *)pFVar14[3].Array + (*(ulonglong *)&pFVar14[3].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar2[-8].Array + (longlong)local_2a8) = uVar5;
    *(uint *)((longlong)&pFVar2[-8].Array + (longlong)local_2a0) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    uVar8 = *(undefined8 *)&pFVar14[4].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[4].Array)->field_0x8;
    *(ulonglong *)((longlong)&pFVar2[-8].Array + (longlong)local_298) =
         *(longlong *)pFVar14[4].Array + (*(ulonglong *)&pFVar14[4].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar2[-8].Array + (longlong)local_290) = uVar5;
    *(uint *)((longlong)&pFVar2[-8].Array + (longlong)local_288) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    pFVar9 = pFVar14[5].Array;
    uVar8 = *(undefined8 *)&pFVar14[5].Layout;
    uVar5 = *(undefined4 *)&pFVar9->field_0x8;
    *(ulonglong *)((longlong)&pFVar2[-8].Array + (longlong)local_280) =
         *(longlong *)pFVar9 + (*(ulonglong *)&pFVar14[5].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar2[-8].Array + (longlong)local_278) = uVar5;
    *(uint *)((longlong)&pFVar2[-8].Array + local_308._0_8_) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    lVar15 = lVar15 + -1;
    pFVar14 = pFVar2;
  } while (lVar15 != 0);
  this_00 = local_2f8;
  puVar11 = &local_248;
  do {
    puVar11 = puVar11 + 2;
  } while (puVar11 != local_48);
  pauVar16 = (undefined1 (*) [16])&local_248;
  local_318 = pFVar9;
  uStack_310 = uVar8;
  do {
    local_308 = *pauVar16;
    if (*(int *)(*pauVar16 + 8) != 0) {
      uVar13 = 0x20 - (this_00->UnvalidatedReferences).Num;
      puVar12 = local_308._0_8_;
      uVar17 = local_308._8_4_;
      local_258 = local_308;
      if (uVar13 <= *(uint *)(*pauVar16 + 8)) {
        iVar18 = local_308._12_4_;
        bVar20 = SBORROW4(uVar13,uVar17);
        iVar6 = uVar13 - uVar17;
        bVar19 = uVar13 == uVar17;
        local_268 = local_308;
        do {
          auVar10 = local_268;
          local_308 = local_268;
          if (!bVar19 && bVar20 == iVar6 < 0) {
            uStack_340 = 0x14202a8ea;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Idx <= Body.Num",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x5d5,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          if (iVar18 == 0) {
            uStack_340 = 0x14202a915;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Body.Stride > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x5d6,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          uVar17 = uVar17 - uVar13;
          uStack_2f0._4_4_ = auVar10._12_4_;
          local_2f8 = auVar10._0_8_;
          uStack_2f0._0_4_ = uVar13;
          local_308._8_4_ = uVar17;
          puVar12 = puVar12 + iVar18 * uVar13;
          local_308._0_8_ = puVar12;
          if (0x20 - (this_00->UnvalidatedReferences).Num < uVar13) {
            uStack_340 = 0x14202a96b;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x660,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          pFVar1 = (this_00->UnvalidatedReferences).Entries + (this_00->UnvalidatedReferences).Num;
          for (pTVar3 = local_2f8;
              pTVar3 != (TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
                         *)((longlong)local_2f8 + (ulonglong)(local_2f8._12_4_ * uVar13) * 8);
              pTVar3 = (TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
                        *)((longlong)pTVar3 + (uStack_2f0 >> 0x20) * 8)) {
            pFVar1->Object = *(UObject **)pTVar3;
            pFVar1 = pFVar1 + 1;
          }
          (this_00->UnvalidatedReferences).Num = (this_00->UnvalidatedReferences).Num + uVar13;
          if ((this_00->UnvalidatedReferences).Num != 0x20) {
            uStack_340 = 0x14202a9f5;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("UnvalidatedReferences.IsFull()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x615,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          uStack_340 = 0x14202aa03;
          DrainUnvalidatedFull(this_00);
          uVar13 = 0x20;
          local_268 = local_308;
          bVar20 = SBORROW4(0x20,uVar17);
          iVar6 = 0x20 - uVar17;
          bVar19 = iVar6 == 0;
        } while (0x20 < uVar17 || bVar19);
      }
      auVar10 = local_308;
      local_268 = local_308;
      if (0x20 - (this_00->UnvalidatedReferences).Num < uVar17) {
        uStack_340 = 0x14202aa57;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                            ,0x660,L"");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar1 = (this_00->UnvalidatedReferences).Entries + (this_00->UnvalidatedReferences).Num;
      puVar4 = puVar12 + uVar17 * auVar10._12_4_;
      for (; puVar12 != puVar4; puVar12 = puVar12 + (auVar10._8_8_ >> 0x20)) {
        pFVar1->Object = (UObject *)*puVar12;
        pFVar1 = pFVar1 + 1;
      }
      (this_00->UnvalidatedReferences).Num = (this_00->UnvalidatedReferences).Num + uVar17;
      if ((this_00->UnvalidatedReferences).Num == 0x20) {
        uStack_340 = 0x14202aae6;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("!UnvalidatedReferences.IsFull()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                            ,0x61a,L"");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
    }
    pauVar16 = pauVar16 + 1;
  } while (pauVar16 != (undefined1 (*) [16])local_48);
  (this_00->UnvalidatedStridedArrays).Num = 0;
  return;
}

// DrainStridedArraysFull @ 14202ab50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
::DrainStridedArraysFull
          (TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
           *this)

{
  FImmutableReference *pFVar1;
  FStridedReferenceArray *pFVar2;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
  *pTVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  undefined8 uVar8;
  FScriptArray *pFVar9;
  undefined1 auVar10 [16];
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
  *this_00;
  ulonglong *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  FStridedReferenceArray *pFVar14;
  longlong lVar15;
  undefined1 (*pauVar16) [16];
  uint uVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auStack_3f0 [8];
  undefined1 auStack_3e8 [4];
  undefined1 auStack_3e4 [4];
  longlong lStack_3e0;
  uint auStack_3d8 [2];
  longlong lStack_3d0;
  uint auStack_3c8 [2];
  longlong lStack_3c0;
  undefined4 uStack_3b8;
  undefined1 auStack_3b4 [4];
  undefined1 auStack_3b0 [8];
  undefined1 auStack_3a8 [4];
  undefined1 auStack_3a4 [4];
  undefined1 auStack_3a0 [8];
  undefined1 auStack_398 [4];
  undefined1 auStack_394 [4];
  undefined1 auStack_390 [8];
  undefined1 auStack_388 [4];
  undefined1 auStack_384 [4];
  undefined1 auStack_380 [8];
  undefined1 auStack_378 [4];
  undefined1 auStack_374 [52];
  undefined8 uStack_340;
  undefined1 auStack_338 [32];
  FScriptArray *local_318;
  undefined8 uStack_310;
  undefined1 local_308 [16];
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
  *local_2f8;
  undefined8 uStack_2f0;
  undefined1 *local_2e8;
  undefined1 *local_2e0;
  undefined1 *local_2d8;
  undefined1 *local_2d0;
  undefined1 *local_2c8;
  undefined1 *local_2c0;
  undefined1 *local_2b8;
  undefined1 *local_2b0;
  undefined1 *local_2a8;
  undefined1 *local_2a0;
  undefined1 *local_298;
  undefined1 *local_290;
  undefined1 *local_288;
  undefined1 *local_280;
  undefined1 *local_278;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  ulonglong local_248;
  uint auStack_240 [126];
  ulonglong local_48 [4];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_338;
  local_2f8 = this;
  local_2d0 = auStack_3b4 + -(longlong)this;
  local_2c8 = auStack_3b0 + -(longlong)this;
  local_2c0 = auStack_3a8 + -(longlong)this;
  local_2b8 = auStack_3a4 + -(longlong)this;
  local_2b0 = auStack_3a0 + -(longlong)this;
  local_2a8 = auStack_398 + -(longlong)this;
  local_2a0 = auStack_394 + -(longlong)this;
  local_298 = auStack_390 + -(longlong)this;
  local_290 = auStack_388 + -(longlong)this;
  local_288 = auStack_384 + -(longlong)this;
  local_280 = auStack_380 + -(longlong)this;
  local_278 = auStack_378 + -(longlong)this;
  local_308._0_8_ = auStack_374 + -(longlong)this;
  local_2e8 = auStack_3f0 + -(longlong)this;
  local_2e0 = auStack_3e8 + -(longlong)this;
  local_2d8 = auStack_3e4 + -(longlong)this;
  lVar15 = 4;
  pFVar14 = (this->UnvalidatedStridedArrays).Entries + 2;
  do {
    uVar8 = *(undefined8 *)&pFVar14[-2].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[-2].Array)->field_0x8;
    *(ulonglong *)((longlong)&pFVar14->Array + (longlong)local_2e8) =
         *(longlong *)pFVar14[-2].Array + (*(ulonglong *)&pFVar14[-2].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar14->Array + (longlong)local_2e0) = uVar5;
    *(uint *)((longlong)&pFVar14->Array + (longlong)local_2d8) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    uStack_310._2_4_ = (uint)((ulonglong)*(undefined8 *)&pFVar14[-1].Layout >> 0x10);
    uVar5 = *(undefined4 *)&(pFVar14[-1].Array)->field_0x8;
    *(ulonglong *)(((longlong)&lStack_3e0 - (longlong)this) + (longlong)pFVar14) =
         *(longlong *)pFVar14[-1].Array + (*(ulonglong *)&pFVar14[-1].Layout & 0xffff) * 8;
    *(undefined4 *)(((longlong)auStack_3d8 - (longlong)this) + (longlong)pFVar14) = uVar5;
    *(uint *)((longlong)auStack_3d8 + (4 - (longlong)this) + (longlong)pFVar14) =
         uStack_310._2_4_ & 0xffff;
    uStack_310._2_4_ = (uint)((ulonglong)*(undefined8 *)&pFVar14->Layout >> 0x10);
    uVar5 = *(undefined4 *)&pFVar14->Array->field_0x8;
    *(ulonglong *)(((longlong)&lStack_3d0 - (longlong)this) + (longlong)pFVar14) =
         *(longlong *)pFVar14->Array + (*(ulonglong *)&pFVar14->Layout & 0xffff) * 8;
    *(undefined4 *)(((longlong)auStack_3c8 - (longlong)this) + (longlong)pFVar14) = uVar5;
    *(uint *)((longlong)auStack_3c8 + (4 - (longlong)this) + (longlong)pFVar14) =
         uStack_310._2_4_ & 0xffff;
    uStack_310._2_4_ = (uint)((ulonglong)*(undefined8 *)&pFVar14[1].Layout >> 0x10);
    uVar5 = *(undefined4 *)&(pFVar14[1].Array)->field_0x8;
    *(ulonglong *)((longlong)pFVar14 + ((longlong)&lStack_3c0 - (longlong)this)) =
         *(longlong *)pFVar14[1].Array + (*(ulonglong *)&pFVar14[1].Layout & 0xffff) * 8;
    *(undefined4 *)(((longlong)&uStack_3b8 - (longlong)this) + (longlong)pFVar14) = uVar5;
    *(uint *)((longlong)&pFVar14->Array + (longlong)local_2d0) = uStack_310._2_4_ & 0xffff;
    uVar8 = *(undefined8 *)&pFVar14[2].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[2].Array)->field_0x8;
    *(ulonglong *)((longlong)&pFVar14->Array + (longlong)local_2c8) =
         *(longlong *)pFVar14[2].Array + (*(ulonglong *)&pFVar14[2].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar14->Array + (longlong)local_2c0) = uVar5;
    *(uint *)((longlong)&pFVar14->Array + (longlong)local_2b8) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    uVar8 = *(undefined8 *)&pFVar14[3].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[3].Array)->field_0x8;
    pFVar2 = pFVar14 + 8;
    *(ulonglong *)((longlong)&pFVar2[-8].Array + (longlong)local_2b0) =
         *(longlong *)pFVar14[3].Array + (*(ulonglong *)&pFVar14[3].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar2[-8].Array + (longlong)local_2a8) = uVar5;
    *(uint *)((longlong)&pFVar2[-8].Array + (longlong)local_2a0) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    uVar8 = *(undefined8 *)&pFVar14[4].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[4].Array)->field_0x8;
    *(ulonglong *)((longlong)&pFVar2[-8].Array + (longlong)local_298) =
         *(longlong *)pFVar14[4].Array + (*(ulonglong *)&pFVar14[4].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar2[-8].Array + (longlong)local_290) = uVar5;
    *(uint *)((longlong)&pFVar2[-8].Array + (longlong)local_288) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    pFVar9 = pFVar14[5].Array;
    uVar8 = *(undefined8 *)&pFVar14[5].Layout;
    uVar5 = *(undefined4 *)&pFVar9->field_0x8;
    *(ulonglong *)((longlong)&pFVar2[-8].Array + (longlong)local_280) =
         *(longlong *)pFVar9 + (*(ulonglong *)&pFVar14[5].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar2[-8].Array + (longlong)local_278) = uVar5;
    *(uint *)((longlong)&pFVar2[-8].Array + local_308._0_8_) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    lVar15 = lVar15 + -1;
    pFVar14 = pFVar2;
  } while (lVar15 != 0);
  this_00 = local_2f8;
  puVar11 = &local_248;
  do {
    puVar11 = puVar11 + 2;
  } while (puVar11 != local_48);
  pauVar16 = (undefined1 (*) [16])&local_248;
  local_318 = pFVar9;
  uStack_310 = uVar8;
  do {
    local_308 = *pauVar16;
    if (*(int *)(*pauVar16 + 8) != 0) {
      uVar13 = 0x20 - (this_00->UnvalidatedReferences).Num;
      puVar12 = local_308._0_8_;
      uVar17 = local_308._8_4_;
      local_258 = local_308;
      if (uVar13 <= *(uint *)(*pauVar16 + 8)) {
        iVar18 = local_308._12_4_;
        bVar20 = SBORROW4(uVar13,uVar17);
        iVar6 = uVar13 - uVar17;
        bVar19 = uVar13 == uVar17;
        local_268 = local_308;
        do {
          auVar10 = local_268;
          local_308 = local_268;
          if (!bVar19 && bVar20 == iVar6 < 0) {
            uStack_340 = 0x14202afea;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Idx <= Body.Num",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x5d5,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          if (iVar18 == 0) {
            uStack_340 = 0x14202b015;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Body.Stride > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x5d6,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          uVar17 = uVar17 - uVar13;
          uStack_2f0._4_4_ = auVar10._12_4_;
          local_2f8 = auVar10._0_8_;
          uStack_2f0._0_4_ = uVar13;
          local_308._8_4_ = uVar17;
          puVar12 = puVar12 + iVar18 * uVar13;
          local_308._0_8_ = puVar12;
          if (0x20 - (this_00->UnvalidatedReferences).Num < uVar13) {
            uStack_340 = 0x14202b06b;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x660,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          pFVar1 = (this_00->UnvalidatedReferences).Entries + (this_00->UnvalidatedReferences).Num;
          for (pTVar3 = local_2f8;
              pTVar3 != (TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
                         *)((longlong)local_2f8 + (ulonglong)(local_2f8._12_4_ * uVar13) * 8);
              pTVar3 = (TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
                        *)((longlong)pTVar3 + (uStack_2f0 >> 0x20) * 8)) {
            pFVar1->Object = *(UObject **)pTVar3;
            pFVar1 = pFVar1 + 1;
          }
          (this_00->UnvalidatedReferences).Num = (this_00->UnvalidatedReferences).Num + uVar13;
          if ((this_00->UnvalidatedReferences).Num != 0x20) {
            uStack_340 = 0x14202b0f5;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("UnvalidatedReferences.IsFull()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x615,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          uStack_340 = 0x14202b103;
          DrainUnvalidatedFull(this_00);
          uVar13 = 0x20;
          local_268 = local_308;
          bVar20 = SBORROW4(0x20,uVar17);
          iVar6 = 0x20 - uVar17;
          bVar19 = iVar6 == 0;
        } while (0x20 < uVar17 || bVar19);
      }
      auVar10 = local_308;
      local_268 = local_308;
      if (0x20 - (this_00->UnvalidatedReferences).Num < uVar17) {
        uStack_340 = 0x14202b157;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                            ,0x660,L"");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar1 = (this_00->UnvalidatedReferences).Entries + (this_00->UnvalidatedReferences).Num;
      puVar4 = puVar12 + uVar17 * auVar10._12_4_;
      for (; puVar12 != puVar4; puVar12 = puVar12 + (auVar10._8_8_ >> 0x20)) {
        pFVar1->Object = (UObject *)*puVar12;
        pFVar1 = pFVar1 + 1;
      }
      (this_00->UnvalidatedReferences).Num = (this_00->UnvalidatedReferences).Num + uVar17;
      if ((this_00->UnvalidatedReferences).Num == 0x20) {
        uStack_340 = 0x14202b1e6;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("!UnvalidatedReferences.IsFull()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                            ,0x61a,L"");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
    }
    pauVar16 = pauVar16 + 1;
  } while (pauVar16 != (undefined1 (*) [16])local_48);
  (this_00->UnvalidatedStridedArrays).Num = 0;
  return;
}

// DrainStridedArraysFull @ 14202b250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
::DrainStridedArraysFull
          (TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
           *this)

{
  FImmutableReference *pFVar1;
  FStridedReferenceArray *pFVar2;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
  *pTVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  undefined8 uVar8;
  FScriptArray *pFVar9;
  undefined1 auVar10 [16];
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
  *this_00;
  ulonglong *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  FStridedReferenceArray *pFVar14;
  longlong lVar15;
  undefined1 (*pauVar16) [16];
  uint uVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auStack_3f0 [8];
  undefined1 auStack_3e8 [4];
  undefined1 auStack_3e4 [4];
  longlong lStack_3e0;
  uint auStack_3d8 [2];
  longlong lStack_3d0;
  uint auStack_3c8 [2];
  longlong lStack_3c0;
  undefined4 uStack_3b8;
  undefined1 auStack_3b4 [4];
  undefined1 auStack_3b0 [8];
  undefined1 auStack_3a8 [4];
  undefined1 auStack_3a4 [4];
  undefined1 auStack_3a0 [8];
  undefined1 auStack_398 [4];
  undefined1 auStack_394 [4];
  undefined1 auStack_390 [8];
  undefined1 auStack_388 [4];
  undefined1 auStack_384 [4];
  undefined1 auStack_380 [8];
  undefined1 auStack_378 [4];
  undefined1 auStack_374 [52];
  undefined8 uStack_340;
  undefined1 auStack_338 [32];
  FScriptArray *local_318;
  undefined8 uStack_310;
  undefined1 local_308 [16];
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
  *local_2f8;
  undefined8 uStack_2f0;
  undefined1 *local_2e8;
  undefined1 *local_2e0;
  undefined1 *local_2d8;
  undefined1 *local_2d0;
  undefined1 *local_2c8;
  undefined1 *local_2c0;
  undefined1 *local_2b8;
  undefined1 *local_2b0;
  undefined1 *local_2a8;
  undefined1 *local_2a0;
  undefined1 *local_298;
  undefined1 *local_290;
  undefined1 *local_288;
  undefined1 *local_280;
  undefined1 *local_278;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  ulonglong local_248;
  uint auStack_240 [126];
  ulonglong local_48 [4];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_338;
  local_2f8 = this;
  local_2d0 = auStack_3b4 + -(longlong)this;
  local_2c8 = auStack_3b0 + -(longlong)this;
  local_2c0 = auStack_3a8 + -(longlong)this;
  local_2b8 = auStack_3a4 + -(longlong)this;
  local_2b0 = auStack_3a0 + -(longlong)this;
  local_2a8 = auStack_398 + -(longlong)this;
  local_2a0 = auStack_394 + -(longlong)this;
  local_298 = auStack_390 + -(longlong)this;
  local_290 = auStack_388 + -(longlong)this;
  local_288 = auStack_384 + -(longlong)this;
  local_280 = auStack_380 + -(longlong)this;
  local_278 = auStack_378 + -(longlong)this;
  local_308._0_8_ = auStack_374 + -(longlong)this;
  local_2e8 = auStack_3f0 + -(longlong)this;
  local_2e0 = auStack_3e8 + -(longlong)this;
  local_2d8 = auStack_3e4 + -(longlong)this;
  lVar15 = 4;
  pFVar14 = (this->UnvalidatedStridedArrays).Entries + 2;
  do {
    uVar8 = *(undefined8 *)&pFVar14[-2].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[-2].Array)->field_0x8;
    *(ulonglong *)((longlong)&pFVar14->Array + (longlong)local_2e8) =
         *(longlong *)pFVar14[-2].Array + (*(ulonglong *)&pFVar14[-2].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar14->Array + (longlong)local_2e0) = uVar5;
    *(uint *)((longlong)&pFVar14->Array + (longlong)local_2d8) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    uStack_310._2_4_ = (uint)((ulonglong)*(undefined8 *)&pFVar14[-1].Layout >> 0x10);
    uVar5 = *(undefined4 *)&(pFVar14[-1].Array)->field_0x8;
    *(ulonglong *)(((longlong)&lStack_3e0 - (longlong)this) + (longlong)pFVar14) =
         *(longlong *)pFVar14[-1].Array + (*(ulonglong *)&pFVar14[-1].Layout & 0xffff) * 8;
    *(undefined4 *)(((longlong)auStack_3d8 - (longlong)this) + (longlong)pFVar14) = uVar5;
    *(uint *)((longlong)auStack_3d8 + (4 - (longlong)this) + (longlong)pFVar14) =
         uStack_310._2_4_ & 0xffff;
    uStack_310._2_4_ = (uint)((ulonglong)*(undefined8 *)&pFVar14->Layout >> 0x10);
    uVar5 = *(undefined4 *)&pFVar14->Array->field_0x8;
    *(ulonglong *)(((longlong)&lStack_3d0 - (longlong)this) + (longlong)pFVar14) =
         *(longlong *)pFVar14->Array + (*(ulonglong *)&pFVar14->Layout & 0xffff) * 8;
    *(undefined4 *)(((longlong)auStack_3c8 - (longlong)this) + (longlong)pFVar14) = uVar5;
    *(uint *)((longlong)auStack_3c8 + (4 - (longlong)this) + (longlong)pFVar14) =
         uStack_310._2_4_ & 0xffff;
    uStack_310._2_4_ = (uint)((ulonglong)*(undefined8 *)&pFVar14[1].Layout >> 0x10);
    uVar5 = *(undefined4 *)&(pFVar14[1].Array)->field_0x8;
    *(ulonglong *)((longlong)pFVar14 + ((longlong)&lStack_3c0 - (longlong)this)) =
         *(longlong *)pFVar14[1].Array + (*(ulonglong *)&pFVar14[1].Layout & 0xffff) * 8;
    *(undefined4 *)(((longlong)&uStack_3b8 - (longlong)this) + (longlong)pFVar14) = uVar5;
    *(uint *)((longlong)&pFVar14->Array + (longlong)local_2d0) = uStack_310._2_4_ & 0xffff;
    uVar8 = *(undefined8 *)&pFVar14[2].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[2].Array)->field_0x8;
    *(ulonglong *)((longlong)&pFVar14->Array + (longlong)local_2c8) =
         *(longlong *)pFVar14[2].Array + (*(ulonglong *)&pFVar14[2].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar14->Array + (longlong)local_2c0) = uVar5;
    *(uint *)((longlong)&pFVar14->Array + (longlong)local_2b8) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    uVar8 = *(undefined8 *)&pFVar14[3].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[3].Array)->field_0x8;
    pFVar2 = pFVar14 + 8;
    *(ulonglong *)((longlong)&pFVar2[-8].Array + (longlong)local_2b0) =
         *(longlong *)pFVar14[3].Array + (*(ulonglong *)&pFVar14[3].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar2[-8].Array + (longlong)local_2a8) = uVar5;
    *(uint *)((longlong)&pFVar2[-8].Array + (longlong)local_2a0) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    uVar8 = *(undefined8 *)&pFVar14[4].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[4].Array)->field_0x8;
    *(ulonglong *)((longlong)&pFVar2[-8].Array + (longlong)local_298) =
         *(longlong *)pFVar14[4].Array + (*(ulonglong *)&pFVar14[4].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar2[-8].Array + (longlong)local_290) = uVar5;
    *(uint *)((longlong)&pFVar2[-8].Array + (longlong)local_288) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    pFVar9 = pFVar14[5].Array;
    uVar8 = *(undefined8 *)&pFVar14[5].Layout;
    uVar5 = *(undefined4 *)&pFVar9->field_0x8;
    *(ulonglong *)((longlong)&pFVar2[-8].Array + (longlong)local_280) =
         *(longlong *)pFVar9 + (*(ulonglong *)&pFVar14[5].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar2[-8].Array + (longlong)local_278) = uVar5;
    *(uint *)((longlong)&pFVar2[-8].Array + local_308._0_8_) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    lVar15 = lVar15 + -1;
    pFVar14 = pFVar2;
  } while (lVar15 != 0);
  this_00 = local_2f8;
  puVar11 = &local_248;
  do {
    puVar11 = puVar11 + 2;
  } while (puVar11 != local_48);
  pauVar16 = (undefined1 (*) [16])&local_248;
  local_318 = pFVar9;
  uStack_310 = uVar8;
  do {
    local_308 = *pauVar16;
    if (*(int *)(*pauVar16 + 8) != 0) {
      uVar13 = 0x20 - (this_00->UnvalidatedReferences).Num;
      puVar12 = local_308._0_8_;
      uVar17 = local_308._8_4_;
      local_258 = local_308;
      if (uVar13 <= *(uint *)(*pauVar16 + 8)) {
        iVar18 = local_308._12_4_;
        bVar20 = SBORROW4(uVar13,uVar17);
        iVar6 = uVar13 - uVar17;
        bVar19 = uVar13 == uVar17;
        local_268 = local_308;
        do {
          auVar10 = local_268;
          local_308 = local_268;
          if (!bVar19 && bVar20 == iVar6 < 0) {
            uStack_340 = 0x14202b6ea;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Idx <= Body.Num",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x5d5,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          if (iVar18 == 0) {
            uStack_340 = 0x14202b715;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Body.Stride > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x5d6,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          uVar17 = uVar17 - uVar13;
          uStack_2f0._4_4_ = auVar10._12_4_;
          local_2f8 = auVar10._0_8_;
          uStack_2f0._0_4_ = uVar13;
          local_308._8_4_ = uVar17;
          puVar12 = puVar12 + iVar18 * uVar13;
          local_308._0_8_ = puVar12;
          if (0x20 - (this_00->UnvalidatedReferences).Num < uVar13) {
            uStack_340 = 0x14202b76b;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x660,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          pFVar1 = (this_00->UnvalidatedReferences).Entries + (this_00->UnvalidatedReferences).Num;
          for (pTVar3 = local_2f8;
              pTVar3 != (TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
                         *)((longlong)local_2f8 + (ulonglong)(local_2f8._12_4_ * uVar13) * 8);
              pTVar3 = (TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
                        *)((longlong)pTVar3 + (uStack_2f0 >> 0x20) * 8)) {
            pFVar1->Object = *(UObject **)pTVar3;
            pFVar1 = pFVar1 + 1;
          }
          (this_00->UnvalidatedReferences).Num = (this_00->UnvalidatedReferences).Num + uVar13;
          if ((this_00->UnvalidatedReferences).Num != 0x20) {
            uStack_340 = 0x14202b7f5;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("UnvalidatedReferences.IsFull()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x615,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          uStack_340 = 0x14202b803;
          DrainUnvalidatedFull(this_00);
          uVar13 = 0x20;
          local_268 = local_308;
          bVar20 = SBORROW4(0x20,uVar17);
          iVar6 = 0x20 - uVar17;
          bVar19 = iVar6 == 0;
        } while (0x20 < uVar17 || bVar19);
      }
      auVar10 = local_308;
      local_268 = local_308;
      if (0x20 - (this_00->UnvalidatedReferences).Num < uVar17) {
        uStack_340 = 0x14202b857;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                            ,0x660,L"");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar1 = (this_00->UnvalidatedReferences).Entries + (this_00->UnvalidatedReferences).Num;
      puVar4 = puVar12 + uVar17 * auVar10._12_4_;
      for (; puVar12 != puVar4; puVar12 = puVar12 + (auVar10._8_8_ >> 0x20)) {
        pFVar1->Object = (UObject *)*puVar12;
        pFVar1 = pFVar1 + 1;
      }
      (this_00->UnvalidatedReferences).Num = (this_00->UnvalidatedReferences).Num + uVar17;
      if ((this_00->UnvalidatedReferences).Num == 0x20) {
        uStack_340 = 0x14202b8e6;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("!UnvalidatedReferences.IsFull()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                            ,0x61a,L"");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
    }
    pauVar16 = pauVar16 + 1;
  } while (pauVar16 != (undefined1 (*) [16])local_48);
  (this_00->UnvalidatedStridedArrays).Num = 0;
  return;
}

// DrainStridedArraysFull @ 14202b950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<1>_>
::DrainStridedArraysFull
          (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<1>_>
           *this)

{
  FMutableReference *pFVar1;
  FStridedReferenceArray *pFVar2;
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<1>_>
  *pTVar3;
  UObject **ppUVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  undefined8 uVar8;
  FScriptArray *pFVar9;
  undefined1 auVar10 [16];
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<1>_>
  *this_00;
  ulonglong *puVar11;
  UObject **ppUVar12;
  uint uVar13;
  FStridedReferenceArray *pFVar14;
  longlong lVar15;
  undefined1 (*pauVar16) [16];
  uint uVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auStack_3f0 [8];
  undefined1 auStack_3e8 [4];
  undefined1 auStack_3e4 [4];
  longlong lStack_3e0;
  uint auStack_3d8 [2];
  longlong lStack_3d0;
  uint auStack_3c8 [2];
  longlong lStack_3c0;
  undefined4 uStack_3b8;
  undefined1 auStack_3b4 [4];
  undefined1 auStack_3b0 [8];
  undefined1 auStack_3a8 [4];
  undefined1 auStack_3a4 [4];
  undefined1 auStack_3a0 [8];
  undefined1 auStack_398 [4];
  undefined1 auStack_394 [4];
  undefined1 auStack_390 [8];
  undefined1 auStack_388 [4];
  undefined1 auStack_384 [4];
  undefined1 auStack_380 [8];
  undefined1 auStack_378 [4];
  undefined1 auStack_374 [52];
  undefined8 uStack_340;
  undefined1 auStack_338 [32];
  FScriptArray *local_318;
  undefined8 uStack_310;
  undefined1 local_308 [16];
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<1>_>
  *local_2f8;
  undefined8 uStack_2f0;
  undefined1 *local_2e8;
  undefined1 *local_2e0;
  undefined1 *local_2d8;
  undefined1 *local_2d0;
  undefined1 *local_2c8;
  undefined1 *local_2c0;
  undefined1 *local_2b8;
  undefined1 *local_2b0;
  undefined1 *local_2a8;
  undefined1 *local_2a0;
  undefined1 *local_298;
  undefined1 *local_290;
  undefined1 *local_288;
  undefined1 *local_280;
  undefined1 *local_278;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  ulonglong local_248;
  uint auStack_240 [126];
  ulonglong local_48 [4];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_338;
  local_2f8 = this;
  local_2d0 = auStack_3b4 + -(longlong)this;
  local_2c8 = auStack_3b0 + -(longlong)this;
  local_2c0 = auStack_3a8 + -(longlong)this;
  local_2b8 = auStack_3a4 + -(longlong)this;
  local_2b0 = auStack_3a0 + -(longlong)this;
  local_2a8 = auStack_398 + -(longlong)this;
  local_2a0 = auStack_394 + -(longlong)this;
  local_298 = auStack_390 + -(longlong)this;
  local_290 = auStack_388 + -(longlong)this;
  local_288 = auStack_384 + -(longlong)this;
  local_280 = auStack_380 + -(longlong)this;
  local_278 = auStack_378 + -(longlong)this;
  local_308._0_8_ = auStack_374 + -(longlong)this;
  local_2e8 = auStack_3f0 + -(longlong)this;
  local_2e0 = auStack_3e8 + -(longlong)this;
  local_2d8 = auStack_3e4 + -(longlong)this;
  lVar15 = 4;
  pFVar14 = (this->UnvalidatedStridedArrays).Entries + 2;
  do {
    uVar8 = *(undefined8 *)&pFVar14[-2].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[-2].Array)->field_0x8;
    *(ulonglong *)((longlong)&pFVar14->Array + (longlong)local_2e8) =
         *(longlong *)pFVar14[-2].Array + (*(ulonglong *)&pFVar14[-2].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar14->Array + (longlong)local_2e0) = uVar5;
    *(uint *)((longlong)&pFVar14->Array + (longlong)local_2d8) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    uStack_310._2_4_ = (uint)((ulonglong)*(undefined8 *)&pFVar14[-1].Layout >> 0x10);
    uVar5 = *(undefined4 *)&(pFVar14[-1].Array)->field_0x8;
    *(ulonglong *)(((longlong)&lStack_3e0 - (longlong)this) + (longlong)pFVar14) =
         *(longlong *)pFVar14[-1].Array + (*(ulonglong *)&pFVar14[-1].Layout & 0xffff) * 8;
    *(undefined4 *)(((longlong)auStack_3d8 - (longlong)this) + (longlong)pFVar14) = uVar5;
    *(uint *)((longlong)auStack_3d8 + (4 - (longlong)this) + (longlong)pFVar14) =
         uStack_310._2_4_ & 0xffff;
    uStack_310._2_4_ = (uint)((ulonglong)*(undefined8 *)&pFVar14->Layout >> 0x10);
    uVar5 = *(undefined4 *)&pFVar14->Array->field_0x8;
    *(ulonglong *)(((longlong)&lStack_3d0 - (longlong)this) + (longlong)pFVar14) =
         *(longlong *)pFVar14->Array + (*(ulonglong *)&pFVar14->Layout & 0xffff) * 8;
    *(undefined4 *)(((longlong)auStack_3c8 - (longlong)this) + (longlong)pFVar14) = uVar5;
    *(uint *)((longlong)auStack_3c8 + (4 - (longlong)this) + (longlong)pFVar14) =
         uStack_310._2_4_ & 0xffff;
    uStack_310._2_4_ = (uint)((ulonglong)*(undefined8 *)&pFVar14[1].Layout >> 0x10);
    uVar5 = *(undefined4 *)&(pFVar14[1].Array)->field_0x8;
    *(ulonglong *)((longlong)pFVar14 + ((longlong)&lStack_3c0 - (longlong)this)) =
         *(longlong *)pFVar14[1].Array + (*(ulonglong *)&pFVar14[1].Layout & 0xffff) * 8;
    *(undefined4 *)(((longlong)&uStack_3b8 - (longlong)this) + (longlong)pFVar14) = uVar5;
    *(uint *)((longlong)&pFVar14->Array + (longlong)local_2d0) = uStack_310._2_4_ & 0xffff;
    uVar8 = *(undefined8 *)&pFVar14[2].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[2].Array)->field_0x8;
    *(ulonglong *)((longlong)&pFVar14->Array + (longlong)local_2c8) =
         *(longlong *)pFVar14[2].Array + (*(ulonglong *)&pFVar14[2].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar14->Array + (longlong)local_2c0) = uVar5;
    *(uint *)((longlong)&pFVar14->Array + (longlong)local_2b8) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    uVar8 = *(undefined8 *)&pFVar14[3].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[3].Array)->field_0x8;
    pFVar2 = pFVar14 + 8;
    *(ulonglong *)((longlong)&pFVar2[-8].Array + (longlong)local_2b0) =
         *(longlong *)pFVar14[3].Array + (*(ulonglong *)&pFVar14[3].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar2[-8].Array + (longlong)local_2a8) = uVar5;
    *(uint *)((longlong)&pFVar2[-8].Array + (longlong)local_2a0) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    uVar8 = *(undefined8 *)&pFVar14[4].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[4].Array)->field_0x8;
    *(ulonglong *)((longlong)&pFVar2[-8].Array + (longlong)local_298) =
         *(longlong *)pFVar14[4].Array + (*(ulonglong *)&pFVar14[4].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar2[-8].Array + (longlong)local_290) = uVar5;
    *(uint *)((longlong)&pFVar2[-8].Array + (longlong)local_288) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    pFVar9 = pFVar14[5].Array;
    uVar8 = *(undefined8 *)&pFVar14[5].Layout;
    uVar5 = *(undefined4 *)&pFVar9->field_0x8;
    *(ulonglong *)((longlong)&pFVar2[-8].Array + (longlong)local_280) =
         *(longlong *)pFVar9 + (*(ulonglong *)&pFVar14[5].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar2[-8].Array + (longlong)local_278) = uVar5;
    *(uint *)((longlong)&pFVar2[-8].Array + local_308._0_8_) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    lVar15 = lVar15 + -1;
    pFVar14 = pFVar2;
  } while (lVar15 != 0);
  this_00 = local_2f8;
  puVar11 = &local_248;
  do {
    puVar11 = puVar11 + 2;
  } while (puVar11 != local_48);
  pauVar16 = (undefined1 (*) [16])&local_248;
  local_318 = pFVar9;
  uStack_310 = uVar8;
  do {
    local_308 = *pauVar16;
    if (*(int *)(*pauVar16 + 8) != 0) {
      uVar13 = 0x20 - (this_00->UnvalidatedReferences).Num;
      ppUVar12 = local_308._0_8_;
      uVar17 = local_308._8_4_;
      local_258 = local_308;
      if (uVar13 <= *(uint *)(*pauVar16 + 8)) {
        iVar18 = local_308._12_4_;
        bVar20 = SBORROW4(uVar13,uVar17);
        iVar6 = uVar13 - uVar17;
        bVar19 = uVar13 == uVar17;
        local_268 = local_308;
        do {
          auVar10 = local_268;
          local_308 = local_268;
          if (!bVar19 && bVar20 == iVar6 < 0) {
            uStack_340 = 0x14202bdea;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Idx <= Body.Num",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x5d5,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          if (iVar18 == 0) {
            uStack_340 = 0x14202be15;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Body.Stride > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x5d6,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          uVar17 = uVar17 - uVar13;
          uStack_2f0._4_4_ = auVar10._12_4_;
          local_2f8 = auVar10._0_8_;
          uStack_2f0._0_4_ = uVar13;
          local_308._8_4_ = uVar17;
          ppUVar12 = ppUVar12 + iVar18 * uVar13;
          local_308._0_8_ = ppUVar12;
          if (0x20 - (this_00->UnvalidatedReferences).Num < uVar13) {
            uStack_340 = 0x14202be6b;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x660,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          pFVar1 = (this_00->UnvalidatedReferences).Entries + (this_00->UnvalidatedReferences).Num;
          for (pTVar3 = local_2f8;
              pTVar3 != (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<1>_>
                         *)((longlong)local_2f8 + (ulonglong)(local_2f8._12_4_ * uVar13) * 8);
              pTVar3 = (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<1>_>
                        *)((longlong)pTVar3 + (uStack_2f0 >> 0x20) * 8)) {
            pFVar1->Object = (UObject **)pTVar3;
            pFVar1 = pFVar1 + 1;
          }
          (this_00->UnvalidatedReferences).Num = (this_00->UnvalidatedReferences).Num + uVar13;
          if ((this_00->UnvalidatedReferences).Num != 0x20) {
            uStack_340 = 0x14202bef2;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("UnvalidatedReferences.IsFull()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x615,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          uStack_340 = 0x14202bf00;
          DrainUnvalidatedFull(this_00);
          uVar13 = 0x20;
          local_268 = local_308;
          bVar20 = SBORROW4(0x20,uVar17);
          iVar6 = 0x20 - uVar17;
          bVar19 = iVar6 == 0;
        } while (0x20 < uVar17 || bVar19);
      }
      auVar10 = local_308;
      local_268 = local_308;
      if (0x20 - (this_00->UnvalidatedReferences).Num < uVar17) {
        uStack_340 = 0x14202bf54;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                            ,0x660,L"");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar1 = (this_00->UnvalidatedReferences).Entries + (this_00->UnvalidatedReferences).Num;
      ppUVar4 = ppUVar12 + uVar17 * auVar10._12_4_;
      for (; ppUVar12 != ppUVar4; ppUVar12 = ppUVar12 + (auVar10._8_8_ >> 0x20)) {
        pFVar1->Object = ppUVar12;
        pFVar1 = pFVar1 + 1;
      }
      (this_00->UnvalidatedReferences).Num = (this_00->UnvalidatedReferences).Num + uVar17;
      if ((this_00->UnvalidatedReferences).Num == 0x20) {
        uStack_340 = 0x14202bfd4;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("!UnvalidatedReferences.IsFull()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                            ,0x61a,L"");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
    }
    pauVar16 = pauVar16 + 1;
  } while (pauVar16 != (undefined1 (*) [16])local_48);
  (this_00->UnvalidatedStridedArrays).Num = 0;
  return;
}

// DrainStridedArraysFull @ 14202c040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<4>_>
::DrainStridedArraysFull
          (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<4>_>
           *this)

{
  FMutableReference *pFVar1;
  FStridedReferenceArray *pFVar2;
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<4>_>
  *pTVar3;
  UObject **ppUVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  undefined8 uVar8;
  FScriptArray *pFVar9;
  undefined1 auVar10 [16];
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<4>_>
  *this_00;
  ulonglong *puVar11;
  UObject **ppUVar12;
  uint uVar13;
  FStridedReferenceArray *pFVar14;
  longlong lVar15;
  undefined1 (*pauVar16) [16];
  uint uVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auStack_3f0 [8];
  undefined1 auStack_3e8 [4];
  undefined1 auStack_3e4 [4];
  longlong lStack_3e0;
  uint auStack_3d8 [2];
  longlong lStack_3d0;
  uint auStack_3c8 [2];
  longlong lStack_3c0;
  undefined4 uStack_3b8;
  undefined1 auStack_3b4 [4];
  undefined1 auStack_3b0 [8];
  undefined1 auStack_3a8 [4];
  undefined1 auStack_3a4 [4];
  undefined1 auStack_3a0 [8];
  undefined1 auStack_398 [4];
  undefined1 auStack_394 [4];
  undefined1 auStack_390 [8];
  undefined1 auStack_388 [4];
  undefined1 auStack_384 [4];
  undefined1 auStack_380 [8];
  undefined1 auStack_378 [4];
  undefined1 auStack_374 [52];
  undefined8 uStack_340;
  undefined1 auStack_338 [32];
  FScriptArray *local_318;
  undefined8 uStack_310;
  undefined1 local_308 [16];
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<4>_>
  *local_2f8;
  undefined8 uStack_2f0;
  undefined1 *local_2e8;
  undefined1 *local_2e0;
  undefined1 *local_2d8;
  undefined1 *local_2d0;
  undefined1 *local_2c8;
  undefined1 *local_2c0;
  undefined1 *local_2b8;
  undefined1 *local_2b0;
  undefined1 *local_2a8;
  undefined1 *local_2a0;
  undefined1 *local_298;
  undefined1 *local_290;
  undefined1 *local_288;
  undefined1 *local_280;
  undefined1 *local_278;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  ulonglong local_248;
  uint auStack_240 [126];
  ulonglong local_48 [4];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_338;
  local_2f8 = this;
  local_2d0 = auStack_3b4 + -(longlong)this;
  local_2c8 = auStack_3b0 + -(longlong)this;
  local_2c0 = auStack_3a8 + -(longlong)this;
  local_2b8 = auStack_3a4 + -(longlong)this;
  local_2b0 = auStack_3a0 + -(longlong)this;
  local_2a8 = auStack_398 + -(longlong)this;
  local_2a0 = auStack_394 + -(longlong)this;
  local_298 = auStack_390 + -(longlong)this;
  local_290 = auStack_388 + -(longlong)this;
  local_288 = auStack_384 + -(longlong)this;
  local_280 = auStack_380 + -(longlong)this;
  local_278 = auStack_378 + -(longlong)this;
  local_308._0_8_ = auStack_374 + -(longlong)this;
  local_2e8 = auStack_3f0 + -(longlong)this;
  local_2e0 = auStack_3e8 + -(longlong)this;
  local_2d8 = auStack_3e4 + -(longlong)this;
  lVar15 = 4;
  pFVar14 = (this->UnvalidatedStridedArrays).Entries + 2;
  do {
    uVar8 = *(undefined8 *)&pFVar14[-2].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[-2].Array)->field_0x8;
    *(ulonglong *)((longlong)&pFVar14->Array + (longlong)local_2e8) =
         *(longlong *)pFVar14[-2].Array + (*(ulonglong *)&pFVar14[-2].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar14->Array + (longlong)local_2e0) = uVar5;
    *(uint *)((longlong)&pFVar14->Array + (longlong)local_2d8) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    uStack_310._2_4_ = (uint)((ulonglong)*(undefined8 *)&pFVar14[-1].Layout >> 0x10);
    uVar5 = *(undefined4 *)&(pFVar14[-1].Array)->field_0x8;
    *(ulonglong *)(((longlong)&lStack_3e0 - (longlong)this) + (longlong)pFVar14) =
         *(longlong *)pFVar14[-1].Array + (*(ulonglong *)&pFVar14[-1].Layout & 0xffff) * 8;
    *(undefined4 *)(((longlong)auStack_3d8 - (longlong)this) + (longlong)pFVar14) = uVar5;
    *(uint *)((longlong)auStack_3d8 + (4 - (longlong)this) + (longlong)pFVar14) =
         uStack_310._2_4_ & 0xffff;
    uStack_310._2_4_ = (uint)((ulonglong)*(undefined8 *)&pFVar14->Layout >> 0x10);
    uVar5 = *(undefined4 *)&pFVar14->Array->field_0x8;
    *(ulonglong *)(((longlong)&lStack_3d0 - (longlong)this) + (longlong)pFVar14) =
         *(longlong *)pFVar14->Array + (*(ulonglong *)&pFVar14->Layout & 0xffff) * 8;
    *(undefined4 *)(((longlong)auStack_3c8 - (longlong)this) + (longlong)pFVar14) = uVar5;
    *(uint *)((longlong)auStack_3c8 + (4 - (longlong)this) + (longlong)pFVar14) =
         uStack_310._2_4_ & 0xffff;
    uStack_310._2_4_ = (uint)((ulonglong)*(undefined8 *)&pFVar14[1].Layout >> 0x10);
    uVar5 = *(undefined4 *)&(pFVar14[1].Array)->field_0x8;
    *(ulonglong *)((longlong)pFVar14 + ((longlong)&lStack_3c0 - (longlong)this)) =
         *(longlong *)pFVar14[1].Array + (*(ulonglong *)&pFVar14[1].Layout & 0xffff) * 8;
    *(undefined4 *)(((longlong)&uStack_3b8 - (longlong)this) + (longlong)pFVar14) = uVar5;
    *(uint *)((longlong)&pFVar14->Array + (longlong)local_2d0) = uStack_310._2_4_ & 0xffff;
    uVar8 = *(undefined8 *)&pFVar14[2].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[2].Array)->field_0x8;
    *(ulonglong *)((longlong)&pFVar14->Array + (longlong)local_2c8) =
         *(longlong *)pFVar14[2].Array + (*(ulonglong *)&pFVar14[2].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar14->Array + (longlong)local_2c0) = uVar5;
    *(uint *)((longlong)&pFVar14->Array + (longlong)local_2b8) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    uVar8 = *(undefined8 *)&pFVar14[3].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[3].Array)->field_0x8;
    pFVar2 = pFVar14 + 8;
    *(ulonglong *)((longlong)&pFVar2[-8].Array + (longlong)local_2b0) =
         *(longlong *)pFVar14[3].Array + (*(ulonglong *)&pFVar14[3].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar2[-8].Array + (longlong)local_2a8) = uVar5;
    *(uint *)((longlong)&pFVar2[-8].Array + (longlong)local_2a0) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    uVar8 = *(undefined8 *)&pFVar14[4].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[4].Array)->field_0x8;
    *(ulonglong *)((longlong)&pFVar2[-8].Array + (longlong)local_298) =
         *(longlong *)pFVar14[4].Array + (*(ulonglong *)&pFVar14[4].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar2[-8].Array + (longlong)local_290) = uVar5;
    *(uint *)((longlong)&pFVar2[-8].Array + (longlong)local_288) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    pFVar9 = pFVar14[5].Array;
    uVar8 = *(undefined8 *)&pFVar14[5].Layout;
    uVar5 = *(undefined4 *)&pFVar9->field_0x8;
    *(ulonglong *)((longlong)&pFVar2[-8].Array + (longlong)local_280) =
         *(longlong *)pFVar9 + (*(ulonglong *)&pFVar14[5].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar2[-8].Array + (longlong)local_278) = uVar5;
    *(uint *)((longlong)&pFVar2[-8].Array + local_308._0_8_) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    lVar15 = lVar15 + -1;
    pFVar14 = pFVar2;
  } while (lVar15 != 0);
  this_00 = local_2f8;
  puVar11 = &local_248;
  do {
    puVar11 = puVar11 + 2;
  } while (puVar11 != local_48);
  pauVar16 = (undefined1 (*) [16])&local_248;
  local_318 = pFVar9;
  uStack_310 = uVar8;
  do {
    local_308 = *pauVar16;
    if (*(int *)(*pauVar16 + 8) != 0) {
      uVar13 = 0x20 - (this_00->UnvalidatedReferences).Num;
      ppUVar12 = local_308._0_8_;
      uVar17 = local_308._8_4_;
      local_258 = local_308;
      if (uVar13 <= *(uint *)(*pauVar16 + 8)) {
        iVar18 = local_308._12_4_;
        bVar20 = SBORROW4(uVar13,uVar17);
        iVar6 = uVar13 - uVar17;
        bVar19 = uVar13 == uVar17;
        local_268 = local_308;
        do {
          auVar10 = local_268;
          local_308 = local_268;
          if (!bVar19 && bVar20 == iVar6 < 0) {
            uStack_340 = 0x14202c4da;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Idx <= Body.Num",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x5d5,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          if (iVar18 == 0) {
            uStack_340 = 0x14202c505;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Body.Stride > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x5d6,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          uVar17 = uVar17 - uVar13;
          uStack_2f0._4_4_ = auVar10._12_4_;
          local_2f8 = auVar10._0_8_;
          uStack_2f0._0_4_ = uVar13;
          local_308._8_4_ = uVar17;
          ppUVar12 = ppUVar12 + iVar18 * uVar13;
          local_308._0_8_ = ppUVar12;
          if (0x20 - (this_00->UnvalidatedReferences).Num < uVar13) {
            uStack_340 = 0x14202c55b;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x660,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          pFVar1 = (this_00->UnvalidatedReferences).Entries + (this_00->UnvalidatedReferences).Num;
          for (pTVar3 = local_2f8;
              pTVar3 != (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<4>_>
                         *)((longlong)local_2f8 + (ulonglong)(local_2f8._12_4_ * uVar13) * 8);
              pTVar3 = (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<4>_>
                        *)((longlong)pTVar3 + (uStack_2f0 >> 0x20) * 8)) {
            pFVar1->Object = (UObject **)pTVar3;
            pFVar1 = pFVar1 + 1;
          }
          (this_00->UnvalidatedReferences).Num = (this_00->UnvalidatedReferences).Num + uVar13;
          if ((this_00->UnvalidatedReferences).Num != 0x20) {
            uStack_340 = 0x14202c5e2;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("UnvalidatedReferences.IsFull()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x615,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          uStack_340 = 0x14202c5f0;
          DrainUnvalidatedFull(this_00);
          uVar13 = 0x20;
          local_268 = local_308;
          bVar20 = SBORROW4(0x20,uVar17);
          iVar6 = 0x20 - uVar17;
          bVar19 = iVar6 == 0;
        } while (0x20 < uVar17 || bVar19);
      }
      auVar10 = local_308;
      local_268 = local_308;
      if (0x20 - (this_00->UnvalidatedReferences).Num < uVar17) {
        uStack_340 = 0x14202c644;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                            ,0x660,L"");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar1 = (this_00->UnvalidatedReferences).Entries + (this_00->UnvalidatedReferences).Num;
      ppUVar4 = ppUVar12 + uVar17 * auVar10._12_4_;
      for (; ppUVar12 != ppUVar4; ppUVar12 = ppUVar12 + (auVar10._8_8_ >> 0x20)) {
        pFVar1->Object = ppUVar12;
        pFVar1 = pFVar1 + 1;
      }
      (this_00->UnvalidatedReferences).Num = (this_00->UnvalidatedReferences).Num + uVar17;
      if ((this_00->UnvalidatedReferences).Num == 0x20) {
        uStack_340 = 0x14202c6c4;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("!UnvalidatedReferences.IsFull()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                            ,0x61a,L"");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
    }
    pauVar16 = pauVar16 + 1;
  } while (pauVar16 != (undefined1 (*) [16])local_48);
  (this_00->UnvalidatedStridedArrays).Num = 0;
  return;
}

// DrainStridedArraysFull @ 14202c730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<5>_>
::DrainStridedArraysFull
          (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<5>_>
           *this)

{
  FMutableReference *pFVar1;
  FStridedReferenceArray *pFVar2;
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<5>_>
  *pTVar3;
  UObject **ppUVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  undefined8 uVar8;
  FScriptArray *pFVar9;
  undefined1 auVar10 [16];
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<5>_>
  *this_00;
  ulonglong *puVar11;
  UObject **ppUVar12;
  uint uVar13;
  FStridedReferenceArray *pFVar14;
  longlong lVar15;
  undefined1 (*pauVar16) [16];
  uint uVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auStack_3f0 [8];
  undefined1 auStack_3e8 [4];
  undefined1 auStack_3e4 [4];
  longlong lStack_3e0;
  uint auStack_3d8 [2];
  longlong lStack_3d0;
  uint auStack_3c8 [2];
  longlong lStack_3c0;
  undefined4 uStack_3b8;
  undefined1 auStack_3b4 [4];
  undefined1 auStack_3b0 [8];
  undefined1 auStack_3a8 [4];
  undefined1 auStack_3a4 [4];
  undefined1 auStack_3a0 [8];
  undefined1 auStack_398 [4];
  undefined1 auStack_394 [4];
  undefined1 auStack_390 [8];
  undefined1 auStack_388 [4];
  undefined1 auStack_384 [4];
  undefined1 auStack_380 [8];
  undefined1 auStack_378 [4];
  undefined1 auStack_374 [52];
  undefined8 uStack_340;
  undefined1 auStack_338 [32];
  FScriptArray *local_318;
  undefined8 uStack_310;
  undefined1 local_308 [16];
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<5>_>
  *local_2f8;
  undefined8 uStack_2f0;
  undefined1 *local_2e8;
  undefined1 *local_2e0;
  undefined1 *local_2d8;
  undefined1 *local_2d0;
  undefined1 *local_2c8;
  undefined1 *local_2c0;
  undefined1 *local_2b8;
  undefined1 *local_2b0;
  undefined1 *local_2a8;
  undefined1 *local_2a0;
  undefined1 *local_298;
  undefined1 *local_290;
  undefined1 *local_288;
  undefined1 *local_280;
  undefined1 *local_278;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  ulonglong local_248;
  uint auStack_240 [126];
  ulonglong local_48 [4];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_338;
  local_2f8 = this;
  local_2d0 = auStack_3b4 + -(longlong)this;
  local_2c8 = auStack_3b0 + -(longlong)this;
  local_2c0 = auStack_3a8 + -(longlong)this;
  local_2b8 = auStack_3a4 + -(longlong)this;
  local_2b0 = auStack_3a0 + -(longlong)this;
  local_2a8 = auStack_398 + -(longlong)this;
  local_2a0 = auStack_394 + -(longlong)this;
  local_298 = auStack_390 + -(longlong)this;
  local_290 = auStack_388 + -(longlong)this;
  local_288 = auStack_384 + -(longlong)this;
  local_280 = auStack_380 + -(longlong)this;
  local_278 = auStack_378 + -(longlong)this;
  local_308._0_8_ = auStack_374 + -(longlong)this;
  local_2e8 = auStack_3f0 + -(longlong)this;
  local_2e0 = auStack_3e8 + -(longlong)this;
  local_2d8 = auStack_3e4 + -(longlong)this;
  lVar15 = 4;
  pFVar14 = (this->UnvalidatedStridedArrays).Entries + 2;
  do {
    uVar8 = *(undefined8 *)&pFVar14[-2].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[-2].Array)->field_0x8;
    *(ulonglong *)((longlong)&pFVar14->Array + (longlong)local_2e8) =
         *(longlong *)pFVar14[-2].Array + (*(ulonglong *)&pFVar14[-2].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar14->Array + (longlong)local_2e0) = uVar5;
    *(uint *)((longlong)&pFVar14->Array + (longlong)local_2d8) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    uStack_310._2_4_ = (uint)((ulonglong)*(undefined8 *)&pFVar14[-1].Layout >> 0x10);
    uVar5 = *(undefined4 *)&(pFVar14[-1].Array)->field_0x8;
    *(ulonglong *)(((longlong)&lStack_3e0 - (longlong)this) + (longlong)pFVar14) =
         *(longlong *)pFVar14[-1].Array + (*(ulonglong *)&pFVar14[-1].Layout & 0xffff) * 8;
    *(undefined4 *)(((longlong)auStack_3d8 - (longlong)this) + (longlong)pFVar14) = uVar5;
    *(uint *)((longlong)auStack_3d8 + (4 - (longlong)this) + (longlong)pFVar14) =
         uStack_310._2_4_ & 0xffff;
    uStack_310._2_4_ = (uint)((ulonglong)*(undefined8 *)&pFVar14->Layout >> 0x10);
    uVar5 = *(undefined4 *)&pFVar14->Array->field_0x8;
    *(ulonglong *)(((longlong)&lStack_3d0 - (longlong)this) + (longlong)pFVar14) =
         *(longlong *)pFVar14->Array + (*(ulonglong *)&pFVar14->Layout & 0xffff) * 8;
    *(undefined4 *)(((longlong)auStack_3c8 - (longlong)this) + (longlong)pFVar14) = uVar5;
    *(uint *)((longlong)auStack_3c8 + (4 - (longlong)this) + (longlong)pFVar14) =
         uStack_310._2_4_ & 0xffff;
    uStack_310._2_4_ = (uint)((ulonglong)*(undefined8 *)&pFVar14[1].Layout >> 0x10);
    uVar5 = *(undefined4 *)&(pFVar14[1].Array)->field_0x8;
    *(ulonglong *)((longlong)pFVar14 + ((longlong)&lStack_3c0 - (longlong)this)) =
         *(longlong *)pFVar14[1].Array + (*(ulonglong *)&pFVar14[1].Layout & 0xffff) * 8;
    *(undefined4 *)(((longlong)&uStack_3b8 - (longlong)this) + (longlong)pFVar14) = uVar5;
    *(uint *)((longlong)&pFVar14->Array + (longlong)local_2d0) = uStack_310._2_4_ & 0xffff;
    uVar8 = *(undefined8 *)&pFVar14[2].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[2].Array)->field_0x8;
    *(ulonglong *)((longlong)&pFVar14->Array + (longlong)local_2c8) =
         *(longlong *)pFVar14[2].Array + (*(ulonglong *)&pFVar14[2].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar14->Array + (longlong)local_2c0) = uVar5;
    *(uint *)((longlong)&pFVar14->Array + (longlong)local_2b8) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    uVar8 = *(undefined8 *)&pFVar14[3].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[3].Array)->field_0x8;
    pFVar2 = pFVar14 + 8;
    *(ulonglong *)((longlong)&pFVar2[-8].Array + (longlong)local_2b0) =
         *(longlong *)pFVar14[3].Array + (*(ulonglong *)&pFVar14[3].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar2[-8].Array + (longlong)local_2a8) = uVar5;
    *(uint *)((longlong)&pFVar2[-8].Array + (longlong)local_2a0) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    uVar8 = *(undefined8 *)&pFVar14[4].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[4].Array)->field_0x8;
    *(ulonglong *)((longlong)&pFVar2[-8].Array + (longlong)local_298) =
         *(longlong *)pFVar14[4].Array + (*(ulonglong *)&pFVar14[4].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar2[-8].Array + (longlong)local_290) = uVar5;
    *(uint *)((longlong)&pFVar2[-8].Array + (longlong)local_288) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    pFVar9 = pFVar14[5].Array;
    uVar8 = *(undefined8 *)&pFVar14[5].Layout;
    uVar5 = *(undefined4 *)&pFVar9->field_0x8;
    *(ulonglong *)((longlong)&pFVar2[-8].Array + (longlong)local_280) =
         *(longlong *)pFVar9 + (*(ulonglong *)&pFVar14[5].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar2[-8].Array + (longlong)local_278) = uVar5;
    *(uint *)((longlong)&pFVar2[-8].Array + local_308._0_8_) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    lVar15 = lVar15 + -1;
    pFVar14 = pFVar2;
  } while (lVar15 != 0);
  this_00 = local_2f8;
  puVar11 = &local_248;
  do {
    puVar11 = puVar11 + 2;
  } while (puVar11 != local_48);
  pauVar16 = (undefined1 (*) [16])&local_248;
  local_318 = pFVar9;
  uStack_310 = uVar8;
  do {
    local_308 = *pauVar16;
    if (*(int *)(*pauVar16 + 8) != 0) {
      uVar13 = 0x20 - (this_00->UnvalidatedReferences).Num;
      ppUVar12 = local_308._0_8_;
      uVar17 = local_308._8_4_;
      local_258 = local_308;
      if (uVar13 <= *(uint *)(*pauVar16 + 8)) {
        iVar18 = local_308._12_4_;
        bVar20 = SBORROW4(uVar13,uVar17);
        iVar6 = uVar13 - uVar17;
        bVar19 = uVar13 == uVar17;
        local_268 = local_308;
        do {
          auVar10 = local_268;
          local_308 = local_268;
          if (!bVar19 && bVar20 == iVar6 < 0) {
            uStack_340 = 0x14202cbca;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Idx <= Body.Num",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x5d5,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          if (iVar18 == 0) {
            uStack_340 = 0x14202cbf5;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Body.Stride > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x5d6,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          uVar17 = uVar17 - uVar13;
          uStack_2f0._4_4_ = auVar10._12_4_;
          local_2f8 = auVar10._0_8_;
          uStack_2f0._0_4_ = uVar13;
          local_308._8_4_ = uVar17;
          ppUVar12 = ppUVar12 + iVar18 * uVar13;
          local_308._0_8_ = ppUVar12;
          if (0x20 - (this_00->UnvalidatedReferences).Num < uVar13) {
            uStack_340 = 0x14202cc4b;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x660,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          pFVar1 = (this_00->UnvalidatedReferences).Entries + (this_00->UnvalidatedReferences).Num;
          for (pTVar3 = local_2f8;
              pTVar3 != (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<5>_>
                         *)((longlong)local_2f8 + (ulonglong)(local_2f8._12_4_ * uVar13) * 8);
              pTVar3 = (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<5>_>
                        *)((longlong)pTVar3 + (uStack_2f0 >> 0x20) * 8)) {
            pFVar1->Object = (UObject **)pTVar3;
            pFVar1 = pFVar1 + 1;
          }
          (this_00->UnvalidatedReferences).Num = (this_00->UnvalidatedReferences).Num + uVar13;
          if ((this_00->UnvalidatedReferences).Num != 0x20) {
            uStack_340 = 0x14202ccd2;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("UnvalidatedReferences.IsFull()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x615,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          uStack_340 = 0x14202cce0;
          DrainUnvalidatedFull(this_00);
          uVar13 = 0x20;
          local_268 = local_308;
          bVar20 = SBORROW4(0x20,uVar17);
          iVar6 = 0x20 - uVar17;
          bVar19 = iVar6 == 0;
        } while (0x20 < uVar17 || bVar19);
      }
      auVar10 = local_308;
      local_268 = local_308;
      if (0x20 - (this_00->UnvalidatedReferences).Num < uVar17) {
        uStack_340 = 0x14202cd34;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                            ,0x660,L"");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar1 = (this_00->UnvalidatedReferences).Entries + (this_00->UnvalidatedReferences).Num;
      ppUVar4 = ppUVar12 + uVar17 * auVar10._12_4_;
      for (; ppUVar12 != ppUVar4; ppUVar12 = ppUVar12 + (auVar10._8_8_ >> 0x20)) {
        pFVar1->Object = ppUVar12;
        pFVar1 = pFVar1 + 1;
      }
      (this_00->UnvalidatedReferences).Num = (this_00->UnvalidatedReferences).Num + uVar17;
      if ((this_00->UnvalidatedReferences).Num == 0x20) {
        uStack_340 = 0x14202cdb4;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("!UnvalidatedReferences.IsFull()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                            ,0x61a,L"");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
    }
    pauVar16 = pauVar16 + 1;
  } while (pauVar16 != (undefined1 (*) [16])local_48);
  (this_00->UnvalidatedStridedArrays).Num = 0;
  return;
}

// DrainStridedArraysFull @ 14202ce20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<8>_>
::DrainStridedArraysFull
          (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<8>_>
           *this)

{
  FMutableReference *pFVar1;
  FStridedReferenceArray *pFVar2;
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<8>_>
  *pTVar3;
  UObject **ppUVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  undefined8 uVar8;
  FScriptArray *pFVar9;
  undefined1 auVar10 [16];
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<8>_>
  *this_00;
  ulonglong *puVar11;
  UObject **ppUVar12;
  uint uVar13;
  FStridedReferenceArray *pFVar14;
  longlong lVar15;
  undefined1 (*pauVar16) [16];
  uint uVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auStack_3f0 [8];
  undefined1 auStack_3e8 [4];
  undefined1 auStack_3e4 [4];
  longlong lStack_3e0;
  uint auStack_3d8 [2];
  longlong lStack_3d0;
  uint auStack_3c8 [2];
  longlong lStack_3c0;
  undefined4 uStack_3b8;
  undefined1 auStack_3b4 [4];
  undefined1 auStack_3b0 [8];
  undefined1 auStack_3a8 [4];
  undefined1 auStack_3a4 [4];
  undefined1 auStack_3a0 [8];
  undefined1 auStack_398 [4];
  undefined1 auStack_394 [4];
  undefined1 auStack_390 [8];
  undefined1 auStack_388 [4];
  undefined1 auStack_384 [4];
  undefined1 auStack_380 [8];
  undefined1 auStack_378 [4];
  undefined1 auStack_374 [52];
  undefined8 uStack_340;
  undefined1 auStack_338 [32];
  FScriptArray *local_318;
  undefined8 uStack_310;
  undefined1 local_308 [16];
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<8>_>
  *local_2f8;
  undefined8 uStack_2f0;
  undefined1 *local_2e8;
  undefined1 *local_2e0;
  undefined1 *local_2d8;
  undefined1 *local_2d0;
  undefined1 *local_2c8;
  undefined1 *local_2c0;
  undefined1 *local_2b8;
  undefined1 *local_2b0;
  undefined1 *local_2a8;
  undefined1 *local_2a0;
  undefined1 *local_298;
  undefined1 *local_290;
  undefined1 *local_288;
  undefined1 *local_280;
  undefined1 *local_278;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  ulonglong local_248;
  uint auStack_240 [126];
  ulonglong local_48 [4];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_338;
  local_2f8 = this;
  local_2d0 = auStack_3b4 + -(longlong)this;
  local_2c8 = auStack_3b0 + -(longlong)this;
  local_2c0 = auStack_3a8 + -(longlong)this;
  local_2b8 = auStack_3a4 + -(longlong)this;
  local_2b0 = auStack_3a0 + -(longlong)this;
  local_2a8 = auStack_398 + -(longlong)this;
  local_2a0 = auStack_394 + -(longlong)this;
  local_298 = auStack_390 + -(longlong)this;
  local_290 = auStack_388 + -(longlong)this;
  local_288 = auStack_384 + -(longlong)this;
  local_280 = auStack_380 + -(longlong)this;
  local_278 = auStack_378 + -(longlong)this;
  local_308._0_8_ = auStack_374 + -(longlong)this;
  local_2e8 = auStack_3f0 + -(longlong)this;
  local_2e0 = auStack_3e8 + -(longlong)this;
  local_2d8 = auStack_3e4 + -(longlong)this;
  lVar15 = 4;
  pFVar14 = (this->UnvalidatedStridedArrays).Entries + 2;
  do {
    uVar8 = *(undefined8 *)&pFVar14[-2].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[-2].Array)->field_0x8;
    *(ulonglong *)((longlong)&pFVar14->Array + (longlong)local_2e8) =
         *(longlong *)pFVar14[-2].Array + (*(ulonglong *)&pFVar14[-2].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar14->Array + (longlong)local_2e0) = uVar5;
    *(uint *)((longlong)&pFVar14->Array + (longlong)local_2d8) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    uStack_310._2_4_ = (uint)((ulonglong)*(undefined8 *)&pFVar14[-1].Layout >> 0x10);
    uVar5 = *(undefined4 *)&(pFVar14[-1].Array)->field_0x8;
    *(ulonglong *)(((longlong)&lStack_3e0 - (longlong)this) + (longlong)pFVar14) =
         *(longlong *)pFVar14[-1].Array + (*(ulonglong *)&pFVar14[-1].Layout & 0xffff) * 8;
    *(undefined4 *)(((longlong)auStack_3d8 - (longlong)this) + (longlong)pFVar14) = uVar5;
    *(uint *)((longlong)auStack_3d8 + (4 - (longlong)this) + (longlong)pFVar14) =
         uStack_310._2_4_ & 0xffff;
    uStack_310._2_4_ = (uint)((ulonglong)*(undefined8 *)&pFVar14->Layout >> 0x10);
    uVar5 = *(undefined4 *)&pFVar14->Array->field_0x8;
    *(ulonglong *)(((longlong)&lStack_3d0 - (longlong)this) + (longlong)pFVar14) =
         *(longlong *)pFVar14->Array + (*(ulonglong *)&pFVar14->Layout & 0xffff) * 8;
    *(undefined4 *)(((longlong)auStack_3c8 - (longlong)this) + (longlong)pFVar14) = uVar5;
    *(uint *)((longlong)auStack_3c8 + (4 - (longlong)this) + (longlong)pFVar14) =
         uStack_310._2_4_ & 0xffff;
    uStack_310._2_4_ = (uint)((ulonglong)*(undefined8 *)&pFVar14[1].Layout >> 0x10);
    uVar5 = *(undefined4 *)&(pFVar14[1].Array)->field_0x8;
    *(ulonglong *)((longlong)pFVar14 + ((longlong)&lStack_3c0 - (longlong)this)) =
         *(longlong *)pFVar14[1].Array + (*(ulonglong *)&pFVar14[1].Layout & 0xffff) * 8;
    *(undefined4 *)(((longlong)&uStack_3b8 - (longlong)this) + (longlong)pFVar14) = uVar5;
    *(uint *)((longlong)&pFVar14->Array + (longlong)local_2d0) = uStack_310._2_4_ & 0xffff;
    uVar8 = *(undefined8 *)&pFVar14[2].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[2].Array)->field_0x8;
    *(ulonglong *)((longlong)&pFVar14->Array + (longlong)local_2c8) =
         *(longlong *)pFVar14[2].Array + (*(ulonglong *)&pFVar14[2].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar14->Array + (longlong)local_2c0) = uVar5;
    *(uint *)((longlong)&pFVar14->Array + (longlong)local_2b8) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    uVar8 = *(undefined8 *)&pFVar14[3].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[3].Array)->field_0x8;
    pFVar2 = pFVar14 + 8;
    *(ulonglong *)((longlong)&pFVar2[-8].Array + (longlong)local_2b0) =
         *(longlong *)pFVar14[3].Array + (*(ulonglong *)&pFVar14[3].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar2[-8].Array + (longlong)local_2a8) = uVar5;
    *(uint *)((longlong)&pFVar2[-8].Array + (longlong)local_2a0) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    uVar8 = *(undefined8 *)&pFVar14[4].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[4].Array)->field_0x8;
    *(ulonglong *)((longlong)&pFVar2[-8].Array + (longlong)local_298) =
         *(longlong *)pFVar14[4].Array + (*(ulonglong *)&pFVar14[4].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar2[-8].Array + (longlong)local_290) = uVar5;
    *(uint *)((longlong)&pFVar2[-8].Array + (longlong)local_288) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    pFVar9 = pFVar14[5].Array;
    uVar8 = *(undefined8 *)&pFVar14[5].Layout;
    uVar5 = *(undefined4 *)&pFVar9->field_0x8;
    *(ulonglong *)((longlong)&pFVar2[-8].Array + (longlong)local_280) =
         *(longlong *)pFVar9 + (*(ulonglong *)&pFVar14[5].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar2[-8].Array + (longlong)local_278) = uVar5;
    *(uint *)((longlong)&pFVar2[-8].Array + local_308._0_8_) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    lVar15 = lVar15 + -1;
    pFVar14 = pFVar2;
  } while (lVar15 != 0);
  this_00 = local_2f8;
  puVar11 = &local_248;
  do {
    puVar11 = puVar11 + 2;
  } while (puVar11 != local_48);
  pauVar16 = (undefined1 (*) [16])&local_248;
  local_318 = pFVar9;
  uStack_310 = uVar8;
  do {
    local_308 = *pauVar16;
    if (*(int *)(*pauVar16 + 8) != 0) {
      uVar13 = 0x20 - (this_00->UnvalidatedReferences).Num;
      ppUVar12 = local_308._0_8_;
      uVar17 = local_308._8_4_;
      local_258 = local_308;
      if (uVar13 <= *(uint *)(*pauVar16 + 8)) {
        iVar18 = local_308._12_4_;
        bVar20 = SBORROW4(uVar13,uVar17);
        iVar6 = uVar13 - uVar17;
        bVar19 = uVar13 == uVar17;
        local_268 = local_308;
        do {
          auVar10 = local_268;
          local_308 = local_268;
          if (!bVar19 && bVar20 == iVar6 < 0) {
            uStack_340 = 0x14202d2ba;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Idx <= Body.Num",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x5d5,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          if (iVar18 == 0) {
            uStack_340 = 0x14202d2e5;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Body.Stride > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x5d6,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          uVar17 = uVar17 - uVar13;
          uStack_2f0._4_4_ = auVar10._12_4_;
          local_2f8 = auVar10._0_8_;
          uStack_2f0._0_4_ = uVar13;
          local_308._8_4_ = uVar17;
          ppUVar12 = ppUVar12 + iVar18 * uVar13;
          local_308._0_8_ = ppUVar12;
          if (0x20 - (this_00->UnvalidatedReferences).Num < uVar13) {
            uStack_340 = 0x14202d33b;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x660,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          pFVar1 = (this_00->UnvalidatedReferences).Entries + (this_00->UnvalidatedReferences).Num;
          for (pTVar3 = local_2f8;
              pTVar3 != (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<8>_>
                         *)((longlong)local_2f8 + (ulonglong)(local_2f8._12_4_ * uVar13) * 8);
              pTVar3 = (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<8>_>
                        *)((longlong)pTVar3 + (uStack_2f0 >> 0x20) * 8)) {
            pFVar1->Object = (UObject **)pTVar3;
            pFVar1 = pFVar1 + 1;
          }
          (this_00->UnvalidatedReferences).Num = (this_00->UnvalidatedReferences).Num + uVar13;
          if ((this_00->UnvalidatedReferences).Num != 0x20) {
            uStack_340 = 0x14202d3c2;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("UnvalidatedReferences.IsFull()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x615,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          uStack_340 = 0x14202d3d0;
          DrainUnvalidatedFull(this_00);
          uVar13 = 0x20;
          local_268 = local_308;
          bVar20 = SBORROW4(0x20,uVar17);
          iVar6 = 0x20 - uVar17;
          bVar19 = iVar6 == 0;
        } while (0x20 < uVar17 || bVar19);
      }
      auVar10 = local_308;
      local_268 = local_308;
      if (0x20 - (this_00->UnvalidatedReferences).Num < uVar17) {
        uStack_340 = 0x14202d424;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                            ,0x660,L"");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar1 = (this_00->UnvalidatedReferences).Entries + (this_00->UnvalidatedReferences).Num;
      ppUVar4 = ppUVar12 + uVar17 * auVar10._12_4_;
      for (; ppUVar12 != ppUVar4; ppUVar12 = ppUVar12 + (auVar10._8_8_ >> 0x20)) {
        pFVar1->Object = ppUVar12;
        pFVar1 = pFVar1 + 1;
      }
      (this_00->UnvalidatedReferences).Num = (this_00->UnvalidatedReferences).Num + uVar17;
      if ((this_00->UnvalidatedReferences).Num == 0x20) {
        uStack_340 = 0x14202d4a4;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("!UnvalidatedReferences.IsFull()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                            ,0x61a,L"");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
    }
    pauVar16 = pauVar16 + 1;
  } while (pauVar16 != (undefined1 (*) [16])local_48);
  (this_00->UnvalidatedStridedArrays).Num = 0;
  return;
}

// DrainStridedArraysFull @ 14202d510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<9>_>
::DrainStridedArraysFull
          (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<9>_>
           *this)

{
  FMutableReference *pFVar1;
  FStridedReferenceArray *pFVar2;
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<9>_>
  *pTVar3;
  UObject **ppUVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  undefined8 uVar8;
  FScriptArray *pFVar9;
  undefined1 auVar10 [16];
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<9>_>
  *this_00;
  ulonglong *puVar11;
  UObject **ppUVar12;
  uint uVar13;
  FStridedReferenceArray *pFVar14;
  longlong lVar15;
  undefined1 (*pauVar16) [16];
  uint uVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auStack_3f0 [8];
  undefined1 auStack_3e8 [4];
  undefined1 auStack_3e4 [4];
  longlong lStack_3e0;
  uint auStack_3d8 [2];
  longlong lStack_3d0;
  uint auStack_3c8 [2];
  longlong lStack_3c0;
  undefined4 uStack_3b8;
  undefined1 auStack_3b4 [4];
  undefined1 auStack_3b0 [8];
  undefined1 auStack_3a8 [4];
  undefined1 auStack_3a4 [4];
  undefined1 auStack_3a0 [8];
  undefined1 auStack_398 [4];
  undefined1 auStack_394 [4];
  undefined1 auStack_390 [8];
  undefined1 auStack_388 [4];
  undefined1 auStack_384 [4];
  undefined1 auStack_380 [8];
  undefined1 auStack_378 [4];
  undefined1 auStack_374 [52];
  undefined8 uStack_340;
  undefined1 auStack_338 [32];
  FScriptArray *local_318;
  undefined8 uStack_310;
  undefined1 local_308 [16];
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<9>_>
  *local_2f8;
  undefined8 uStack_2f0;
  undefined1 *local_2e8;
  undefined1 *local_2e0;
  undefined1 *local_2d8;
  undefined1 *local_2d0;
  undefined1 *local_2c8;
  undefined1 *local_2c0;
  undefined1 *local_2b8;
  undefined1 *local_2b0;
  undefined1 *local_2a8;
  undefined1 *local_2a0;
  undefined1 *local_298;
  undefined1 *local_290;
  undefined1 *local_288;
  undefined1 *local_280;
  undefined1 *local_278;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  ulonglong local_248;
  uint auStack_240 [126];
  ulonglong local_48 [4];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_338;
  local_2f8 = this;
  local_2d0 = auStack_3b4 + -(longlong)this;
  local_2c8 = auStack_3b0 + -(longlong)this;
  local_2c0 = auStack_3a8 + -(longlong)this;
  local_2b8 = auStack_3a4 + -(longlong)this;
  local_2b0 = auStack_3a0 + -(longlong)this;
  local_2a8 = auStack_398 + -(longlong)this;
  local_2a0 = auStack_394 + -(longlong)this;
  local_298 = auStack_390 + -(longlong)this;
  local_290 = auStack_388 + -(longlong)this;
  local_288 = auStack_384 + -(longlong)this;
  local_280 = auStack_380 + -(longlong)this;
  local_278 = auStack_378 + -(longlong)this;
  local_308._0_8_ = auStack_374 + -(longlong)this;
  local_2e8 = auStack_3f0 + -(longlong)this;
  local_2e0 = auStack_3e8 + -(longlong)this;
  local_2d8 = auStack_3e4 + -(longlong)this;
  lVar15 = 4;
  pFVar14 = (this->UnvalidatedStridedArrays).Entries + 2;
  do {
    uVar8 = *(undefined8 *)&pFVar14[-2].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[-2].Array)->field_0x8;
    *(ulonglong *)((longlong)&pFVar14->Array + (longlong)local_2e8) =
         *(longlong *)pFVar14[-2].Array + (*(ulonglong *)&pFVar14[-2].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar14->Array + (longlong)local_2e0) = uVar5;
    *(uint *)((longlong)&pFVar14->Array + (longlong)local_2d8) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    uStack_310._2_4_ = (uint)((ulonglong)*(undefined8 *)&pFVar14[-1].Layout >> 0x10);
    uVar5 = *(undefined4 *)&(pFVar14[-1].Array)->field_0x8;
    *(ulonglong *)(((longlong)&lStack_3e0 - (longlong)this) + (longlong)pFVar14) =
         *(longlong *)pFVar14[-1].Array + (*(ulonglong *)&pFVar14[-1].Layout & 0xffff) * 8;
    *(undefined4 *)(((longlong)auStack_3d8 - (longlong)this) + (longlong)pFVar14) = uVar5;
    *(uint *)((longlong)auStack_3d8 + (4 - (longlong)this) + (longlong)pFVar14) =
         uStack_310._2_4_ & 0xffff;
    uStack_310._2_4_ = (uint)((ulonglong)*(undefined8 *)&pFVar14->Layout >> 0x10);
    uVar5 = *(undefined4 *)&pFVar14->Array->field_0x8;
    *(ulonglong *)(((longlong)&lStack_3d0 - (longlong)this) + (longlong)pFVar14) =
         *(longlong *)pFVar14->Array + (*(ulonglong *)&pFVar14->Layout & 0xffff) * 8;
    *(undefined4 *)(((longlong)auStack_3c8 - (longlong)this) + (longlong)pFVar14) = uVar5;
    *(uint *)((longlong)auStack_3c8 + (4 - (longlong)this) + (longlong)pFVar14) =
         uStack_310._2_4_ & 0xffff;
    uStack_310._2_4_ = (uint)((ulonglong)*(undefined8 *)&pFVar14[1].Layout >> 0x10);
    uVar5 = *(undefined4 *)&(pFVar14[1].Array)->field_0x8;
    *(ulonglong *)((longlong)pFVar14 + ((longlong)&lStack_3c0 - (longlong)this)) =
         *(longlong *)pFVar14[1].Array + (*(ulonglong *)&pFVar14[1].Layout & 0xffff) * 8;
    *(undefined4 *)(((longlong)&uStack_3b8 - (longlong)this) + (longlong)pFVar14) = uVar5;
    *(uint *)((longlong)&pFVar14->Array + (longlong)local_2d0) = uStack_310._2_4_ & 0xffff;
    uVar8 = *(undefined8 *)&pFVar14[2].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[2].Array)->field_0x8;
    *(ulonglong *)((longlong)&pFVar14->Array + (longlong)local_2c8) =
         *(longlong *)pFVar14[2].Array + (*(ulonglong *)&pFVar14[2].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar14->Array + (longlong)local_2c0) = uVar5;
    *(uint *)((longlong)&pFVar14->Array + (longlong)local_2b8) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    uVar8 = *(undefined8 *)&pFVar14[3].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[3].Array)->field_0x8;
    pFVar2 = pFVar14 + 8;
    *(ulonglong *)((longlong)&pFVar2[-8].Array + (longlong)local_2b0) =
         *(longlong *)pFVar14[3].Array + (*(ulonglong *)&pFVar14[3].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar2[-8].Array + (longlong)local_2a8) = uVar5;
    *(uint *)((longlong)&pFVar2[-8].Array + (longlong)local_2a0) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    uVar8 = *(undefined8 *)&pFVar14[4].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[4].Array)->field_0x8;
    *(ulonglong *)((longlong)&pFVar2[-8].Array + (longlong)local_298) =
         *(longlong *)pFVar14[4].Array + (*(ulonglong *)&pFVar14[4].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar2[-8].Array + (longlong)local_290) = uVar5;
    *(uint *)((longlong)&pFVar2[-8].Array + (longlong)local_288) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    pFVar9 = pFVar14[5].Array;
    uVar8 = *(undefined8 *)&pFVar14[5].Layout;
    uVar5 = *(undefined4 *)&pFVar9->field_0x8;
    *(ulonglong *)((longlong)&pFVar2[-8].Array + (longlong)local_280) =
         *(longlong *)pFVar9 + (*(ulonglong *)&pFVar14[5].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar2[-8].Array + (longlong)local_278) = uVar5;
    *(uint *)((longlong)&pFVar2[-8].Array + local_308._0_8_) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    lVar15 = lVar15 + -1;
    pFVar14 = pFVar2;
  } while (lVar15 != 0);
  this_00 = local_2f8;
  puVar11 = &local_248;
  do {
    puVar11 = puVar11 + 2;
  } while (puVar11 != local_48);
  pauVar16 = (undefined1 (*) [16])&local_248;
  local_318 = pFVar9;
  uStack_310 = uVar8;
  do {
    local_308 = *pauVar16;
    if (*(int *)(*pauVar16 + 8) != 0) {
      uVar13 = 0x20 - (this_00->UnvalidatedReferences).Num;
      ppUVar12 = local_308._0_8_;
      uVar17 = local_308._8_4_;
      local_258 = local_308;
      if (uVar13 <= *(uint *)(*pauVar16 + 8)) {
        iVar18 = local_308._12_4_;
        bVar20 = SBORROW4(uVar13,uVar17);
        iVar6 = uVar13 - uVar17;
        bVar19 = uVar13 == uVar17;
        local_268 = local_308;
        do {
          auVar10 = local_268;
          local_308 = local_268;
          if (!bVar19 && bVar20 == iVar6 < 0) {
            uStack_340 = 0x14202d9aa;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Idx <= Body.Num",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x5d5,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          if (iVar18 == 0) {
            uStack_340 = 0x14202d9d5;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Body.Stride > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x5d6,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          uVar17 = uVar17 - uVar13;
          uStack_2f0._4_4_ = auVar10._12_4_;
          local_2f8 = auVar10._0_8_;
          uStack_2f0._0_4_ = uVar13;
          local_308._8_4_ = uVar17;
          ppUVar12 = ppUVar12 + iVar18 * uVar13;
          local_308._0_8_ = ppUVar12;
          if (0x20 - (this_00->UnvalidatedReferences).Num < uVar13) {
            uStack_340 = 0x14202da2b;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x660,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          pFVar1 = (this_00->UnvalidatedReferences).Entries + (this_00->UnvalidatedReferences).Num;
          for (pTVar3 = local_2f8;
              pTVar3 != (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<9>_>
                         *)((longlong)local_2f8 + (ulonglong)(local_2f8._12_4_ * uVar13) * 8);
              pTVar3 = (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<9>_>
                        *)((longlong)pTVar3 + (uStack_2f0 >> 0x20) * 8)) {
            pFVar1->Object = (UObject **)pTVar3;
            pFVar1 = pFVar1 + 1;
          }
          (this_00->UnvalidatedReferences).Num = (this_00->UnvalidatedReferences).Num + uVar13;
          if ((this_00->UnvalidatedReferences).Num != 0x20) {
            uStack_340 = 0x14202dab2;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("UnvalidatedReferences.IsFull()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x615,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          uStack_340 = 0x14202dac0;
          DrainUnvalidatedFull(this_00);
          uVar13 = 0x20;
          local_268 = local_308;
          bVar20 = SBORROW4(0x20,uVar17);
          iVar6 = 0x20 - uVar17;
          bVar19 = iVar6 == 0;
        } while (0x20 < uVar17 || bVar19);
      }
      auVar10 = local_308;
      local_268 = local_308;
      if (0x20 - (this_00->UnvalidatedReferences).Num < uVar17) {
        uStack_340 = 0x14202db14;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                            ,0x660,L"");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar1 = (this_00->UnvalidatedReferences).Entries + (this_00->UnvalidatedReferences).Num;
      ppUVar4 = ppUVar12 + uVar17 * auVar10._12_4_;
      for (; ppUVar12 != ppUVar4; ppUVar12 = ppUVar12 + (auVar10._8_8_ >> 0x20)) {
        pFVar1->Object = ppUVar12;
        pFVar1 = pFVar1 + 1;
      }
      (this_00->UnvalidatedReferences).Num = (this_00->UnvalidatedReferences).Num + uVar17;
      if ((this_00->UnvalidatedReferences).Num == 0x20) {
        uStack_340 = 0x14202db94;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("!UnvalidatedReferences.IsFull()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                            ,0x61a,L"");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
    }
    pauVar16 = pauVar16 + 1;
  } while (pauVar16 != (undefined1 (*) [16])local_48);
  (this_00->UnvalidatedStridedArrays).Num = 0;
  return;
}

// DrainStridedArraysFull @ 14202dc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<0>_>
::DrainStridedArraysFull
          (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<0>_>
           *this)

{
  FMutableReference *pFVar1;
  FStridedReferenceArray *pFVar2;
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<0>_>
  *pTVar3;
  UObject **ppUVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  undefined8 uVar8;
  FScriptArray *pFVar9;
  undefined1 auVar10 [16];
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<0>_>
  *this_00;
  ulonglong *puVar11;
  UObject **ppUVar12;
  uint uVar13;
  FStridedReferenceArray *pFVar14;
  longlong lVar15;
  undefined1 (*pauVar16) [16];
  uint uVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auStack_3f0 [8];
  undefined1 auStack_3e8 [4];
  undefined1 auStack_3e4 [4];
  longlong lStack_3e0;
  uint auStack_3d8 [2];
  longlong lStack_3d0;
  uint auStack_3c8 [2];
  longlong lStack_3c0;
  undefined4 uStack_3b8;
  undefined1 auStack_3b4 [4];
  undefined1 auStack_3b0 [8];
  undefined1 auStack_3a8 [4];
  undefined1 auStack_3a4 [4];
  undefined1 auStack_3a0 [8];
  undefined1 auStack_398 [4];
  undefined1 auStack_394 [4];
  undefined1 auStack_390 [8];
  undefined1 auStack_388 [4];
  undefined1 auStack_384 [4];
  undefined1 auStack_380 [8];
  undefined1 auStack_378 [4];
  undefined1 auStack_374 [52];
  undefined8 uStack_340;
  undefined1 auStack_338 [32];
  FScriptArray *local_318;
  undefined8 uStack_310;
  undefined1 local_308 [16];
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<0>_>
  *local_2f8;
  undefined8 uStack_2f0;
  undefined1 *local_2e8;
  undefined1 *local_2e0;
  undefined1 *local_2d8;
  undefined1 *local_2d0;
  undefined1 *local_2c8;
  undefined1 *local_2c0;
  undefined1 *local_2b8;
  undefined1 *local_2b0;
  undefined1 *local_2a8;
  undefined1 *local_2a0;
  undefined1 *local_298;
  undefined1 *local_290;
  undefined1 *local_288;
  undefined1 *local_280;
  undefined1 *local_278;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  ulonglong local_248;
  uint auStack_240 [126];
  ulonglong local_48 [4];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_338;
  local_2f8 = this;
  local_2d0 = auStack_3b4 + -(longlong)this;
  local_2c8 = auStack_3b0 + -(longlong)this;
  local_2c0 = auStack_3a8 + -(longlong)this;
  local_2b8 = auStack_3a4 + -(longlong)this;
  local_2b0 = auStack_3a0 + -(longlong)this;
  local_2a8 = auStack_398 + -(longlong)this;
  local_2a0 = auStack_394 + -(longlong)this;
  local_298 = auStack_390 + -(longlong)this;
  local_290 = auStack_388 + -(longlong)this;
  local_288 = auStack_384 + -(longlong)this;
  local_280 = auStack_380 + -(longlong)this;
  local_278 = auStack_378 + -(longlong)this;
  local_308._0_8_ = auStack_374 + -(longlong)this;
  local_2e8 = auStack_3f0 + -(longlong)this;
  local_2e0 = auStack_3e8 + -(longlong)this;
  local_2d8 = auStack_3e4 + -(longlong)this;
  lVar15 = 4;
  pFVar14 = (this->UnvalidatedStridedArrays).Entries + 2;
  do {
    uVar8 = *(undefined8 *)&pFVar14[-2].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[-2].Array)->field_0x8;
    *(ulonglong *)((longlong)&pFVar14->Array + (longlong)local_2e8) =
         *(longlong *)pFVar14[-2].Array + (*(ulonglong *)&pFVar14[-2].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar14->Array + (longlong)local_2e0) = uVar5;
    *(uint *)((longlong)&pFVar14->Array + (longlong)local_2d8) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    uStack_310._2_4_ = (uint)((ulonglong)*(undefined8 *)&pFVar14[-1].Layout >> 0x10);
    uVar5 = *(undefined4 *)&(pFVar14[-1].Array)->field_0x8;
    *(ulonglong *)(((longlong)&lStack_3e0 - (longlong)this) + (longlong)pFVar14) =
         *(longlong *)pFVar14[-1].Array + (*(ulonglong *)&pFVar14[-1].Layout & 0xffff) * 8;
    *(undefined4 *)(((longlong)auStack_3d8 - (longlong)this) + (longlong)pFVar14) = uVar5;
    *(uint *)((longlong)auStack_3d8 + (4 - (longlong)this) + (longlong)pFVar14) =
         uStack_310._2_4_ & 0xffff;
    uStack_310._2_4_ = (uint)((ulonglong)*(undefined8 *)&pFVar14->Layout >> 0x10);
    uVar5 = *(undefined4 *)&pFVar14->Array->field_0x8;
    *(ulonglong *)(((longlong)&lStack_3d0 - (longlong)this) + (longlong)pFVar14) =
         *(longlong *)pFVar14->Array + (*(ulonglong *)&pFVar14->Layout & 0xffff) * 8;
    *(undefined4 *)(((longlong)auStack_3c8 - (longlong)this) + (longlong)pFVar14) = uVar5;
    *(uint *)((longlong)auStack_3c8 + (4 - (longlong)this) + (longlong)pFVar14) =
         uStack_310._2_4_ & 0xffff;
    uStack_310._2_4_ = (uint)((ulonglong)*(undefined8 *)&pFVar14[1].Layout >> 0x10);
    uVar5 = *(undefined4 *)&(pFVar14[1].Array)->field_0x8;
    *(ulonglong *)((longlong)pFVar14 + ((longlong)&lStack_3c0 - (longlong)this)) =
         *(longlong *)pFVar14[1].Array + (*(ulonglong *)&pFVar14[1].Layout & 0xffff) * 8;
    *(undefined4 *)(((longlong)&uStack_3b8 - (longlong)this) + (longlong)pFVar14) = uVar5;
    *(uint *)((longlong)&pFVar14->Array + (longlong)local_2d0) = uStack_310._2_4_ & 0xffff;
    uVar8 = *(undefined8 *)&pFVar14[2].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[2].Array)->field_0x8;
    *(ulonglong *)((longlong)&pFVar14->Array + (longlong)local_2c8) =
         *(longlong *)pFVar14[2].Array + (*(ulonglong *)&pFVar14[2].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar14->Array + (longlong)local_2c0) = uVar5;
    *(uint *)((longlong)&pFVar14->Array + (longlong)local_2b8) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    uVar8 = *(undefined8 *)&pFVar14[3].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[3].Array)->field_0x8;
    pFVar2 = pFVar14 + 8;
    *(ulonglong *)((longlong)&pFVar2[-8].Array + (longlong)local_2b0) =
         *(longlong *)pFVar14[3].Array + (*(ulonglong *)&pFVar14[3].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar2[-8].Array + (longlong)local_2a8) = uVar5;
    *(uint *)((longlong)&pFVar2[-8].Array + (longlong)local_2a0) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    uVar8 = *(undefined8 *)&pFVar14[4].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[4].Array)->field_0x8;
    *(ulonglong *)((longlong)&pFVar2[-8].Array + (longlong)local_298) =
         *(longlong *)pFVar14[4].Array + (*(ulonglong *)&pFVar14[4].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar2[-8].Array + (longlong)local_290) = uVar5;
    *(uint *)((longlong)&pFVar2[-8].Array + (longlong)local_288) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    pFVar9 = pFVar14[5].Array;
    uVar8 = *(undefined8 *)&pFVar14[5].Layout;
    uVar5 = *(undefined4 *)&pFVar9->field_0x8;
    *(ulonglong *)((longlong)&pFVar2[-8].Array + (longlong)local_280) =
         *(longlong *)pFVar9 + (*(ulonglong *)&pFVar14[5].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar2[-8].Array + (longlong)local_278) = uVar5;
    *(uint *)((longlong)&pFVar2[-8].Array + local_308._0_8_) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    lVar15 = lVar15 + -1;
    pFVar14 = pFVar2;
  } while (lVar15 != 0);
  this_00 = local_2f8;
  puVar11 = &local_248;
  do {
    puVar11 = puVar11 + 2;
  } while (puVar11 != local_48);
  pauVar16 = (undefined1 (*) [16])&local_248;
  local_318 = pFVar9;
  uStack_310 = uVar8;
  do {
    local_308 = *pauVar16;
    if (*(int *)(*pauVar16 + 8) != 0) {
      uVar13 = 0x20 - (this_00->UnvalidatedReferences).Num;
      ppUVar12 = local_308._0_8_;
      uVar17 = local_308._8_4_;
      local_258 = local_308;
      if (uVar13 <= *(uint *)(*pauVar16 + 8)) {
        iVar18 = local_308._12_4_;
        bVar20 = SBORROW4(uVar13,uVar17);
        iVar6 = uVar13 - uVar17;
        bVar19 = uVar13 == uVar17;
        local_268 = local_308;
        do {
          auVar10 = local_268;
          local_308 = local_268;
          if (!bVar19 && bVar20 == iVar6 < 0) {
            uStack_340 = 0x14202e09a;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Idx <= Body.Num",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x5d5,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          if (iVar18 == 0) {
            uStack_340 = 0x14202e0c5;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Body.Stride > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x5d6,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          uVar17 = uVar17 - uVar13;
          uStack_2f0._4_4_ = auVar10._12_4_;
          local_2f8 = auVar10._0_8_;
          uStack_2f0._0_4_ = uVar13;
          local_308._8_4_ = uVar17;
          ppUVar12 = ppUVar12 + iVar18 * uVar13;
          local_308._0_8_ = ppUVar12;
          if (0x20 - (this_00->UnvalidatedReferences).Num < uVar13) {
            uStack_340 = 0x14202e11b;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x660,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          pFVar1 = (this_00->UnvalidatedReferences).Entries + (this_00->UnvalidatedReferences).Num;
          for (pTVar3 = local_2f8;
              pTVar3 != (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<0>_>
                         *)((longlong)local_2f8 + (ulonglong)(local_2f8._12_4_ * uVar13) * 8);
              pTVar3 = (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<0>_>
                        *)((longlong)pTVar3 + (uStack_2f0 >> 0x20) * 8)) {
            pFVar1->Object = (UObject **)pTVar3;
            pFVar1 = pFVar1 + 1;
          }
          (this_00->UnvalidatedReferences).Num = (this_00->UnvalidatedReferences).Num + uVar13;
          if ((this_00->UnvalidatedReferences).Num != 0x20) {
            uStack_340 = 0x14202e1a2;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("UnvalidatedReferences.IsFull()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x615,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          uStack_340 = 0x14202e1b0;
          DrainUnvalidatedFull(this_00);
          uVar13 = 0x20;
          local_268 = local_308;
          bVar20 = SBORROW4(0x20,uVar17);
          iVar6 = 0x20 - uVar17;
          bVar19 = iVar6 == 0;
        } while (0x20 < uVar17 || bVar19);
      }
      auVar10 = local_308;
      local_268 = local_308;
      if (0x20 - (this_00->UnvalidatedReferences).Num < uVar17) {
        uStack_340 = 0x14202e204;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                            ,0x660,L"");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar1 = (this_00->UnvalidatedReferences).Entries + (this_00->UnvalidatedReferences).Num;
      ppUVar4 = ppUVar12 + uVar17 * auVar10._12_4_;
      for (; ppUVar12 != ppUVar4; ppUVar12 = ppUVar12 + (auVar10._8_8_ >> 0x20)) {
        pFVar1->Object = ppUVar12;
        pFVar1 = pFVar1 + 1;
      }
      (this_00->UnvalidatedReferences).Num = (this_00->UnvalidatedReferences).Num + uVar17;
      if ((this_00->UnvalidatedReferences).Num == 0x20) {
        uStack_340 = 0x14202e284;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("!UnvalidatedReferences.IsFull()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                            ,0x61a,L"");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
    }
    pauVar16 = pauVar16 + 1;
  } while (pauVar16 != (undefined1 (*) [16])local_48);
  (this_00->UnvalidatedStridedArrays).Num = 0;
  return;
}

// DrainStridedArraysFull @ 14202e2f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<12>_>
::DrainStridedArraysFull
          (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<12>_>
           *this)

{
  FMutableReference *pFVar1;
  FStridedReferenceArray *pFVar2;
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<12>_>
  *pTVar3;
  UObject **ppUVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  undefined8 uVar8;
  FScriptArray *pFVar9;
  undefined1 auVar10 [16];
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<12>_>
  *this_00;
  ulonglong *puVar11;
  UObject **ppUVar12;
  uint uVar13;
  FStridedReferenceArray *pFVar14;
  longlong lVar15;
  undefined1 (*pauVar16) [16];
  uint uVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auStack_3f0 [8];
  undefined1 auStack_3e8 [4];
  undefined1 auStack_3e4 [4];
  longlong lStack_3e0;
  uint auStack_3d8 [2];
  longlong lStack_3d0;
  uint auStack_3c8 [2];
  longlong lStack_3c0;
  undefined4 uStack_3b8;
  undefined1 auStack_3b4 [4];
  undefined1 auStack_3b0 [8];
  undefined1 auStack_3a8 [4];
  undefined1 auStack_3a4 [4];
  undefined1 auStack_3a0 [8];
  undefined1 auStack_398 [4];
  undefined1 auStack_394 [4];
  undefined1 auStack_390 [8];
  undefined1 auStack_388 [4];
  undefined1 auStack_384 [4];
  undefined1 auStack_380 [8];
  undefined1 auStack_378 [4];
  undefined1 auStack_374 [52];
  undefined8 uStack_340;
  undefined1 auStack_338 [32];
  FScriptArray *local_318;
  undefined8 uStack_310;
  undefined1 local_308 [16];
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<12>_>
  *local_2f8;
  undefined8 uStack_2f0;
  undefined1 *local_2e8;
  undefined1 *local_2e0;
  undefined1 *local_2d8;
  undefined1 *local_2d0;
  undefined1 *local_2c8;
  undefined1 *local_2c0;
  undefined1 *local_2b8;
  undefined1 *local_2b0;
  undefined1 *local_2a8;
  undefined1 *local_2a0;
  undefined1 *local_298;
  undefined1 *local_290;
  undefined1 *local_288;
  undefined1 *local_280;
  undefined1 *local_278;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  ulonglong local_248;
  uint auStack_240 [126];
  ulonglong local_48 [4];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_338;
  local_2f8 = this;
  local_2d0 = auStack_3b4 + -(longlong)this;
  local_2c8 = auStack_3b0 + -(longlong)this;
  local_2c0 = auStack_3a8 + -(longlong)this;
  local_2b8 = auStack_3a4 + -(longlong)this;
  local_2b0 = auStack_3a0 + -(longlong)this;
  local_2a8 = auStack_398 + -(longlong)this;
  local_2a0 = auStack_394 + -(longlong)this;
  local_298 = auStack_390 + -(longlong)this;
  local_290 = auStack_388 + -(longlong)this;
  local_288 = auStack_384 + -(longlong)this;
  local_280 = auStack_380 + -(longlong)this;
  local_278 = auStack_378 + -(longlong)this;
  local_308._0_8_ = auStack_374 + -(longlong)this;
  local_2e8 = auStack_3f0 + -(longlong)this;
  local_2e0 = auStack_3e8 + -(longlong)this;
  local_2d8 = auStack_3e4 + -(longlong)this;
  lVar15 = 4;
  pFVar14 = (this->UnvalidatedStridedArrays).Entries + 2;
  do {
    uVar8 = *(undefined8 *)&pFVar14[-2].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[-2].Array)->field_0x8;
    *(ulonglong *)((longlong)&pFVar14->Array + (longlong)local_2e8) =
         *(longlong *)pFVar14[-2].Array + (*(ulonglong *)&pFVar14[-2].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar14->Array + (longlong)local_2e0) = uVar5;
    *(uint *)((longlong)&pFVar14->Array + (longlong)local_2d8) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    uStack_310._2_4_ = (uint)((ulonglong)*(undefined8 *)&pFVar14[-1].Layout >> 0x10);
    uVar5 = *(undefined4 *)&(pFVar14[-1].Array)->field_0x8;
    *(ulonglong *)(((longlong)&lStack_3e0 - (longlong)this) + (longlong)pFVar14) =
         *(longlong *)pFVar14[-1].Array + (*(ulonglong *)&pFVar14[-1].Layout & 0xffff) * 8;
    *(undefined4 *)(((longlong)auStack_3d8 - (longlong)this) + (longlong)pFVar14) = uVar5;
    *(uint *)((longlong)auStack_3d8 + (4 - (longlong)this) + (longlong)pFVar14) =
         uStack_310._2_4_ & 0xffff;
    uStack_310._2_4_ = (uint)((ulonglong)*(undefined8 *)&pFVar14->Layout >> 0x10);
    uVar5 = *(undefined4 *)&pFVar14->Array->field_0x8;
    *(ulonglong *)(((longlong)&lStack_3d0 - (longlong)this) + (longlong)pFVar14) =
         *(longlong *)pFVar14->Array + (*(ulonglong *)&pFVar14->Layout & 0xffff) * 8;
    *(undefined4 *)(((longlong)auStack_3c8 - (longlong)this) + (longlong)pFVar14) = uVar5;
    *(uint *)((longlong)auStack_3c8 + (4 - (longlong)this) + (longlong)pFVar14) =
         uStack_310._2_4_ & 0xffff;
    uStack_310._2_4_ = (uint)((ulonglong)*(undefined8 *)&pFVar14[1].Layout >> 0x10);
    uVar5 = *(undefined4 *)&(pFVar14[1].Array)->field_0x8;
    *(ulonglong *)((longlong)pFVar14 + ((longlong)&lStack_3c0 - (longlong)this)) =
         *(longlong *)pFVar14[1].Array + (*(ulonglong *)&pFVar14[1].Layout & 0xffff) * 8;
    *(undefined4 *)(((longlong)&uStack_3b8 - (longlong)this) + (longlong)pFVar14) = uVar5;
    *(uint *)((longlong)&pFVar14->Array + (longlong)local_2d0) = uStack_310._2_4_ & 0xffff;
    uVar8 = *(undefined8 *)&pFVar14[2].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[2].Array)->field_0x8;
    *(ulonglong *)((longlong)&pFVar14->Array + (longlong)local_2c8) =
         *(longlong *)pFVar14[2].Array + (*(ulonglong *)&pFVar14[2].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar14->Array + (longlong)local_2c0) = uVar5;
    *(uint *)((longlong)&pFVar14->Array + (longlong)local_2b8) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    uVar8 = *(undefined8 *)&pFVar14[3].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[3].Array)->field_0x8;
    pFVar2 = pFVar14 + 8;
    *(ulonglong *)((longlong)&pFVar2[-8].Array + (longlong)local_2b0) =
         *(longlong *)pFVar14[3].Array + (*(ulonglong *)&pFVar14[3].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar2[-8].Array + (longlong)local_2a8) = uVar5;
    *(uint *)((longlong)&pFVar2[-8].Array + (longlong)local_2a0) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    uVar8 = *(undefined8 *)&pFVar14[4].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[4].Array)->field_0x8;
    *(ulonglong *)((longlong)&pFVar2[-8].Array + (longlong)local_298) =
         *(longlong *)pFVar14[4].Array + (*(ulonglong *)&pFVar14[4].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar2[-8].Array + (longlong)local_290) = uVar5;
    *(uint *)((longlong)&pFVar2[-8].Array + (longlong)local_288) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    pFVar9 = pFVar14[5].Array;
    uVar8 = *(undefined8 *)&pFVar14[5].Layout;
    uVar5 = *(undefined4 *)&pFVar9->field_0x8;
    *(ulonglong *)((longlong)&pFVar2[-8].Array + (longlong)local_280) =
         *(longlong *)pFVar9 + (*(ulonglong *)&pFVar14[5].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar2[-8].Array + (longlong)local_278) = uVar5;
    *(uint *)((longlong)&pFVar2[-8].Array + local_308._0_8_) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    lVar15 = lVar15 + -1;
    pFVar14 = pFVar2;
  } while (lVar15 != 0);
  this_00 = local_2f8;
  puVar11 = &local_248;
  do {
    puVar11 = puVar11 + 2;
  } while (puVar11 != local_48);
  pauVar16 = (undefined1 (*) [16])&local_248;
  local_318 = pFVar9;
  uStack_310 = uVar8;
  do {
    local_308 = *pauVar16;
    if (*(int *)(*pauVar16 + 8) != 0) {
      uVar13 = 0x20 - (this_00->UnvalidatedReferences).Num;
      ppUVar12 = local_308._0_8_;
      uVar17 = local_308._8_4_;
      local_258 = local_308;
      if (uVar13 <= *(uint *)(*pauVar16 + 8)) {
        iVar18 = local_308._12_4_;
        bVar20 = SBORROW4(uVar13,uVar17);
        iVar6 = uVar13 - uVar17;
        bVar19 = uVar13 == uVar17;
        local_268 = local_308;
        do {
          auVar10 = local_268;
          local_308 = local_268;
          if (!bVar19 && bVar20 == iVar6 < 0) {
            uStack_340 = 0x14202e78a;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Idx <= Body.Num",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x5d5,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          if (iVar18 == 0) {
            uStack_340 = 0x14202e7b5;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Body.Stride > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x5d6,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          uVar17 = uVar17 - uVar13;
          uStack_2f0._4_4_ = auVar10._12_4_;
          local_2f8 = auVar10._0_8_;
          uStack_2f0._0_4_ = uVar13;
          local_308._8_4_ = uVar17;
          ppUVar12 = ppUVar12 + iVar18 * uVar13;
          local_308._0_8_ = ppUVar12;
          if (0x20 - (this_00->UnvalidatedReferences).Num < uVar13) {
            uStack_340 = 0x14202e80b;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x660,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          pFVar1 = (this_00->UnvalidatedReferences).Entries + (this_00->UnvalidatedReferences).Num;
          for (pTVar3 = local_2f8;
              pTVar3 != (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<12>_>
                         *)((longlong)local_2f8 + (ulonglong)(local_2f8._12_4_ * uVar13) * 8);
              pTVar3 = (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<12>_>
                        *)((longlong)pTVar3 + (uStack_2f0 >> 0x20) * 8)) {
            pFVar1->Object = (UObject **)pTVar3;
            pFVar1 = pFVar1 + 1;
          }
          (this_00->UnvalidatedReferences).Num = (this_00->UnvalidatedReferences).Num + uVar13;
          if ((this_00->UnvalidatedReferences).Num != 0x20) {
            uStack_340 = 0x14202e892;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("UnvalidatedReferences.IsFull()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x615,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          uStack_340 = 0x14202e8a0;
          DrainUnvalidatedFull(this_00);
          uVar13 = 0x20;
          local_268 = local_308;
          bVar20 = SBORROW4(0x20,uVar17);
          iVar6 = 0x20 - uVar17;
          bVar19 = iVar6 == 0;
        } while (0x20 < uVar17 || bVar19);
      }
      auVar10 = local_308;
      local_268 = local_308;
      if (0x20 - (this_00->UnvalidatedReferences).Num < uVar17) {
        uStack_340 = 0x14202e8f4;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                            ,0x660,L"");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar1 = (this_00->UnvalidatedReferences).Entries + (this_00->UnvalidatedReferences).Num;
      ppUVar4 = ppUVar12 + uVar17 * auVar10._12_4_;
      for (; ppUVar12 != ppUVar4; ppUVar12 = ppUVar12 + (auVar10._8_8_ >> 0x20)) {
        pFVar1->Object = ppUVar12;
        pFVar1 = pFVar1 + 1;
      }
      (this_00->UnvalidatedReferences).Num = (this_00->UnvalidatedReferences).Num + uVar17;
      if ((this_00->UnvalidatedReferences).Num == 0x20) {
        uStack_340 = 0x14202e974;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("!UnvalidatedReferences.IsFull()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                            ,0x61a,L"");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
    }
    pauVar16 = pauVar16 + 1;
  } while (pauVar16 != (undefined1 (*) [16])local_48);
  (this_00->UnvalidatedStridedArrays).Num = 0;
  return;
}

// DrainStridedArraysFull @ 14202e9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<13>_>
::DrainStridedArraysFull
          (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<13>_>
           *this)

{
  FMutableReference *pFVar1;
  FStridedReferenceArray *pFVar2;
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<13>_>
  *pTVar3;
  UObject **ppUVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  undefined8 uVar8;
  FScriptArray *pFVar9;
  undefined1 auVar10 [16];
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<13>_>
  *this_00;
  ulonglong *puVar11;
  UObject **ppUVar12;
  uint uVar13;
  FStridedReferenceArray *pFVar14;
  longlong lVar15;
  undefined1 (*pauVar16) [16];
  uint uVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auStack_3f0 [8];
  undefined1 auStack_3e8 [4];
  undefined1 auStack_3e4 [4];
  longlong lStack_3e0;
  uint auStack_3d8 [2];
  longlong lStack_3d0;
  uint auStack_3c8 [2];
  longlong lStack_3c0;
  undefined4 uStack_3b8;
  undefined1 auStack_3b4 [4];
  undefined1 auStack_3b0 [8];
  undefined1 auStack_3a8 [4];
  undefined1 auStack_3a4 [4];
  undefined1 auStack_3a0 [8];
  undefined1 auStack_398 [4];
  undefined1 auStack_394 [4];
  undefined1 auStack_390 [8];
  undefined1 auStack_388 [4];
  undefined1 auStack_384 [4];
  undefined1 auStack_380 [8];
  undefined1 auStack_378 [4];
  undefined1 auStack_374 [52];
  undefined8 uStack_340;
  undefined1 auStack_338 [32];
  FScriptArray *local_318;
  undefined8 uStack_310;
  undefined1 local_308 [16];
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<13>_>
  *local_2f8;
  undefined8 uStack_2f0;
  undefined1 *local_2e8;
  undefined1 *local_2e0;
  undefined1 *local_2d8;
  undefined1 *local_2d0;
  undefined1 *local_2c8;
  undefined1 *local_2c0;
  undefined1 *local_2b8;
  undefined1 *local_2b0;
  undefined1 *local_2a8;
  undefined1 *local_2a0;
  undefined1 *local_298;
  undefined1 *local_290;
  undefined1 *local_288;
  undefined1 *local_280;
  undefined1 *local_278;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  ulonglong local_248;
  uint auStack_240 [126];
  ulonglong local_48 [4];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_338;
  local_2f8 = this;
  local_2d0 = auStack_3b4 + -(longlong)this;
  local_2c8 = auStack_3b0 + -(longlong)this;
  local_2c0 = auStack_3a8 + -(longlong)this;
  local_2b8 = auStack_3a4 + -(longlong)this;
  local_2b0 = auStack_3a0 + -(longlong)this;
  local_2a8 = auStack_398 + -(longlong)this;
  local_2a0 = auStack_394 + -(longlong)this;
  local_298 = auStack_390 + -(longlong)this;
  local_290 = auStack_388 + -(longlong)this;
  local_288 = auStack_384 + -(longlong)this;
  local_280 = auStack_380 + -(longlong)this;
  local_278 = auStack_378 + -(longlong)this;
  local_308._0_8_ = auStack_374 + -(longlong)this;
  local_2e8 = auStack_3f0 + -(longlong)this;
  local_2e0 = auStack_3e8 + -(longlong)this;
  local_2d8 = auStack_3e4 + -(longlong)this;
  lVar15 = 4;
  pFVar14 = (this->UnvalidatedStridedArrays).Entries + 2;
  do {
    uVar8 = *(undefined8 *)&pFVar14[-2].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[-2].Array)->field_0x8;
    *(ulonglong *)((longlong)&pFVar14->Array + (longlong)local_2e8) =
         *(longlong *)pFVar14[-2].Array + (*(ulonglong *)&pFVar14[-2].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar14->Array + (longlong)local_2e0) = uVar5;
    *(uint *)((longlong)&pFVar14->Array + (longlong)local_2d8) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    uStack_310._2_4_ = (uint)((ulonglong)*(undefined8 *)&pFVar14[-1].Layout >> 0x10);
    uVar5 = *(undefined4 *)&(pFVar14[-1].Array)->field_0x8;
    *(ulonglong *)(((longlong)&lStack_3e0 - (longlong)this) + (longlong)pFVar14) =
         *(longlong *)pFVar14[-1].Array + (*(ulonglong *)&pFVar14[-1].Layout & 0xffff) * 8;
    *(undefined4 *)(((longlong)auStack_3d8 - (longlong)this) + (longlong)pFVar14) = uVar5;
    *(uint *)((longlong)auStack_3d8 + (4 - (longlong)this) + (longlong)pFVar14) =
         uStack_310._2_4_ & 0xffff;
    uStack_310._2_4_ = (uint)((ulonglong)*(undefined8 *)&pFVar14->Layout >> 0x10);
    uVar5 = *(undefined4 *)&pFVar14->Array->field_0x8;
    *(ulonglong *)(((longlong)&lStack_3d0 - (longlong)this) + (longlong)pFVar14) =
         *(longlong *)pFVar14->Array + (*(ulonglong *)&pFVar14->Layout & 0xffff) * 8;
    *(undefined4 *)(((longlong)auStack_3c8 - (longlong)this) + (longlong)pFVar14) = uVar5;
    *(uint *)((longlong)auStack_3c8 + (4 - (longlong)this) + (longlong)pFVar14) =
         uStack_310._2_4_ & 0xffff;
    uStack_310._2_4_ = (uint)((ulonglong)*(undefined8 *)&pFVar14[1].Layout >> 0x10);
    uVar5 = *(undefined4 *)&(pFVar14[1].Array)->field_0x8;
    *(ulonglong *)((longlong)pFVar14 + ((longlong)&lStack_3c0 - (longlong)this)) =
         *(longlong *)pFVar14[1].Array + (*(ulonglong *)&pFVar14[1].Layout & 0xffff) * 8;
    *(undefined4 *)(((longlong)&uStack_3b8 - (longlong)this) + (longlong)pFVar14) = uVar5;
    *(uint *)((longlong)&pFVar14->Array + (longlong)local_2d0) = uStack_310._2_4_ & 0xffff;
    uVar8 = *(undefined8 *)&pFVar14[2].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[2].Array)->field_0x8;
    *(ulonglong *)((longlong)&pFVar14->Array + (longlong)local_2c8) =
         *(longlong *)pFVar14[2].Array + (*(ulonglong *)&pFVar14[2].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar14->Array + (longlong)local_2c0) = uVar5;
    *(uint *)((longlong)&pFVar14->Array + (longlong)local_2b8) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    uVar8 = *(undefined8 *)&pFVar14[3].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[3].Array)->field_0x8;
    pFVar2 = pFVar14 + 8;
    *(ulonglong *)((longlong)&pFVar2[-8].Array + (longlong)local_2b0) =
         *(longlong *)pFVar14[3].Array + (*(ulonglong *)&pFVar14[3].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar2[-8].Array + (longlong)local_2a8) = uVar5;
    *(uint *)((longlong)&pFVar2[-8].Array + (longlong)local_2a0) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    uVar8 = *(undefined8 *)&pFVar14[4].Layout;
    uVar5 = *(undefined4 *)&(pFVar14[4].Array)->field_0x8;
    *(ulonglong *)((longlong)&pFVar2[-8].Array + (longlong)local_298) =
         *(longlong *)pFVar14[4].Array + (*(ulonglong *)&pFVar14[4].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar2[-8].Array + (longlong)local_290) = uVar5;
    *(uint *)((longlong)&pFVar2[-8].Array + (longlong)local_288) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    pFVar9 = pFVar14[5].Array;
    uVar8 = *(undefined8 *)&pFVar14[5].Layout;
    uVar5 = *(undefined4 *)&pFVar9->field_0x8;
    *(ulonglong *)((longlong)&pFVar2[-8].Array + (longlong)local_280) =
         *(longlong *)pFVar9 + (*(ulonglong *)&pFVar14[5].Layout & 0xffff) * 8;
    *(undefined4 *)((longlong)&pFVar2[-8].Array + (longlong)local_278) = uVar5;
    *(uint *)((longlong)&pFVar2[-8].Array + local_308._0_8_) =
         (uint)((ulonglong)uVar8 >> 0x10) & 0xffff;
    lVar15 = lVar15 + -1;
    pFVar14 = pFVar2;
  } while (lVar15 != 0);
  this_00 = local_2f8;
  puVar11 = &local_248;
  do {
    puVar11 = puVar11 + 2;
  } while (puVar11 != local_48);
  pauVar16 = (undefined1 (*) [16])&local_248;
  local_318 = pFVar9;
  uStack_310 = uVar8;
  do {
    local_308 = *pauVar16;
    if (*(int *)(*pauVar16 + 8) != 0) {
      uVar13 = 0x20 - (this_00->UnvalidatedReferences).Num;
      ppUVar12 = local_308._0_8_;
      uVar17 = local_308._8_4_;
      local_258 = local_308;
      if (uVar13 <= *(uint *)(*pauVar16 + 8)) {
        iVar18 = local_308._12_4_;
        bVar20 = SBORROW4(uVar13,uVar17);
        iVar6 = uVar13 - uVar17;
        bVar19 = uVar13 == uVar17;
        local_268 = local_308;
        do {
          auVar10 = local_268;
          local_308 = local_268;
          if (!bVar19 && bVar20 == iVar6 < 0) {
            uStack_340 = 0x14202ee7a;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Idx <= Body.Num",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x5d5,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          if (iVar18 == 0) {
            uStack_340 = 0x14202eea5;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Body.Stride > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x5d6,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          uVar17 = uVar17 - uVar13;
          uStack_2f0._4_4_ = auVar10._12_4_;
          local_2f8 = auVar10._0_8_;
          uStack_2f0._0_4_ = uVar13;
          local_308._8_4_ = uVar17;
          ppUVar12 = ppUVar12 + iVar18 * uVar13;
          local_308._0_8_ = ppUVar12;
          if (0x20 - (this_00->UnvalidatedReferences).Num < uVar13) {
            uStack_340 = 0x14202eefb;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x660,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          pFVar1 = (this_00->UnvalidatedReferences).Entries + (this_00->UnvalidatedReferences).Num;
          for (pTVar3 = local_2f8;
              pTVar3 != (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<13>_>
                         *)((longlong)local_2f8 + (ulonglong)(local_2f8._12_4_ * uVar13) * 8);
              pTVar3 = (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<13>_>
                        *)((longlong)pTVar3 + (uStack_2f0 >> 0x20) * 8)) {
            pFVar1->Object = (UObject **)pTVar3;
            pFVar1 = pFVar1 + 1;
          }
          (this_00->UnvalidatedReferences).Num = (this_00->UnvalidatedReferences).Num + uVar13;
          if ((this_00->UnvalidatedReferences).Num != 0x20) {
            uStack_340 = 0x14202ef82;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("UnvalidatedReferences.IsFull()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x615,L"");
            if (bVar19) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          uStack_340 = 0x14202ef90;
          DrainUnvalidatedFull(this_00);
          uVar13 = 0x20;
          local_268 = local_308;
          bVar20 = SBORROW4(0x20,uVar17);
          iVar6 = 0x20 - uVar17;
          bVar19 = iVar6 == 0;
        } while (0x20 < uVar17 || bVar19);
      }
      auVar10 = local_308;
      local_268 = local_308;
      if (0x20 - (this_00->UnvalidatedReferences).Num < uVar17) {
        uStack_340 = 0x14202efe4;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                            ,0x660,L"");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar1 = (this_00->UnvalidatedReferences).Entries + (this_00->UnvalidatedReferences).Num;
      ppUVar4 = ppUVar12 + uVar17 * auVar10._12_4_;
      for (; ppUVar12 != ppUVar4; ppUVar12 = ppUVar12 + (auVar10._8_8_ >> 0x20)) {
        pFVar1->Object = ppUVar12;
        pFVar1 = pFVar1 + 1;
      }
      (this_00->UnvalidatedReferences).Num = (this_00->UnvalidatedReferences).Num + uVar17;
      if ((this_00->UnvalidatedReferences).Num == 0x20) {
        uStack_340 = 0x14202f064;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("!UnvalidatedReferences.IsFull()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                            ,0x61a,L"");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
    }
    pauVar16 = pauVar16 + 1;
  } while (pauVar16 != (undefined1 (*) [16])local_48);
  (this_00->UnvalidatedStridedArrays).Num = 0;
  return;
}

// DrainUnvalidatedFull @ 14202f5d0

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
::DrainUnvalidatedFull
          (TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
           *this)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  byte bVar5;
  ulong64 uVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong local_58 [2];
  ulong64 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  uVar13 = 2;
  puVar2 = &(this->Context->Stats).NumReferences;
  *puVar2 = *puVar2 + 0x20;
  uVar6 = (this->PermanentPool).Address;
  uVar9 = (this->PermanentPool).Size;
  local_58[1] = 0;
  local_48 = uVar6;
  uStack_40 = uVar9;
  local_58[0] = 0;
  uVar12 = 2;
  do {
    uVar8 = uVar12 - 2;
    uVar1 = uVar12 - 1;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar8 = uVar12 + 1;
    local_58[(ulonglong)(uVar12 >> 6) + 1] =
         local_58[(ulonglong)(uVar12 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar12].Object - uVar6) <<
         ((byte)uVar12 & 0x3f);
    uVar1 = uVar12 + 2;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 3;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 4;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 5;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 6;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 7;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 8;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 9;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 10;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 0xb;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 0xc;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 0xd;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 0xe;
    uVar12 = uVar12 + 0x10;
  } while (uVar8 < 0x20);
  do {
    uVar8 = uVar13 - 2;
    uVar12 = uVar13 - 1;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 1;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar8 = uVar13 + 2;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 3;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 4;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 5;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 6;
    uVar8 = uVar13 + 7;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 8;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 9;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 10;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xb;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 0xc;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xd;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar12 = uVar13 + 0xe;
    uVar13 = uVar13 + 0x10;
  } while (uVar12 < 0x20);
  uVar10 = local_58[0] & local_58[1];
  uVar12 = 0x400 - (this->ValidatedReferences).Num;
  uVar11 = 0;
  uVar9 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
  uVar9 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar14 = uVar9 >> 0x38;
  bVar5 = (byte)(uVar9 >> 0x38);
  uVar13 = (uint)bVar5;
  if (uVar12 <= bVar5) {
    do {
      uVar8 = (this->ValidatedReferences).Num;
      local_38 = uVar10;
      uVar13 = uVar8 + uVar12;
      if (uVar8 < uVar13) {
        bVar5 = (byte)uVar11 & 0x3f;
        uVar9 = 1L << bVar5 | 1UL >> 0x40 - bVar5;
        do {
          uVar3 = local_58[(uVar11 >> 6) + 4];
          (this->ValidatedReferences).Entries[uVar8].Object =
               (this->UnvalidatedReferences).Entries[uVar11].Object;
          uVar11 = (ulonglong)((int)uVar11 + 1);
          uVar8 = uVar8 + ((uVar3 & uVar9) != 0);
          uVar9 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
        } while (uVar8 < uVar13);
      }
      (this->ValidatedReferences).Num = (this->ValidatedReferences).Num + uVar12;
      if (((this->ValidatedReferences).Num != 0x400) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ValidatedReferences.IsFull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x686,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      DrainValidatedFull(this);
      uVar13 = (int)uVar14 - uVar12;
      uVar14 = (ulonglong)uVar13;
      uVar12 = 0x400;
    } while (0x3ff < uVar13);
  }
  uVar12 = (this->ValidatedReferences).Num;
  local_48 = uVar10;
  uVar8 = uVar12 + uVar13;
  if (uVar12 < uVar8) {
    bVar5 = (byte)uVar11 & 0x3f;
    uVar9 = 1L << bVar5 | 1UL >> 0x40 - bVar5;
    do {
      uVar10 = local_58[(uVar11 >> 6) + 2];
      (this->ValidatedReferences).Entries[uVar12].Object =
           (this->UnvalidatedReferences).Entries[uVar11].Object;
      uVar11 = (ulonglong)((int)uVar11 + 1);
      uVar12 = uVar12 + ((uVar10 & uVar9) != 0);
      uVar9 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    } while (uVar12 < uVar8);
  }
  (this->ValidatedReferences).Num = (this->ValidatedReferences).Num + uVar13;
  if (((this->ValidatedReferences).Num == 0x400) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ValidatedReferences.IsFull()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x68c,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (this->UnvalidatedReferences).Num = 0;
  return;
}

// DrainUnvalidatedFull @ 14202fd40

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<4>_>
::DrainUnvalidatedFull
          (TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<4>_>
           *this)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  byte bVar5;
  ulong64 uVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong local_58 [2];
  ulong64 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  uVar13 = 2;
  puVar2 = &(this->Context->Stats).NumReferences;
  *puVar2 = *puVar2 + 0x20;
  uVar6 = (this->PermanentPool).Address;
  uVar9 = (this->PermanentPool).Size;
  local_58[1] = 0;
  local_48 = uVar6;
  uStack_40 = uVar9;
  local_58[0] = 0;
  uVar12 = 2;
  do {
    uVar8 = uVar12 - 2;
    uVar1 = uVar12 - 1;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar8 = uVar12 + 1;
    local_58[(ulonglong)(uVar12 >> 6) + 1] =
         local_58[(ulonglong)(uVar12 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar12].Object - uVar6) <<
         ((byte)uVar12 & 0x3f);
    uVar1 = uVar12 + 2;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 3;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 4;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 5;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 6;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 7;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 8;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 9;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 10;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 0xb;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 0xc;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 0xd;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 0xe;
    uVar12 = uVar12 + 0x10;
  } while (uVar8 < 0x20);
  do {
    uVar8 = uVar13 - 2;
    uVar12 = uVar13 - 1;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 1;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar8 = uVar13 + 2;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 3;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 4;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 5;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 6;
    uVar8 = uVar13 + 7;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 8;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 9;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 10;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xb;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 0xc;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xd;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar12 = uVar13 + 0xe;
    uVar13 = uVar13 + 0x10;
  } while (uVar12 < 0x20);
  uVar10 = local_58[0] & local_58[1];
  uVar12 = 0x400 - (this->ValidatedReferences).Num;
  uVar11 = 0;
  uVar9 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
  uVar9 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar14 = uVar9 >> 0x38;
  bVar5 = (byte)(uVar9 >> 0x38);
  uVar13 = (uint)bVar5;
  if (uVar12 <= bVar5) {
    do {
      uVar8 = (this->ValidatedReferences).Num;
      local_38 = uVar10;
      uVar13 = uVar8 + uVar12;
      if (uVar8 < uVar13) {
        bVar5 = (byte)uVar11 & 0x3f;
        uVar9 = 1L << bVar5 | 1UL >> 0x40 - bVar5;
        do {
          uVar3 = local_58[(uVar11 >> 6) + 4];
          (this->ValidatedReferences).Entries[uVar8].Object =
               (this->UnvalidatedReferences).Entries[uVar11].Object;
          uVar11 = (ulonglong)((int)uVar11 + 1);
          uVar8 = uVar8 + ((uVar3 & uVar9) != 0);
          uVar9 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
        } while (uVar8 < uVar13);
      }
      (this->ValidatedReferences).Num = (this->ValidatedReferences).Num + uVar12;
      if (((this->ValidatedReferences).Num != 0x400) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ValidatedReferences.IsFull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x686,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      DrainValidatedFull(this);
      uVar13 = (int)uVar14 - uVar12;
      uVar14 = (ulonglong)uVar13;
      uVar12 = 0x400;
    } while (0x3ff < uVar13);
  }
  uVar12 = (this->ValidatedReferences).Num;
  local_48 = uVar10;
  uVar8 = uVar12 + uVar13;
  if (uVar12 < uVar8) {
    bVar5 = (byte)uVar11 & 0x3f;
    uVar9 = 1L << bVar5 | 1UL >> 0x40 - bVar5;
    do {
      uVar10 = local_58[(uVar11 >> 6) + 2];
      (this->ValidatedReferences).Entries[uVar12].Object =
           (this->UnvalidatedReferences).Entries[uVar11].Object;
      uVar11 = (ulonglong)((int)uVar11 + 1);
      uVar12 = uVar12 + ((uVar10 & uVar9) != 0);
      uVar9 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    } while (uVar12 < uVar8);
  }
  (this->ValidatedReferences).Num = (this->ValidatedReferences).Num + uVar13;
  if (((this->ValidatedReferences).Num == 0x400) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ValidatedReferences.IsFull()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x68c,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (this->UnvalidatedReferences).Num = 0;
  return;
}

// DrainUnvalidatedFull @ 1420304b0

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<5>_>
::DrainUnvalidatedFull
          (TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<5>_>
           *this)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  byte bVar5;
  ulong64 uVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong local_58 [2];
  ulong64 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  uVar13 = 2;
  puVar2 = &(this->Context->Stats).NumReferences;
  *puVar2 = *puVar2 + 0x20;
  uVar6 = (this->PermanentPool).Address;
  uVar9 = (this->PermanentPool).Size;
  local_58[1] = 0;
  local_48 = uVar6;
  uStack_40 = uVar9;
  local_58[0] = 0;
  uVar12 = 2;
  do {
    uVar8 = uVar12 - 2;
    uVar1 = uVar12 - 1;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar8 = uVar12 + 1;
    local_58[(ulonglong)(uVar12 >> 6) + 1] =
         local_58[(ulonglong)(uVar12 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar12].Object - uVar6) <<
         ((byte)uVar12 & 0x3f);
    uVar1 = uVar12 + 2;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 3;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 4;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 5;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 6;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 7;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 8;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 9;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 10;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 0xb;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 0xc;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 0xd;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 0xe;
    uVar12 = uVar12 + 0x10;
  } while (uVar8 < 0x20);
  do {
    uVar8 = uVar13 - 2;
    uVar12 = uVar13 - 1;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 1;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar8 = uVar13 + 2;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 3;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 4;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 5;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 6;
    uVar8 = uVar13 + 7;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 8;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 9;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 10;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xb;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 0xc;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xd;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar12 = uVar13 + 0xe;
    uVar13 = uVar13 + 0x10;
  } while (uVar12 < 0x20);
  uVar10 = local_58[0] & local_58[1];
  uVar12 = 0x400 - (this->ValidatedReferences).Num;
  uVar11 = 0;
  uVar9 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
  uVar9 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar14 = uVar9 >> 0x38;
  bVar5 = (byte)(uVar9 >> 0x38);
  uVar13 = (uint)bVar5;
  if (uVar12 <= bVar5) {
    do {
      uVar8 = (this->ValidatedReferences).Num;
      local_38 = uVar10;
      uVar13 = uVar8 + uVar12;
      if (uVar8 < uVar13) {
        bVar5 = (byte)uVar11 & 0x3f;
        uVar9 = 1L << bVar5 | 1UL >> 0x40 - bVar5;
        do {
          uVar3 = local_58[(uVar11 >> 6) + 4];
          (this->ValidatedReferences).Entries[uVar8].Object =
               (this->UnvalidatedReferences).Entries[uVar11].Object;
          uVar11 = (ulonglong)((int)uVar11 + 1);
          uVar8 = uVar8 + ((uVar3 & uVar9) != 0);
          uVar9 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
        } while (uVar8 < uVar13);
      }
      (this->ValidatedReferences).Num = (this->ValidatedReferences).Num + uVar12;
      if (((this->ValidatedReferences).Num != 0x400) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ValidatedReferences.IsFull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x686,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      DrainValidatedFull(this);
      uVar13 = (int)uVar14 - uVar12;
      uVar14 = (ulonglong)uVar13;
      uVar12 = 0x400;
    } while (0x3ff < uVar13);
  }
  uVar12 = (this->ValidatedReferences).Num;
  local_48 = uVar10;
  uVar8 = uVar12 + uVar13;
  if (uVar12 < uVar8) {
    bVar5 = (byte)uVar11 & 0x3f;
    uVar9 = 1L << bVar5 | 1UL >> 0x40 - bVar5;
    do {
      uVar10 = local_58[(uVar11 >> 6) + 2];
      (this->ValidatedReferences).Entries[uVar12].Object =
           (this->UnvalidatedReferences).Entries[uVar11].Object;
      uVar11 = (ulonglong)((int)uVar11 + 1);
      uVar12 = uVar12 + ((uVar10 & uVar9) != 0);
      uVar9 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    } while (uVar12 < uVar8);
  }
  (this->ValidatedReferences).Num = (this->ValidatedReferences).Num + uVar13;
  if (((this->ValidatedReferences).Num == 0x400) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ValidatedReferences.IsFull()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x68c,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (this->UnvalidatedReferences).Num = 0;
  return;
}

// DrainUnvalidatedFull @ 142030c20

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
::DrainUnvalidatedFull
          (TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
           *this)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  byte bVar5;
  ulong64 uVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong local_58 [2];
  ulong64 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  uVar13 = 2;
  puVar2 = &(this->Context->Stats).NumReferences;
  *puVar2 = *puVar2 + 0x20;
  uVar6 = (this->PermanentPool).Address;
  uVar9 = (this->PermanentPool).Size;
  local_58[1] = 0;
  local_48 = uVar6;
  uStack_40 = uVar9;
  local_58[0] = 0;
  uVar12 = 2;
  do {
    uVar8 = uVar12 - 2;
    uVar1 = uVar12 - 1;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar8 = uVar12 + 1;
    local_58[(ulonglong)(uVar12 >> 6) + 1] =
         local_58[(ulonglong)(uVar12 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar12].Object - uVar6) <<
         ((byte)uVar12 & 0x3f);
    uVar1 = uVar12 + 2;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 3;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 4;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 5;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 6;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 7;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 8;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 9;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 10;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 0xb;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 0xc;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 0xd;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 0xe;
    uVar12 = uVar12 + 0x10;
  } while (uVar8 < 0x20);
  do {
    uVar8 = uVar13 - 2;
    uVar12 = uVar13 - 1;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 1;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar8 = uVar13 + 2;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 3;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 4;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 5;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 6;
    uVar8 = uVar13 + 7;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 8;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 9;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 10;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xb;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 0xc;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xd;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar12 = uVar13 + 0xe;
    uVar13 = uVar13 + 0x10;
  } while (uVar12 < 0x20);
  uVar10 = local_58[0] & local_58[1];
  uVar12 = 0x400 - (this->ValidatedReferences).Num;
  uVar11 = 0;
  uVar9 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
  uVar9 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar14 = uVar9 >> 0x38;
  bVar5 = (byte)(uVar9 >> 0x38);
  uVar13 = (uint)bVar5;
  if (uVar12 <= bVar5) {
    do {
      uVar8 = (this->ValidatedReferences).Num;
      local_38 = uVar10;
      uVar13 = uVar8 + uVar12;
      if (uVar8 < uVar13) {
        bVar5 = (byte)uVar11 & 0x3f;
        uVar9 = 1L << bVar5 | 1UL >> 0x40 - bVar5;
        do {
          uVar3 = local_58[(uVar11 >> 6) + 4];
          (this->ValidatedReferences).Entries[uVar8].Object =
               (this->UnvalidatedReferences).Entries[uVar11].Object;
          uVar11 = (ulonglong)((int)uVar11 + 1);
          uVar8 = uVar8 + ((uVar3 & uVar9) != 0);
          uVar9 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
        } while (uVar8 < uVar13);
      }
      (this->ValidatedReferences).Num = (this->ValidatedReferences).Num + uVar12;
      if (((this->ValidatedReferences).Num != 0x400) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ValidatedReferences.IsFull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x686,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      DrainValidatedFull(this);
      uVar13 = (int)uVar14 - uVar12;
      uVar14 = (ulonglong)uVar13;
      uVar12 = 0x400;
    } while (0x3ff < uVar13);
  }
  uVar12 = (this->ValidatedReferences).Num;
  local_48 = uVar10;
  uVar8 = uVar12 + uVar13;
  if (uVar12 < uVar8) {
    bVar5 = (byte)uVar11 & 0x3f;
    uVar9 = 1L << bVar5 | 1UL >> 0x40 - bVar5;
    do {
      uVar10 = local_58[(uVar11 >> 6) + 2];
      (this->ValidatedReferences).Entries[uVar12].Object =
           (this->UnvalidatedReferences).Entries[uVar11].Object;
      uVar11 = (ulonglong)((int)uVar11 + 1);
      uVar12 = uVar12 + ((uVar10 & uVar9) != 0);
      uVar9 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    } while (uVar12 < uVar8);
  }
  (this->ValidatedReferences).Num = (this->ValidatedReferences).Num + uVar13;
  if (((this->ValidatedReferences).Num == 0x400) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ValidatedReferences.IsFull()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x68c,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (this->UnvalidatedReferences).Num = 0;
  return;
}

// DrainUnvalidatedFull @ 142031390

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
::DrainUnvalidatedFull
          (TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
           *this)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  byte bVar5;
  ulong64 uVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong local_58 [2];
  ulong64 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  uVar13 = 2;
  puVar2 = &(this->Context->Stats).NumReferences;
  *puVar2 = *puVar2 + 0x20;
  uVar6 = (this->PermanentPool).Address;
  uVar9 = (this->PermanentPool).Size;
  local_58[1] = 0;
  local_48 = uVar6;
  uStack_40 = uVar9;
  local_58[0] = 0;
  uVar12 = 2;
  do {
    uVar8 = uVar12 - 2;
    uVar1 = uVar12 - 1;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar8 = uVar12 + 1;
    local_58[(ulonglong)(uVar12 >> 6) + 1] =
         local_58[(ulonglong)(uVar12 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar12].Object - uVar6) <<
         ((byte)uVar12 & 0x3f);
    uVar1 = uVar12 + 2;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 3;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 4;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 5;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 6;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 7;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 8;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 9;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 10;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 0xb;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 0xc;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 0xd;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 0xe;
    uVar12 = uVar12 + 0x10;
  } while (uVar8 < 0x20);
  do {
    uVar8 = uVar13 - 2;
    uVar12 = uVar13 - 1;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 1;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar8 = uVar13 + 2;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 3;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 4;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 5;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 6;
    uVar8 = uVar13 + 7;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 8;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 9;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 10;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xb;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 0xc;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xd;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar12 = uVar13 + 0xe;
    uVar13 = uVar13 + 0x10;
  } while (uVar12 < 0x20);
  uVar10 = local_58[0] & local_58[1];
  uVar12 = 0x400 - (this->ValidatedReferences).Num;
  uVar11 = 0;
  uVar9 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
  uVar9 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar14 = uVar9 >> 0x38;
  bVar5 = (byte)(uVar9 >> 0x38);
  uVar13 = (uint)bVar5;
  if (uVar12 <= bVar5) {
    do {
      uVar8 = (this->ValidatedReferences).Num;
      local_38 = uVar10;
      uVar13 = uVar8 + uVar12;
      if (uVar8 < uVar13) {
        bVar5 = (byte)uVar11 & 0x3f;
        uVar9 = 1L << bVar5 | 1UL >> 0x40 - bVar5;
        do {
          uVar3 = local_58[(uVar11 >> 6) + 4];
          (this->ValidatedReferences).Entries[uVar8].Object =
               (this->UnvalidatedReferences).Entries[uVar11].Object;
          uVar11 = (ulonglong)((int)uVar11 + 1);
          uVar8 = uVar8 + ((uVar3 & uVar9) != 0);
          uVar9 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
        } while (uVar8 < uVar13);
      }
      (this->ValidatedReferences).Num = (this->ValidatedReferences).Num + uVar12;
      if (((this->ValidatedReferences).Num != 0x400) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ValidatedReferences.IsFull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x686,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      DrainValidatedFull(this);
      uVar13 = (int)uVar14 - uVar12;
      uVar14 = (ulonglong)uVar13;
      uVar12 = 0x400;
    } while (0x3ff < uVar13);
  }
  uVar12 = (this->ValidatedReferences).Num;
  local_48 = uVar10;
  uVar8 = uVar12 + uVar13;
  if (uVar12 < uVar8) {
    bVar5 = (byte)uVar11 & 0x3f;
    uVar9 = 1L << bVar5 | 1UL >> 0x40 - bVar5;
    do {
      uVar10 = local_58[(uVar11 >> 6) + 2];
      (this->ValidatedReferences).Entries[uVar12].Object =
           (this->UnvalidatedReferences).Entries[uVar11].Object;
      uVar11 = (ulonglong)((int)uVar11 + 1);
      uVar12 = uVar12 + ((uVar10 & uVar9) != 0);
      uVar9 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    } while (uVar12 < uVar8);
  }
  (this->ValidatedReferences).Num = (this->ValidatedReferences).Num + uVar13;
  if (((this->ValidatedReferences).Num == 0x400) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ValidatedReferences.IsFull()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x68c,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (this->UnvalidatedReferences).Num = 0;
  return;
}

// DrainUnvalidatedFull @ 142031b00

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
::DrainUnvalidatedFull
          (TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
           *this)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  byte bVar5;
  ulong64 uVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong local_58 [2];
  ulong64 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  uVar13 = 2;
  puVar2 = &(this->Context->Stats).NumReferences;
  *puVar2 = *puVar2 + 0x20;
  uVar6 = (this->PermanentPool).Address;
  uVar9 = (this->PermanentPool).Size;
  local_58[1] = 0;
  local_48 = uVar6;
  uStack_40 = uVar9;
  local_58[0] = 0;
  uVar12 = 2;
  do {
    uVar8 = uVar12 - 2;
    uVar1 = uVar12 - 1;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar8 = uVar12 + 1;
    local_58[(ulonglong)(uVar12 >> 6) + 1] =
         local_58[(ulonglong)(uVar12 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar12].Object - uVar6) <<
         ((byte)uVar12 & 0x3f);
    uVar1 = uVar12 + 2;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 3;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 4;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 5;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 6;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 7;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 8;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 9;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 10;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 0xb;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 0xc;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 0xd;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 0xe;
    uVar12 = uVar12 + 0x10;
  } while (uVar8 < 0x20);
  do {
    uVar8 = uVar13 - 2;
    uVar12 = uVar13 - 1;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 1;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar8 = uVar13 + 2;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 3;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 4;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 5;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 6;
    uVar8 = uVar13 + 7;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 8;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 9;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 10;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xb;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 0xc;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xd;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar12 = uVar13 + 0xe;
    uVar13 = uVar13 + 0x10;
  } while (uVar12 < 0x20);
  uVar10 = local_58[0] & local_58[1];
  uVar12 = 0x400 - (this->ValidatedReferences).Num;
  uVar11 = 0;
  uVar9 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
  uVar9 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar14 = uVar9 >> 0x38;
  bVar5 = (byte)(uVar9 >> 0x38);
  uVar13 = (uint)bVar5;
  if (uVar12 <= bVar5) {
    do {
      uVar8 = (this->ValidatedReferences).Num;
      local_38 = uVar10;
      uVar13 = uVar8 + uVar12;
      if (uVar8 < uVar13) {
        bVar5 = (byte)uVar11 & 0x3f;
        uVar9 = 1L << bVar5 | 1UL >> 0x40 - bVar5;
        do {
          uVar3 = local_58[(uVar11 >> 6) + 4];
          (this->ValidatedReferences).Entries[uVar8].Object =
               (this->UnvalidatedReferences).Entries[uVar11].Object;
          uVar11 = (ulonglong)((int)uVar11 + 1);
          uVar8 = uVar8 + ((uVar3 & uVar9) != 0);
          uVar9 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
        } while (uVar8 < uVar13);
      }
      (this->ValidatedReferences).Num = (this->ValidatedReferences).Num + uVar12;
      if (((this->ValidatedReferences).Num != 0x400) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ValidatedReferences.IsFull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x686,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      DrainValidatedFull(this);
      uVar13 = (int)uVar14 - uVar12;
      uVar14 = (ulonglong)uVar13;
      uVar12 = 0x400;
    } while (0x3ff < uVar13);
  }
  uVar12 = (this->ValidatedReferences).Num;
  local_48 = uVar10;
  uVar8 = uVar12 + uVar13;
  if (uVar12 < uVar8) {
    bVar5 = (byte)uVar11 & 0x3f;
    uVar9 = 1L << bVar5 | 1UL >> 0x40 - bVar5;
    do {
      uVar10 = local_58[(uVar11 >> 6) + 2];
      (this->ValidatedReferences).Entries[uVar12].Object =
           (this->UnvalidatedReferences).Entries[uVar11].Object;
      uVar11 = (ulonglong)((int)uVar11 + 1);
      uVar12 = uVar12 + ((uVar10 & uVar9) != 0);
      uVar9 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    } while (uVar12 < uVar8);
  }
  (this->ValidatedReferences).Num = (this->ValidatedReferences).Num + uVar13;
  if (((this->ValidatedReferences).Num == 0x400) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ValidatedReferences.IsFull()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x68c,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (this->UnvalidatedReferences).Num = 0;
  return;
}

// DrainUnvalidatedFull @ 142032270

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<12>_>
::DrainUnvalidatedFull
          (TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<12>_>
           *this)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  byte bVar5;
  ulong64 uVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong local_58 [2];
  ulong64 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  uVar13 = 2;
  puVar2 = &(this->Context->Stats).NumReferences;
  *puVar2 = *puVar2 + 0x20;
  uVar6 = (this->PermanentPool).Address;
  uVar9 = (this->PermanentPool).Size;
  local_58[1] = 0;
  local_48 = uVar6;
  uStack_40 = uVar9;
  local_58[0] = 0;
  uVar12 = 2;
  do {
    uVar8 = uVar12 - 2;
    uVar1 = uVar12 - 1;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar8 = uVar12 + 1;
    local_58[(ulonglong)(uVar12 >> 6) + 1] =
         local_58[(ulonglong)(uVar12 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar12].Object - uVar6) <<
         ((byte)uVar12 & 0x3f);
    uVar1 = uVar12 + 2;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 3;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 4;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 5;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 6;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 7;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 8;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 9;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 10;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 0xb;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 0xc;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 0xd;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 0xe;
    uVar12 = uVar12 + 0x10;
  } while (uVar8 < 0x20);
  do {
    uVar8 = uVar13 - 2;
    uVar12 = uVar13 - 1;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 1;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar8 = uVar13 + 2;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 3;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 4;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 5;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 6;
    uVar8 = uVar13 + 7;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 8;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 9;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 10;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xb;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 0xc;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xd;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar12 = uVar13 + 0xe;
    uVar13 = uVar13 + 0x10;
  } while (uVar12 < 0x20);
  uVar10 = local_58[0] & local_58[1];
  uVar12 = 0x400 - (this->ValidatedReferences).Num;
  uVar11 = 0;
  uVar9 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
  uVar9 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar14 = uVar9 >> 0x38;
  bVar5 = (byte)(uVar9 >> 0x38);
  uVar13 = (uint)bVar5;
  if (uVar12 <= bVar5) {
    do {
      uVar8 = (this->ValidatedReferences).Num;
      local_38 = uVar10;
      uVar13 = uVar8 + uVar12;
      if (uVar8 < uVar13) {
        bVar5 = (byte)uVar11 & 0x3f;
        uVar9 = 1L << bVar5 | 1UL >> 0x40 - bVar5;
        do {
          uVar3 = local_58[(uVar11 >> 6) + 4];
          (this->ValidatedReferences).Entries[uVar8].Object =
               (this->UnvalidatedReferences).Entries[uVar11].Object;
          uVar11 = (ulonglong)((int)uVar11 + 1);
          uVar8 = uVar8 + ((uVar3 & uVar9) != 0);
          uVar9 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
        } while (uVar8 < uVar13);
      }
      (this->ValidatedReferences).Num = (this->ValidatedReferences).Num + uVar12;
      if (((this->ValidatedReferences).Num != 0x400) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ValidatedReferences.IsFull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x686,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      DrainValidatedFull(this);
      uVar13 = (int)uVar14 - uVar12;
      uVar14 = (ulonglong)uVar13;
      uVar12 = 0x400;
    } while (0x3ff < uVar13);
  }
  uVar12 = (this->ValidatedReferences).Num;
  local_48 = uVar10;
  uVar8 = uVar12 + uVar13;
  if (uVar12 < uVar8) {
    bVar5 = (byte)uVar11 & 0x3f;
    uVar9 = 1L << bVar5 | 1UL >> 0x40 - bVar5;
    do {
      uVar10 = local_58[(uVar11 >> 6) + 2];
      (this->ValidatedReferences).Entries[uVar12].Object =
           (this->UnvalidatedReferences).Entries[uVar11].Object;
      uVar11 = (ulonglong)((int)uVar11 + 1);
      uVar12 = uVar12 + ((uVar10 & uVar9) != 0);
      uVar9 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    } while (uVar12 < uVar8);
  }
  (this->ValidatedReferences).Num = (this->ValidatedReferences).Num + uVar13;
  if (((this->ValidatedReferences).Num == 0x400) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ValidatedReferences.IsFull()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x68c,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (this->UnvalidatedReferences).Num = 0;
  return;
}

// DrainUnvalidatedFull @ 1420329e0

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<13>_>
::DrainUnvalidatedFull
          (TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<13>_>
           *this)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  byte bVar5;
  ulong64 uVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong local_58 [2];
  ulong64 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  uVar13 = 2;
  puVar2 = &(this->Context->Stats).NumReferences;
  *puVar2 = *puVar2 + 0x20;
  uVar6 = (this->PermanentPool).Address;
  uVar9 = (this->PermanentPool).Size;
  local_58[1] = 0;
  local_48 = uVar6;
  uStack_40 = uVar9;
  local_58[0] = 0;
  uVar12 = 2;
  do {
    uVar8 = uVar12 - 2;
    uVar1 = uVar12 - 1;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar8 = uVar12 + 1;
    local_58[(ulonglong)(uVar12 >> 6) + 1] =
         local_58[(ulonglong)(uVar12 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar12].Object - uVar6) <<
         ((byte)uVar12 & 0x3f);
    uVar1 = uVar12 + 2;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 3;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 4;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 5;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 6;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 7;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 8;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 9;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 10;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 0xb;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    uVar1 = uVar12 + 0xc;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 0xd;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6)
         << ((byte)uVar1 & 0x3f);
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)(uVar9 <= (longlong)(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6)
         << ((byte)uVar8 & 0x3f);
    uVar8 = uVar12 + 0xe;
    uVar12 = uVar12 + 0x10;
  } while (uVar8 < 0x20);
  do {
    uVar8 = uVar13 - 2;
    uVar12 = uVar13 - 1;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 1;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar8 = uVar13 + 2;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 3;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 4;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 5;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 6;
    uVar8 = uVar13 + 7;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 8;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 9;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 10;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xb;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    uVar12 = uVar13 + 0xc;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xd;
    local_58[uVar12 >> 6] =
         local_58[uVar12 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar12].Object != (UObject *)0x0) <<
         ((byte)uVar12 & 0x3f);
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)((this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar12 = uVar13 + 0xe;
    uVar13 = uVar13 + 0x10;
  } while (uVar12 < 0x20);
  uVar10 = local_58[0] & local_58[1];
  uVar12 = 0x400 - (this->ValidatedReferences).Num;
  uVar11 = 0;
  uVar9 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
  uVar9 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar14 = uVar9 >> 0x38;
  bVar5 = (byte)(uVar9 >> 0x38);
  uVar13 = (uint)bVar5;
  if (uVar12 <= bVar5) {
    do {
      uVar8 = (this->ValidatedReferences).Num;
      local_38 = uVar10;
      uVar13 = uVar8 + uVar12;
      if (uVar8 < uVar13) {
        bVar5 = (byte)uVar11 & 0x3f;
        uVar9 = 1L << bVar5 | 1UL >> 0x40 - bVar5;
        do {
          uVar3 = local_58[(uVar11 >> 6) + 4];
          (this->ValidatedReferences).Entries[uVar8].Object =
               (this->UnvalidatedReferences).Entries[uVar11].Object;
          uVar11 = (ulonglong)((int)uVar11 + 1);
          uVar8 = uVar8 + ((uVar3 & uVar9) != 0);
          uVar9 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
        } while (uVar8 < uVar13);
      }
      (this->ValidatedReferences).Num = (this->ValidatedReferences).Num + uVar12;
      if (((this->ValidatedReferences).Num != 0x400) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ValidatedReferences.IsFull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x686,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      DrainValidatedFull(this);
      uVar13 = (int)uVar14 - uVar12;
      uVar14 = (ulonglong)uVar13;
      uVar12 = 0x400;
    } while (0x3ff < uVar13);
  }
  uVar12 = (this->ValidatedReferences).Num;
  local_48 = uVar10;
  uVar8 = uVar12 + uVar13;
  if (uVar12 < uVar8) {
    bVar5 = (byte)uVar11 & 0x3f;
    uVar9 = 1L << bVar5 | 1UL >> 0x40 - bVar5;
    do {
      uVar10 = local_58[(uVar11 >> 6) + 2];
      (this->ValidatedReferences).Entries[uVar12].Object =
           (this->UnvalidatedReferences).Entries[uVar11].Object;
      uVar11 = (ulonglong)((int)uVar11 + 1);
      uVar12 = uVar12 + ((uVar10 & uVar9) != 0);
      uVar9 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    } while (uVar12 < uVar8);
  }
  (this->ValidatedReferences).Num = (this->ValidatedReferences).Num + uVar13;
  if (((this->ValidatedReferences).Num == 0x400) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ValidatedReferences.IsFull()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x68c,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (this->UnvalidatedReferences).Num = 0;
  return;
}

// DrainUnvalidatedFull @ 142033150

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<1>_>
::DrainUnvalidatedFull
          (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<1>_>
           *this)

{
  uint uVar1;
  uint *puVar2;
  UObject **ppUVar3;
  code *pcVar4;
  byte bVar5;
  ulong64 uVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong local_58 [2];
  ulong64 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  uVar14 = 2;
  puVar2 = &(this->Context->Stats).NumReferences;
  *puVar2 = *puVar2 + 0x20;
  uVar6 = (this->PermanentPool).Address;
  uVar9 = (this->PermanentPool).Size;
  local_58[1] = 0;
  uVar11 = 0;
  local_58[0] = 0;
  local_48 = uVar6;
  uStack_40 = uVar9;
  uVar13 = 2;
  do {
    uVar8 = uVar13 - 2;
    uVar1 = uVar13 - 1;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar8 = uVar13 + 1;
    local_58[(ulonglong)(uVar13 >> 6) + 1] =
         local_58[(ulonglong)(uVar13 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar13].Object - uVar6) <<
         ((byte)uVar13 & 0x3f);
    uVar1 = uVar13 + 2;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 3;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 4;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 5;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 6;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 7;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 8;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 9;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 10;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xb;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 0xc;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xd;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xe;
    uVar13 = uVar13 + 0x10;
  } while (uVar8 < 0x20);
  do {
    uVar8 = uVar14 - 2;
    uVar13 = uVar14 - 1;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 1;
    local_58[uVar14 >> 6] =
         local_58[uVar14 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar14].Object != (UObject *)0x0) <<
         ((byte)uVar14 & 0x3f);
    uVar8 = uVar14 + 2;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 3;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 4;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 5;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 6;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 7;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 8;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 9;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 10;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 0xb;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 0xc;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 0xd;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 0xe;
    uVar14 = uVar14 + 0x10;
  } while (uVar13 < 0x20);
  uVar10 = local_58[0] & local_58[1];
  uVar13 = 0x400 - (this->ValidatedReferences).Num;
  uVar9 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
  uVar9 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar15 = uVar9 >> 0x38;
  bVar5 = (byte)(uVar9 >> 0x38);
  uVar14 = (uint)bVar5;
  if (uVar13 <= bVar5) {
    do {
      uVar8 = (this->ValidatedReferences).Num;
      local_38 = uVar10;
      uVar14 = uVar8 + uVar13;
      if (uVar8 < uVar14) {
        bVar5 = (byte)uVar11 & 0x3f;
        uVar9 = 1L << bVar5 | 1UL >> 0x40 - bVar5;
        do {
          ppUVar3 = (this->UnvalidatedReferences).Entries[uVar11].Object;
          uVar12 = uVar11 >> 6;
          (this->ValidatedReferences).Entries[uVar8]._padding_ = (longlong)*ppUVar3;
          *(UObject ***)
           ((longlong)(&this->UnvalidatedReferences + 1) + (ulonglong)uVar8 * 0x10 + 0x48) = ppUVar3
          ;
          uVar11 = (ulonglong)((int)uVar11 + 1);
          uVar8 = uVar8 + ((local_58[uVar12 + 4] & uVar9) != 0);
          uVar9 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
        } while (uVar8 < uVar14);
      }
      (this->ValidatedReferences).Num = (this->ValidatedReferences).Num + uVar13;
      if (((this->ValidatedReferences).Num != 0x400) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ValidatedReferences.IsFull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x686,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      DrainValidatedFull(this);
      uVar14 = (int)uVar15 - uVar13;
      uVar15 = (ulonglong)uVar14;
      uVar13 = 0x400;
    } while (0x3ff < uVar14);
  }
  uVar13 = (this->ValidatedReferences).Num;
  local_48 = uVar10;
  uVar8 = uVar13 + uVar14;
  if (uVar13 < uVar8) {
    bVar5 = (byte)uVar11 & 0x3f;
    uVar9 = 1L << bVar5 | 1UL >> 0x40 - bVar5;
    do {
      ppUVar3 = (this->UnvalidatedReferences).Entries[uVar11].Object;
      uVar10 = uVar11 >> 6;
      (this->ValidatedReferences).Entries[uVar13]._padding_ = (longlong)*ppUVar3;
      *(UObject ***)((longlong)(&this->UnvalidatedReferences + 1) + (ulonglong)uVar13 * 0x10 + 0x48)
           = ppUVar3;
      uVar11 = (ulonglong)((int)uVar11 + 1);
      uVar13 = uVar13 + ((local_58[uVar10 + 2] & uVar9) != 0);
      uVar9 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    } while (uVar13 < uVar8);
  }
  (this->ValidatedReferences).Num = (this->ValidatedReferences).Num + uVar14;
  if (((this->ValidatedReferences).Num == 0x400) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ValidatedReferences.IsFull()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x68c,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (this->UnvalidatedReferences).Num = 0;
  return;
}

// DrainUnvalidatedFull @ 142033970

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<4>_>
::DrainUnvalidatedFull
          (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<4>_>
           *this)

{
  uint uVar1;
  uint *puVar2;
  UObject **ppUVar3;
  code *pcVar4;
  byte bVar5;
  ulong64 uVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong local_58 [2];
  ulong64 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  uVar14 = 2;
  puVar2 = &(this->Context->Stats).NumReferences;
  *puVar2 = *puVar2 + 0x20;
  uVar6 = (this->PermanentPool).Address;
  uVar9 = (this->PermanentPool).Size;
  local_58[1] = 0;
  uVar11 = 0;
  local_58[0] = 0;
  local_48 = uVar6;
  uStack_40 = uVar9;
  uVar13 = 2;
  do {
    uVar8 = uVar13 - 2;
    uVar1 = uVar13 - 1;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar8 = uVar13 + 1;
    local_58[(ulonglong)(uVar13 >> 6) + 1] =
         local_58[(ulonglong)(uVar13 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar13].Object - uVar6) <<
         ((byte)uVar13 & 0x3f);
    uVar1 = uVar13 + 2;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 3;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 4;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 5;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 6;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 7;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 8;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 9;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 10;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xb;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 0xc;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xd;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xe;
    uVar13 = uVar13 + 0x10;
  } while (uVar8 < 0x20);
  do {
    uVar8 = uVar14 - 2;
    uVar13 = uVar14 - 1;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 1;
    local_58[uVar14 >> 6] =
         local_58[uVar14 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar14].Object != (UObject *)0x0) <<
         ((byte)uVar14 & 0x3f);
    uVar8 = uVar14 + 2;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 3;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 4;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 5;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 6;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 7;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 8;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 9;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 10;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 0xb;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 0xc;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 0xd;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 0xe;
    uVar14 = uVar14 + 0x10;
  } while (uVar13 < 0x20);
  uVar10 = local_58[0] & local_58[1];
  uVar13 = 0x400 - (this->ValidatedReferences).Num;
  uVar9 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
  uVar9 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar15 = uVar9 >> 0x38;
  bVar5 = (byte)(uVar9 >> 0x38);
  uVar14 = (uint)bVar5;
  if (uVar13 <= bVar5) {
    do {
      uVar8 = (this->ValidatedReferences).Num;
      local_38 = uVar10;
      uVar14 = uVar8 + uVar13;
      if (uVar8 < uVar14) {
        bVar5 = (byte)uVar11 & 0x3f;
        uVar9 = 1L << bVar5 | 1UL >> 0x40 - bVar5;
        do {
          ppUVar3 = (this->UnvalidatedReferences).Entries[uVar11].Object;
          uVar12 = uVar11 >> 6;
          (this->ValidatedReferences).Entries[uVar8]._padding_ = (longlong)*ppUVar3;
          *(UObject ***)
           ((longlong)(&this->UnvalidatedReferences + 1) + (ulonglong)uVar8 * 0x10 + 0x48) = ppUVar3
          ;
          uVar11 = (ulonglong)((int)uVar11 + 1);
          uVar8 = uVar8 + ((local_58[uVar12 + 4] & uVar9) != 0);
          uVar9 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
        } while (uVar8 < uVar14);
      }
      (this->ValidatedReferences).Num = (this->ValidatedReferences).Num + uVar13;
      if (((this->ValidatedReferences).Num != 0x400) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ValidatedReferences.IsFull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x686,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      DrainValidatedFull(this);
      uVar14 = (int)uVar15 - uVar13;
      uVar15 = (ulonglong)uVar14;
      uVar13 = 0x400;
    } while (0x3ff < uVar14);
  }
  uVar13 = (this->ValidatedReferences).Num;
  local_48 = uVar10;
  uVar8 = uVar13 + uVar14;
  if (uVar13 < uVar8) {
    bVar5 = (byte)uVar11 & 0x3f;
    uVar9 = 1L << bVar5 | 1UL >> 0x40 - bVar5;
    do {
      ppUVar3 = (this->UnvalidatedReferences).Entries[uVar11].Object;
      uVar10 = uVar11 >> 6;
      (this->ValidatedReferences).Entries[uVar13]._padding_ = (longlong)*ppUVar3;
      *(UObject ***)((longlong)(&this->UnvalidatedReferences + 1) + (ulonglong)uVar13 * 0x10 + 0x48)
           = ppUVar3;
      uVar11 = (ulonglong)((int)uVar11 + 1);
      uVar13 = uVar13 + ((local_58[uVar10 + 2] & uVar9) != 0);
      uVar9 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    } while (uVar13 < uVar8);
  }
  (this->ValidatedReferences).Num = (this->ValidatedReferences).Num + uVar14;
  if (((this->ValidatedReferences).Num == 0x400) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ValidatedReferences.IsFull()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x68c,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (this->UnvalidatedReferences).Num = 0;
  return;
}

// DrainUnvalidatedFull @ 142034190

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<5>_>
::DrainUnvalidatedFull
          (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<5>_>
           *this)

{
  uint uVar1;
  uint *puVar2;
  UObject **ppUVar3;
  code *pcVar4;
  byte bVar5;
  ulong64 uVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong local_58 [2];
  ulong64 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  uVar14 = 2;
  puVar2 = &(this->Context->Stats).NumReferences;
  *puVar2 = *puVar2 + 0x20;
  uVar6 = (this->PermanentPool).Address;
  uVar9 = (this->PermanentPool).Size;
  local_58[1] = 0;
  uVar11 = 0;
  local_58[0] = 0;
  local_48 = uVar6;
  uStack_40 = uVar9;
  uVar13 = 2;
  do {
    uVar8 = uVar13 - 2;
    uVar1 = uVar13 - 1;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar8 = uVar13 + 1;
    local_58[(ulonglong)(uVar13 >> 6) + 1] =
         local_58[(ulonglong)(uVar13 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar13].Object - uVar6) <<
         ((byte)uVar13 & 0x3f);
    uVar1 = uVar13 + 2;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 3;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 4;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 5;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 6;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 7;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 8;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 9;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 10;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xb;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 0xc;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xd;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xe;
    uVar13 = uVar13 + 0x10;
  } while (uVar8 < 0x20);
  do {
    uVar8 = uVar14 - 2;
    uVar13 = uVar14 - 1;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 1;
    local_58[uVar14 >> 6] =
         local_58[uVar14 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar14].Object != (UObject *)0x0) <<
         ((byte)uVar14 & 0x3f);
    uVar8 = uVar14 + 2;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 3;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 4;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 5;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 6;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 7;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 8;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 9;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 10;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 0xb;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 0xc;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 0xd;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 0xe;
    uVar14 = uVar14 + 0x10;
  } while (uVar13 < 0x20);
  uVar10 = local_58[0] & local_58[1];
  uVar13 = 0x400 - (this->ValidatedReferences).Num;
  uVar9 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
  uVar9 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar15 = uVar9 >> 0x38;
  bVar5 = (byte)(uVar9 >> 0x38);
  uVar14 = (uint)bVar5;
  if (uVar13 <= bVar5) {
    do {
      uVar8 = (this->ValidatedReferences).Num;
      local_38 = uVar10;
      uVar14 = uVar8 + uVar13;
      if (uVar8 < uVar14) {
        bVar5 = (byte)uVar11 & 0x3f;
        uVar9 = 1L << bVar5 | 1UL >> 0x40 - bVar5;
        do {
          ppUVar3 = (this->UnvalidatedReferences).Entries[uVar11].Object;
          uVar12 = uVar11 >> 6;
          (this->ValidatedReferences).Entries[uVar8]._padding_ = (longlong)*ppUVar3;
          *(UObject ***)
           ((longlong)(&this->UnvalidatedReferences + 1) + (ulonglong)uVar8 * 0x10 + 0x48) = ppUVar3
          ;
          uVar11 = (ulonglong)((int)uVar11 + 1);
          uVar8 = uVar8 + ((local_58[uVar12 + 4] & uVar9) != 0);
          uVar9 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
        } while (uVar8 < uVar14);
      }
      (this->ValidatedReferences).Num = (this->ValidatedReferences).Num + uVar13;
      if (((this->ValidatedReferences).Num != 0x400) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ValidatedReferences.IsFull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x686,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      DrainValidatedFull(this);
      uVar14 = (int)uVar15 - uVar13;
      uVar15 = (ulonglong)uVar14;
      uVar13 = 0x400;
    } while (0x3ff < uVar14);
  }
  uVar13 = (this->ValidatedReferences).Num;
  local_48 = uVar10;
  uVar8 = uVar13 + uVar14;
  if (uVar13 < uVar8) {
    bVar5 = (byte)uVar11 & 0x3f;
    uVar9 = 1L << bVar5 | 1UL >> 0x40 - bVar5;
    do {
      ppUVar3 = (this->UnvalidatedReferences).Entries[uVar11].Object;
      uVar10 = uVar11 >> 6;
      (this->ValidatedReferences).Entries[uVar13]._padding_ = (longlong)*ppUVar3;
      *(UObject ***)((longlong)(&this->UnvalidatedReferences + 1) + (ulonglong)uVar13 * 0x10 + 0x48)
           = ppUVar3;
      uVar11 = (ulonglong)((int)uVar11 + 1);
      uVar13 = uVar13 + ((local_58[uVar10 + 2] & uVar9) != 0);
      uVar9 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    } while (uVar13 < uVar8);
  }
  (this->ValidatedReferences).Num = (this->ValidatedReferences).Num + uVar14;
  if (((this->ValidatedReferences).Num == 0x400) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ValidatedReferences.IsFull()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x68c,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (this->UnvalidatedReferences).Num = 0;
  return;
}

// DrainUnvalidatedFull @ 1420349b0

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<8>_>
::DrainUnvalidatedFull
          (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<8>_>
           *this)

{
  uint uVar1;
  uint *puVar2;
  UObject **ppUVar3;
  code *pcVar4;
  byte bVar5;
  ulong64 uVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong local_58 [2];
  ulong64 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  uVar14 = 2;
  puVar2 = &(this->Context->Stats).NumReferences;
  *puVar2 = *puVar2 + 0x20;
  uVar6 = (this->PermanentPool).Address;
  uVar9 = (this->PermanentPool).Size;
  local_58[1] = 0;
  uVar11 = 0;
  local_58[0] = 0;
  local_48 = uVar6;
  uStack_40 = uVar9;
  uVar13 = 2;
  do {
    uVar8 = uVar13 - 2;
    uVar1 = uVar13 - 1;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar8 = uVar13 + 1;
    local_58[(ulonglong)(uVar13 >> 6) + 1] =
         local_58[(ulonglong)(uVar13 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar13].Object - uVar6) <<
         ((byte)uVar13 & 0x3f);
    uVar1 = uVar13 + 2;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 3;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 4;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 5;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 6;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 7;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 8;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 9;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 10;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xb;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 0xc;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xd;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xe;
    uVar13 = uVar13 + 0x10;
  } while (uVar8 < 0x20);
  do {
    uVar8 = uVar14 - 2;
    uVar13 = uVar14 - 1;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 1;
    local_58[uVar14 >> 6] =
         local_58[uVar14 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar14].Object != (UObject *)0x0) <<
         ((byte)uVar14 & 0x3f);
    uVar8 = uVar14 + 2;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 3;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 4;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 5;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 6;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 7;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 8;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 9;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 10;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 0xb;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 0xc;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 0xd;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 0xe;
    uVar14 = uVar14 + 0x10;
  } while (uVar13 < 0x20);
  uVar10 = local_58[0] & local_58[1];
  uVar13 = 0x400 - (this->ValidatedReferences).Num;
  uVar9 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
  uVar9 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar15 = uVar9 >> 0x38;
  bVar5 = (byte)(uVar9 >> 0x38);
  uVar14 = (uint)bVar5;
  if (uVar13 <= bVar5) {
    do {
      uVar8 = (this->ValidatedReferences).Num;
      local_38 = uVar10;
      uVar14 = uVar8 + uVar13;
      if (uVar8 < uVar14) {
        bVar5 = (byte)uVar11 & 0x3f;
        uVar9 = 1L << bVar5 | 1UL >> 0x40 - bVar5;
        do {
          ppUVar3 = (this->UnvalidatedReferences).Entries[uVar11].Object;
          uVar12 = uVar11 >> 6;
          (this->ValidatedReferences).Entries[uVar8]._padding_ = (longlong)*ppUVar3;
          *(UObject ***)
           ((longlong)(&this->UnvalidatedReferences + 1) + (ulonglong)uVar8 * 0x10 + 0x48) = ppUVar3
          ;
          uVar11 = (ulonglong)((int)uVar11 + 1);
          uVar8 = uVar8 + ((local_58[uVar12 + 4] & uVar9) != 0);
          uVar9 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
        } while (uVar8 < uVar14);
      }
      (this->ValidatedReferences).Num = (this->ValidatedReferences).Num + uVar13;
      if (((this->ValidatedReferences).Num != 0x400) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ValidatedReferences.IsFull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x686,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      DrainValidatedFull(this);
      uVar14 = (int)uVar15 - uVar13;
      uVar15 = (ulonglong)uVar14;
      uVar13 = 0x400;
    } while (0x3ff < uVar14);
  }
  uVar13 = (this->ValidatedReferences).Num;
  local_48 = uVar10;
  uVar8 = uVar13 + uVar14;
  if (uVar13 < uVar8) {
    bVar5 = (byte)uVar11 & 0x3f;
    uVar9 = 1L << bVar5 | 1UL >> 0x40 - bVar5;
    do {
      ppUVar3 = (this->UnvalidatedReferences).Entries[uVar11].Object;
      uVar10 = uVar11 >> 6;
      (this->ValidatedReferences).Entries[uVar13]._padding_ = (longlong)*ppUVar3;
      *(UObject ***)((longlong)(&this->UnvalidatedReferences + 1) + (ulonglong)uVar13 * 0x10 + 0x48)
           = ppUVar3;
      uVar11 = (ulonglong)((int)uVar11 + 1);
      uVar13 = uVar13 + ((local_58[uVar10 + 2] & uVar9) != 0);
      uVar9 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    } while (uVar13 < uVar8);
  }
  (this->ValidatedReferences).Num = (this->ValidatedReferences).Num + uVar14;
  if (((this->ValidatedReferences).Num == 0x400) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ValidatedReferences.IsFull()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x68c,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (this->UnvalidatedReferences).Num = 0;
  return;
}

// DrainUnvalidatedFull @ 1420351d0

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<9>_>
::DrainUnvalidatedFull
          (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<9>_>
           *this)

{
  uint uVar1;
  uint *puVar2;
  UObject **ppUVar3;
  code *pcVar4;
  byte bVar5;
  ulong64 uVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong local_58 [2];
  ulong64 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  uVar14 = 2;
  puVar2 = &(this->Context->Stats).NumReferences;
  *puVar2 = *puVar2 + 0x20;
  uVar6 = (this->PermanentPool).Address;
  uVar9 = (this->PermanentPool).Size;
  local_58[1] = 0;
  uVar11 = 0;
  local_58[0] = 0;
  local_48 = uVar6;
  uStack_40 = uVar9;
  uVar13 = 2;
  do {
    uVar8 = uVar13 - 2;
    uVar1 = uVar13 - 1;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar8 = uVar13 + 1;
    local_58[(ulonglong)(uVar13 >> 6) + 1] =
         local_58[(ulonglong)(uVar13 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar13].Object - uVar6) <<
         ((byte)uVar13 & 0x3f);
    uVar1 = uVar13 + 2;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 3;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 4;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 5;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 6;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 7;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 8;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 9;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 10;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xb;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 0xc;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xd;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xe;
    uVar13 = uVar13 + 0x10;
  } while (uVar8 < 0x20);
  do {
    uVar8 = uVar14 - 2;
    uVar13 = uVar14 - 1;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 1;
    local_58[uVar14 >> 6] =
         local_58[uVar14 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar14].Object != (UObject *)0x0) <<
         ((byte)uVar14 & 0x3f);
    uVar8 = uVar14 + 2;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 3;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 4;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 5;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 6;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 7;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 8;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 9;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 10;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 0xb;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 0xc;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 0xd;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 0xe;
    uVar14 = uVar14 + 0x10;
  } while (uVar13 < 0x20);
  uVar10 = local_58[0] & local_58[1];
  uVar13 = 0x400 - (this->ValidatedReferences).Num;
  uVar9 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
  uVar9 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar15 = uVar9 >> 0x38;
  bVar5 = (byte)(uVar9 >> 0x38);
  uVar14 = (uint)bVar5;
  if (uVar13 <= bVar5) {
    do {
      uVar8 = (this->ValidatedReferences).Num;
      local_38 = uVar10;
      uVar14 = uVar8 + uVar13;
      if (uVar8 < uVar14) {
        bVar5 = (byte)uVar11 & 0x3f;
        uVar9 = 1L << bVar5 | 1UL >> 0x40 - bVar5;
        do {
          ppUVar3 = (this->UnvalidatedReferences).Entries[uVar11].Object;
          uVar12 = uVar11 >> 6;
          (this->ValidatedReferences).Entries[uVar8]._padding_ = (longlong)*ppUVar3;
          *(UObject ***)
           ((longlong)(&this->UnvalidatedReferences + 1) + (ulonglong)uVar8 * 0x10 + 0x48) = ppUVar3
          ;
          uVar11 = (ulonglong)((int)uVar11 + 1);
          uVar8 = uVar8 + ((local_58[uVar12 + 4] & uVar9) != 0);
          uVar9 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
        } while (uVar8 < uVar14);
      }
      (this->ValidatedReferences).Num = (this->ValidatedReferences).Num + uVar13;
      if (((this->ValidatedReferences).Num != 0x400) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ValidatedReferences.IsFull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x686,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      DrainValidatedFull(this);
      uVar14 = (int)uVar15 - uVar13;
      uVar15 = (ulonglong)uVar14;
      uVar13 = 0x400;
    } while (0x3ff < uVar14);
  }
  uVar13 = (this->ValidatedReferences).Num;
  local_48 = uVar10;
  uVar8 = uVar13 + uVar14;
  if (uVar13 < uVar8) {
    bVar5 = (byte)uVar11 & 0x3f;
    uVar9 = 1L << bVar5 | 1UL >> 0x40 - bVar5;
    do {
      ppUVar3 = (this->UnvalidatedReferences).Entries[uVar11].Object;
      uVar10 = uVar11 >> 6;
      (this->ValidatedReferences).Entries[uVar13]._padding_ = (longlong)*ppUVar3;
      *(UObject ***)((longlong)(&this->UnvalidatedReferences + 1) + (ulonglong)uVar13 * 0x10 + 0x48)
           = ppUVar3;
      uVar11 = (ulonglong)((int)uVar11 + 1);
      uVar13 = uVar13 + ((local_58[uVar10 + 2] & uVar9) != 0);
      uVar9 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    } while (uVar13 < uVar8);
  }
  (this->ValidatedReferences).Num = (this->ValidatedReferences).Num + uVar14;
  if (((this->ValidatedReferences).Num == 0x400) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ValidatedReferences.IsFull()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x68c,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (this->UnvalidatedReferences).Num = 0;
  return;
}

// DrainUnvalidatedFull @ 1420359f0

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<0>_>
::DrainUnvalidatedFull
          (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<0>_>
           *this)

{
  uint uVar1;
  uint *puVar2;
  UObject **ppUVar3;
  code *pcVar4;
  byte bVar5;
  ulong64 uVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong local_58 [2];
  ulong64 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  uVar14 = 2;
  puVar2 = &(this->Context->Stats).NumReferences;
  *puVar2 = *puVar2 + 0x20;
  uVar6 = (this->PermanentPool).Address;
  uVar9 = (this->PermanentPool).Size;
  local_58[1] = 0;
  uVar11 = 0;
  local_58[0] = 0;
  local_48 = uVar6;
  uStack_40 = uVar9;
  uVar13 = 2;
  do {
    uVar8 = uVar13 - 2;
    uVar1 = uVar13 - 1;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar8 = uVar13 + 1;
    local_58[(ulonglong)(uVar13 >> 6) + 1] =
         local_58[(ulonglong)(uVar13 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar13].Object - uVar6) <<
         ((byte)uVar13 & 0x3f);
    uVar1 = uVar13 + 2;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 3;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 4;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 5;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 6;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 7;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 8;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 9;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 10;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xb;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 0xc;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xd;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xe;
    uVar13 = uVar13 + 0x10;
  } while (uVar8 < 0x20);
  do {
    uVar8 = uVar14 - 2;
    uVar13 = uVar14 - 1;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 1;
    local_58[uVar14 >> 6] =
         local_58[uVar14 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar14].Object != (UObject *)0x0) <<
         ((byte)uVar14 & 0x3f);
    uVar8 = uVar14 + 2;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 3;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 4;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 5;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 6;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 7;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 8;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 9;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 10;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 0xb;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 0xc;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 0xd;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 0xe;
    uVar14 = uVar14 + 0x10;
  } while (uVar13 < 0x20);
  uVar10 = local_58[0] & local_58[1];
  uVar13 = 0x400 - (this->ValidatedReferences).Num;
  uVar9 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
  uVar9 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar15 = uVar9 >> 0x38;
  bVar5 = (byte)(uVar9 >> 0x38);
  uVar14 = (uint)bVar5;
  if (uVar13 <= bVar5) {
    do {
      uVar8 = (this->ValidatedReferences).Num;
      local_38 = uVar10;
      uVar14 = uVar8 + uVar13;
      if (uVar8 < uVar14) {
        bVar5 = (byte)uVar11 & 0x3f;
        uVar9 = 1L << bVar5 | 1UL >> 0x40 - bVar5;
        do {
          ppUVar3 = (this->UnvalidatedReferences).Entries[uVar11].Object;
          uVar12 = uVar11 >> 6;
          (this->ValidatedReferences).Entries[uVar8]._padding_ = (longlong)*ppUVar3;
          *(UObject ***)
           ((longlong)(&this->UnvalidatedReferences + 1) + (ulonglong)uVar8 * 0x10 + 0x48) = ppUVar3
          ;
          uVar11 = (ulonglong)((int)uVar11 + 1);
          uVar8 = uVar8 + ((local_58[uVar12 + 4] & uVar9) != 0);
          uVar9 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
        } while (uVar8 < uVar14);
      }
      (this->ValidatedReferences).Num = (this->ValidatedReferences).Num + uVar13;
      if (((this->ValidatedReferences).Num != 0x400) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ValidatedReferences.IsFull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x686,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      DrainValidatedFull(this);
      uVar14 = (int)uVar15 - uVar13;
      uVar15 = (ulonglong)uVar14;
      uVar13 = 0x400;
    } while (0x3ff < uVar14);
  }
  uVar13 = (this->ValidatedReferences).Num;
  local_48 = uVar10;
  uVar8 = uVar13 + uVar14;
  if (uVar13 < uVar8) {
    bVar5 = (byte)uVar11 & 0x3f;
    uVar9 = 1L << bVar5 | 1UL >> 0x40 - bVar5;
    do {
      ppUVar3 = (this->UnvalidatedReferences).Entries[uVar11].Object;
      uVar10 = uVar11 >> 6;
      (this->ValidatedReferences).Entries[uVar13]._padding_ = (longlong)*ppUVar3;
      *(UObject ***)((longlong)(&this->UnvalidatedReferences + 1) + (ulonglong)uVar13 * 0x10 + 0x48)
           = ppUVar3;
      uVar11 = (ulonglong)((int)uVar11 + 1);
      uVar13 = uVar13 + ((local_58[uVar10 + 2] & uVar9) != 0);
      uVar9 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    } while (uVar13 < uVar8);
  }
  (this->ValidatedReferences).Num = (this->ValidatedReferences).Num + uVar14;
  if (((this->ValidatedReferences).Num == 0x400) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ValidatedReferences.IsFull()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x68c,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (this->UnvalidatedReferences).Num = 0;
  return;
}

// DrainUnvalidatedFull @ 142036210

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<12>_>
::DrainUnvalidatedFull
          (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<12>_>
           *this)

{
  uint uVar1;
  uint *puVar2;
  UObject **ppUVar3;
  code *pcVar4;
  byte bVar5;
  ulong64 uVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong local_58 [2];
  ulong64 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  uVar14 = 2;
  puVar2 = &(this->Context->Stats).NumReferences;
  *puVar2 = *puVar2 + 0x20;
  uVar6 = (this->PermanentPool).Address;
  uVar9 = (this->PermanentPool).Size;
  local_58[1] = 0;
  uVar11 = 0;
  local_58[0] = 0;
  local_48 = uVar6;
  uStack_40 = uVar9;
  uVar13 = 2;
  do {
    uVar8 = uVar13 - 2;
    uVar1 = uVar13 - 1;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar8 = uVar13 + 1;
    local_58[(ulonglong)(uVar13 >> 6) + 1] =
         local_58[(ulonglong)(uVar13 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar13].Object - uVar6) <<
         ((byte)uVar13 & 0x3f);
    uVar1 = uVar13 + 2;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 3;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 4;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 5;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 6;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 7;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 8;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 9;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 10;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xb;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 0xc;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xd;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xe;
    uVar13 = uVar13 + 0x10;
  } while (uVar8 < 0x20);
  do {
    uVar8 = uVar14 - 2;
    uVar13 = uVar14 - 1;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 1;
    local_58[uVar14 >> 6] =
         local_58[uVar14 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar14].Object != (UObject *)0x0) <<
         ((byte)uVar14 & 0x3f);
    uVar8 = uVar14 + 2;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 3;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 4;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 5;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 6;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 7;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 8;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 9;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 10;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 0xb;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 0xc;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 0xd;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 0xe;
    uVar14 = uVar14 + 0x10;
  } while (uVar13 < 0x20);
  uVar10 = local_58[0] & local_58[1];
  uVar13 = 0x400 - (this->ValidatedReferences).Num;
  uVar9 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
  uVar9 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar15 = uVar9 >> 0x38;
  bVar5 = (byte)(uVar9 >> 0x38);
  uVar14 = (uint)bVar5;
  if (uVar13 <= bVar5) {
    do {
      uVar8 = (this->ValidatedReferences).Num;
      local_38 = uVar10;
      uVar14 = uVar8 + uVar13;
      if (uVar8 < uVar14) {
        bVar5 = (byte)uVar11 & 0x3f;
        uVar9 = 1L << bVar5 | 1UL >> 0x40 - bVar5;
        do {
          ppUVar3 = (this->UnvalidatedReferences).Entries[uVar11].Object;
          uVar12 = uVar11 >> 6;
          (this->ValidatedReferences).Entries[uVar8]._padding_ = (longlong)*ppUVar3;
          *(UObject ***)
           ((longlong)(&this->UnvalidatedReferences + 1) + (ulonglong)uVar8 * 0x10 + 0x48) = ppUVar3
          ;
          uVar11 = (ulonglong)((int)uVar11 + 1);
          uVar8 = uVar8 + ((local_58[uVar12 + 4] & uVar9) != 0);
          uVar9 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
        } while (uVar8 < uVar14);
      }
      (this->ValidatedReferences).Num = (this->ValidatedReferences).Num + uVar13;
      if (((this->ValidatedReferences).Num != 0x400) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ValidatedReferences.IsFull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x686,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      DrainValidatedFull(this);
      uVar14 = (int)uVar15 - uVar13;
      uVar15 = (ulonglong)uVar14;
      uVar13 = 0x400;
    } while (0x3ff < uVar14);
  }
  uVar13 = (this->ValidatedReferences).Num;
  local_48 = uVar10;
  uVar8 = uVar13 + uVar14;
  if (uVar13 < uVar8) {
    bVar5 = (byte)uVar11 & 0x3f;
    uVar9 = 1L << bVar5 | 1UL >> 0x40 - bVar5;
    do {
      ppUVar3 = (this->UnvalidatedReferences).Entries[uVar11].Object;
      uVar10 = uVar11 >> 6;
      (this->ValidatedReferences).Entries[uVar13]._padding_ = (longlong)*ppUVar3;
      *(UObject ***)((longlong)(&this->UnvalidatedReferences + 1) + (ulonglong)uVar13 * 0x10 + 0x48)
           = ppUVar3;
      uVar11 = (ulonglong)((int)uVar11 + 1);
      uVar13 = uVar13 + ((local_58[uVar10 + 2] & uVar9) != 0);
      uVar9 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    } while (uVar13 < uVar8);
  }
  (this->ValidatedReferences).Num = (this->ValidatedReferences).Num + uVar14;
  if (((this->ValidatedReferences).Num == 0x400) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ValidatedReferences.IsFull()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x68c,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (this->UnvalidatedReferences).Num = 0;
  return;
}

// DrainUnvalidatedFull @ 142036a30

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<13>_>
::DrainUnvalidatedFull
          (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<13>_>
           *this)

{
  uint uVar1;
  uint *puVar2;
  UObject **ppUVar3;
  code *pcVar4;
  byte bVar5;
  ulong64 uVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong local_58 [2];
  ulong64 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  uVar14 = 2;
  puVar2 = &(this->Context->Stats).NumReferences;
  *puVar2 = *puVar2 + 0x20;
  uVar6 = (this->PermanentPool).Address;
  uVar9 = (this->PermanentPool).Size;
  local_58[1] = 0;
  uVar11 = 0;
  local_58[0] = 0;
  local_48 = uVar6;
  uStack_40 = uVar9;
  uVar13 = 2;
  do {
    uVar8 = uVar13 - 2;
    uVar1 = uVar13 - 1;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar8 = uVar13 + 1;
    local_58[(ulonglong)(uVar13 >> 6) + 1] =
         local_58[(ulonglong)(uVar13 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar13].Object - uVar6) <<
         ((byte)uVar13 & 0x3f);
    uVar1 = uVar13 + 2;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 3;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 4;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 5;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 6;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 7;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 8;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 9;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 10;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xb;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    uVar1 = uVar13 + 0xc;
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xd;
    local_58[(ulonglong)(uVar1 >> 6) + 1] =
         local_58[(ulonglong)(uVar1 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar1].Object - uVar6) <<
         ((byte)uVar1 & 0x3f);
    local_58[(ulonglong)(uVar8 >> 6) + 1] =
         local_58[(ulonglong)(uVar8 >> 6) + 1] |
         (ulonglong)
         (uVar9 <= (longlong)*(this->UnvalidatedReferences).Entries[uVar8].Object - uVar6) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar13 + 0xe;
    uVar13 = uVar13 + 0x10;
  } while (uVar8 < 0x20);
  do {
    uVar8 = uVar14 - 2;
    uVar13 = uVar14 - 1;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 1;
    local_58[uVar14 >> 6] =
         local_58[uVar14 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar14].Object != (UObject *)0x0) <<
         ((byte)uVar14 & 0x3f);
    uVar8 = uVar14 + 2;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 3;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 4;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 5;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 6;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 7;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 8;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 9;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 10;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 0xb;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    uVar8 = uVar14 + 0xc;
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 0xd;
    local_58[uVar8 >> 6] =
         local_58[uVar8 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar8].Object != (UObject *)0x0) <<
         ((byte)uVar8 & 0x3f);
    local_58[uVar13 >> 6] =
         local_58[uVar13 >> 6] |
         (ulonglong)(*(this->UnvalidatedReferences).Entries[uVar13].Object != (UObject *)0x0) <<
         ((byte)uVar13 & 0x3f);
    uVar13 = uVar14 + 0xe;
    uVar14 = uVar14 + 0x10;
  } while (uVar13 < 0x20);
  uVar10 = local_58[0] & local_58[1];
  uVar13 = 0x400 - (this->ValidatedReferences).Num;
  uVar9 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
  uVar9 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar15 = uVar9 >> 0x38;
  bVar5 = (byte)(uVar9 >> 0x38);
  uVar14 = (uint)bVar5;
  if (uVar13 <= bVar5) {
    do {
      uVar8 = (this->ValidatedReferences).Num;
      local_38 = uVar10;
      uVar14 = uVar8 + uVar13;
      if (uVar8 < uVar14) {
        bVar5 = (byte)uVar11 & 0x3f;
        uVar9 = 1L << bVar5 | 1UL >> 0x40 - bVar5;
        do {
          ppUVar3 = (this->UnvalidatedReferences).Entries[uVar11].Object;
          uVar12 = uVar11 >> 6;
          (this->ValidatedReferences).Entries[uVar8]._padding_ = (longlong)*ppUVar3;
          *(UObject ***)
           ((longlong)(&this->UnvalidatedReferences + 1) + (ulonglong)uVar8 * 0x10 + 0x48) = ppUVar3
          ;
          uVar11 = (ulonglong)((int)uVar11 + 1);
          uVar8 = uVar8 + ((local_58[uVar12 + 4] & uVar9) != 0);
          uVar9 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
        } while (uVar8 < uVar14);
      }
      (this->ValidatedReferences).Num = (this->ValidatedReferences).Num + uVar13;
      if (((this->ValidatedReferences).Num != 0x400) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ValidatedReferences.IsFull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x686,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      DrainValidatedFull(this);
      uVar14 = (int)uVar15 - uVar13;
      uVar15 = (ulonglong)uVar14;
      uVar13 = 0x400;
    } while (0x3ff < uVar14);
  }
  uVar13 = (this->ValidatedReferences).Num;
  local_48 = uVar10;
  uVar8 = uVar13 + uVar14;
  if (uVar13 < uVar8) {
    bVar5 = (byte)uVar11 & 0x3f;
    uVar9 = 1L << bVar5 | 1UL >> 0x40 - bVar5;
    do {
      ppUVar3 = (this->UnvalidatedReferences).Entries[uVar11].Object;
      uVar10 = uVar11 >> 6;
      (this->ValidatedReferences).Entries[uVar13]._padding_ = (longlong)*ppUVar3;
      *(UObject ***)((longlong)(&this->UnvalidatedReferences + 1) + (ulonglong)uVar13 * 0x10 + 0x48)
           = ppUVar3;
      uVar11 = (ulonglong)((int)uVar11 + 1);
      uVar13 = uVar13 + ((local_58[uVar10 + 2] & uVar9) != 0);
      uVar9 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    } while (uVar13 < uVar8);
  }
  (this->ValidatedReferences).Num = (this->ValidatedReferences).Num + uVar14;
  if (((this->ValidatedReferences).Num == 0x400) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ValidatedReferences.IsFull()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x68c,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (this->UnvalidatedReferences).Num = 0;
  return;
}

// DrainValidatedFull @ 142037250

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
::DrainValidatedFull
          (TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
           *this)

{
  bool *pbVar1;
  FWorkBlockifier *this_00;
  FWorkerContext *pFVar2;
  UObject *pUVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  EInternalObjectFlags EVar7;
  bool bVar8;
  uint uVar9;
  FUObjectItem *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  TAddAdapter<1> *pTVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  FImmutableReference *pFVar18;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
  *pTVar19;
  longlong lVar20;
  undefined8 *puVar21;
  undefined1 auStack_5488 [32];
  uint local_5468;
  int local_5460;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
  *local_5458;
  TAddAdapter<1> local_5450;
  TAddAdapter<1> local_5448 [2];
  uint local_5438 [1024];
  uint local_4438 [2];
  undefined8 auStack_4430 [2047];
  undefined1 local_438 [1024];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x142037272;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_5488;
  lVar15 = 0x10;
  lVar17 = 0x10;
  do {
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  lVar20 = 0x400;
  puVar13 = local_5438;
  lVar17 = 0x400;
  pFVar18 = (this->ValidatedReferences).Entries;
  do {
    *puVar13 = *(uint *)&pFVar18->Object->field_0xc;
    pFVar18 = pFVar18 + 1;
    puVar13 = puVar13 + 1;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  puVar21 = auStack_4430;
  lVar17 = 0x400;
  puVar13 = local_5438;
  local_5458 = this;
  do {
    uVar9 = *puVar13;
    uVar16 = uVar9 >> 0x10;
    if (((GUObjectArray.ObjObjects.NumElements <= (int)uVar9) || ((int)uVar9 < 0)) &&
       (local_5468 = uVar9,
       bVar8 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                          ,0x362,L"IsValidIndex(%d)"), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((uint)GUObjectArray.ObjObjects.NumChunks <= uVar16) {
      local_5460 = GUObjectArray.ObjObjects.NumChunks;
      local_5468 = uVar16;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChunkIndex < (uint32)NumChunks",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x363,L"ChunkIndex (%d) < NumChunks (%d)");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (GUObjectArray.ObjObjects.MaxElements <= (int)uVar9) {
      local_5460 = GUObjectArray.ObjObjects.MaxElements;
      local_5468 = uVar9;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < MaxElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x364,L"Index (%d) < MaxElements (%d)");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar10 = GUObjectArray.ObjObjects.Objects[uVar16];
    if ((pFVar10 == (FUObjectItem *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Chunk",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x366,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar13 = puVar13 + 1;
    *puVar21 = pFVar10 + (uVar9 & 0xffff);
    puVar21 = puVar21 + 2;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  memset(local_438,0,0x400);
  do {
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  puVar13 = local_4438;
  lVar15 = 0x400;
  do {
    *puVar13 = (uint)((ulonglong)**(undefined8 **)(puVar13 + 2) >> 0x20);
    puVar13 = puVar13 + 4;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  puVar13 = local_4438;
  pFVar18 = (local_5458->ValidatedReferences).Entries;
  pTVar19 = local_5458;
  do {
    uVar5 = *(undefined8 *)puVar13;
    puVar6 = *(ulonglong **)(puVar13 + 2);
    pFVar2 = pTVar19->Context;
    pUVar3 = pFVar18->Object;
    pbVar1 = &(pFVar2->Stats).bFoundGarbageRef;
    *pbVar1 = (bool)(*pbVar1 | (byte)(*puVar13 >> 0x15) & 1);
    EVar7 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    lVar15 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag & (EInternalObjectFlags)(*puVar6 >> 0x20)
        ) == Borrowed) {
LAB_14203756c:
      if ((~(byte)((uint)uVar5 >> 0x17) & 0 < *(int *)((longlong)puVar6 + 0x14)) != 0) {
        pFVar10 = FChunkedFixedUObjectArray::GetObjectPtr
                            (&GUObjectArray.ObjObjects,*(int *)((longlong)puVar6 + 0x14));
        if ((pFVar10 == (FUObjectItem *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("ItemPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                               ,0x381,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        do {
          uVar11 = *puVar6;
          uVar9 = (uint)(uVar11 >> 0x20);
          pTVar19 = local_5458;
          if ((uVar9 >> 0x17 & 1) != 0) goto LAB_142037686;
          if (((ulonglong)puVar6 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (
                      L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          uVar12 = *puVar6;
          if (uVar11 == uVar12) {
            *puVar6 = (longlong)(int)uVar9 << 0x20 | (longlong)(int)uVar11 | 0x80000000000000;
          }
          EVar7 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
          UNLOCK();
        } while (uVar11 != uVar12);
        lVar15 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
        pTVar19 = local_5458;
        if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
            (EInternalObjectFlags)((ulonglong)(pFVar10->field0_0x0).FlagsAndRefCount >> 0x20)) !=
            Borrowed) {
          uVar11 = (pFVar10->field0_0x0).FlagsAndRefCount;
          do {
            LOCK();
            uVar12 = (pFVar10->field0_0x0).FlagsAndRefCount;
            bVar8 = uVar11 == uVar12;
            if (bVar8) {
              (pFVar10->field0_0x0).FlagsAndRefCount = uVar11 & ~(lVar15 << 0x20);
              uVar12 = uVar11;
            }
            UNLOCK();
            uVar11 = uVar12;
          } while (!bVar8);
          LOCK();
          (pFVar10->field0_0x0).FlagsAndRefCount =
               (pFVar10->field0_0x0).FlagsAndRefCount |
               (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
          UNLOCK();
          if ((EVar7 & (EInternalObjectFlags)(uVar12 >> 0x20)) != Borrowed) {
            uVar9 = pFVar10->ClusterRootIndex;
            local_5448[0].Queue = &pFVar2->ObjectsToSerialize;
            pTVar14 = local_5448;
            goto LAB_14203767a;
          }
        }
      }
    }
    else {
      uVar11 = *puVar6;
      do {
        LOCK();
        uVar12 = *puVar6;
        bVar8 = uVar11 == uVar12;
        if (bVar8) {
          *puVar6 = uVar11 & ~(lVar15 << 0x20);
          uVar12 = uVar11;
        }
        UNLOCK();
        uVar11 = uVar12;
      } while (!bVar8);
      LOCK();
      *puVar6 = *puVar6 | (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
      UNLOCK();
      if ((EVar7 & (EInternalObjectFlags)(uVar12 >> 0x20)) == Borrowed) goto LAB_14203756c;
      this_00 = &pFVar2->ObjectsToSerialize;
      if (((uint)uVar5 >> 0x18 & 1) == 0) {
        *this_00->WipIt = pUVar3;
        this_00->WipIt = this_00->WipIt + 1;
        if (this_00->WipIt == ((pFVar2->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
          FWorkBlockifier::PushFullBlockAsync(this_00);
          pTVar19 = local_5458;
        }
      }
      else {
        pTVar14 = &local_5450;
        uVar9 = *(uint *)((longlong)puVar6 + 0x14);
        local_5450.Queue = this_00;
LAB_14203767a:
        MarkReferencedClustersAsReachable<1,UE::GC::TAddAdapter<1>_>(~uVar9,pTVar14);
        pTVar19 = local_5458;
      }
    }
LAB_142037686:
    pFVar18 = pFVar18 + 1;
    puVar13 = puVar13 + 4;
    lVar20 = lVar20 + -1;
    if (lVar20 == 0) {
      (pTVar19->ValidatedReferences).Num = 0;
      return;
    }
  } while( true );
}

// DrainValidatedFull @ 1420376e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<4>_>
::DrainValidatedFull
          (TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<4>_>
           *this)

{
  FWorkBlockifier *this_00;
  ulonglong *puVar1;
  UObject *pUVar2;
  FWorkerContext *pFVar3;
  code *pcVar4;
  EInternalObjectFlags EVar5;
  bool bVar6;
  uint uVar7;
  FUObjectItem *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  TAddAdapter<4> *pTVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  FImmutableReference *pFVar16;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<4>_>
  *pTVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined1 auStack_5488 [32];
  uint local_5468;
  int local_5460;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<4>_>
  *local_5458;
  TAddAdapter<4> local_5450;
  TAddAdapter<4> local_5448 [2];
  uint local_5438 [1024];
  uint local_4438 [2];
  undefined8 auStack_4430 [2047];
  undefined1 local_438 [1024];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x142037702;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_5488;
  lVar13 = 0x10;
  lVar15 = 0x10;
  do {
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  lVar18 = 0x400;
  puVar11 = local_5438;
  lVar15 = 0x400;
  pFVar16 = (this->ValidatedReferences).Entries;
  do {
    *puVar11 = *(uint *)&pFVar16->Object->field_0xc;
    pFVar16 = pFVar16 + 1;
    puVar11 = puVar11 + 1;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  puVar19 = auStack_4430;
  lVar15 = 0x400;
  puVar11 = local_5438;
  local_5458 = this;
  do {
    uVar7 = *puVar11;
    uVar14 = uVar7 >> 0x10;
    if (((GUObjectArray.ObjObjects.NumElements <= (int)uVar7) || ((int)uVar7 < 0)) &&
       (local_5468 = uVar7,
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                          ,0x362,L"IsValidIndex(%d)"), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((uint)GUObjectArray.ObjObjects.NumChunks <= uVar14) {
      local_5460 = GUObjectArray.ObjObjects.NumChunks;
      local_5468 = uVar14;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChunkIndex < (uint32)NumChunks",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x363,L"ChunkIndex (%d) < NumChunks (%d)");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (GUObjectArray.ObjObjects.MaxElements <= (int)uVar7) {
      local_5460 = GUObjectArray.ObjObjects.MaxElements;
      local_5468 = uVar7;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < MaxElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x364,L"Index (%d) < MaxElements (%d)");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar8 = GUObjectArray.ObjObjects.Objects[uVar14];
    if ((pFVar8 == (FUObjectItem *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Chunk",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x366,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar11 = puVar11 + 1;
    *puVar19 = pFVar8 + (uVar7 & 0xffff);
    puVar19 = puVar19 + 2;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  memset(local_438,0,0x400);
  do {
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  puVar11 = local_4438;
  lVar13 = 0x400;
  do {
    *puVar11 = (uint)((ulonglong)**(undefined8 **)(puVar11 + 2) >> 0x20);
    puVar11 = puVar11 + 4;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  puVar11 = local_4438;
  pFVar16 = (local_5458->ValidatedReferences).Entries;
  pTVar17 = local_5458;
  do {
    EVar5 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    puVar1 = *(ulonglong **)(puVar11 + 2);
    lVar13 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    pUVar2 = pFVar16->Object;
    pFVar3 = pTVar17->Context;
    uVar7 = *puVar11;
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag & (EInternalObjectFlags)(*puVar1 >> 0x20)
        ) == Borrowed) {
LAB_1420379df:
      if ((~(byte)(uVar7 >> 0x17) & 0 < *(int *)((longlong)puVar1 + 0x14)) != 0) {
        pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr
                           (&GUObjectArray.ObjObjects,*(int *)((longlong)puVar1 + 0x14));
        if ((pFVar8 == (FUObjectItem *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ItemPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                               ,0x381,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        do {
          uVar9 = *puVar1;
          uVar7 = (uint)(uVar9 >> 0x20);
          pTVar17 = local_5458;
          if ((uVar7 >> 0x17 & 1) != 0) goto LAB_142037af5;
          if (((ulonglong)puVar1 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (
                      L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          uVar10 = *puVar1;
          if (uVar9 == uVar10) {
            *puVar1 = (longlong)(int)uVar7 << 0x20 | (longlong)(int)uVar9 | 0x80000000000000;
          }
          EVar5 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
          UNLOCK();
        } while (uVar9 != uVar10);
        lVar13 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
        pTVar17 = local_5458;
        if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
            (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) !=
            Borrowed) {
          uVar9 = (pFVar8->field0_0x0).FlagsAndRefCount;
          do {
            LOCK();
            uVar10 = (pFVar8->field0_0x0).FlagsAndRefCount;
            bVar6 = uVar9 == uVar10;
            if (bVar6) {
              (pFVar8->field0_0x0).FlagsAndRefCount = uVar9 & ~(lVar13 << 0x20);
              uVar10 = uVar9;
            }
            UNLOCK();
            uVar9 = uVar10;
          } while (!bVar6);
          LOCK();
          (pFVar8->field0_0x0).FlagsAndRefCount =
               (pFVar8->field0_0x0).FlagsAndRefCount |
               (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
          UNLOCK();
          if ((EVar5 & (EInternalObjectFlags)(uVar10 >> 0x20)) != Borrowed) {
            uVar7 = pFVar8->ClusterRootIndex;
            local_5448[0].Queue = &pFVar3->ObjectsToSerialize;
            pTVar12 = local_5448;
            goto LAB_142037ae9;
          }
        }
      }
    }
    else {
      uVar9 = *puVar1;
      do {
        LOCK();
        uVar10 = *puVar1;
        bVar6 = uVar9 == uVar10;
        if (bVar6) {
          *puVar1 = uVar9 & ~(lVar13 << 0x20);
          uVar10 = uVar9;
        }
        UNLOCK();
        uVar9 = uVar10;
      } while (!bVar6);
      LOCK();
      *puVar1 = *puVar1 | (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
      UNLOCK();
      if ((EVar5 & (EInternalObjectFlags)(uVar10 >> 0x20)) == Borrowed) goto LAB_1420379df;
      this_00 = &pFVar3->ObjectsToSerialize;
      if ((uVar7 >> 0x18 & 1) == 0) {
        *this_00->WipIt = pUVar2;
        this_00->WipIt = this_00->WipIt + 1;
        if (this_00->WipIt == ((pFVar3->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
          FWorkBlockifier::PushFullBlockSync(this_00);
          pTVar17 = local_5458;
        }
      }
      else {
        pTVar12 = &local_5450;
        uVar7 = *(uint *)((longlong)puVar1 + 0x14);
        local_5450.Queue = this_00;
LAB_142037ae9:
        MarkReferencedClustersAsReachable<4,UE::GC::TAddAdapter<4>_>(~uVar7,pTVar12);
        pTVar17 = local_5458;
      }
    }
LAB_142037af5:
    pFVar16 = pFVar16 + 1;
    puVar11 = puVar11 + 4;
    lVar18 = lVar18 + -1;
    if (lVar18 == 0) {
      (pTVar17->ValidatedReferences).Num = 0;
      return;
    }
  } while( true );
}

// DrainValidatedFull @ 142037b50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<5>_>
::DrainValidatedFull
          (TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<5>_>
           *this)

{
  FWorkBlockifier *this_00;
  ulonglong *puVar1;
  UObject *pUVar2;
  FWorkerContext *pFVar3;
  code *pcVar4;
  EInternalObjectFlags EVar5;
  bool bVar6;
  uint uVar7;
  FUObjectItem *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  TAddAdapter<5> *pTVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  FImmutableReference *pFVar16;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<5>_>
  *pTVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined1 auStack_5488 [32];
  uint local_5468;
  int local_5460;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<5>_>
  *local_5458;
  TAddAdapter<5> local_5450;
  TAddAdapter<5> local_5448 [2];
  uint local_5438 [1024];
  uint local_4438 [2];
  undefined8 auStack_4430 [2047];
  undefined1 local_438 [1024];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x142037b72;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_5488;
  lVar13 = 0x10;
  lVar15 = 0x10;
  do {
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  lVar18 = 0x400;
  puVar11 = local_5438;
  lVar15 = 0x400;
  pFVar16 = (this->ValidatedReferences).Entries;
  do {
    *puVar11 = *(uint *)&pFVar16->Object->field_0xc;
    pFVar16 = pFVar16 + 1;
    puVar11 = puVar11 + 1;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  puVar19 = auStack_4430;
  lVar15 = 0x400;
  puVar11 = local_5438;
  local_5458 = this;
  do {
    uVar7 = *puVar11;
    uVar14 = uVar7 >> 0x10;
    if (((GUObjectArray.ObjObjects.NumElements <= (int)uVar7) || ((int)uVar7 < 0)) &&
       (local_5468 = uVar7,
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                          ,0x362,L"IsValidIndex(%d)"), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((uint)GUObjectArray.ObjObjects.NumChunks <= uVar14) {
      local_5460 = GUObjectArray.ObjObjects.NumChunks;
      local_5468 = uVar14;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChunkIndex < (uint32)NumChunks",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x363,L"ChunkIndex (%d) < NumChunks (%d)");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (GUObjectArray.ObjObjects.MaxElements <= (int)uVar7) {
      local_5460 = GUObjectArray.ObjObjects.MaxElements;
      local_5468 = uVar7;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < MaxElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x364,L"Index (%d) < MaxElements (%d)");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar8 = GUObjectArray.ObjObjects.Objects[uVar14];
    if ((pFVar8 == (FUObjectItem *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Chunk",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x366,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar11 = puVar11 + 1;
    *puVar19 = pFVar8 + (uVar7 & 0xffff);
    puVar19 = puVar19 + 2;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  memset(local_438,0,0x400);
  do {
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  puVar11 = local_4438;
  lVar13 = 0x400;
  do {
    *puVar11 = (uint)((ulonglong)**(undefined8 **)(puVar11 + 2) >> 0x20);
    puVar11 = puVar11 + 4;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  puVar11 = local_4438;
  pFVar16 = (local_5458->ValidatedReferences).Entries;
  pTVar17 = local_5458;
  do {
    EVar5 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    puVar1 = *(ulonglong **)(puVar11 + 2);
    lVar13 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    pUVar2 = pFVar16->Object;
    pFVar3 = pTVar17->Context;
    uVar7 = *puVar11;
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag & (EInternalObjectFlags)(*puVar1 >> 0x20)
        ) == Borrowed) {
LAB_142037e4f:
      if ((~(byte)(uVar7 >> 0x17) & 0 < *(int *)((longlong)puVar1 + 0x14)) != 0) {
        pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr
                           (&GUObjectArray.ObjObjects,*(int *)((longlong)puVar1 + 0x14));
        if ((pFVar8 == (FUObjectItem *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ItemPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                               ,0x381,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        do {
          uVar9 = *puVar1;
          uVar7 = (uint)(uVar9 >> 0x20);
          pTVar17 = local_5458;
          if ((uVar7 >> 0x17 & 1) != 0) goto LAB_142037f65;
          if (((ulonglong)puVar1 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (
                      L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          uVar10 = *puVar1;
          if (uVar9 == uVar10) {
            *puVar1 = (longlong)(int)uVar7 << 0x20 | (longlong)(int)uVar9 | 0x80000000000000;
          }
          EVar5 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
          UNLOCK();
        } while (uVar9 != uVar10);
        lVar13 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
        pTVar17 = local_5458;
        if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
            (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) !=
            Borrowed) {
          uVar9 = (pFVar8->field0_0x0).FlagsAndRefCount;
          do {
            LOCK();
            uVar10 = (pFVar8->field0_0x0).FlagsAndRefCount;
            bVar6 = uVar9 == uVar10;
            if (bVar6) {
              (pFVar8->field0_0x0).FlagsAndRefCount = uVar9 & ~(lVar13 << 0x20);
              uVar10 = uVar9;
            }
            UNLOCK();
            uVar9 = uVar10;
          } while (!bVar6);
          LOCK();
          (pFVar8->field0_0x0).FlagsAndRefCount =
               (pFVar8->field0_0x0).FlagsAndRefCount |
               (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
          UNLOCK();
          if ((EVar5 & (EInternalObjectFlags)(uVar10 >> 0x20)) != Borrowed) {
            uVar7 = pFVar8->ClusterRootIndex;
            local_5448[0].Queue = &pFVar3->ObjectsToSerialize;
            pTVar12 = local_5448;
            goto LAB_142037f59;
          }
        }
      }
    }
    else {
      uVar9 = *puVar1;
      do {
        LOCK();
        uVar10 = *puVar1;
        bVar6 = uVar9 == uVar10;
        if (bVar6) {
          *puVar1 = uVar9 & ~(lVar13 << 0x20);
          uVar10 = uVar9;
        }
        UNLOCK();
        uVar9 = uVar10;
      } while (!bVar6);
      LOCK();
      *puVar1 = *puVar1 | (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
      UNLOCK();
      if ((EVar5 & (EInternalObjectFlags)(uVar10 >> 0x20)) == Borrowed) goto LAB_142037e4f;
      this_00 = &pFVar3->ObjectsToSerialize;
      if ((uVar7 >> 0x18 & 1) == 0) {
        *this_00->WipIt = pUVar2;
        this_00->WipIt = this_00->WipIt + 1;
        if (this_00->WipIt == ((pFVar3->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
          FWorkBlockifier::PushFullBlockAsync(this_00);
          pTVar17 = local_5458;
        }
      }
      else {
        pTVar12 = &local_5450;
        uVar7 = *(uint *)((longlong)puVar1 + 0x14);
        local_5450.Queue = this_00;
LAB_142037f59:
        MarkReferencedClustersAsReachable<5,UE::GC::TAddAdapter<5>_>(~uVar7,pTVar12);
        pTVar17 = local_5458;
      }
    }
LAB_142037f65:
    pFVar16 = pFVar16 + 1;
    puVar11 = puVar11 + 4;
    lVar18 = lVar18 + -1;
    if (lVar18 == 0) {
      (pTVar17->ValidatedReferences).Num = 0;
      return;
    }
  } while( true );
}

// DrainValidatedFull @ 142037fc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
::DrainValidatedFull
          (TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
           *this)

{
  bool *pbVar1;
  FWorkBlockifier *this_00;
  FWorkerContext *pFVar2;
  UObject *pUVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  EInternalObjectFlags EVar7;
  bool bVar8;
  uint uVar9;
  FUObjectItem *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  TAddAdapter<8> *pTVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  FImmutableReference *pFVar18;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
  *pTVar19;
  longlong lVar20;
  undefined8 *puVar21;
  undefined1 auStack_5488 [32];
  uint local_5468;
  int local_5460;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
  *local_5458;
  TAddAdapter<8> local_5450;
  TAddAdapter<8> local_5448 [2];
  uint local_5438 [1024];
  uint local_4438 [2];
  undefined8 auStack_4430 [2047];
  undefined1 local_438 [1024];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x142037fe2;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_5488;
  lVar15 = 0x10;
  lVar17 = 0x10;
  do {
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  lVar20 = 0x400;
  puVar13 = local_5438;
  lVar17 = 0x400;
  pFVar18 = (this->ValidatedReferences).Entries;
  do {
    *puVar13 = *(uint *)&pFVar18->Object->field_0xc;
    pFVar18 = pFVar18 + 1;
    puVar13 = puVar13 + 1;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  puVar21 = auStack_4430;
  lVar17 = 0x400;
  puVar13 = local_5438;
  local_5458 = this;
  do {
    uVar9 = *puVar13;
    uVar16 = uVar9 >> 0x10;
    if (((GUObjectArray.ObjObjects.NumElements <= (int)uVar9) || ((int)uVar9 < 0)) &&
       (local_5468 = uVar9,
       bVar8 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                          ,0x362,L"IsValidIndex(%d)"), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((uint)GUObjectArray.ObjObjects.NumChunks <= uVar16) {
      local_5460 = GUObjectArray.ObjObjects.NumChunks;
      local_5468 = uVar16;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChunkIndex < (uint32)NumChunks",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x363,L"ChunkIndex (%d) < NumChunks (%d)");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (GUObjectArray.ObjObjects.MaxElements <= (int)uVar9) {
      local_5460 = GUObjectArray.ObjObjects.MaxElements;
      local_5468 = uVar9;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < MaxElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x364,L"Index (%d) < MaxElements (%d)");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar10 = GUObjectArray.ObjObjects.Objects[uVar16];
    if ((pFVar10 == (FUObjectItem *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Chunk",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x366,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar13 = puVar13 + 1;
    *puVar21 = pFVar10 + (uVar9 & 0xffff);
    puVar21 = puVar21 + 2;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  memset(local_438,0,0x400);
  do {
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  puVar13 = local_4438;
  lVar15 = 0x400;
  do {
    *puVar13 = (uint)((ulonglong)**(undefined8 **)(puVar13 + 2) >> 0x20);
    puVar13 = puVar13 + 4;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  puVar13 = local_4438;
  pFVar18 = (local_5458->ValidatedReferences).Entries;
  pTVar19 = local_5458;
  do {
    uVar5 = *(undefined8 *)puVar13;
    puVar6 = *(ulonglong **)(puVar13 + 2);
    pFVar2 = pTVar19->Context;
    pUVar3 = pFVar18->Object;
    pbVar1 = &(pFVar2->Stats).bFoundGarbageRef;
    *pbVar1 = (bool)(*pbVar1 | (byte)(*puVar13 >> 0x15) & 1);
    EVar7 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    lVar15 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag & (EInternalObjectFlags)(*puVar6 >> 0x20)
        ) == Borrowed) {
LAB_1420382dc:
      if ((~(byte)((uint)uVar5 >> 0x17) & 0 < *(int *)((longlong)puVar6 + 0x14)) != 0) {
        pFVar10 = FChunkedFixedUObjectArray::GetObjectPtr
                            (&GUObjectArray.ObjObjects,*(int *)((longlong)puVar6 + 0x14));
        if ((pFVar10 == (FUObjectItem *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("ItemPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                               ,0x381,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        do {
          uVar11 = *puVar6;
          uVar9 = (uint)(uVar11 >> 0x20);
          pTVar19 = local_5458;
          if ((uVar9 >> 0x17 & 1) != 0) goto LAB_1420383f6;
          if (((ulonglong)puVar6 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (
                      L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          uVar12 = *puVar6;
          if (uVar11 == uVar12) {
            *puVar6 = (longlong)(int)uVar9 << 0x20 | (longlong)(int)uVar11 | 0x80000000000000;
          }
          EVar7 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
          UNLOCK();
        } while (uVar11 != uVar12);
        lVar15 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
        pTVar19 = local_5458;
        if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
            (EInternalObjectFlags)((ulonglong)(pFVar10->field0_0x0).FlagsAndRefCount >> 0x20)) !=
            Borrowed) {
          uVar11 = (pFVar10->field0_0x0).FlagsAndRefCount;
          do {
            LOCK();
            uVar12 = (pFVar10->field0_0x0).FlagsAndRefCount;
            bVar8 = uVar11 == uVar12;
            if (bVar8) {
              (pFVar10->field0_0x0).FlagsAndRefCount = uVar11 & ~(lVar15 << 0x20);
              uVar12 = uVar11;
            }
            UNLOCK();
            uVar11 = uVar12;
          } while (!bVar8);
          LOCK();
          (pFVar10->field0_0x0).FlagsAndRefCount =
               (pFVar10->field0_0x0).FlagsAndRefCount |
               (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
          UNLOCK();
          if ((EVar7 & (EInternalObjectFlags)(uVar12 >> 0x20)) != Borrowed) {
            uVar9 = pFVar10->ClusterRootIndex;
            local_5448[0].Queue = &pFVar2->ObjectsToSerialize;
            pTVar14 = local_5448;
            goto LAB_1420383ea;
          }
        }
      }
    }
    else {
      uVar11 = *puVar6;
      do {
        LOCK();
        uVar12 = *puVar6;
        bVar8 = uVar11 == uVar12;
        if (bVar8) {
          *puVar6 = uVar11 & ~(lVar15 << 0x20);
          uVar12 = uVar11;
        }
        UNLOCK();
        uVar11 = uVar12;
      } while (!bVar8);
      LOCK();
      *puVar6 = *puVar6 | (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
      UNLOCK();
      if ((EVar7 & (EInternalObjectFlags)(uVar12 >> 0x20)) == Borrowed) goto LAB_1420382dc;
      this_00 = &pFVar2->ObjectsToSerialize;
      if (((uint)uVar5 >> 0x18 & 1) == 0) {
        *this_00->WipIt = pUVar3;
        this_00->WipIt = this_00->WipIt + 1;
        if (this_00->WipIt == ((pFVar2->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
          FWorkBlockifier::PushFullBlockSync(this_00);
          pTVar19 = local_5458;
        }
      }
      else {
        pTVar14 = &local_5450;
        uVar9 = *(uint *)((longlong)puVar6 + 0x14);
        local_5450.Queue = this_00;
LAB_1420383ea:
        MarkReferencedClustersAsReachable<8,UE::GC::TAddAdapter<8>_>(~uVar9,pTVar14);
        pTVar19 = local_5458;
      }
    }
LAB_1420383f6:
    pFVar18 = pFVar18 + 1;
    puVar13 = puVar13 + 4;
    lVar20 = lVar20 + -1;
    if (lVar20 == 0) {
      (pTVar19->ValidatedReferences).Num = 0;
      return;
    }
  } while( true );
}

// DrainValidatedFull @ 142038450

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
::DrainValidatedFull
          (TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
           *this)

{
  bool *pbVar1;
  FWorkBlockifier *this_00;
  FWorkerContext *pFVar2;
  UObject *pUVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  EInternalObjectFlags EVar7;
  bool bVar8;
  uint uVar9;
  FUObjectItem *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  TAddAdapter<9> *pTVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  FImmutableReference *pFVar18;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
  *pTVar19;
  longlong lVar20;
  undefined8 *puVar21;
  undefined1 auStack_5488 [32];
  uint local_5468;
  int local_5460;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
  *local_5458;
  TAddAdapter<9> local_5450;
  TAddAdapter<9> local_5448 [2];
  uint local_5438 [1024];
  uint local_4438 [2];
  undefined8 auStack_4430 [2047];
  undefined1 local_438 [1024];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x142038472;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_5488;
  lVar15 = 0x10;
  lVar17 = 0x10;
  do {
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  lVar20 = 0x400;
  puVar13 = local_5438;
  lVar17 = 0x400;
  pFVar18 = (this->ValidatedReferences).Entries;
  do {
    *puVar13 = *(uint *)&pFVar18->Object->field_0xc;
    pFVar18 = pFVar18 + 1;
    puVar13 = puVar13 + 1;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  puVar21 = auStack_4430;
  lVar17 = 0x400;
  puVar13 = local_5438;
  local_5458 = this;
  do {
    uVar9 = *puVar13;
    uVar16 = uVar9 >> 0x10;
    if (((GUObjectArray.ObjObjects.NumElements <= (int)uVar9) || ((int)uVar9 < 0)) &&
       (local_5468 = uVar9,
       bVar8 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                          ,0x362,L"IsValidIndex(%d)"), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((uint)GUObjectArray.ObjObjects.NumChunks <= uVar16) {
      local_5460 = GUObjectArray.ObjObjects.NumChunks;
      local_5468 = uVar16;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChunkIndex < (uint32)NumChunks",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x363,L"ChunkIndex (%d) < NumChunks (%d)");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (GUObjectArray.ObjObjects.MaxElements <= (int)uVar9) {
      local_5460 = GUObjectArray.ObjObjects.MaxElements;
      local_5468 = uVar9;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < MaxElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x364,L"Index (%d) < MaxElements (%d)");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar10 = GUObjectArray.ObjObjects.Objects[uVar16];
    if ((pFVar10 == (FUObjectItem *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Chunk",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x366,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar13 = puVar13 + 1;
    *puVar21 = pFVar10 + (uVar9 & 0xffff);
    puVar21 = puVar21 + 2;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  memset(local_438,0,0x400);
  do {
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  puVar13 = local_4438;
  lVar15 = 0x400;
  do {
    *puVar13 = (uint)((ulonglong)**(undefined8 **)(puVar13 + 2) >> 0x20);
    puVar13 = puVar13 + 4;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  puVar13 = local_4438;
  pFVar18 = (local_5458->ValidatedReferences).Entries;
  pTVar19 = local_5458;
  do {
    uVar5 = *(undefined8 *)puVar13;
    puVar6 = *(ulonglong **)(puVar13 + 2);
    pFVar2 = pTVar19->Context;
    pUVar3 = pFVar18->Object;
    pbVar1 = &(pFVar2->Stats).bFoundGarbageRef;
    *pbVar1 = (bool)(*pbVar1 | (byte)(*puVar13 >> 0x15) & 1);
    EVar7 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    lVar15 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag & (EInternalObjectFlags)(*puVar6 >> 0x20)
        ) == Borrowed) {
LAB_14203876c:
      if ((~(byte)((uint)uVar5 >> 0x17) & 0 < *(int *)((longlong)puVar6 + 0x14)) != 0) {
        pFVar10 = FChunkedFixedUObjectArray::GetObjectPtr
                            (&GUObjectArray.ObjObjects,*(int *)((longlong)puVar6 + 0x14));
        if ((pFVar10 == (FUObjectItem *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("ItemPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                               ,0x381,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        do {
          uVar11 = *puVar6;
          uVar9 = (uint)(uVar11 >> 0x20);
          pTVar19 = local_5458;
          if ((uVar9 >> 0x17 & 1) != 0) goto LAB_142038886;
          if (((ulonglong)puVar6 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (
                      L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          uVar12 = *puVar6;
          if (uVar11 == uVar12) {
            *puVar6 = (longlong)(int)uVar9 << 0x20 | (longlong)(int)uVar11 | 0x80000000000000;
          }
          EVar7 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
          UNLOCK();
        } while (uVar11 != uVar12);
        lVar15 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
        pTVar19 = local_5458;
        if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
            (EInternalObjectFlags)((ulonglong)(pFVar10->field0_0x0).FlagsAndRefCount >> 0x20)) !=
            Borrowed) {
          uVar11 = (pFVar10->field0_0x0).FlagsAndRefCount;
          do {
            LOCK();
            uVar12 = (pFVar10->field0_0x0).FlagsAndRefCount;
            bVar8 = uVar11 == uVar12;
            if (bVar8) {
              (pFVar10->field0_0x0).FlagsAndRefCount = uVar11 & ~(lVar15 << 0x20);
              uVar12 = uVar11;
            }
            UNLOCK();
            uVar11 = uVar12;
          } while (!bVar8);
          LOCK();
          (pFVar10->field0_0x0).FlagsAndRefCount =
               (pFVar10->field0_0x0).FlagsAndRefCount |
               (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
          UNLOCK();
          if ((EVar7 & (EInternalObjectFlags)(uVar12 >> 0x20)) != Borrowed) {
            uVar9 = pFVar10->ClusterRootIndex;
            local_5448[0].Queue = &pFVar2->ObjectsToSerialize;
            pTVar14 = local_5448;
            goto LAB_14203887a;
          }
        }
      }
    }
    else {
      uVar11 = *puVar6;
      do {
        LOCK();
        uVar12 = *puVar6;
        bVar8 = uVar11 == uVar12;
        if (bVar8) {
          *puVar6 = uVar11 & ~(lVar15 << 0x20);
          uVar12 = uVar11;
        }
        UNLOCK();
        uVar11 = uVar12;
      } while (!bVar8);
      LOCK();
      *puVar6 = *puVar6 | (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
      UNLOCK();
      if ((EVar7 & (EInternalObjectFlags)(uVar12 >> 0x20)) == Borrowed) goto LAB_14203876c;
      this_00 = &pFVar2->ObjectsToSerialize;
      if (((uint)uVar5 >> 0x18 & 1) == 0) {
        *this_00->WipIt = pUVar3;
        this_00->WipIt = this_00->WipIt + 1;
        if (this_00->WipIt == ((pFVar2->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
          FWorkBlockifier::PushFullBlockAsync(this_00);
          pTVar19 = local_5458;
        }
      }
      else {
        pTVar14 = &local_5450;
        uVar9 = *(uint *)((longlong)puVar6 + 0x14);
        local_5450.Queue = this_00;
LAB_14203887a:
        MarkReferencedClustersAsReachable<9,UE::GC::TAddAdapter<9>_>(~uVar9,pTVar14);
        pTVar19 = local_5458;
      }
    }
LAB_142038886:
    pFVar18 = pFVar18 + 1;
    puVar13 = puVar13 + 4;
    lVar20 = lVar20 + -1;
    if (lVar20 == 0) {
      (pTVar19->ValidatedReferences).Num = 0;
      return;
    }
  } while( true );
}

// DrainValidatedFull @ 1420388e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
::DrainValidatedFull
          (TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
           *this)

{
  bool *pbVar1;
  FWorkBlockifier *this_00;
  FWorkerContext *pFVar2;
  UObject *pUVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  EInternalObjectFlags EVar7;
  bool bVar8;
  uint uVar9;
  FUObjectItem *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  TAddAdapter<0> *pTVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  FImmutableReference *pFVar18;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
  *pTVar19;
  longlong lVar20;
  undefined8 *puVar21;
  undefined1 auStack_5488 [32];
  uint local_5468;
  int local_5460;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
  *local_5458;
  TAddAdapter<0> local_5450;
  TAddAdapter<0> local_5448 [2];
  uint local_5438 [1024];
  uint local_4438 [2];
  undefined8 auStack_4430 [2047];
  undefined1 local_438 [1024];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x142038902;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_5488;
  lVar15 = 0x10;
  lVar17 = 0x10;
  do {
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  lVar20 = 0x400;
  puVar13 = local_5438;
  lVar17 = 0x400;
  pFVar18 = (this->ValidatedReferences).Entries;
  do {
    *puVar13 = *(uint *)&pFVar18->Object->field_0xc;
    pFVar18 = pFVar18 + 1;
    puVar13 = puVar13 + 1;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  puVar21 = auStack_4430;
  lVar17 = 0x400;
  puVar13 = local_5438;
  local_5458 = this;
  do {
    uVar9 = *puVar13;
    uVar16 = uVar9 >> 0x10;
    if (((GUObjectArray.ObjObjects.NumElements <= (int)uVar9) || ((int)uVar9 < 0)) &&
       (local_5468 = uVar9,
       bVar8 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                          ,0x362,L"IsValidIndex(%d)"), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((uint)GUObjectArray.ObjObjects.NumChunks <= uVar16) {
      local_5460 = GUObjectArray.ObjObjects.NumChunks;
      local_5468 = uVar16;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChunkIndex < (uint32)NumChunks",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x363,L"ChunkIndex (%d) < NumChunks (%d)");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (GUObjectArray.ObjObjects.MaxElements <= (int)uVar9) {
      local_5460 = GUObjectArray.ObjObjects.MaxElements;
      local_5468 = uVar9;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < MaxElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x364,L"Index (%d) < MaxElements (%d)");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar10 = GUObjectArray.ObjObjects.Objects[uVar16];
    if ((pFVar10 == (FUObjectItem *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Chunk",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x366,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar13 = puVar13 + 1;
    *puVar21 = pFVar10 + (uVar9 & 0xffff);
    puVar21 = puVar21 + 2;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  memset(local_438,0,0x400);
  do {
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  puVar13 = local_4438;
  lVar15 = 0x400;
  do {
    *puVar13 = (uint)((ulonglong)**(undefined8 **)(puVar13 + 2) >> 0x20);
    puVar13 = puVar13 + 4;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  puVar13 = local_4438;
  pFVar18 = (local_5458->ValidatedReferences).Entries;
  pTVar19 = local_5458;
  do {
    uVar5 = *(undefined8 *)puVar13;
    puVar6 = *(ulonglong **)(puVar13 + 2);
    pFVar2 = pTVar19->Context;
    pUVar3 = pFVar18->Object;
    pbVar1 = &(pFVar2->Stats).bFoundGarbageRef;
    *pbVar1 = (bool)(*pbVar1 | (byte)(*puVar13 >> 0x15) & 1);
    EVar7 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    lVar15 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag & (EInternalObjectFlags)(*puVar6 >> 0x20)
        ) == Borrowed) {
LAB_142038bfc:
      if ((~(byte)((uint)uVar5 >> 0x17) & 0 < *(int *)((longlong)puVar6 + 0x14)) != 0) {
        pFVar10 = FChunkedFixedUObjectArray::GetObjectPtr
                            (&GUObjectArray.ObjObjects,*(int *)((longlong)puVar6 + 0x14));
        if ((pFVar10 == (FUObjectItem *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("ItemPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                               ,0x381,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        do {
          uVar11 = *puVar6;
          uVar9 = (uint)(uVar11 >> 0x20);
          pTVar19 = local_5458;
          if ((uVar9 >> 0x17 & 1) != 0) goto LAB_142038d16;
          if (((ulonglong)puVar6 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (
                      L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          uVar12 = *puVar6;
          if (uVar11 == uVar12) {
            *puVar6 = (longlong)(int)uVar9 << 0x20 | (longlong)(int)uVar11 | 0x80000000000000;
          }
          EVar7 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
          UNLOCK();
        } while (uVar11 != uVar12);
        lVar15 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
        pTVar19 = local_5458;
        if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
            (EInternalObjectFlags)((ulonglong)(pFVar10->field0_0x0).FlagsAndRefCount >> 0x20)) !=
            Borrowed) {
          uVar11 = (pFVar10->field0_0x0).FlagsAndRefCount;
          do {
            LOCK();
            uVar12 = (pFVar10->field0_0x0).FlagsAndRefCount;
            bVar8 = uVar11 == uVar12;
            if (bVar8) {
              (pFVar10->field0_0x0).FlagsAndRefCount = uVar11 & ~(lVar15 << 0x20);
              uVar12 = uVar11;
            }
            UNLOCK();
            uVar11 = uVar12;
          } while (!bVar8);
          LOCK();
          (pFVar10->field0_0x0).FlagsAndRefCount =
               (pFVar10->field0_0x0).FlagsAndRefCount |
               (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
          UNLOCK();
          if ((EVar7 & (EInternalObjectFlags)(uVar12 >> 0x20)) != Borrowed) {
            uVar9 = pFVar10->ClusterRootIndex;
            local_5448[0].Queue = &pFVar2->ObjectsToSerialize;
            pTVar14 = local_5448;
            goto LAB_142038d0a;
          }
        }
      }
    }
    else {
      uVar11 = *puVar6;
      do {
        LOCK();
        uVar12 = *puVar6;
        bVar8 = uVar11 == uVar12;
        if (bVar8) {
          *puVar6 = uVar11 & ~(lVar15 << 0x20);
          uVar12 = uVar11;
        }
        UNLOCK();
        uVar11 = uVar12;
      } while (!bVar8);
      LOCK();
      *puVar6 = *puVar6 | (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
      UNLOCK();
      if ((EVar7 & (EInternalObjectFlags)(uVar12 >> 0x20)) == Borrowed) goto LAB_142038bfc;
      this_00 = &pFVar2->ObjectsToSerialize;
      if (((uint)uVar5 >> 0x18 & 1) == 0) {
        *this_00->WipIt = pUVar3;
        this_00->WipIt = this_00->WipIt + 1;
        if (this_00->WipIt == ((pFVar2->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
          FWorkBlockifier::PushFullBlockSync(this_00);
          pTVar19 = local_5458;
        }
      }
      else {
        pTVar14 = &local_5450;
        uVar9 = *(uint *)((longlong)puVar6 + 0x14);
        local_5450.Queue = this_00;
LAB_142038d0a:
        MarkReferencedClustersAsReachable<0,UE::GC::TAddAdapter<0>_>(~uVar9,pTVar14);
        pTVar19 = local_5458;
      }
    }
LAB_142038d16:
    pFVar18 = pFVar18 + 1;
    puVar13 = puVar13 + 4;
    lVar20 = lVar20 + -1;
    if (lVar20 == 0) {
      (pTVar19->ValidatedReferences).Num = 0;
      return;
    }
  } while( true );
}

// DrainValidatedFull @ 142038d70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<12>_>
::DrainValidatedFull
          (TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<12>_>
           *this)

{
  FWorkBlockifier *this_00;
  ulonglong *puVar1;
  UObject *pUVar2;
  FWorkerContext *pFVar3;
  code *pcVar4;
  EInternalObjectFlags EVar5;
  bool bVar6;
  uint uVar7;
  FUObjectItem *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  TAddAdapter<12> *pTVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  FImmutableReference *pFVar16;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<12>_>
  *pTVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined1 auStack_5488 [32];
  uint local_5468;
  int local_5460;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<12>_>
  *local_5458;
  TAddAdapter<12> local_5450;
  TAddAdapter<12> local_5448 [2];
  uint local_5438 [1024];
  uint local_4438 [2];
  undefined8 auStack_4430 [2047];
  undefined1 local_438 [1024];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x142038d92;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_5488;
  lVar13 = 0x10;
  lVar15 = 0x10;
  do {
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  lVar18 = 0x400;
  puVar11 = local_5438;
  lVar15 = 0x400;
  pFVar16 = (this->ValidatedReferences).Entries;
  do {
    *puVar11 = *(uint *)&pFVar16->Object->field_0xc;
    pFVar16 = pFVar16 + 1;
    puVar11 = puVar11 + 1;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  puVar19 = auStack_4430;
  lVar15 = 0x400;
  puVar11 = local_5438;
  local_5458 = this;
  do {
    uVar7 = *puVar11;
    uVar14 = uVar7 >> 0x10;
    if (((GUObjectArray.ObjObjects.NumElements <= (int)uVar7) || ((int)uVar7 < 0)) &&
       (local_5468 = uVar7,
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                          ,0x362,L"IsValidIndex(%d)"), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((uint)GUObjectArray.ObjObjects.NumChunks <= uVar14) {
      local_5460 = GUObjectArray.ObjObjects.NumChunks;
      local_5468 = uVar14;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChunkIndex < (uint32)NumChunks",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x363,L"ChunkIndex (%d) < NumChunks (%d)");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (GUObjectArray.ObjObjects.MaxElements <= (int)uVar7) {
      local_5460 = GUObjectArray.ObjObjects.MaxElements;
      local_5468 = uVar7;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < MaxElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x364,L"Index (%d) < MaxElements (%d)");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar8 = GUObjectArray.ObjObjects.Objects[uVar14];
    if ((pFVar8 == (FUObjectItem *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Chunk",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x366,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar11 = puVar11 + 1;
    *puVar19 = pFVar8 + (uVar7 & 0xffff);
    puVar19 = puVar19 + 2;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  memset(local_438,0,0x400);
  do {
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  puVar11 = local_4438;
  lVar13 = 0x400;
  do {
    *puVar11 = (uint)((ulonglong)**(undefined8 **)(puVar11 + 2) >> 0x20);
    puVar11 = puVar11 + 4;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  puVar11 = local_4438;
  pFVar16 = (local_5458->ValidatedReferences).Entries;
  pTVar17 = local_5458;
  do {
    EVar5 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    puVar1 = *(ulonglong **)(puVar11 + 2);
    lVar13 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    pUVar2 = pFVar16->Object;
    pFVar3 = pTVar17->Context;
    uVar7 = *puVar11;
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag & (EInternalObjectFlags)(*puVar1 >> 0x20)
        ) == Borrowed) {
LAB_14203906f:
      if ((~(byte)(uVar7 >> 0x17) & 0 < *(int *)((longlong)puVar1 + 0x14)) != 0) {
        pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr
                           (&GUObjectArray.ObjObjects,*(int *)((longlong)puVar1 + 0x14));
        if ((pFVar8 == (FUObjectItem *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ItemPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                               ,0x381,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        do {
          uVar9 = *puVar1;
          uVar7 = (uint)(uVar9 >> 0x20);
          pTVar17 = local_5458;
          if ((uVar7 >> 0x17 & 1) != 0) goto LAB_142039185;
          if (((ulonglong)puVar1 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (
                      L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          uVar10 = *puVar1;
          if (uVar9 == uVar10) {
            *puVar1 = (longlong)(int)uVar7 << 0x20 | (longlong)(int)uVar9 | 0x80000000000000;
          }
          EVar5 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
          UNLOCK();
        } while (uVar9 != uVar10);
        lVar13 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
        pTVar17 = local_5458;
        if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
            (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) !=
            Borrowed) {
          uVar9 = (pFVar8->field0_0x0).FlagsAndRefCount;
          do {
            LOCK();
            uVar10 = (pFVar8->field0_0x0).FlagsAndRefCount;
            bVar6 = uVar9 == uVar10;
            if (bVar6) {
              (pFVar8->field0_0x0).FlagsAndRefCount = uVar9 & ~(lVar13 << 0x20);
              uVar10 = uVar9;
            }
            UNLOCK();
            uVar9 = uVar10;
          } while (!bVar6);
          LOCK();
          (pFVar8->field0_0x0).FlagsAndRefCount =
               (pFVar8->field0_0x0).FlagsAndRefCount |
               (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
          UNLOCK();
          if ((EVar5 & (EInternalObjectFlags)(uVar10 >> 0x20)) != Borrowed) {
            uVar7 = pFVar8->ClusterRootIndex;
            local_5448[0].Queue = &pFVar3->ObjectsToSerialize;
            pTVar12 = local_5448;
            goto LAB_142039179;
          }
        }
      }
    }
    else {
      uVar9 = *puVar1;
      do {
        LOCK();
        uVar10 = *puVar1;
        bVar6 = uVar9 == uVar10;
        if (bVar6) {
          *puVar1 = uVar9 & ~(lVar13 << 0x20);
          uVar10 = uVar9;
        }
        UNLOCK();
        uVar9 = uVar10;
      } while (!bVar6);
      LOCK();
      *puVar1 = *puVar1 | (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
      UNLOCK();
      if ((EVar5 & (EInternalObjectFlags)(uVar10 >> 0x20)) == Borrowed) goto LAB_14203906f;
      this_00 = &pFVar3->ObjectsToSerialize;
      if ((uVar7 >> 0x18 & 1) == 0) {
        *this_00->WipIt = pUVar2;
        this_00->WipIt = this_00->WipIt + 1;
        if (this_00->WipIt == ((pFVar3->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
          FWorkBlockifier::PushFullBlockSync(this_00);
          pTVar17 = local_5458;
        }
      }
      else {
        pTVar12 = &local_5450;
        uVar7 = *(uint *)((longlong)puVar1 + 0x14);
        local_5450.Queue = this_00;
LAB_142039179:
        MarkReferencedClustersAsReachable<12,UE::GC::TAddAdapter<12>_>(~uVar7,pTVar12);
        pTVar17 = local_5458;
      }
    }
LAB_142039185:
    pFVar16 = pFVar16 + 1;
    puVar11 = puVar11 + 4;
    lVar18 = lVar18 + -1;
    if (lVar18 == 0) {
      (pTVar17->ValidatedReferences).Num = 0;
      return;
    }
  } while( true );
}

// DrainValidatedFull @ 1420391e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<13>_>
::DrainValidatedFull
          (TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<13>_>
           *this)

{
  FWorkBlockifier *this_00;
  ulonglong *puVar1;
  UObject *pUVar2;
  FWorkerContext *pFVar3;
  code *pcVar4;
  EInternalObjectFlags EVar5;
  bool bVar6;
  uint uVar7;
  FUObjectItem *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  TAddAdapter<13> *pTVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  FImmutableReference *pFVar16;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<13>_>
  *pTVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined1 auStack_5488 [32];
  uint local_5468;
  int local_5460;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<13>_>
  *local_5458;
  TAddAdapter<13> local_5450;
  TAddAdapter<13> local_5448 [2];
  uint local_5438 [1024];
  uint local_4438 [2];
  undefined8 auStack_4430 [2047];
  undefined1 local_438 [1024];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x142039202;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_5488;
  lVar13 = 0x10;
  lVar15 = 0x10;
  do {
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  lVar18 = 0x400;
  puVar11 = local_5438;
  lVar15 = 0x400;
  pFVar16 = (this->ValidatedReferences).Entries;
  do {
    *puVar11 = *(uint *)&pFVar16->Object->field_0xc;
    pFVar16 = pFVar16 + 1;
    puVar11 = puVar11 + 1;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  puVar19 = auStack_4430;
  lVar15 = 0x400;
  puVar11 = local_5438;
  local_5458 = this;
  do {
    uVar7 = *puVar11;
    uVar14 = uVar7 >> 0x10;
    if (((GUObjectArray.ObjObjects.NumElements <= (int)uVar7) || ((int)uVar7 < 0)) &&
       (local_5468 = uVar7,
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                          ,0x362,L"IsValidIndex(%d)"), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((uint)GUObjectArray.ObjObjects.NumChunks <= uVar14) {
      local_5460 = GUObjectArray.ObjObjects.NumChunks;
      local_5468 = uVar14;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChunkIndex < (uint32)NumChunks",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x363,L"ChunkIndex (%d) < NumChunks (%d)");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (GUObjectArray.ObjObjects.MaxElements <= (int)uVar7) {
      local_5460 = GUObjectArray.ObjObjects.MaxElements;
      local_5468 = uVar7;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < MaxElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x364,L"Index (%d) < MaxElements (%d)");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar8 = GUObjectArray.ObjObjects.Objects[uVar14];
    if ((pFVar8 == (FUObjectItem *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Chunk",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x366,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar11 = puVar11 + 1;
    *puVar19 = pFVar8 + (uVar7 & 0xffff);
    puVar19 = puVar19 + 2;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  memset(local_438,0,0x400);
  do {
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  puVar11 = local_4438;
  lVar13 = 0x400;
  do {
    *puVar11 = (uint)((ulonglong)**(undefined8 **)(puVar11 + 2) >> 0x20);
    puVar11 = puVar11 + 4;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  puVar11 = local_4438;
  pFVar16 = (local_5458->ValidatedReferences).Entries;
  pTVar17 = local_5458;
  do {
    EVar5 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    puVar1 = *(ulonglong **)(puVar11 + 2);
    lVar13 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    pUVar2 = pFVar16->Object;
    pFVar3 = pTVar17->Context;
    uVar7 = *puVar11;
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag & (EInternalObjectFlags)(*puVar1 >> 0x20)
        ) == Borrowed) {
LAB_1420394df:
      if ((~(byte)(uVar7 >> 0x17) & 0 < *(int *)((longlong)puVar1 + 0x14)) != 0) {
        pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr
                           (&GUObjectArray.ObjObjects,*(int *)((longlong)puVar1 + 0x14));
        if ((pFVar8 == (FUObjectItem *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ItemPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                               ,0x381,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        do {
          uVar9 = *puVar1;
          uVar7 = (uint)(uVar9 >> 0x20);
          pTVar17 = local_5458;
          if ((uVar7 >> 0x17 & 1) != 0) goto LAB_1420395f5;
          if (((ulonglong)puVar1 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (
                      L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          uVar10 = *puVar1;
          if (uVar9 == uVar10) {
            *puVar1 = (longlong)(int)uVar7 << 0x20 | (longlong)(int)uVar9 | 0x80000000000000;
          }
          EVar5 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
          UNLOCK();
        } while (uVar9 != uVar10);
        lVar13 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
        pTVar17 = local_5458;
        if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
            (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) !=
            Borrowed) {
          uVar9 = (pFVar8->field0_0x0).FlagsAndRefCount;
          do {
            LOCK();
            uVar10 = (pFVar8->field0_0x0).FlagsAndRefCount;
            bVar6 = uVar9 == uVar10;
            if (bVar6) {
              (pFVar8->field0_0x0).FlagsAndRefCount = uVar9 & ~(lVar13 << 0x20);
              uVar10 = uVar9;
            }
            UNLOCK();
            uVar9 = uVar10;
          } while (!bVar6);
          LOCK();
          (pFVar8->field0_0x0).FlagsAndRefCount =
               (pFVar8->field0_0x0).FlagsAndRefCount |
               (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
          UNLOCK();
          if ((EVar5 & (EInternalObjectFlags)(uVar10 >> 0x20)) != Borrowed) {
            uVar7 = pFVar8->ClusterRootIndex;
            local_5448[0].Queue = &pFVar3->ObjectsToSerialize;
            pTVar12 = local_5448;
            goto LAB_1420395e9;
          }
        }
      }
    }
    else {
      uVar9 = *puVar1;
      do {
        LOCK();
        uVar10 = *puVar1;
        bVar6 = uVar9 == uVar10;
        if (bVar6) {
          *puVar1 = uVar9 & ~(lVar13 << 0x20);
          uVar10 = uVar9;
        }
        UNLOCK();
        uVar9 = uVar10;
      } while (!bVar6);
      LOCK();
      *puVar1 = *puVar1 | (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
      UNLOCK();
      if ((EVar5 & (EInternalObjectFlags)(uVar10 >> 0x20)) == Borrowed) goto LAB_1420394df;
      this_00 = &pFVar3->ObjectsToSerialize;
      if ((uVar7 >> 0x18 & 1) == 0) {
        *this_00->WipIt = pUVar2;
        this_00->WipIt = this_00->WipIt + 1;
        if (this_00->WipIt == ((pFVar3->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
          FWorkBlockifier::PushFullBlockAsync(this_00);
          pTVar17 = local_5458;
        }
      }
      else {
        pTVar12 = &local_5450;
        uVar7 = *(uint *)((longlong)puVar1 + 0x14);
        local_5450.Queue = this_00;
LAB_1420395e9:
        MarkReferencedClustersAsReachable<13,UE::GC::TAddAdapter<13>_>(~uVar7,pTVar12);
        pTVar17 = local_5458;
      }
    }
LAB_1420395f5:
    pFVar16 = pFVar16 + 1;
    puVar11 = puVar11 + 4;
    lVar18 = lVar18 + -1;
    if (lVar18 == 0) {
      (pTVar17->ValidatedReferences).Num = 0;
      return;
    }
  } while( true );
}

// DrainValidatedFull @ 142039650

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<1>_>
::DrainValidatedFull
          (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<1>_>
           *this)

{
  FWorkBlockifier *this_00;
  FWorkerContext *pFVar1;
  ulonglong *puVar2;
  code *pcVar3;
  EInternalObjectFlags EVar4;
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<1>_>
  *pTVar5;
  bool bVar6;
  uint uVar7;
  FUObjectItem *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<1>_>
  *pTVar11;
  uint *puVar12;
  TAddAdapter<1> *pTVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  FResolvedMutableReference *pFVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined1 auStack_5498 [32];
  uint local_5478;
  int local_5470;
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<1>_>
  *local_5468;
  TAddAdapter<1> local_5460;
  TAddAdapter<1> local_5458 [2];
  UObject *local_5448;
  undefined8 *puStack_5440;
  uint local_5438 [1024];
  uint local_4438 [2];
  undefined8 auStack_4430 [2047];
  undefined1 local_438 [1024];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x142039672;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_5498;
  lVar14 = 0x10;
  lVar16 = 0x10;
  do {
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  lVar18 = 0x400;
  puVar12 = local_5438;
  lVar16 = 0x400;
  pFVar17 = (this->ValidatedReferences).Entries;
  do {
    *puVar12 = *(uint *)(pFVar17->_padding_ + 0xc);
    pFVar17 = pFVar17 + 1;
    puVar12 = puVar12 + 1;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  puVar19 = auStack_4430;
  lVar16 = 0x400;
  puVar12 = local_5438;
  local_5468 = this;
  do {
    uVar7 = *puVar12;
    uVar15 = uVar7 >> 0x10;
    if (((GUObjectArray.ObjObjects.NumElements <= (int)uVar7) || ((int)uVar7 < 0)) &&
       (local_5478 = uVar7,
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                          ,0x362,L"IsValidIndex(%d)"), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((uint)GUObjectArray.ObjObjects.NumChunks <= uVar15) {
      local_5470 = GUObjectArray.ObjObjects.NumChunks;
      local_5478 = uVar15;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChunkIndex < (uint32)NumChunks",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x363,L"ChunkIndex (%d) < NumChunks (%d)");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (GUObjectArray.ObjObjects.MaxElements <= (int)uVar7) {
      local_5470 = GUObjectArray.ObjObjects.MaxElements;
      local_5478 = uVar7;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < MaxElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x364,L"Index (%d) < MaxElements (%d)");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar8 = GUObjectArray.ObjObjects.Objects[uVar15];
    if ((pFVar8 == (FUObjectItem *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Chunk",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x366,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar12 = puVar12 + 1;
    *puVar19 = pFVar8 + (uVar7 & 0xffff);
    puVar19 = puVar19 + 2;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  memset(local_438,0,0x400);
  pTVar5 = local_5468;
  do {
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  puVar12 = local_4438;
  lVar14 = 0x400;
  do {
    *puVar12 = (uint)((ulonglong)**(undefined8 **)(puVar12 + 2) >> 0x20);
    puVar12 = puVar12 + 4;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  puVar12 = local_4438;
  pTVar11 = local_5468;
  do {
    EVar4 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    uVar7 = *puVar12;
    pFVar1 = pTVar11->Context;
    puVar19 = (undefined8 *)((longlong)pTVar5 + (0x508 - (longlong)local_4438) + (longlong)puVar12);
    local_5448 = (UObject *)*puVar19;
    puStack_5440 = (undefined8 *)puVar19[1];
    if ((uVar7 >> 0x15 & 1) == 0) {
      puVar2 = *(ulonglong **)(puVar12 + 2);
      lVar14 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      pTVar11 = local_5468;
      if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
          (EInternalObjectFlags)(*puVar2 >> 0x20)) == Borrowed) {
LAB_142039981:
        if ((~(byte)(uVar7 >> 0x17) & 0 < *(int *)((longlong)puVar2 + 0x14)) != 0) {
          pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr
                             (&GUObjectArray.ObjObjects,*(int *)((longlong)puVar2 + 0x14));
          if ((pFVar8 == (FUObjectItem *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ItemPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                 ,0x381,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          do {
            uVar9 = *puVar2;
            uVar7 = (uint)(uVar9 >> 0x20);
            pTVar11 = local_5468;
            if ((uVar7 >> 0x17 & 1) != 0) goto LAB_142039a95;
            if (((ulonglong)puVar2 & 7) != 0) {
              FWindowsPlatformAtomics::HandleAtomicsFailure
                        (
                        L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                        );
            }
            LOCK();
            uVar10 = *puVar2;
            if (uVar9 == uVar10) {
              *puVar2 = (longlong)(int)uVar7 << 0x20 | (longlong)(int)uVar9 | 0x80000000000000;
            }
            EVar4 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
            UNLOCK();
          } while (uVar9 != uVar10);
          lVar14 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
          pTVar11 = local_5468;
          if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
              (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) !=
              Borrowed) {
            uVar9 = (pFVar8->field0_0x0).FlagsAndRefCount;
            do {
              LOCK();
              uVar10 = (pFVar8->field0_0x0).FlagsAndRefCount;
              bVar6 = uVar9 == uVar10;
              if (bVar6) {
                (pFVar8->field0_0x0).FlagsAndRefCount = uVar9 & ~(lVar14 << 0x20);
                uVar10 = uVar9;
              }
              UNLOCK();
              uVar9 = uVar10;
            } while (!bVar6);
            LOCK();
            (pFVar8->field0_0x0).FlagsAndRefCount =
                 (pFVar8->field0_0x0).FlagsAndRefCount |
                 (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
            UNLOCK();
            if ((EVar4 & (EInternalObjectFlags)(uVar10 >> 0x20)) != Borrowed) {
              uVar7 = pFVar8->ClusterRootIndex;
              local_5458[0].Queue = &pFVar1->ObjectsToSerialize;
              pTVar13 = local_5458;
              goto LAB_142039a89;
            }
          }
        }
      }
      else {
        uVar9 = *puVar2;
        do {
          LOCK();
          uVar10 = *puVar2;
          bVar6 = uVar9 == uVar10;
          if (bVar6) {
            *puVar2 = uVar9 & ~(lVar14 << 0x20);
            uVar10 = uVar9;
          }
          UNLOCK();
          uVar9 = uVar10;
        } while (!bVar6);
        LOCK();
        *puVar2 = *puVar2 | (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
        UNLOCK();
        if ((EVar4 & (EInternalObjectFlags)(uVar10 >> 0x20)) == Borrowed) goto LAB_142039981;
        this_00 = &pFVar1->ObjectsToSerialize;
        if ((uVar7 >> 0x18 & 1) == 0) {
          *this_00->WipIt = local_5448;
          this_00->WipIt = this_00->WipIt + 1;
          if (this_00->WipIt == ((pFVar1->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
            FWorkBlockifier::PushFullBlockAsync(this_00);
            pTVar11 = local_5468;
          }
          goto LAB_142039a95;
        }
        pTVar13 = &local_5460;
        uVar7 = *(uint *)((longlong)puVar2 + 0x14);
        local_5460.Queue = this_00;
LAB_142039a89:
        MarkReferencedClustersAsReachable<1,UE::GC::TAddAdapter<1>_>(~uVar7,pTVar13);
        pTVar11 = local_5468;
      }
    }
    else {
      *puStack_5440 = 0;
    }
LAB_142039a95:
    puVar12 = puVar12 + 4;
    lVar18 = lVar18 + -1;
    if (lVar18 == 0) {
      (pTVar11->ValidatedReferences).Num = 0;
      return;
    }
  } while( true );
}

// DrainValidatedFull @ 142039af0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<4>_>
::DrainValidatedFull
          (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<4>_>
           *this)

{
  FWorkBlockifier *this_00;
  FWorkerContext *pFVar1;
  ulonglong *puVar2;
  code *pcVar3;
  EInternalObjectFlags EVar4;
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<4>_>
  *pTVar5;
  bool bVar6;
  uint uVar7;
  FUObjectItem *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<4>_>
  *pTVar11;
  uint *puVar12;
  TAddAdapter<4> *pTVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  FResolvedMutableReference *pFVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined1 auStack_5498 [32];
  uint local_5478;
  int local_5470;
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<4>_>
  *local_5468;
  TAddAdapter<4> local_5460;
  TAddAdapter<4> local_5458 [2];
  UObject *local_5448;
  undefined8 *puStack_5440;
  uint local_5438 [1024];
  uint local_4438 [2];
  undefined8 auStack_4430 [2047];
  undefined1 local_438 [1024];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x142039b12;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_5498;
  lVar14 = 0x10;
  lVar16 = 0x10;
  do {
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  lVar18 = 0x400;
  puVar12 = local_5438;
  lVar16 = 0x400;
  pFVar17 = (this->ValidatedReferences).Entries;
  do {
    *puVar12 = *(uint *)(pFVar17->_padding_ + 0xc);
    pFVar17 = pFVar17 + 1;
    puVar12 = puVar12 + 1;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  puVar19 = auStack_4430;
  lVar16 = 0x400;
  puVar12 = local_5438;
  local_5468 = this;
  do {
    uVar7 = *puVar12;
    uVar15 = uVar7 >> 0x10;
    if (((GUObjectArray.ObjObjects.NumElements <= (int)uVar7) || ((int)uVar7 < 0)) &&
       (local_5478 = uVar7,
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                          ,0x362,L"IsValidIndex(%d)"), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((uint)GUObjectArray.ObjObjects.NumChunks <= uVar15) {
      local_5470 = GUObjectArray.ObjObjects.NumChunks;
      local_5478 = uVar15;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChunkIndex < (uint32)NumChunks",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x363,L"ChunkIndex (%d) < NumChunks (%d)");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (GUObjectArray.ObjObjects.MaxElements <= (int)uVar7) {
      local_5470 = GUObjectArray.ObjObjects.MaxElements;
      local_5478 = uVar7;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < MaxElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x364,L"Index (%d) < MaxElements (%d)");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar8 = GUObjectArray.ObjObjects.Objects[uVar15];
    if ((pFVar8 == (FUObjectItem *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Chunk",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x366,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar12 = puVar12 + 1;
    *puVar19 = pFVar8 + (uVar7 & 0xffff);
    puVar19 = puVar19 + 2;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  memset(local_438,0,0x400);
  pTVar5 = local_5468;
  do {
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  puVar12 = local_4438;
  lVar14 = 0x400;
  do {
    *puVar12 = (uint)((ulonglong)**(undefined8 **)(puVar12 + 2) >> 0x20);
    puVar12 = puVar12 + 4;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  puVar12 = local_4438;
  pTVar11 = local_5468;
  do {
    EVar4 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    uVar7 = *puVar12;
    pFVar1 = pTVar11->Context;
    puVar19 = (undefined8 *)((longlong)pTVar5 + (0x508 - (longlong)local_4438) + (longlong)puVar12);
    local_5448 = (UObject *)*puVar19;
    puStack_5440 = (undefined8 *)puVar19[1];
    if ((uVar7 >> 0x15 & 1) == 0) {
      puVar2 = *(ulonglong **)(puVar12 + 2);
      lVar14 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      pTVar11 = local_5468;
      if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
          (EInternalObjectFlags)(*puVar2 >> 0x20)) == Borrowed) {
LAB_142039e21:
        if ((~(byte)(uVar7 >> 0x17) & 0 < *(int *)((longlong)puVar2 + 0x14)) != 0) {
          pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr
                             (&GUObjectArray.ObjObjects,*(int *)((longlong)puVar2 + 0x14));
          if ((pFVar8 == (FUObjectItem *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ItemPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                 ,0x381,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          do {
            uVar9 = *puVar2;
            uVar7 = (uint)(uVar9 >> 0x20);
            pTVar11 = local_5468;
            if ((uVar7 >> 0x17 & 1) != 0) goto LAB_142039f35;
            if (((ulonglong)puVar2 & 7) != 0) {
              FWindowsPlatformAtomics::HandleAtomicsFailure
                        (
                        L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                        );
            }
            LOCK();
            uVar10 = *puVar2;
            if (uVar9 == uVar10) {
              *puVar2 = (longlong)(int)uVar7 << 0x20 | (longlong)(int)uVar9 | 0x80000000000000;
            }
            EVar4 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
            UNLOCK();
          } while (uVar9 != uVar10);
          lVar14 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
          pTVar11 = local_5468;
          if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
              (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) !=
              Borrowed) {
            uVar9 = (pFVar8->field0_0x0).FlagsAndRefCount;
            do {
              LOCK();
              uVar10 = (pFVar8->field0_0x0).FlagsAndRefCount;
              bVar6 = uVar9 == uVar10;
              if (bVar6) {
                (pFVar8->field0_0x0).FlagsAndRefCount = uVar9 & ~(lVar14 << 0x20);
                uVar10 = uVar9;
              }
              UNLOCK();
              uVar9 = uVar10;
            } while (!bVar6);
            LOCK();
            (pFVar8->field0_0x0).FlagsAndRefCount =
                 (pFVar8->field0_0x0).FlagsAndRefCount |
                 (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
            UNLOCK();
            if ((EVar4 & (EInternalObjectFlags)(uVar10 >> 0x20)) != Borrowed) {
              uVar7 = pFVar8->ClusterRootIndex;
              local_5458[0].Queue = &pFVar1->ObjectsToSerialize;
              pTVar13 = local_5458;
              goto LAB_142039f29;
            }
          }
        }
      }
      else {
        uVar9 = *puVar2;
        do {
          LOCK();
          uVar10 = *puVar2;
          bVar6 = uVar9 == uVar10;
          if (bVar6) {
            *puVar2 = uVar9 & ~(lVar14 << 0x20);
            uVar10 = uVar9;
          }
          UNLOCK();
          uVar9 = uVar10;
        } while (!bVar6);
        LOCK();
        *puVar2 = *puVar2 | (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
        UNLOCK();
        if ((EVar4 & (EInternalObjectFlags)(uVar10 >> 0x20)) == Borrowed) goto LAB_142039e21;
        this_00 = &pFVar1->ObjectsToSerialize;
        if ((uVar7 >> 0x18 & 1) == 0) {
          *this_00->WipIt = local_5448;
          this_00->WipIt = this_00->WipIt + 1;
          if (this_00->WipIt == ((pFVar1->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
            FWorkBlockifier::PushFullBlockSync(this_00);
            pTVar11 = local_5468;
          }
          goto LAB_142039f35;
        }
        pTVar13 = &local_5460;
        uVar7 = *(uint *)((longlong)puVar2 + 0x14);
        local_5460.Queue = this_00;
LAB_142039f29:
        MarkReferencedClustersAsReachable<4,UE::GC::TAddAdapter<4>_>(~uVar7,pTVar13);
        pTVar11 = local_5468;
      }
    }
    else {
      *puStack_5440 = 0;
    }
LAB_142039f35:
    puVar12 = puVar12 + 4;
    lVar18 = lVar18 + -1;
    if (lVar18 == 0) {
      (pTVar11->ValidatedReferences).Num = 0;
      return;
    }
  } while( true );
}

// DrainValidatedFull @ 142039f90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<5>_>
::DrainValidatedFull
          (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<5>_>
           *this)

{
  FWorkBlockifier *this_00;
  FWorkerContext *pFVar1;
  ulonglong *puVar2;
  code *pcVar3;
  EInternalObjectFlags EVar4;
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<5>_>
  *pTVar5;
  bool bVar6;
  uint uVar7;
  FUObjectItem *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<5>_>
  *pTVar11;
  uint *puVar12;
  TAddAdapter<5> *pTVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  FResolvedMutableReference *pFVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined1 auStack_5498 [32];
  uint local_5478;
  int local_5470;
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<5>_>
  *local_5468;
  TAddAdapter<5> local_5460;
  TAddAdapter<5> local_5458 [2];
  UObject *local_5448;
  undefined8 *puStack_5440;
  uint local_5438 [1024];
  uint local_4438 [2];
  undefined8 auStack_4430 [2047];
  undefined1 local_438 [1024];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x142039fb2;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_5498;
  lVar14 = 0x10;
  lVar16 = 0x10;
  do {
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  lVar18 = 0x400;
  puVar12 = local_5438;
  lVar16 = 0x400;
  pFVar17 = (this->ValidatedReferences).Entries;
  do {
    *puVar12 = *(uint *)(pFVar17->_padding_ + 0xc);
    pFVar17 = pFVar17 + 1;
    puVar12 = puVar12 + 1;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  puVar19 = auStack_4430;
  lVar16 = 0x400;
  puVar12 = local_5438;
  local_5468 = this;
  do {
    uVar7 = *puVar12;
    uVar15 = uVar7 >> 0x10;
    if (((GUObjectArray.ObjObjects.NumElements <= (int)uVar7) || ((int)uVar7 < 0)) &&
       (local_5478 = uVar7,
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                          ,0x362,L"IsValidIndex(%d)"), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((uint)GUObjectArray.ObjObjects.NumChunks <= uVar15) {
      local_5470 = GUObjectArray.ObjObjects.NumChunks;
      local_5478 = uVar15;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChunkIndex < (uint32)NumChunks",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x363,L"ChunkIndex (%d) < NumChunks (%d)");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (GUObjectArray.ObjObjects.MaxElements <= (int)uVar7) {
      local_5470 = GUObjectArray.ObjObjects.MaxElements;
      local_5478 = uVar7;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < MaxElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x364,L"Index (%d) < MaxElements (%d)");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar8 = GUObjectArray.ObjObjects.Objects[uVar15];
    if ((pFVar8 == (FUObjectItem *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Chunk",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x366,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar12 = puVar12 + 1;
    *puVar19 = pFVar8 + (uVar7 & 0xffff);
    puVar19 = puVar19 + 2;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  memset(local_438,0,0x400);
  pTVar5 = local_5468;
  do {
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  puVar12 = local_4438;
  lVar14 = 0x400;
  do {
    *puVar12 = (uint)((ulonglong)**(undefined8 **)(puVar12 + 2) >> 0x20);
    puVar12 = puVar12 + 4;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  puVar12 = local_4438;
  pTVar11 = local_5468;
  do {
    EVar4 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    uVar7 = *puVar12;
    pFVar1 = pTVar11->Context;
    puVar19 = (undefined8 *)((longlong)pTVar5 + (0x508 - (longlong)local_4438) + (longlong)puVar12);
    local_5448 = (UObject *)*puVar19;
    puStack_5440 = (undefined8 *)puVar19[1];
    if ((uVar7 >> 0x15 & 1) == 0) {
      puVar2 = *(ulonglong **)(puVar12 + 2);
      lVar14 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      pTVar11 = local_5468;
      if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
          (EInternalObjectFlags)(*puVar2 >> 0x20)) == Borrowed) {
LAB_14203a2c1:
        if ((~(byte)(uVar7 >> 0x17) & 0 < *(int *)((longlong)puVar2 + 0x14)) != 0) {
          pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr
                             (&GUObjectArray.ObjObjects,*(int *)((longlong)puVar2 + 0x14));
          if ((pFVar8 == (FUObjectItem *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ItemPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                 ,0x381,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          do {
            uVar9 = *puVar2;
            uVar7 = (uint)(uVar9 >> 0x20);
            pTVar11 = local_5468;
            if ((uVar7 >> 0x17 & 1) != 0) goto LAB_14203a3d5;
            if (((ulonglong)puVar2 & 7) != 0) {
              FWindowsPlatformAtomics::HandleAtomicsFailure
                        (
                        L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                        );
            }
            LOCK();
            uVar10 = *puVar2;
            if (uVar9 == uVar10) {
              *puVar2 = (longlong)(int)uVar7 << 0x20 | (longlong)(int)uVar9 | 0x80000000000000;
            }
            EVar4 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
            UNLOCK();
          } while (uVar9 != uVar10);
          lVar14 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
          pTVar11 = local_5468;
          if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
              (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) !=
              Borrowed) {
            uVar9 = (pFVar8->field0_0x0).FlagsAndRefCount;
            do {
              LOCK();
              uVar10 = (pFVar8->field0_0x0).FlagsAndRefCount;
              bVar6 = uVar9 == uVar10;
              if (bVar6) {
                (pFVar8->field0_0x0).FlagsAndRefCount = uVar9 & ~(lVar14 << 0x20);
                uVar10 = uVar9;
              }
              UNLOCK();
              uVar9 = uVar10;
            } while (!bVar6);
            LOCK();
            (pFVar8->field0_0x0).FlagsAndRefCount =
                 (pFVar8->field0_0x0).FlagsAndRefCount |
                 (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
            UNLOCK();
            if ((EVar4 & (EInternalObjectFlags)(uVar10 >> 0x20)) != Borrowed) {
              uVar7 = pFVar8->ClusterRootIndex;
              local_5458[0].Queue = &pFVar1->ObjectsToSerialize;
              pTVar13 = local_5458;
              goto LAB_14203a3c9;
            }
          }
        }
      }
      else {
        uVar9 = *puVar2;
        do {
          LOCK();
          uVar10 = *puVar2;
          bVar6 = uVar9 == uVar10;
          if (bVar6) {
            *puVar2 = uVar9 & ~(lVar14 << 0x20);
            uVar10 = uVar9;
          }
          UNLOCK();
          uVar9 = uVar10;
        } while (!bVar6);
        LOCK();
        *puVar2 = *puVar2 | (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
        UNLOCK();
        if ((EVar4 & (EInternalObjectFlags)(uVar10 >> 0x20)) == Borrowed) goto LAB_14203a2c1;
        this_00 = &pFVar1->ObjectsToSerialize;
        if ((uVar7 >> 0x18 & 1) == 0) {
          *this_00->WipIt = local_5448;
          this_00->WipIt = this_00->WipIt + 1;
          if (this_00->WipIt == ((pFVar1->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
            FWorkBlockifier::PushFullBlockAsync(this_00);
            pTVar11 = local_5468;
          }
          goto LAB_14203a3d5;
        }
        pTVar13 = &local_5460;
        uVar7 = *(uint *)((longlong)puVar2 + 0x14);
        local_5460.Queue = this_00;
LAB_14203a3c9:
        MarkReferencedClustersAsReachable<5,UE::GC::TAddAdapter<5>_>(~uVar7,pTVar13);
        pTVar11 = local_5468;
      }
    }
    else {
      *puStack_5440 = 0;
    }
LAB_14203a3d5:
    puVar12 = puVar12 + 4;
    lVar18 = lVar18 + -1;
    if (lVar18 == 0) {
      (pTVar11->ValidatedReferences).Num = 0;
      return;
    }
  } while( true );
}

// DrainValidatedFull @ 14203a430

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<8>_>
::DrainValidatedFull
          (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<8>_>
           *this)

{
  FWorkBlockifier *this_00;
  FWorkerContext *pFVar1;
  ulonglong *puVar2;
  code *pcVar3;
  EInternalObjectFlags EVar4;
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<8>_>
  *pTVar5;
  bool bVar6;
  uint uVar7;
  FUObjectItem *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<8>_>
  *pTVar11;
  uint *puVar12;
  TAddAdapter<8> *pTVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  FResolvedMutableReference *pFVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined1 auStack_5498 [32];
  uint local_5478;
  int local_5470;
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<8>_>
  *local_5468;
  TAddAdapter<8> local_5460;
  TAddAdapter<8> local_5458 [2];
  UObject *local_5448;
  undefined8 *puStack_5440;
  uint local_5438 [1024];
  uint local_4438 [2];
  undefined8 auStack_4430 [2047];
  undefined1 local_438 [1024];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x14203a452;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_5498;
  lVar14 = 0x10;
  lVar16 = 0x10;
  do {
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  lVar18 = 0x400;
  puVar12 = local_5438;
  lVar16 = 0x400;
  pFVar17 = (this->ValidatedReferences).Entries;
  do {
    *puVar12 = *(uint *)(pFVar17->_padding_ + 0xc);
    pFVar17 = pFVar17 + 1;
    puVar12 = puVar12 + 1;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  puVar19 = auStack_4430;
  lVar16 = 0x400;
  puVar12 = local_5438;
  local_5468 = this;
  do {
    uVar7 = *puVar12;
    uVar15 = uVar7 >> 0x10;
    if (((GUObjectArray.ObjObjects.NumElements <= (int)uVar7) || ((int)uVar7 < 0)) &&
       (local_5478 = uVar7,
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                          ,0x362,L"IsValidIndex(%d)"), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((uint)GUObjectArray.ObjObjects.NumChunks <= uVar15) {
      local_5470 = GUObjectArray.ObjObjects.NumChunks;
      local_5478 = uVar15;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChunkIndex < (uint32)NumChunks",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x363,L"ChunkIndex (%d) < NumChunks (%d)");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (GUObjectArray.ObjObjects.MaxElements <= (int)uVar7) {
      local_5470 = GUObjectArray.ObjObjects.MaxElements;
      local_5478 = uVar7;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < MaxElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x364,L"Index (%d) < MaxElements (%d)");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar8 = GUObjectArray.ObjObjects.Objects[uVar15];
    if ((pFVar8 == (FUObjectItem *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Chunk",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x366,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar12 = puVar12 + 1;
    *puVar19 = pFVar8 + (uVar7 & 0xffff);
    puVar19 = puVar19 + 2;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  memset(local_438,0,0x400);
  pTVar5 = local_5468;
  do {
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  puVar12 = local_4438;
  lVar14 = 0x400;
  do {
    *puVar12 = (uint)((ulonglong)**(undefined8 **)(puVar12 + 2) >> 0x20);
    puVar12 = puVar12 + 4;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  puVar12 = local_4438;
  pTVar11 = local_5468;
  do {
    EVar4 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    uVar7 = *puVar12;
    pFVar1 = pTVar11->Context;
    puVar19 = (undefined8 *)((longlong)pTVar5 + (0x508 - (longlong)local_4438) + (longlong)puVar12);
    local_5448 = (UObject *)*puVar19;
    puStack_5440 = (undefined8 *)puVar19[1];
    if ((uVar7 >> 0x15 & 1) == 0) {
      puVar2 = *(ulonglong **)(puVar12 + 2);
      lVar14 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      pTVar11 = local_5468;
      if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
          (EInternalObjectFlags)(*puVar2 >> 0x20)) == Borrowed) {
LAB_14203a761:
        if ((~(byte)(uVar7 >> 0x17) & 0 < *(int *)((longlong)puVar2 + 0x14)) != 0) {
          pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr
                             (&GUObjectArray.ObjObjects,*(int *)((longlong)puVar2 + 0x14));
          if ((pFVar8 == (FUObjectItem *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ItemPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                 ,0x381,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          do {
            uVar9 = *puVar2;
            uVar7 = (uint)(uVar9 >> 0x20);
            pTVar11 = local_5468;
            if ((uVar7 >> 0x17 & 1) != 0) goto LAB_14203a875;
            if (((ulonglong)puVar2 & 7) != 0) {
              FWindowsPlatformAtomics::HandleAtomicsFailure
                        (
                        L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                        );
            }
            LOCK();
            uVar10 = *puVar2;
            if (uVar9 == uVar10) {
              *puVar2 = (longlong)(int)uVar7 << 0x20 | (longlong)(int)uVar9 | 0x80000000000000;
            }
            EVar4 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
            UNLOCK();
          } while (uVar9 != uVar10);
          lVar14 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
          pTVar11 = local_5468;
          if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
              (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) !=
              Borrowed) {
            uVar9 = (pFVar8->field0_0x0).FlagsAndRefCount;
            do {
              LOCK();
              uVar10 = (pFVar8->field0_0x0).FlagsAndRefCount;
              bVar6 = uVar9 == uVar10;
              if (bVar6) {
                (pFVar8->field0_0x0).FlagsAndRefCount = uVar9 & ~(lVar14 << 0x20);
                uVar10 = uVar9;
              }
              UNLOCK();
              uVar9 = uVar10;
            } while (!bVar6);
            LOCK();
            (pFVar8->field0_0x0).FlagsAndRefCount =
                 (pFVar8->field0_0x0).FlagsAndRefCount |
                 (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
            UNLOCK();
            if ((EVar4 & (EInternalObjectFlags)(uVar10 >> 0x20)) != Borrowed) {
              uVar7 = pFVar8->ClusterRootIndex;
              local_5458[0].Queue = &pFVar1->ObjectsToSerialize;
              pTVar13 = local_5458;
              goto LAB_14203a869;
            }
          }
        }
      }
      else {
        uVar9 = *puVar2;
        do {
          LOCK();
          uVar10 = *puVar2;
          bVar6 = uVar9 == uVar10;
          if (bVar6) {
            *puVar2 = uVar9 & ~(lVar14 << 0x20);
            uVar10 = uVar9;
          }
          UNLOCK();
          uVar9 = uVar10;
        } while (!bVar6);
        LOCK();
        *puVar2 = *puVar2 | (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
        UNLOCK();
        if ((EVar4 & (EInternalObjectFlags)(uVar10 >> 0x20)) == Borrowed) goto LAB_14203a761;
        this_00 = &pFVar1->ObjectsToSerialize;
        if ((uVar7 >> 0x18 & 1) == 0) {
          *this_00->WipIt = local_5448;
          this_00->WipIt = this_00->WipIt + 1;
          if (this_00->WipIt == ((pFVar1->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
            FWorkBlockifier::PushFullBlockSync(this_00);
            pTVar11 = local_5468;
          }
          goto LAB_14203a875;
        }
        pTVar13 = &local_5460;
        uVar7 = *(uint *)((longlong)puVar2 + 0x14);
        local_5460.Queue = this_00;
LAB_14203a869:
        MarkReferencedClustersAsReachable<8,UE::GC::TAddAdapter<8>_>(~uVar7,pTVar13);
        pTVar11 = local_5468;
      }
    }
    else {
      *puStack_5440 = 0;
    }
LAB_14203a875:
    puVar12 = puVar12 + 4;
    lVar18 = lVar18 + -1;
    if (lVar18 == 0) {
      (pTVar11->ValidatedReferences).Num = 0;
      return;
    }
  } while( true );
}

// DrainValidatedFull @ 14203a8d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<9>_>
::DrainValidatedFull
          (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<9>_>
           *this)

{
  FWorkBlockifier *this_00;
  FWorkerContext *pFVar1;
  ulonglong *puVar2;
  code *pcVar3;
  EInternalObjectFlags EVar4;
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<9>_>
  *pTVar5;
  bool bVar6;
  uint uVar7;
  FUObjectItem *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<9>_>
  *pTVar11;
  uint *puVar12;
  TAddAdapter<9> *pTVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  FResolvedMutableReference *pFVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined1 auStack_5498 [32];
  uint local_5478;
  int local_5470;
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<9>_>
  *local_5468;
  TAddAdapter<9> local_5460;
  TAddAdapter<9> local_5458 [2];
  UObject *local_5448;
  undefined8 *puStack_5440;
  uint local_5438 [1024];
  uint local_4438 [2];
  undefined8 auStack_4430 [2047];
  undefined1 local_438 [1024];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x14203a8f2;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_5498;
  lVar14 = 0x10;
  lVar16 = 0x10;
  do {
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  lVar18 = 0x400;
  puVar12 = local_5438;
  lVar16 = 0x400;
  pFVar17 = (this->ValidatedReferences).Entries;
  do {
    *puVar12 = *(uint *)(pFVar17->_padding_ + 0xc);
    pFVar17 = pFVar17 + 1;
    puVar12 = puVar12 + 1;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  puVar19 = auStack_4430;
  lVar16 = 0x400;
  puVar12 = local_5438;
  local_5468 = this;
  do {
    uVar7 = *puVar12;
    uVar15 = uVar7 >> 0x10;
    if (((GUObjectArray.ObjObjects.NumElements <= (int)uVar7) || ((int)uVar7 < 0)) &&
       (local_5478 = uVar7,
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                          ,0x362,L"IsValidIndex(%d)"), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((uint)GUObjectArray.ObjObjects.NumChunks <= uVar15) {
      local_5470 = GUObjectArray.ObjObjects.NumChunks;
      local_5478 = uVar15;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChunkIndex < (uint32)NumChunks",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x363,L"ChunkIndex (%d) < NumChunks (%d)");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (GUObjectArray.ObjObjects.MaxElements <= (int)uVar7) {
      local_5470 = GUObjectArray.ObjObjects.MaxElements;
      local_5478 = uVar7;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < MaxElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x364,L"Index (%d) < MaxElements (%d)");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar8 = GUObjectArray.ObjObjects.Objects[uVar15];
    if ((pFVar8 == (FUObjectItem *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Chunk",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x366,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar12 = puVar12 + 1;
    *puVar19 = pFVar8 + (uVar7 & 0xffff);
    puVar19 = puVar19 + 2;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  memset(local_438,0,0x400);
  pTVar5 = local_5468;
  do {
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  puVar12 = local_4438;
  lVar14 = 0x400;
  do {
    *puVar12 = (uint)((ulonglong)**(undefined8 **)(puVar12 + 2) >> 0x20);
    puVar12 = puVar12 + 4;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  puVar12 = local_4438;
  pTVar11 = local_5468;
  do {
    EVar4 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    uVar7 = *puVar12;
    pFVar1 = pTVar11->Context;
    puVar19 = (undefined8 *)((longlong)pTVar5 + (0x508 - (longlong)local_4438) + (longlong)puVar12);
    local_5448 = (UObject *)*puVar19;
    puStack_5440 = (undefined8 *)puVar19[1];
    if ((uVar7 >> 0x15 & 1) == 0) {
      puVar2 = *(ulonglong **)(puVar12 + 2);
      lVar14 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      pTVar11 = local_5468;
      if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
          (EInternalObjectFlags)(*puVar2 >> 0x20)) == Borrowed) {
LAB_14203ac01:
        if ((~(byte)(uVar7 >> 0x17) & 0 < *(int *)((longlong)puVar2 + 0x14)) != 0) {
          pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr
                             (&GUObjectArray.ObjObjects,*(int *)((longlong)puVar2 + 0x14));
          if ((pFVar8 == (FUObjectItem *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ItemPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                 ,0x381,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          do {
            uVar9 = *puVar2;
            uVar7 = (uint)(uVar9 >> 0x20);
            pTVar11 = local_5468;
            if ((uVar7 >> 0x17 & 1) != 0) goto LAB_14203ad15;
            if (((ulonglong)puVar2 & 7) != 0) {
              FWindowsPlatformAtomics::HandleAtomicsFailure
                        (
                        L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                        );
            }
            LOCK();
            uVar10 = *puVar2;
            if (uVar9 == uVar10) {
              *puVar2 = (longlong)(int)uVar7 << 0x20 | (longlong)(int)uVar9 | 0x80000000000000;
            }
            EVar4 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
            UNLOCK();
          } while (uVar9 != uVar10);
          lVar14 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
          pTVar11 = local_5468;
          if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
              (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) !=
              Borrowed) {
            uVar9 = (pFVar8->field0_0x0).FlagsAndRefCount;
            do {
              LOCK();
              uVar10 = (pFVar8->field0_0x0).FlagsAndRefCount;
              bVar6 = uVar9 == uVar10;
              if (bVar6) {
                (pFVar8->field0_0x0).FlagsAndRefCount = uVar9 & ~(lVar14 << 0x20);
                uVar10 = uVar9;
              }
              UNLOCK();
              uVar9 = uVar10;
            } while (!bVar6);
            LOCK();
            (pFVar8->field0_0x0).FlagsAndRefCount =
                 (pFVar8->field0_0x0).FlagsAndRefCount |
                 (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
            UNLOCK();
            if ((EVar4 & (EInternalObjectFlags)(uVar10 >> 0x20)) != Borrowed) {
              uVar7 = pFVar8->ClusterRootIndex;
              local_5458[0].Queue = &pFVar1->ObjectsToSerialize;
              pTVar13 = local_5458;
              goto LAB_14203ad09;
            }
          }
        }
      }
      else {
        uVar9 = *puVar2;
        do {
          LOCK();
          uVar10 = *puVar2;
          bVar6 = uVar9 == uVar10;
          if (bVar6) {
            *puVar2 = uVar9 & ~(lVar14 << 0x20);
            uVar10 = uVar9;
          }
          UNLOCK();
          uVar9 = uVar10;
        } while (!bVar6);
        LOCK();
        *puVar2 = *puVar2 | (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
        UNLOCK();
        if ((EVar4 & (EInternalObjectFlags)(uVar10 >> 0x20)) == Borrowed) goto LAB_14203ac01;
        this_00 = &pFVar1->ObjectsToSerialize;
        if ((uVar7 >> 0x18 & 1) == 0) {
          *this_00->WipIt = local_5448;
          this_00->WipIt = this_00->WipIt + 1;
          if (this_00->WipIt == ((pFVar1->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
            FWorkBlockifier::PushFullBlockAsync(this_00);
            pTVar11 = local_5468;
          }
          goto LAB_14203ad15;
        }
        pTVar13 = &local_5460;
        uVar7 = *(uint *)((longlong)puVar2 + 0x14);
        local_5460.Queue = this_00;
LAB_14203ad09:
        MarkReferencedClustersAsReachable<9,UE::GC::TAddAdapter<9>_>(~uVar7,pTVar13);
        pTVar11 = local_5468;
      }
    }
    else {
      *puStack_5440 = 0;
    }
LAB_14203ad15:
    puVar12 = puVar12 + 4;
    lVar18 = lVar18 + -1;
    if (lVar18 == 0) {
      (pTVar11->ValidatedReferences).Num = 0;
      return;
    }
  } while( true );
}

// DrainValidatedFull @ 14203ad70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<0>_>
::DrainValidatedFull
          (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<0>_>
           *this)

{
  FWorkBlockifier *this_00;
  FWorkerContext *pFVar1;
  ulonglong *puVar2;
  code *pcVar3;
  EInternalObjectFlags EVar4;
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<0>_>
  *pTVar5;
  bool bVar6;
  uint uVar7;
  FUObjectItem *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<0>_>
  *pTVar11;
  uint *puVar12;
  TAddAdapter<0> *pTVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  FResolvedMutableReference *pFVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined1 auStack_5498 [32];
  uint local_5478;
  int local_5470;
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<0>_>
  *local_5468;
  TAddAdapter<0> local_5460;
  TAddAdapter<0> local_5458 [2];
  UObject *local_5448;
  undefined8 *puStack_5440;
  uint local_5438 [1024];
  uint local_4438 [2];
  undefined8 auStack_4430 [2047];
  undefined1 local_438 [1024];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x14203ad92;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_5498;
  lVar14 = 0x10;
  lVar16 = 0x10;
  do {
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  lVar18 = 0x400;
  puVar12 = local_5438;
  lVar16 = 0x400;
  pFVar17 = (this->ValidatedReferences).Entries;
  do {
    *puVar12 = *(uint *)(pFVar17->_padding_ + 0xc);
    pFVar17 = pFVar17 + 1;
    puVar12 = puVar12 + 1;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  puVar19 = auStack_4430;
  lVar16 = 0x400;
  puVar12 = local_5438;
  local_5468 = this;
  do {
    uVar7 = *puVar12;
    uVar15 = uVar7 >> 0x10;
    if (((GUObjectArray.ObjObjects.NumElements <= (int)uVar7) || ((int)uVar7 < 0)) &&
       (local_5478 = uVar7,
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                          ,0x362,L"IsValidIndex(%d)"), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((uint)GUObjectArray.ObjObjects.NumChunks <= uVar15) {
      local_5470 = GUObjectArray.ObjObjects.NumChunks;
      local_5478 = uVar15;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChunkIndex < (uint32)NumChunks",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x363,L"ChunkIndex (%d) < NumChunks (%d)");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (GUObjectArray.ObjObjects.MaxElements <= (int)uVar7) {
      local_5470 = GUObjectArray.ObjObjects.MaxElements;
      local_5478 = uVar7;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < MaxElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x364,L"Index (%d) < MaxElements (%d)");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar8 = GUObjectArray.ObjObjects.Objects[uVar15];
    if ((pFVar8 == (FUObjectItem *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Chunk",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x366,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar12 = puVar12 + 1;
    *puVar19 = pFVar8 + (uVar7 & 0xffff);
    puVar19 = puVar19 + 2;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  memset(local_438,0,0x400);
  pTVar5 = local_5468;
  do {
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  puVar12 = local_4438;
  lVar14 = 0x400;
  do {
    *puVar12 = (uint)((ulonglong)**(undefined8 **)(puVar12 + 2) >> 0x20);
    puVar12 = puVar12 + 4;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  puVar12 = local_4438;
  pTVar11 = local_5468;
  do {
    EVar4 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    uVar7 = *puVar12;
    pFVar1 = pTVar11->Context;
    puVar19 = (undefined8 *)((longlong)pTVar5 + (0x508 - (longlong)local_4438) + (longlong)puVar12);
    local_5448 = (UObject *)*puVar19;
    puStack_5440 = (undefined8 *)puVar19[1];
    if ((uVar7 >> 0x15 & 1) == 0) {
      puVar2 = *(ulonglong **)(puVar12 + 2);
      lVar14 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      pTVar11 = local_5468;
      if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
          (EInternalObjectFlags)(*puVar2 >> 0x20)) == Borrowed) {
LAB_14203b0a1:
        if ((~(byte)(uVar7 >> 0x17) & 0 < *(int *)((longlong)puVar2 + 0x14)) != 0) {
          pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr
                             (&GUObjectArray.ObjObjects,*(int *)((longlong)puVar2 + 0x14));
          if ((pFVar8 == (FUObjectItem *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ItemPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                 ,0x381,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          do {
            uVar9 = *puVar2;
            uVar7 = (uint)(uVar9 >> 0x20);
            pTVar11 = local_5468;
            if ((uVar7 >> 0x17 & 1) != 0) goto LAB_14203b1b5;
            if (((ulonglong)puVar2 & 7) != 0) {
              FWindowsPlatformAtomics::HandleAtomicsFailure
                        (
                        L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                        );
            }
            LOCK();
            uVar10 = *puVar2;
            if (uVar9 == uVar10) {
              *puVar2 = (longlong)(int)uVar7 << 0x20 | (longlong)(int)uVar9 | 0x80000000000000;
            }
            EVar4 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
            UNLOCK();
          } while (uVar9 != uVar10);
          lVar14 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
          pTVar11 = local_5468;
          if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
              (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) !=
              Borrowed) {
            uVar9 = (pFVar8->field0_0x0).FlagsAndRefCount;
            do {
              LOCK();
              uVar10 = (pFVar8->field0_0x0).FlagsAndRefCount;
              bVar6 = uVar9 == uVar10;
              if (bVar6) {
                (pFVar8->field0_0x0).FlagsAndRefCount = uVar9 & ~(lVar14 << 0x20);
                uVar10 = uVar9;
              }
              UNLOCK();
              uVar9 = uVar10;
            } while (!bVar6);
            LOCK();
            (pFVar8->field0_0x0).FlagsAndRefCount =
                 (pFVar8->field0_0x0).FlagsAndRefCount |
                 (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
            UNLOCK();
            if ((EVar4 & (EInternalObjectFlags)(uVar10 >> 0x20)) != Borrowed) {
              uVar7 = pFVar8->ClusterRootIndex;
              local_5458[0].Queue = &pFVar1->ObjectsToSerialize;
              pTVar13 = local_5458;
              goto LAB_14203b1a9;
            }
          }
        }
      }
      else {
        uVar9 = *puVar2;
        do {
          LOCK();
          uVar10 = *puVar2;
          bVar6 = uVar9 == uVar10;
          if (bVar6) {
            *puVar2 = uVar9 & ~(lVar14 << 0x20);
            uVar10 = uVar9;
          }
          UNLOCK();
          uVar9 = uVar10;
        } while (!bVar6);
        LOCK();
        *puVar2 = *puVar2 | (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
        UNLOCK();
        if ((EVar4 & (EInternalObjectFlags)(uVar10 >> 0x20)) == Borrowed) goto LAB_14203b0a1;
        this_00 = &pFVar1->ObjectsToSerialize;
        if ((uVar7 >> 0x18 & 1) == 0) {
          *this_00->WipIt = local_5448;
          this_00->WipIt = this_00->WipIt + 1;
          if (this_00->WipIt == ((pFVar1->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
            FWorkBlockifier::PushFullBlockSync(this_00);
            pTVar11 = local_5468;
          }
          goto LAB_14203b1b5;
        }
        pTVar13 = &local_5460;
        uVar7 = *(uint *)((longlong)puVar2 + 0x14);
        local_5460.Queue = this_00;
LAB_14203b1a9:
        MarkReferencedClustersAsReachable<0,UE::GC::TAddAdapter<0>_>(~uVar7,pTVar13);
        pTVar11 = local_5468;
      }
    }
    else {
      *puStack_5440 = 0;
    }
LAB_14203b1b5:
    puVar12 = puVar12 + 4;
    lVar18 = lVar18 + -1;
    if (lVar18 == 0) {
      (pTVar11->ValidatedReferences).Num = 0;
      return;
    }
  } while( true );
}

// DrainValidatedFull @ 14203b210

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<12>_>
::DrainValidatedFull
          (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<12>_>
           *this)

{
  FWorkBlockifier *this_00;
  FWorkerContext *pFVar1;
  ulonglong *puVar2;
  code *pcVar3;
  EInternalObjectFlags EVar4;
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<12>_>
  *pTVar5;
  bool bVar6;
  uint uVar7;
  FUObjectItem *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<12>_>
  *pTVar11;
  uint *puVar12;
  TAddAdapter<12> *pTVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  FResolvedMutableReference *pFVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined1 auStack_5498 [32];
  uint local_5478;
  int local_5470;
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<12>_>
  *local_5468;
  TAddAdapter<12> local_5460;
  TAddAdapter<12> local_5458 [2];
  UObject *local_5448;
  undefined8 *puStack_5440;
  uint local_5438 [1024];
  uint local_4438 [2];
  undefined8 auStack_4430 [2047];
  undefined1 local_438 [1024];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x14203b232;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_5498;
  lVar14 = 0x10;
  lVar16 = 0x10;
  do {
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  lVar18 = 0x400;
  puVar12 = local_5438;
  lVar16 = 0x400;
  pFVar17 = (this->ValidatedReferences).Entries;
  do {
    *puVar12 = *(uint *)(pFVar17->_padding_ + 0xc);
    pFVar17 = pFVar17 + 1;
    puVar12 = puVar12 + 1;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  puVar19 = auStack_4430;
  lVar16 = 0x400;
  puVar12 = local_5438;
  local_5468 = this;
  do {
    uVar7 = *puVar12;
    uVar15 = uVar7 >> 0x10;
    if (((GUObjectArray.ObjObjects.NumElements <= (int)uVar7) || ((int)uVar7 < 0)) &&
       (local_5478 = uVar7,
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                          ,0x362,L"IsValidIndex(%d)"), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((uint)GUObjectArray.ObjObjects.NumChunks <= uVar15) {
      local_5470 = GUObjectArray.ObjObjects.NumChunks;
      local_5478 = uVar15;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChunkIndex < (uint32)NumChunks",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x363,L"ChunkIndex (%d) < NumChunks (%d)");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (GUObjectArray.ObjObjects.MaxElements <= (int)uVar7) {
      local_5470 = GUObjectArray.ObjObjects.MaxElements;
      local_5478 = uVar7;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < MaxElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x364,L"Index (%d) < MaxElements (%d)");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar8 = GUObjectArray.ObjObjects.Objects[uVar15];
    if ((pFVar8 == (FUObjectItem *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Chunk",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x366,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar12 = puVar12 + 1;
    *puVar19 = pFVar8 + (uVar7 & 0xffff);
    puVar19 = puVar19 + 2;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  memset(local_438,0,0x400);
  pTVar5 = local_5468;
  do {
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  puVar12 = local_4438;
  lVar14 = 0x400;
  do {
    *puVar12 = (uint)((ulonglong)**(undefined8 **)(puVar12 + 2) >> 0x20);
    puVar12 = puVar12 + 4;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  puVar12 = local_4438;
  pTVar11 = local_5468;
  do {
    EVar4 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    uVar7 = *puVar12;
    pFVar1 = pTVar11->Context;
    puVar19 = (undefined8 *)((longlong)pTVar5 + (0x508 - (longlong)local_4438) + (longlong)puVar12);
    local_5448 = (UObject *)*puVar19;
    puStack_5440 = (undefined8 *)puVar19[1];
    if ((uVar7 >> 0x15 & 1) == 0) {
      puVar2 = *(ulonglong **)(puVar12 + 2);
      lVar14 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      pTVar11 = local_5468;
      if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
          (EInternalObjectFlags)(*puVar2 >> 0x20)) == Borrowed) {
LAB_14203b541:
        if ((~(byte)(uVar7 >> 0x17) & 0 < *(int *)((longlong)puVar2 + 0x14)) != 0) {
          pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr
                             (&GUObjectArray.ObjObjects,*(int *)((longlong)puVar2 + 0x14));
          if ((pFVar8 == (FUObjectItem *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ItemPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                 ,0x381,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          do {
            uVar9 = *puVar2;
            uVar7 = (uint)(uVar9 >> 0x20);
            pTVar11 = local_5468;
            if ((uVar7 >> 0x17 & 1) != 0) goto LAB_14203b655;
            if (((ulonglong)puVar2 & 7) != 0) {
              FWindowsPlatformAtomics::HandleAtomicsFailure
                        (
                        L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                        );
            }
            LOCK();
            uVar10 = *puVar2;
            if (uVar9 == uVar10) {
              *puVar2 = (longlong)(int)uVar7 << 0x20 | (longlong)(int)uVar9 | 0x80000000000000;
            }
            EVar4 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
            UNLOCK();
          } while (uVar9 != uVar10);
          lVar14 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
          pTVar11 = local_5468;
          if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
              (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) !=
              Borrowed) {
            uVar9 = (pFVar8->field0_0x0).FlagsAndRefCount;
            do {
              LOCK();
              uVar10 = (pFVar8->field0_0x0).FlagsAndRefCount;
              bVar6 = uVar9 == uVar10;
              if (bVar6) {
                (pFVar8->field0_0x0).FlagsAndRefCount = uVar9 & ~(lVar14 << 0x20);
                uVar10 = uVar9;
              }
              UNLOCK();
              uVar9 = uVar10;
            } while (!bVar6);
            LOCK();
            (pFVar8->field0_0x0).FlagsAndRefCount =
                 (pFVar8->field0_0x0).FlagsAndRefCount |
                 (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
            UNLOCK();
            if ((EVar4 & (EInternalObjectFlags)(uVar10 >> 0x20)) != Borrowed) {
              uVar7 = pFVar8->ClusterRootIndex;
              local_5458[0].Queue = &pFVar1->ObjectsToSerialize;
              pTVar13 = local_5458;
              goto LAB_14203b649;
            }
          }
        }
      }
      else {
        uVar9 = *puVar2;
        do {
          LOCK();
          uVar10 = *puVar2;
          bVar6 = uVar9 == uVar10;
          if (bVar6) {
            *puVar2 = uVar9 & ~(lVar14 << 0x20);
            uVar10 = uVar9;
          }
          UNLOCK();
          uVar9 = uVar10;
        } while (!bVar6);
        LOCK();
        *puVar2 = *puVar2 | (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
        UNLOCK();
        if ((EVar4 & (EInternalObjectFlags)(uVar10 >> 0x20)) == Borrowed) goto LAB_14203b541;
        this_00 = &pFVar1->ObjectsToSerialize;
        if ((uVar7 >> 0x18 & 1) == 0) {
          *this_00->WipIt = local_5448;
          this_00->WipIt = this_00->WipIt + 1;
          if (this_00->WipIt == ((pFVar1->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
            FWorkBlockifier::PushFullBlockSync(this_00);
            pTVar11 = local_5468;
          }
          goto LAB_14203b655;
        }
        pTVar13 = &local_5460;
        uVar7 = *(uint *)((longlong)puVar2 + 0x14);
        local_5460.Queue = this_00;
LAB_14203b649:
        MarkReferencedClustersAsReachable<12,UE::GC::TAddAdapter<12>_>(~uVar7,pTVar13);
        pTVar11 = local_5468;
      }
    }
    else {
      *puStack_5440 = 0;
    }
LAB_14203b655:
    puVar12 = puVar12 + 4;
    lVar18 = lVar18 + -1;
    if (lVar18 == 0) {
      (pTVar11->ValidatedReferences).Num = 0;
      return;
    }
  } while( true );
}

// DrainValidatedFull @ 14203b6b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::
TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<13>_>
::DrainValidatedFull
          (TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<13>_>
           *this)

{
  FWorkBlockifier *this_00;
  FWorkerContext *pFVar1;
  ulonglong *puVar2;
  code *pcVar3;
  EInternalObjectFlags EVar4;
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<13>_>
  *pTVar5;
  bool bVar6;
  uint uVar7;
  FUObjectItem *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<13>_>
  *pTVar11;
  uint *puVar12;
  TAddAdapter<13> *pTVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  FResolvedMutableReference *pFVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined1 auStack_5498 [32];
  uint local_5478;
  int local_5470;
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<13>_>
  *local_5468;
  TAddAdapter<13> local_5460;
  TAddAdapter<13> local_5458 [2];
  UObject *local_5448;
  undefined8 *puStack_5440;
  uint local_5438 [1024];
  uint local_4438 [2];
  undefined8 auStack_4430 [2047];
  undefined1 local_438 [1024];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x14203b6d2;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_5498;
  lVar14 = 0x10;
  lVar16 = 0x10;
  do {
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  lVar18 = 0x400;
  puVar12 = local_5438;
  lVar16 = 0x400;
  pFVar17 = (this->ValidatedReferences).Entries;
  do {
    *puVar12 = *(uint *)(pFVar17->_padding_ + 0xc);
    pFVar17 = pFVar17 + 1;
    puVar12 = puVar12 + 1;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  puVar19 = auStack_4430;
  lVar16 = 0x400;
  puVar12 = local_5438;
  local_5468 = this;
  do {
    uVar7 = *puVar12;
    uVar15 = uVar7 >> 0x10;
    if (((GUObjectArray.ObjObjects.NumElements <= (int)uVar7) || ((int)uVar7 < 0)) &&
       (local_5478 = uVar7,
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                          ,0x362,L"IsValidIndex(%d)"), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((uint)GUObjectArray.ObjObjects.NumChunks <= uVar15) {
      local_5470 = GUObjectArray.ObjObjects.NumChunks;
      local_5478 = uVar15;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChunkIndex < (uint32)NumChunks",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x363,L"ChunkIndex (%d) < NumChunks (%d)");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (GUObjectArray.ObjObjects.MaxElements <= (int)uVar7) {
      local_5470 = GUObjectArray.ObjObjects.MaxElements;
      local_5478 = uVar7;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < MaxElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x364,L"Index (%d) < MaxElements (%d)");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar8 = GUObjectArray.ObjObjects.Objects[uVar15];
    if ((pFVar8 == (FUObjectItem *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Chunk",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x366,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar12 = puVar12 + 1;
    *puVar19 = pFVar8 + (uVar7 & 0xffff);
    puVar19 = puVar19 + 2;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  memset(local_438,0,0x400);
  pTVar5 = local_5468;
  do {
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  puVar12 = local_4438;
  lVar14 = 0x400;
  do {
    *puVar12 = (uint)((ulonglong)**(undefined8 **)(puVar12 + 2) >> 0x20);
    puVar12 = puVar12 + 4;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  puVar12 = local_4438;
  pTVar11 = local_5468;
  do {
    EVar4 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    uVar7 = *puVar12;
    pFVar1 = pTVar11->Context;
    puVar19 = (undefined8 *)((longlong)pTVar5 + (0x508 - (longlong)local_4438) + (longlong)puVar12);
    local_5448 = (UObject *)*puVar19;
    puStack_5440 = (undefined8 *)puVar19[1];
    if ((uVar7 >> 0x15 & 1) == 0) {
      puVar2 = *(ulonglong **)(puVar12 + 2);
      lVar14 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      pTVar11 = local_5468;
      if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
          (EInternalObjectFlags)(*puVar2 >> 0x20)) == Borrowed) {
LAB_14203b9e1:
        if ((~(byte)(uVar7 >> 0x17) & 0 < *(int *)((longlong)puVar2 + 0x14)) != 0) {
          pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr
                             (&GUObjectArray.ObjObjects,*(int *)((longlong)puVar2 + 0x14));
          if ((pFVar8 == (FUObjectItem *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ItemPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                 ,0x381,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          do {
            uVar9 = *puVar2;
            uVar7 = (uint)(uVar9 >> 0x20);
            pTVar11 = local_5468;
            if ((uVar7 >> 0x17 & 1) != 0) goto LAB_14203baf5;
            if (((ulonglong)puVar2 & 7) != 0) {
              FWindowsPlatformAtomics::HandleAtomicsFailure
                        (
                        L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                        );
            }
            LOCK();
            uVar10 = *puVar2;
            if (uVar9 == uVar10) {
              *puVar2 = (longlong)(int)uVar7 << 0x20 | (longlong)(int)uVar9 | 0x80000000000000;
            }
            EVar4 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
            UNLOCK();
          } while (uVar9 != uVar10);
          lVar14 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
          pTVar11 = local_5468;
          if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
              (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) !=
              Borrowed) {
            uVar9 = (pFVar8->field0_0x0).FlagsAndRefCount;
            do {
              LOCK();
              uVar10 = (pFVar8->field0_0x0).FlagsAndRefCount;
              bVar6 = uVar9 == uVar10;
              if (bVar6) {
                (pFVar8->field0_0x0).FlagsAndRefCount = uVar9 & ~(lVar14 << 0x20);
                uVar10 = uVar9;
              }
              UNLOCK();
              uVar9 = uVar10;
            } while (!bVar6);
            LOCK();
            (pFVar8->field0_0x0).FlagsAndRefCount =
                 (pFVar8->field0_0x0).FlagsAndRefCount |
                 (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
            UNLOCK();
            if ((EVar4 & (EInternalObjectFlags)(uVar10 >> 0x20)) != Borrowed) {
              uVar7 = pFVar8->ClusterRootIndex;
              local_5458[0].Queue = &pFVar1->ObjectsToSerialize;
              pTVar13 = local_5458;
              goto LAB_14203bae9;
            }
          }
        }
      }
      else {
        uVar9 = *puVar2;
        do {
          LOCK();
          uVar10 = *puVar2;
          bVar6 = uVar9 == uVar10;
          if (bVar6) {
            *puVar2 = uVar9 & ~(lVar14 << 0x20);
            uVar10 = uVar9;
          }
          UNLOCK();
          uVar9 = uVar10;
        } while (!bVar6);
        LOCK();
        *puVar2 = *puVar2 | (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
        UNLOCK();
        if ((EVar4 & (EInternalObjectFlags)(uVar10 >> 0x20)) == Borrowed) goto LAB_14203b9e1;
        this_00 = &pFVar1->ObjectsToSerialize;
        if ((uVar7 >> 0x18 & 1) == 0) {
          *this_00->WipIt = local_5448;
          this_00->WipIt = this_00->WipIt + 1;
          if (this_00->WipIt == ((pFVar1->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
            FWorkBlockifier::PushFullBlockAsync(this_00);
            pTVar11 = local_5468;
          }
          goto LAB_14203baf5;
        }
        pTVar13 = &local_5460;
        uVar7 = *(uint *)((longlong)puVar2 + 0x14);
        local_5460.Queue = this_00;
LAB_14203bae9:
        MarkReferencedClustersAsReachable<13,UE::GC::TAddAdapter<13>_>(~uVar7,pTVar13);
        pTVar11 = local_5468;
      }
    }
    else {
      *puStack_5440 = 0;
    }
LAB_14203baf5:
    puVar12 = puVar12 + 4;
    lVar18 = lVar18 + -1;
    if (lVar18 == 0) {
      (pTVar11->ValidatedReferences).Num = 0;
      return;
    }
  } while( true );
}

