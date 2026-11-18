// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 1

// ToString @ 14eccfb00

wchar_t * __cdecl ESpectatorReservationResult::ToString(Type param_1)

{
  switch(param_1) {
  case NoResult:
    return L"No outstanding request";
  case RequestPending:
    return L"Pending Request";
  case GeneralError:
    return L"General Error";
  case SpectatorLimitReached:
    return L"Spectator Limit Reached";
  case IncorrectPlayerCount:
    return L"Incorrect Player Count";
  case RequestTimedOut:
    return L"Request Timed Out";
  case ReservationDuplicate:
    return L"Reservation Duplicate";
  case ReservationNotFound:
    return L"Reservation Not Found";
  case ReservationAccepted:
    return L"Reservation Accepted";
  case ReservationDenied:
    return L"Reservation Denied";
  case ReservationDenied_CrossPlayRestriction:
    return L"Reservation Denied CrossPlayRestriction";
  case ReservationDenied_Banned:
    return L"Reservation Banned";
  case ReservationRequestCanceled:
    return L"Request Canceled";
  case ReservationInvalid:
    return L"Invalid reservation";
  case BadSessionId:
    return L"Bad Session Id";
  case ReservationDenied_ContainsExistingPlayers:
    return L"Reservation Contains Existing Players";
  default:
    return L"";
  }
}

